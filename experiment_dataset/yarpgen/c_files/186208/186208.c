/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_6 [19] [1] [19] [i_2] = ((!((((var_0 << (((arr_2 [i_1] [i_2]) - 1052593919))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = (max((max(32767, (arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 2]))), ((((arr_9 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 1]) >= (arr_9 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 2]))))));
                                var_15 = (!-var_11);
                                arr_12 [i_4] [i_4] [i_4] = ((~(((arr_10 [i_0 + 2] [18] [i_0] [i_0 + 1] [i_0 + 1]) << (var_4 - 1)))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_1] = ((!(arr_0 [i_0 + 2])));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_16 = (arr_20 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_7] [i_6 - 1] [i_7]);
                                var_17 |= (arr_17 [i_1] [i_5] [i_1] [i_5]);
                            }
                        }
                    }
                    var_18 = ((-(arr_13 [i_0] [i_0] [i_0 + 2])));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_19 = (arr_23 [i_0] [i_1] [i_1] [i_9]);
                                arr_28 [i_0 - 1] [i_1] [i_1] [i_8] [i_8] [15] = (((arr_24 [11] [i_0] [i_0] [i_0 - 1] [i_8 - 3] [13] [i_8]) && (arr_1 [i_8 + 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                arr_35 [i_0 + 2] [i_11] [21] [i_0] = (arr_17 [i_0] [5] [i_5] [i_1]);
                                var_20 = 4985101265190941595;
                                var_21 = var_5;
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            {
                                var_22 = (min(var_22, (var_11 & var_0)));
                                var_23 += ((((!var_10) & var_1)));
                                var_24 += var_1;
                                var_25 = (min((arr_30 [i_0 + 1] [i_1] [i_0 + 1] [i_13] [i_14] [i_0 + 2]), (max(var_11, (arr_30 [i_0] [i_0] [i_14] [4] [i_0] [i_14])))));
                            }
                        }
                    }
                    var_26 = (arr_37 [i_0 + 1] [1] [0]);
                }
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 22;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 0;i_17 += 1)
                        {
                            {
                                var_27 = (arr_31 [i_0 + 2] [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 + 1] [3]);
                                var_28 = (min(var_28, (arr_40 [i_0 + 2] [i_1] [i_0 + 2] [11] [i_17] [i_17 + 1])));
                                var_29 = (((arr_1 [i_0 - 1]) & ((min((arr_43 [i_16 - 1] [i_17 + 1] [i_17] [i_17] [i_17 + 1]), (arr_43 [i_16 - 3] [i_17 + 1] [i_17 + 1] [i_17] [i_17]))))));
                            }
                        }
                    }
                }

                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {

                    for (int i_19 = 0; i_19 < 23;i_19 += 1)
                    {
                        var_30 = -32767;
                        var_31 = (min(var_31, (min(((+((((arr_29 [i_0] [5]) == var_3))))), (~-5499897201838504509)))));
                        var_32 = (max(var_32, (((var_2 * (((~(arr_31 [i_0] [i_0] [i_0] [1] [18] [i_0 - 1])))))))));
                    }
                    var_33 ^= (((((var_8 * (arr_49 [i_0] [i_1] [12] [i_18])))) > (arr_52 [21] [i_1] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 23;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 23;i_21 += 1)
                        {
                            {
                                var_34 += ((-(arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                                var_35 = (arr_48 [i_0] [i_0] [i_0 - 1]);
                            }
                        }
                    }
                }
                for (int i_22 = 0; i_22 < 23;i_22 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 23;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 23;i_24 += 1)
                        {
                            {
                                var_36 = (min(var_36, var_0));
                                var_37 += ((max((((!(arr_19 [i_0] [i_0] [i_22] [i_0] [i_22]))), var_12))));
                                arr_72 [i_0] [i_1] [15] [2] [i_24] [i_23] = min((((-(arr_40 [i_0] [i_1] [i_0 + 1] [i_23] [i_1] [i_24])))), var_10);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 0;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 23;i_26 += 1)
                        {
                            {
                                var_38 = (min(var_10, ((~(arr_11 [i_0 + 2] [1] [i_25 + 1] [i_25 + 1] [i_25 + 1])))));
                                var_39 = (((arr_30 [9] [i_1] [i_1] [9] [13] [i_1]) & (((min(65535, (arr_3 [i_0] [11])))))));
                                var_40 -= (var_10 / var_3);
                                var_41 += (var_3 >= var_10);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 23;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 23;i_28 += 1)
                        {
                            {
                                var_42 &= (var_2 + var_13);
                                var_43 = (min(65528, ((~(arr_52 [i_0 + 1] [i_1] [i_0 + 1] [i_27])))));
                                arr_84 [i_1] [i_22] [i_22] [i_28] = var_3;
                                arr_85 [i_0] [i_1] [5] [i_27] [i_28] &= (arr_44 [i_27] [i_27] [2] [i_27] [i_27]);
                            }
                        }
                    }
                    var_44 = (max(var_44, -2121740581));
                }
                for (int i_29 = 0; i_29 < 1;i_29 += 1)
                {
                    arr_90 [i_0] [3] [4] [15] = (var_0 <= var_3);
                    /* LoopNest 2 */
                    for (int i_30 = 0; i_30 < 23;i_30 += 1)
                    {
                        for (int i_31 = 0; i_31 < 23;i_31 += 1)
                        {
                            {
                                arr_96 [i_0 + 2] [2] [i_1] [i_29] [i_0 + 2] [10] = (arr_48 [i_0 + 2] [i_0 - 1] [i_0 - 1]);
                                arr_97 [8] [i_1] = (max(((-(arr_4 [i_31] [i_31] [i_31] [i_31]))), ((-(arr_4 [i_0 - 1] [i_0 - 1] [i_29] [i_30])))));
                                arr_98 [i_29] = (arr_61 [i_0 + 2] [i_1] [i_29] [i_0 + 2] [i_31]);
                            }
                        }
                    }
                }
                var_45 = var_5;
            }
        }
    }
    var_46 *= (max(var_12, var_2));
    #pragma endscop
}
