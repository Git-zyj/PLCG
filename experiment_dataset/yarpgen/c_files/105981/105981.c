/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = ((((((-(arr_9 [i_0] [6] [i_2] [i_3] [i_4]))) << (arr_8 [i_1 - 1] [i_1 - 1]))) > ((var_10 << (((((arr_8 [4] [11]) ? var_8 : var_11)) - 9452226966627042967))))));
                                var_21 = var_3;
                                arr_11 [i_0] [i_1 - 1] [i_1 + 1] [i_2] [i_3] [i_4] = (-9223372036854775795 ? var_2 : (((~(~0)))));
                                var_22 |= (arr_7 [i_0] [i_3] [i_2] [i_2]);
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = var_12;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_23 = (min(var_23, var_16));
                                var_24 ^= ((-19632 / (4294967290 & 6834)));
                                var_25 = (min(var_25, ((((arr_15 [i_0] [i_1 - 1] [i_2] [i_5] [2]) ? (((~(arr_14 [19] [i_2] [i_5] [i_6])))) : var_1)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_2] [i_7] [i_8] [i_7] = ((((((((var_18 << (var_6 - 61047)))) ? (6834 | -6815) : (((arr_2 [i_0] [i_0]) ? (arr_3 [i_0] [3]) : (arr_14 [i_0] [i_0] [i_7 - 1] [i_0])))))) * (max(14674649478403014273, 509221839))));
                                var_26 = (2737144593 >> (arr_7 [i_1 - 1] [i_1 - 1] [i_1] [i_7 - 3]));
                                var_27 = (max(var_27, (arr_19 [i_2] [i_7 + 2] [i_1 - 1] [0] [i_2])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 9;i_13 += 1)
                        {
                            {
                                var_28 = (!((((var_12 + 2147483647) << (((arr_18 [i_9] [i_13 - 3] [i_13] [0] [i_13 - 2] [i_13 - 3]) - 1))))));
                                arr_35 [i_13 - 4] [i_9] [i_9] [i_10] [i_9] = (min(-var_4, (arr_28 [i_10] [i_12] [i_13 + 2])));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 4; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            {
                                var_29 = (min(var_29, ((max(((((((arr_31 [9] [7] [i_16]) ? (arr_33 [i_9] [i_9] [i_10] [i_10] [i_14 + 1] [i_15] [i_16]) : 14674649478403014284)) != 3772094595306537332))), (max(var_1, var_9)))))));
                                var_30 = (arr_42 [i_9]);
                                var_31 = (min(var_31, (((~(max(-1, 28)))))));
                                var_32 = (arr_7 [i_16] [i_14] [i_14] [i_9]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 4; i_17 < 14;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 15;i_18 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 15;i_21 += 1)
                        {
                            {
                                var_33 -= (max(((~(min(var_13, (arr_54 [i_21] [i_18] [i_19] [i_20] [i_21] [11]))))), (!14674649478403014273)));
                                var_34 = 1557822702;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 15;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 15;i_23 += 1)
                    {
                        {
                            arr_61 [i_18] [i_18] [i_22] [i_23] = (min((arr_9 [i_17 - 4] [i_17 - 4] [i_17 - 4] [15] [i_17 + 1]), (((((arr_4 [i_17] [i_18]) ^ 7680)) * var_10))));
                            var_35 = var_16;
                            arr_62 [i_17] [i_18] [i_17] [i_18] [10] [10] = -6834;
                            var_36 = (arr_10 [i_18] [i_22] [i_18] [i_18] [i_17 - 1]);
                            var_37 -= ((-4096 / (arr_0 [0])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 15;i_24 += 1)
                {
                    for (int i_25 = 3; i_25 < 12;i_25 += 1)
                    {
                        {
                            arr_68 [i_18] = ((((!(0 % 14674649478403014274))) ? ((((((arr_14 [9] [9] [9] [i_17]) << (((arr_53 [i_17] [i_18] [i_24] [i_25]) + 33))))) & (arr_6 [i_17 + 1] [i_18] [i_17] [7]))) : (((var_15 ? var_11 : ((((arr_46 [i_17] [i_17] [i_17]) ? 88 : (arr_43 [i_24] [0])))))))));
                            var_38 = (max(var_38, -6835));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
