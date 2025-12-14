/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 -= (((~var_9) - var_0));
        var_11 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_2 [i_1])));
        arr_6 [i_1] = ((var_4 & (min((~var_4), (arr_2 [14])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_12 = (~15);
                    var_13 = (arr_8 [i_1] [i_1] [i_1]);
                    var_14 = (max(var_14, (arr_0 [0] [9])));
                    var_15 = (max(var_15, (((!(0 + 59350))))));
                }
            }
        }
        var_16 &= var_2;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_17 -= (1247725987991544574 + -7667);
        var_18 = ((var_1 | (!1)));
        var_19 = var_9;
    }
    for (int i_5 = 1; i_5 < 6;i_5 += 1)
    {
        arr_18 [i_5] = var_9;
        var_20 ^= (var_1 * var_1);

        /* vectorizable */
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            var_21 = (max(var_21, (((3856808936276449162 ? 17199018085718007041 : -18362)))));
            var_22 = (var_9 & (((1 ? var_1 : 166))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_24 [8] [4] &= (((arr_17 [i_5 + 3]) ? var_1 : 12415));
            var_23 += (arr_12 [2] [i_5 + 4] [2]);
        }
    }
    var_24 = var_0;
    var_25 = (~var_6);
    #pragma endscop
}
