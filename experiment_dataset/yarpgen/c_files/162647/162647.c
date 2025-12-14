/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_1] [i_4] &= ((!((!(!10)))));
                                var_11 = (max(var_11, (((-((~(!10))))))));
                                var_12 -= ((!(!16)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_13 ^= ((!(((-(((!(arr_23 [i_1] [13])))))))));
                                var_14 |= ((~((~((~(arr_17 [4])))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_15 -= -var_6;
                                var_16 *= (+-1609197894);
                                var_17 |= ((-(arr_10 [15] [i_9] [i_8] [i_1] [i_0])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 14;i_12 += 1)
                    {
                        {
                            var_18 -= (!-1609197907);
                            var_19 *= ((!((!((!(arr_33 [i_0] [i_11] [i_1] [i_0])))))));
                            var_20 += ((!(((-(((!(arr_26 [i_0 - 1] [i_1 - 2] [i_11] [i_1 - 2])))))))));
                            var_21 -= ((!((((-(arr_0 [i_0])))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 3; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 14;i_15 += 1)
                        {
                            {
                                var_22 *= ((~(((!(~1))))));
                                var_23 ^= ((~((~(~var_9)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 24;i_16 += 1)
    {
        for (int i_17 = 2; i_17 < 21;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 23;i_18 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 24;i_20 += 1)
                        {
                            {
                                var_24 -= ((!(~-1609197895)));
                                var_25 = (max(var_25, (((!(((~(~0)))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 24;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 24;i_22 += 1)
                        {
                            {
                                var_26 = (min(var_26, (((-(((!(((~(arr_61 [i_17] [i_21] [i_18] [i_17]))))))))))));
                                var_27 = (min(var_27, (((-(((!(!21)))))))));
                                var_28 *= -var_0;
                                var_29 -= ((!(((~(!-3))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 24;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 24;i_24 += 1)
                        {
                            {
                                arr_69 [i_16] [i_16] |= var_10;
                                arr_70 [i_18] [i_17 + 3] [i_18] [i_23] [i_18] [i_17] [i_16] |= ((!(((-((~(arr_60 [i_16] [i_17] [i_17] [i_23]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 24;i_25 += 1)
                    {
                        for (int i_26 = 3; i_26 < 21;i_26 += 1)
                        {
                            {
                                arr_75 [i_16] [i_16] [i_16] [22] [i_16] &= ((~((-((-(arr_53 [i_16] [i_17] [i_17] [i_26])))))));
                                var_30 += ((!((!(!var_5)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_27 = 1; i_27 < 14;i_27 += 1)
    {
        for (int i_28 = 0; i_28 < 15;i_28 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_29 = 3; i_29 < 14;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 15;i_30 += 1)
                    {
                        for (int i_31 = 2; i_31 < 13;i_31 += 1)
                        {
                            {
                                var_31 ^= ((!(((~(!var_9))))));
                                var_32 += -var_10;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_32 = 0; i_32 < 15;i_32 += 1)
                {
                    for (int i_33 = 0; i_33 < 15;i_33 += 1)
                    {
                        for (int i_34 = 0; i_34 < 15;i_34 += 1)
                        {
                            {
                                var_33 -= (-((~(~14306254112381689689))));
                                var_34 = (min(var_34, (((~((~(~14306254112381689696))))))));
                                arr_97 [i_27] [i_27] [i_28] [5] [i_33] [i_34] |= ((-(!233)));
                                var_35 ^= -12;
                                var_36 *= ((!(((-(arr_73 [22] [i_27] [i_28] [i_27] [i_33] [22] [i_33]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_35 = 0; i_35 < 15;i_35 += 1)
                {
                    for (int i_36 = 3; i_36 < 13;i_36 += 1)
                    {
                        {
                            var_37 -= ((-(!14306254112381689696)));
                            var_38 = (min(var_38, (((~((~(~var_2))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_37 = 1; i_37 < 15;i_37 += 1)
    {
        for (int i_38 = 1; i_38 < 15;i_38 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_39 = 0; i_39 < 17;i_39 += 1)
                {
                    for (int i_40 = 0; i_40 < 17;i_40 += 1)
                    {
                        {
                            arr_114 [i_37] [8] [i_39] [i_40] &= ((!((!(arr_103 [i_37] [i_37])))));
                            var_39 = (max(var_39, var_10));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_41 = 0; i_41 < 17;i_41 += 1)
                {
                    for (int i_42 = 2; i_42 < 16;i_42 += 1)
                    {
                        {
                            var_40 += ((!(arr_57 [4] [4] [4] [i_37 + 1])));
                            var_41 *= (((!(!0))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_43 = 0; i_43 < 17;i_43 += 1)
                {
                    for (int i_44 = 0; i_44 < 17;i_44 += 1)
                    {
                        for (int i_45 = 0; i_45 < 17;i_45 += 1)
                        {
                            {
                                var_42 *= var_6;
                                var_43 = (max(var_43, (((~((-(!125))))))));
                                var_44 = (min(var_44, (((-(!var_5))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
