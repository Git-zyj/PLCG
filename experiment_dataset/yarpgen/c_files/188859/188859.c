/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (((((17612006919221417144 ? var_15 : 14))) ? (arr_2 [i_0] [i_0]) : var_8));
        arr_5 [i_0] = (arr_3 [i_0] [i_0]);
        var_16 = ((13685234650869999022 > (((18446744073709551611 ? 1 : -83)))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_17 = (((arr_15 [i_4] [i_4] [i_4 + 2] [i_4 + 2] [i_4] [i_4 - 1]) ^ (var_3 ^ 7)));
                            var_18 = 4;
                            var_19 = -22;
                            arr_16 [i_1] [i_1] [i_2] [i_1] [1] [i_3] = var_10;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {
                        var_20 = (max(var_20, ((18446744073709551615 + ((15 ? 4136530520359163346 : -51))))));
                        var_21 |= var_3;
                        arr_22 [14] [i_1] [i_0] [i_6] [i_1] [i_0] &= ((arr_17 [i_0] [i_1 + 4] [i_5 - 1] [i_1 + 4]) + 293441887);
                    }
                }
            }
            arr_23 [i_0] [i_1] = (((arr_13 [i_1 + 3] [i_1 + 1]) * (arr_13 [i_1 + 1] [i_1 + 4])));
            arr_24 [i_1] [i_0] [i_1] = var_7;
        }
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 18;i_7 += 1)
    {
        var_22 *= (!82);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 19;i_9 += 1)
            {
                {
                    arr_32 [i_9] [i_9] [i_9] = 71;
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                arr_39 [i_7 - 3] [i_8] [i_8] [i_10 + 2] [9] = -51;
                                var_23 = (max(var_23, (50 != 2855446513)));
                                var_24 = (min(var_24, ((((arr_35 [i_7] [i_7 - 3] [i_7] [i_10 + 2]) * ((var_8 ? 59 : 18446744073709551606)))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 16;i_13 += 1)
            {
                {
                    var_25 = ((~(arr_33 [i_13] [i_12] [i_12] [i_7 + 2])));
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 17;i_15 += 1)
                        {
                            {
                                var_26 -= var_10;
                                var_27 = ((!(((var_3 ? -54 : 2147483647)))));
                                var_28 = 5;
                                var_29 = (~8);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 17;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                arr_56 [i_7 - 3] [i_7 - 3] [i_13] [i_16 + 2] [i_17] [i_16] [i_16] = ((arr_37 [i_13] [i_13 + 4] [i_13 - 1] [i_13] [i_13] [i_13]) + -70);
                                arr_57 [i_13] [i_12] = ((var_2 ? 50 : 50));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 &= -1125519370;
    #pragma endscop
}
