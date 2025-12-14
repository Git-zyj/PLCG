/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((18446744073709551611 ? var_2 : var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = (((arr_3 [i_3 + 2]) ? ((28893 ^ (arr_9 [i_2] [i_1] [i_3] [i_4 + 1]))) : ((((arr_7 [1] [i_1] [i_2] [i_3]) ? var_10 : (!992419943439324171))))));
                                arr_14 [i_4] [i_3] [i_0] [i_1] [i_0] |= ((var_10 ? var_15 : ((-var_0 & (var_14 != 1)))));
                                arr_15 [i_2] [i_2] [i_2] [i_3] [i_4 + 1] = var_16;
                                var_19 -= ((((-32 != (arr_8 [i_0] [i_3 - 1] [0] [i_4 + 1]))) ? ((var_5 ? 63 : (arr_9 [i_1] [i_1] [i_2] [i_2]))) : (((((((arr_0 [9] [i_1]) < 0))) >> var_12)))));
                                arr_16 [21] [i_2] [14] [i_2] [i_1] [i_2] [i_0] = 1;
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_20 = (min(var_3, (min((arr_17 [1] [i_5]), var_7))));
                    arr_19 [i_0] [i_0] [i_5] = ((var_0 ? ((min(1, var_5))) : ((min(var_2, ((var_13 ? 4276682016 : var_13)))))));
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_21 = var_8;

                        for (int i_8 = 1; i_8 < 23;i_8 += 1)
                        {
                            arr_29 [i_0] [i_8] = -53;
                            var_22 &= ((arr_27 [i_6 - 2] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1]) ^ (~1));
                            var_23 = (max(var_23, (((var_4 || (((1 ? (arr_21 [i_6] [18] [i_6] [i_6]) : -64))))))));
                            arr_30 [i_6] [i_8] = (((arr_9 [i_6] [i_7] [i_7] [i_7]) ? (arr_26 [i_8] [i_8] [i_8] [i_8 + 2] [i_8] [5] [22]) : var_12));
                        }
                        var_24 += (var_10 ? var_1 : 49152);
                        arr_31 [i_1] [i_1] = (arr_8 [i_6] [i_6] [i_6] [i_6]);
                        var_25 = arr_28 [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 2] [i_6 - 2];
                    }
                    var_26 = 1;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_27 = -var_7;
                                var_28 = var_2;
                                var_29 = (~146);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                var_30 = ((var_10 ^ (arr_20 [i_12] [i_11 + 3] [i_11 - 2] [i_6 + 1])));
                                arr_41 [i_0] [i_0] [i_0] = (arr_12 [19]);
                                arr_42 [i_0] [18] [18] = ((var_1 != ((var_11 ? var_15 : var_10))));
                                arr_43 [i_0] [i_1] [i_6] [i_11] = (~var_3);
                                var_31 = ((arr_18 [i_6 - 1] [i_6 + 2] [i_6 - 2]) << (((arr_3 [i_6 - 1]) - 1215)));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_13 = 2; i_13 < 23;i_13 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            {
                                var_32 = (max(var_32, (var_15 / 1)));
                                arr_50 [i_14] [i_13] [i_14] [i_14] = (arr_38 [i_0] [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 + 1]);
                            }
                        }
                    }
                    var_33 |= ((var_16 ? var_5 : (arr_44 [i_13 + 2] [i_13 + 2] [i_13 + 1])));
                }
                /* vectorizable */
                for (int i_16 = 2; i_16 < 23;i_16 += 1) /* same iter space */
                {
                    arr_53 [i_0] [i_0] [i_0] [i_0] = (((var_15 ? var_14 : var_7)));
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 24;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 25;i_18 += 1)
                        {
                            {
                                arr_60 [i_0] [i_1] [i_16] [i_17] [i_18] = (arr_35 [2] [i_1] [2]);
                                arr_61 [i_0] [i_0] [i_1] [i_16] [i_17 + 1] [17] [i_18] = ((-1 ? (arr_57 [i_16] [i_1] [i_16] [i_16 - 1] [i_17 + 1]) : (arr_57 [i_0] [i_1] [i_0] [i_16 + 2] [i_17 - 1])));
                                arr_62 [i_16] [i_16] = 1730566674;
                                arr_63 [i_0] [i_1] [i_0] [2] [i_18] = (arr_21 [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 + 1]);
                            }
                        }
                    }
                }
                arr_64 [i_1] = ((min(var_14, (arr_4 [i_0]))));
            }
        }
    }
    #pragma endscop
}
