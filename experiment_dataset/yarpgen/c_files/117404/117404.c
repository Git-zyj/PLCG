/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (272122630 / var_2);
    var_11 = (((var_8 & var_4) / ((var_5 ? var_5 : ((var_9 ? var_0 : -5))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 *= var_1;
                    arr_8 [i_2] [i_0] = ((5 ? 8571 : -8594));
                    var_13 = ((var_3 << (((var_8 + 24) - 1))));
                    var_14 = (!52);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [15] [i_0] = (((max(((23791 ? -8599 : -8604)), ((max(var_5, (arr_9 [i_0] [i_1] [i_2] [i_2])))))) | ((4 ? var_3 : 2035))));
                                var_15 = (((min(((min(var_8, (arr_14 [i_0] [i_1] [22] [i_0] [i_3] [9])))), (min(7, var_7)))) % (-117 | -10)));
                                arr_16 [i_0] [i_1] [i_2] [i_1] = ((arr_4 [i_0] [i_2] [i_3]) != (((var_1 + 649215478) * (arr_14 [i_4] [i_1] [i_2] [i_0] [i_2 + 1] [23]))));
                                arr_17 [20] [i_1] [i_2] [i_0] [i_4] = ((-0 ? (((arr_1 [i_3]) ? 4194272 : ((var_0 ? 22 : 3)))) : ((((3 ? (arr_5 [i_0]) : 8571))))));
                            }
                        }
                    }
                }
            }
        }
        var_16 *= (8593 > -8584);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_22 [i_5] [i_5] = var_6;
        var_17 ^= ((!(arr_0 [i_5])));
        arr_23 [i_5] = -10;

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_26 [i_5] [i_6] [i_5] = (((var_7 < var_9) ? var_2 : (((arr_18 [i_5]) ? 1 : 286435963))));
            var_18 = (min(var_18, ((((((var_6 ? -5 : (arr_1 [i_6])))) ? (((-32767 - 1) ? var_1 : var_2)) : -8571)))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_34 [i_8] = (-32767 - 1);
                            var_19 = (min(var_19, ((((arr_18 [i_9]) ? ((var_5 ? 47 : -98)) : 35942)))));
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        var_20 = ((var_7 ? ((4096 ? var_6 : (~1023))) : (-8581 / var_3)));
        arr_37 [i_10] = ((((((arr_21 [i_10]) != var_4))) >= (max(((min((arr_14 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]), 1))), ((var_3 ? var_8 : 0))))));
    }
    #pragma endscop
}
