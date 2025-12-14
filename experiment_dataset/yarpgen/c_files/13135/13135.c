/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_11 * (min((max(var_7, var_10)), ((min(var_10, var_0)))))));
    var_16 = (((var_13 - -var_2) + ((145329354 ? (145329344 / var_5) : (var_2 >= var_6)))));
    var_17 = ((var_11 ? (max(var_0, (max(var_0, var_13)))) : ((max((var_2 && var_0), ((var_1 ? var_6 : 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = -4346945396087595647;

                /* vectorizable */
                for (int i_2 = 2; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_3] [i_3] [12] [i_0] = (arr_13 [i_0] [i_1] [18] [13] [10]);
                                var_19 = ((var_9 >= ((((arr_12 [i_0] [i_3 - 1] [i_3] [i_3] [i_0] [i_0]) ? var_2 : -69)))));
                                var_20 = (arr_2 [i_2]);
                            }
                        }
                    }
                    var_21 = var_7;
                }
                for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [i_1] [i_5] = (((((max((arr_13 [8] [i_5 - 2] [i_1] [i_1] [i_1]), (arr_13 [i_5] [i_5 - 1] [i_5] [i_5] [i_5]))))) / ((-1825953758 ? var_8 : (arr_16 [i_1] [3] [i_5 + 1] [i_0])))));
                    arr_18 [i_5] = 145329357;
                    arr_19 [i_0] [i_0] = (max((!var_0), ((var_11 ? (arr_13 [i_5] [1] [i_5] [i_5] [i_5 - 1]) : 4149637948))));
                }
                for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_29 [i_7] [i_7 - 2] [i_6] [i_7] = var_3;
                                arr_30 [i_0] &= ((~((((((arr_15 [i_0] [i_0] [i_0]) ? (arr_26 [i_0] [i_0] [i_1] [i_6 - 2] [i_6] [11] [12]) : (arr_16 [i_0] [i_1] [6] [i_8])))) ? 87 : var_13))));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                    {
                        var_22 = ((145329344 ? (((var_3 ? ((((arr_22 [14] [14] [i_6 + 1]) > var_14))) : var_9))) : (arr_20 [i_1])));
                        var_23 = (((arr_12 [i_0] [i_1] [i_6] [i_9] [i_0] [i_6]) + (min((var_3 % 4149637965), ((4149637996 | (arr_25 [i_0] [i_1] [i_6] [i_9])))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                    {
                        var_24 = (min(var_24, var_5));
                        arr_38 [i_10] [i_6] [i_1] [i_10] = ((arr_12 [i_1] [i_1] [i_6 + 1] [i_10] [i_0] [i_10]) ^ (arr_12 [i_0] [i_1] [i_1] [i_10] [i_10] [i_10]));

                        for (int i_11 = 2; i_11 < 19;i_11 += 1)
                        {
                            var_25 ^= (((~var_5) < (arr_33 [i_11 - 2] [0] [8] [i_6] [6])));
                            var_26 = (arr_6 [i_0] [i_0] [i_6] [i_10]);
                            arr_43 [6] [i_10] = (var_14 / 150);
                        }
                    }
                    var_27 = (((((((arr_31 [7] [i_0] [i_0] [i_1] [i_6 + 1]) ? (arr_12 [14] [i_0] [8] [i_6] [i_6] [14]) : -1369098696)) | var_4)) << (((max((arr_39 [i_1]), (((1369098683 ? -53 : (arr_36 [18] [i_6] [14] [i_6] [14])))))) - 4383067108075058209))));
                    var_28 = (arr_24 [i_6] [i_1]);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                var_29 = (((((((min(var_2, var_5))) ? ((107 ? var_6 : 1111783072)) : var_7))) ? (-10 == var_12) : 2325329067));
                                var_30 = (min((arr_41 [i_0] [i_1] [i_6] [i_12] [13] [i_13]), ((((var_6 | var_9) >= (arr_0 [i_6 + 1] [i_13]))))));
                                var_31 = (arr_4 [i_12]);
                                arr_50 [i_12] [i_12] [i_6] [i_1] [i_12] = var_7;
                                var_32 -= -var_13;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            {
                                arr_58 [i_0] [i_0] [i_14] [16] [i_14] [i_0] [13] = ((((((arr_57 [i_0] [i_1] [i_16] [i_16] [i_16] [i_0]) ? (arr_57 [i_0] [i_0] [i_14] [i_14] [i_14] [i_16]) : var_11))) ? (((((arr_49 [i_16] [i_15] [6] [i_0] [i_0]) && (arr_49 [i_0] [i_1] [i_14] [i_15] [i_16]))))) : (arr_34 [i_1] [i_16])));
                                var_33 = (arr_4 [i_0]);
                            }
                        }
                    }
                    var_34 = (arr_33 [i_0] [i_0] [i_0] [i_14] [i_0]);
                    arr_59 [i_14] [i_14] [i_14] [4] = 4149637942;
                }
            }
        }
    }
    var_35 -= (var_3 % var_2);
    #pragma endscop
}
