/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 -= (((((((var_3 >> (var_6 - 40)))) ? ((143 ? 1 : 1)) : (233 | 176))) - var_11));
                            arr_9 [i_3] [2] [i_2] [2] [i_0] |= var_5;
                        }
                    }
                }
                arr_10 [i_0 + 1] = var_0;
                arr_11 [3] [i_0] = ((((-(var_0 * var_1))) + var_6));

                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_19 [i_6 + 2] [i_5] [i_4] [i_1] [i_4] [i_1] [i_0] = ((var_13 != ((~(var_13 & var_8)))));
                                var_19 = (min(var_19, var_3));
                                arr_20 [i_4] [i_4] [1] [i_4] [9] = (((1 ^ var_10) - var_13));
                                var_20 = 1;
                                var_21 = var_11;
                            }
                        }
                    }
                    var_22 = var_1;

                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_23 = (min(var_23, (((((((var_5 * var_8) ? var_5 : 76))) ? (var_2 / var_8) : (var_9 / var_9))))));
                        arr_23 [i_4] [i_4] [i_4] = var_5;
                    }
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        var_24 += (~var_6);
                        var_25 = (max(var_25, var_13));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_26 = ((var_15 * ((var_9 ? (var_2 * var_9) : ((var_2 ? var_3 : var_9))))));
                        var_27 = (min(var_27, ((((((~(var_5 > var_17)))) ? var_3 : var_0)))));
                    }
                    for (int i_10 = 3; i_10 < 14;i_10 += 1)
                    {
                        arr_34 [i_4] [i_4] [1] [i_4] = var_7;
                        var_28 = 1;
                    }
                    var_29 = var_17;
                }
            }
        }
    }
    var_30 = var_5;
    var_31 = var_8;
    var_32 = var_4;
    #pragma endscop
}
