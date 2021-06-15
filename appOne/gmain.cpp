#include"libOne.h"
void gmain() {
    window(1000, 1000);
    while (notQuit) {
        float vx = (int)mathMouseX;
        float vy = (int)mathMouseY;
        float mag = sqrt(vx * vx + vy * vy);
        float nvx = vx / mag; //íÍï”ÅÄéŒï”
        float nvy = vy / mag; //çÇÇ≥ÅÄéŒï”
        clear(200);
        mathAxis(5.1f);
        strokeWeight(10);
        stroke(0);
        mathArrow(0, 0, vx, vy);
        mathLine(0, 0, vx, 0);
        mathLine(vx, 0, vx, vy);
        stroke(255, 0, 0);
        mathArrow(0, 0, nvx, nvy);
        mathLine(0, 0, nvx, 0);
        mathLine(nvx, 0, nvx, nvy);
        textSize(50);
        //textInfo
        textSize(50);
        text((let)"vec(" + vx + "," + vy + ")", 0, 50);
        text((let)"mag:" + mag, 0, 100);
        text((let)"nvec(" + nvx + "," + nvy + ")", 0, 150);
        mag = sqrt(nvx * nvx + nvy * nvy);
        text((let)"nmag:" + mag, 0, 200);

    }
}
