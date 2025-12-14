/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [1] = ((1 != (min((min(-645, var_4)), (arr_0 [i_4])))));
                                var_15 = var_8;
                                var_16 *= var_5;
                                arr_14 [1] [i_3] [i_3] [i_2 - 1] [i_1] [i_0] [i_0] = (max(-var_7, (arr_1 [i_0])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_21 [1] [i_5] [i_0] [i_1] [i_0] = ((!(arr_5 [i_0] [9] [i_0])));
                                var_17 += var_9;
                                var_18 = 4357408352138568690;
                            }
                        }
                    }
                    var_19 |= 1;
                    var_20 = ((((((~(arr_3 [i_1] [i_2 + 1]))) + 2147483647)) >> (((((arr_12 [i_0] [i_1] [i_2 + 1] [i_0] [i_2 + 1] [i_0] [i_0]) & (((arr_10 [11] [11] [1] [3] [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_1] [i_1]) : -4144367689434991076)))) - 4623))));
                    var_21 = 1;
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] [6] [1] [12] = ((!(!30919)));

                            for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                            {
                                var_22 = 1;
                                arr_30 [i_0] [i_1] [i_9] [i_8] [i_9] [i_8] [i_7] = (((((-(arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [5])))) ? 1 : (arr_19 [i_7 + 1] [i_7 - 1] [i_7 - 2] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1])));
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                            {
                                var_23 = arr_3 [i_10] [i_1];
                                var_24 *= (((!var_11) && var_14));
                                var_25 += ((!(1 && var_4)));
                                arr_34 [i_0] [i_0] [1] [1] [1] [i_10] = -1;
                            }
                            /* vectorizable */
                            for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                            {
                                var_26 ^= var_10;
                                arr_37 [13] [i_1] [i_1] [i_1] [i_1] [i_11] &= ((-(4294967294 || 4098518860)));
                            }
                        }
                    }
                }

                for (int i_12 = 3; i_12 < 13;i_12 += 1)
                {

                    /* vectorizable */
                    for (int i_13 = 3; i_13 < 13;i_13 += 1)
                    {
                        var_27 = (min(var_27, var_12));

                        for (int i_14 = 1; i_14 < 15;i_14 += 1) /* same iter space */
                        {
                            var_28 = (((!var_10) / 574329790941552244));
                            arr_47 [i_0] [i_1] [i_0] [i_13] [i_0] = ((1 && (var_11 - 1699252354)));
                        }
                        for (int i_15 = 1; i_15 < 15;i_15 += 1) /* same iter space */
                        {
                            var_29 = -0;
                            arr_50 [i_1] [i_1] [i_13] = 1997543887;
                            arr_51 [i_0] [i_13] [i_12] [3] [i_15] = 1;
                            var_30 -= (((!1) != 1));
                        }
                        for (int i_16 = 1; i_16 < 15;i_16 += 1) /* same iter space */
                        {
                            var_31 -= ((!(arr_16 [i_12])));
                            var_32 -= (arr_32 [i_16 + 1] [i_1] [i_12 - 1] [i_13 + 2]);
                            var_33 -= ((((var_14 >= (arr_32 [i_16] [0] [i_12] [i_1])))));
                            arr_55 [i_0] [i_0] [i_1] [i_16] [i_12 - 2] [i_12 + 2] |= var_14;
                        }
                        for (int i_17 = 1; i_17 < 15;i_17 += 1) /* same iter space */
                        {
                            var_34 *= (arr_40 [i_0] [i_0] [i_0] [i_0]);
                            var_35 |= (45484 & var_0);
                            arr_58 [i_13] [i_13] [i_17] = var_4;
                        }
                    }

                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        var_36 = (min(var_36, (((var_7 >= (min((arr_29 [0] [i_12 + 2] [i_12] [0] [i_18]), 5329333615416484371)))))));
                        arr_63 [i_0] [i_18] [i_12] [11] [1] [1] = (((~var_0) ? var_14 : ((-(((!(arr_33 [i_0] [i_0] [i_0] [i_18] [i_1] [i_18] [i_12]))))))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_19 = 2; i_19 < 11;i_19 += 1)
    {
        for (int i_20 = 1; i_20 < 1;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 12;i_21 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 12;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 1;i_23 += 1)
                        {
                            {
                                arr_79 [i_21] [i_21] [i_21] [i_23] [i_23] = (var_6 % 1);
                                var_37 = var_5;
                                var_38 += (arr_15 [i_19 - 2]);
                                arr_80 [i_19] [i_19] [i_21] [1] = (((((min((((arr_6 [i_19] [i_20] [i_19] [i_20] [i_20]) ? 38833 : var_3)), (arr_66 [i_19]))) + 2147483647)) << (4294967295 - 4294967295)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_24 = 3; i_24 < 10;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 12;i_25 += 1)
                        {
                            {
                                arr_85 [i_19] [i_19] [5] [i_24] [11] [i_25] = ((((((arr_1 [i_19]) >= (arr_1 [i_21])))) << (((arr_1 [i_24 - 3]) - 6969))));
                                var_39 |= 4098518860;
                                arr_86 [i_25] [i_24 - 3] [1] [i_20] [i_19] = 1;
                                var_40 = (min(var_40, (arr_32 [i_19] [i_19] [i_21] [i_24])));
                                var_41 = (max(var_41, (arr_36 [i_20] [i_19 + 1] [i_21] [7] [i_19] [7] [i_19 + 1])));
                            }
                        }
                    }
                    arr_87 [i_19] [i_20] [1] = (((!(!4098518860))) || 3);
                }
            }
        }
    }
    #pragma endscop
}
