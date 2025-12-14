/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= -var_7;
    var_21 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_1] = (max(var_3, ((max((max(6821342157910570357, -66)), (arr_2 [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_22 = (arr_6 [i_1]);
                                arr_14 [3] [i_1] [i_1] [i_1] [i_1] [i_1] = (min(var_0, (arr_12 [i_1] [i_4] [i_3] [i_2] [i_2] [i_1] [i_0])));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_23 &= (arr_13 [10] [i_6] [i_5] [i_5] [i_1] [5]);
                                var_24 = ((!((((arr_17 [i_6] [i_1] [i_0]) ? (!var_17) : ((var_18 ? 244 : var_8)))))));
                                var_25 |= var_8;
                                arr_23 [i_7] [i_6] [i_5] [i_1] [i_0] = -32017;
                                var_26 = (min(var_26, (arr_13 [i_0] [i_1] [i_1] [10] [i_0] [i_7])));
                            }
                        }
                    }
                    var_27 ^= -var_5;

                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        arr_27 [0] [i_1] [5] [i_1] = -29071;
                        arr_28 [8] [i_0] [0] [i_0] |= ((!(((-(arr_4 [i_5]))))));
                        var_28 = ((min((arr_22 [i_0] [i_8 - 2] [i_5] [i_8 - 3] [i_1] [i_8] [i_0]), var_18)) % (arr_15 [i_0] [i_8 - 3] [i_5] [i_8 - 1]));

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            arr_33 [i_0] [i_0] [1] [i_0] [i_0] [i_0] [4] = (max(-15640, (arr_26 [i_8] [i_8 + 2] [i_8 - 3] [i_8 + 2] [i_1])));
                            var_29 = (min((min((arr_6 [i_8]), -32017)), (((var_6 ? (arr_12 [5] [i_8 + 2] [i_9] [i_8] [i_8] [i_8] [i_8 + 2]) : (arr_10 [i_8] [i_8 - 2] [i_8] [i_8 - 2]))))));
                            var_30 = (min(var_30, ((min((min(-29081, 32017)), 32017)))));
                        }
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_36 [i_1] [i_10] |= ((!((max((((arr_17 [i_10] [i_5] [i_0]) ? -6787809834540851006 : (arr_22 [i_10] [i_5] [i_10] [i_5] [i_1] [i_0] [i_0]))), ((((arr_34 [i_0] [i_0] [10] [i_0] [i_0]) ? 32015 : (arr_20 [i_0] [i_0] [0] [8] [i_0] [i_0] [i_0])))))))));
                        var_31 = (min(var_31, (!-32017)));
                        var_32 = ((((((((arr_12 [0] [i_5] [i_1] [i_1] [i_1] [i_0] [i_0]) - var_1))))) * (max((arr_31 [i_5] [i_5]), (arr_10 [i_10] [i_5] [i_1] [i_0])))));
                        var_33 = ((~((-(arr_21 [i_0])))));
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_34 = (((~-29087) ? ((max(var_15, var_2))) : ((min((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_0 [i_11] [i_11]))))));
                        arr_39 [i_11] [1] [1] [i_1] [i_1] [i_0] = var_19;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            {
                                arr_52 [i_16] [2] [2] = ((!((max(-32017, -var_17)))));
                                var_35 = ((((!(arr_25 [i_12] [i_13]))) ? ((0 ? (arr_25 [i_14] [i_12]) : var_1)) : (((max((arr_25 [i_12] [i_12]), var_12))))));
                            }
                        }
                    }
                    arr_53 [i_12] [i_12] [i_14] [i_14] = 68;
                }
            }
        }
    }
    #pragma endscop
}
