/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((-(((arr_3 [i_0 + 1] [i_0 + 1] [i_0]) + (arr_3 [i_0] [i_1] [i_0])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] = 42;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = ((-(arr_14 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0])));
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_0] [i_0 - 1] = 2;
                                arr_17 [i_0] [1] [1] [1] [i_0] = arr_12 [i_0] [i_0] [i_4] [i_0 - 1] [i_0];
                                arr_18 [i_0] [i_0] [i_1] [4] [i_3] [i_4] [i_1] |= (((arr_12 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? var_0 : var_4));
                                var_17 = ((var_3 ? (arr_9 [i_0] [i_0]) : (arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0])));
                            }
                        }
                    }
                    arr_19 [2] [2] [i_0] [i_2] = (arr_10 [i_0] [i_0] [i_2] [i_0]);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_0] [i_0] [6] = (var_15 * var_14);
                    var_18 = (arr_4 [i_0 - 1] [i_0]);
                    var_19 = var_8;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    arr_27 [i_0] [i_0] [9] = (-23 ? (((arr_4 [i_0] [i_0]) / var_15)) : var_8);
                    arr_28 [i_0 + 1] [i_0 + 1] [i_0] = (-8871 % 8870);

                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        var_20 ^= var_13;
                        arr_33 [i_0] = (((arr_14 [2] [2] [2] [i_6] [i_0]) ? (arr_14 [i_0] [i_6] [6] [i_0] [i_0]) : var_8));
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_23 [i_7 + 2] [i_7 + 1] [i_0] [7]) ? (arr_23 [i_7 + 2] [i_7 + 3] [i_0] [i_7]) : 7840063129900126461));
                        var_21 += 192;
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_22 = (((arr_12 [i_0] [i_0] [i_0] [2] [i_0 - 1]) ? (arr_24 [i_0 + 1] [i_0 + 1]) : (arr_14 [i_0] [6] [i_0 - 1] [i_0] [i_0])));
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                        var_23 = (arr_35 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]);
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_24 = var_7;
                                arr_45 [i_0] [i_1] [i_0] [i_0] [i_11] = ((-((((arr_38 [i_0]) >= -26368)))));
                                arr_46 [i_0] [i_1] [i_0] [i_0] [i_0] [i_9] [i_1] |= (~var_5);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            {
                                arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((-8871 ? var_3 : var_10)) - ((4294967295 ? (arr_21 [i_0] [i_13]) : (arr_26 [i_0] [i_0] [i_9] [i_9])))));
                                arr_54 [i_0] [i_0] = 10;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 9;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            {
                                var_25 = (min(var_25, ((((arr_35 [i_0] [i_0 - 1] [i_0 + 1] [i_15] [i_15]) || (arr_35 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]))))));
                                var_26 = ((-8864 ? 1 : 1264058303));
                                var_27 = 6052457296244257881;
                                var_28 = var_9;
                                arr_60 [i_0] [i_0] [i_14] [i_14] [i_0] [i_0] = ((-8878 & (arr_35 [i_0] [i_0] [i_0 - 1] [i_14 + 2] [i_0 - 1])));
                            }
                        }
                    }
                    var_29 = (arr_55 [i_0] [i_1]);
                }
                arr_61 [8] [i_0] = ((((min(-773806343, var_1))) ? 8880 : ((((min((arr_21 [i_0] [i_1]), -2))) ? var_12 : (max((arr_0 [i_0]), 255))))));
            }
        }
    }
    var_30 ^= (max(-var_2, -2567308497091945759));
    #pragma endscop
}
