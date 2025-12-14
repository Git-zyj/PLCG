/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((3765094260 <= -1) <= ((1888822373 ? 247 : 1)))) ? (min(((min(179, -253640318))), (max(7803561084788403311, 1272996684)))) : (min((~2075069594), (~-732962485149309240)))));
    var_19 -= var_14;
    var_20 *= (min((((-(~25524)))), (min(((0 ? 1979931892371483279 : 11811248135687161677)), ((2 ? 0 : 1979931892371483305))))));
    var_21 = (min((min(var_5, (min(7, 6635495938022389939)))), ((((157 - 6427553013179603386) ? var_10 : (min(2586413333619422276, 20741)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_22 = (((((~(min(28, 10770))))) ? (4294967293 << 0) : ((max(-29417409, -1955758280)))));
                var_23 = ((((max(((1 ? -111 : -2586413333619422276)), -101))) ? (min(4738759709000949635, (max(17486920482991091489, 6427553013179603386)))) : (~1)));
            }
        }
    }
    #pragma endscop
}
