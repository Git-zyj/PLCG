/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(89, (((var_9 > (!11682633901633235757))))));
    var_17 = ((var_11 ? (((~(-2812608368068535346 || var_2)))) : (min(2812608368068535360, 32))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (-2812608368068535346 / 96);
                var_19 ^= (((((arr_3 [i_1] [i_1]) + 2147483647)) >> ((((max((arr_4 [i_1] [i_1] [i_1]), 187528933263303425))) - 1011114751))));
                arr_5 [i_0] [i_0] [i_0] = (((1 ? -9190986763954376040 : ((min(994201890, 3221225472))))));
            }
        }
    }
    #pragma endscop
}
