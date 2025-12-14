/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_17 = 1;
                                var_18 += ((9223372036854775807 / (((-((23868 ? 3943995484 : 23868)))))));
                                arr_11 [i_1] [i_1] [i_2] = (255 >= 190);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, (!28743)));
                                var_20 += arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1];
                                var_21 ^= 0;
                                var_22 = 117;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_23 += ((63733 ? (~1) : 43677));
                                var_24 ^= ((38691 || (((~(max(var_1, 18013129448186906253)))))));
                                arr_27 [7] [i_10] [i_9] = 820608198;
                                var_25 = (max(var_25, -6742703861359858028));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 4; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_26 = ((((max((arr_29 [i_12 - 3] [i_12 - 3] [i_12 - 2] [i_13 - 1]), (arr_28 [i_12 - 3] [i_12 - 1] [i_12 + 2] [i_13 - 1] [i_13 - 1])))) * 0));
                                var_27 = -26097;
                                var_28 |= (((((-((min((arr_22 [i_8] [i_9] [0]), (arr_30 [i_7] [i_8] [i_9] [i_12] [i_12]))))))) < 4000817557));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 1; i_14 < 11;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 0;i_15 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 13;i_17 += 1)
                    {
                        {
                            var_29 = (12917988697293464524 ^ 18446744073709551615);
                            arr_43 [i_14] [1] [i_14] [i_16] [i_16] [5] = ((~(((!(arr_42 [i_14 + 1] [i_16]))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_18 = 1; i_18 < 14;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 15;i_20 += 1)
                        {
                            {
                                var_30 = (((~((4550806234556375739 ? var_3 : (arr_31 [i_14] [i_18 + 1] [i_20]))))));
                                var_31 = ((17902270938431827954 ? -4298 : 16037));
                                var_32 = ((139 >> (241 - 213)));
                                var_33 ^= arr_39 [i_14] [i_15] [i_18];
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 14;i_21 += 1)
    {
        for (int i_22 = 3; i_22 < 13;i_22 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 14;i_23 += 1)
                {
                    for (int i_24 = 3; i_24 < 11;i_24 += 1)
                    {
                        {
                            var_34 = (min(var_34, (arr_53 [i_21] [i_21])));
                            var_35 = (max((max((arr_42 [i_22 - 2] [i_22]), (arr_60 [i_22 - 2] [i_22] [i_24 - 1] [i_24]))), ((max((~58348), 190)))));
                            var_36 = (max(var_36, 19));
                            var_37 = (1 >> (65 - 61));
                            var_38 = (max(var_38, var_15));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_25 = 2; i_25 < 13;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 14;i_26 += 1)
                    {
                        for (int i_27 = 1; i_27 < 12;i_27 += 1)
                        {
                            {
                                var_39 = (max(-1752424684, 1));
                                var_40 ^= var_7;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_28 = 3; i_28 < 12;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 0;i_29 += 1)
                    {
                        {
                            arr_76 [i_21] [i_21] [i_28] = (arr_33 [i_21] [7]);
                            var_41 = ((((-(arr_30 [i_21] [0] [i_28 + 2] [i_29 + 1] [i_29]))) << var_10));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
