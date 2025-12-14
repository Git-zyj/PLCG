/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_7;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [12] &= (arr_0 [i_0 + 1]);
        var_19 ^= (arr_1 [i_0]);

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1] = (((var_10 ? (arr_0 [i_0]) : -639992382)));
            arr_7 [i_0] = (1 * 2349);
            var_20 = 64;
            var_21 = (639992374 ? (81 + 945011410) : (0 + -1409152630));
        }
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_22 = -12861;
            var_23 = (!-107);
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_18 [i_0] [i_2] [i_2] [i_0] [i_4] [i_4] [11] = ((-74 ? 15 : -8138586245549902754));
                            arr_19 [i_2] [i_2] [2] |= (!-105);
                            var_24 = ((!(arr_5 [i_3 - 1] [5] [i_5])));
                            var_25 = (arr_5 [i_0 + 2] [i_3] [i_5]);
                            var_26 = (-298175858 ? (arr_8 [i_4]) : 117440512);
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_23 [i_0] [i_0] [i_2] [8] [8] [i_0] = -288230375077969920;
                            arr_24 [i_0] [i_6] = 98304;
                            arr_25 [i_0] [i_2] [i_6] [i_4] [i_6] [i_6] = ((-11306412954540305724 ? -12861 : (639992366 > 3355981965)));
                            var_27 = (max(var_27, -64));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_28 [i_0] [9] [i_0] [9] [i_7] = var_17;
                            arr_29 [i_2] [i_3] [i_0] [12] = (8388607 + (((-9223372036854775807 - 1) ? -8678787747173212867 : var_16)));
                            var_28 = (min(var_28, (((1 ? -1 : 9223372036854775807)))));
                            var_29 -= 510;
                            var_30 = ((255 ? 31 : (arr_17 [i_3 - 1] [i_7] [i_3 - 1] [i_7] [i_7])));
                        }
                        arr_30 [i_2] [i_0] [i_2] = (!-511);
                        var_31 = arr_21 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0];
                    }
                }
            }
            arr_31 [i_0] [6] [i_0 + 2] = (1 ? 85 : -1026523791);
        }
    }
    var_32 = var_9;
    #pragma endscop
}
