/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (max(var_18, -750116471));
                arr_5 [i_0] [i_1] [i_1] = ((var_9 ? ((((arr_4 [i_1 + 1] [i_1 - 1] [9]) || 3571022434))) : (((var_16 || (arr_4 [i_1 - 1] [i_1 + 1] [i_1]))))));
            }
        }
    }
    var_19 = (((var_3 / -742745029) / (min(((var_1 ? var_2 : var_0)), -var_13))));
    var_20 = ((min(var_1, var_8)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_21 |= 4;
                                arr_20 [i_5] [i_5] = 147;
                            }
                        }
                    }
                    var_22 *= ((~(((arr_18 [i_2]) ? var_4 : (arr_13 [i_2] [2] [7])))));

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_25 [i_2] [i_3] [7] [i_3] [i_2] [i_3] = ((var_14 & ((max((arr_9 [i_2] [i_3] [i_4]), (arr_9 [i_2] [i_3] [i_4]))))));
                        var_23 = ((min(var_13, var_14)));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_29 [i_2] = (((((arr_15 [i_2] [i_3] [i_4] [i_8]) << (((arr_15 [i_2] [i_3] [i_4] [i_8]) - 13290)))) > ((((~0) >= (arr_14 [i_8] [i_3] [i_3] [2] [2]))))));

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_34 [i_2] [i_2] = (max(var_0, (((-19508 ? 170 : 251)))));
                            var_24 = (min((min(-716769344, (arr_7 [i_2] [i_9]))), var_8));
                            var_25 = (max(var_25, (arr_21 [9] [i_3] [i_3] [2])));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_40 [13] [i_3] [8] [8] [6] = ((+(((((~var_3) + 2147483647)) << (((var_7 && (arr_21 [i_2] [13] [i_4] [i_10]))))))));
                                arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (((min((arr_27 [i_3] [i_10] [i_11]), (((arr_38 [i_2] [i_2]) << 4)))) & var_16));
                                arr_42 [i_11] [i_10] [i_2] [i_2] = ((((121 ^ ((27 ? (arr_23 [2]) : (arr_23 [i_2]))))) <= var_10));
                                arr_43 [i_11] [7] [i_4] [i_2] [i_2] = var_10;
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            {
                                var_26 += ((!(((((var_2 ? -2418 : (arr_18 [i_2]))) ^ ((((arr_38 [9] [i_14]) > 1703461956))))))));
                                var_27 ^= ((+(max((~var_15), (((arr_30 [i_2] [11] [i_12] [4]) ? var_11 : var_11))))));
                            }
                        }
                    }
                    arr_51 [2] [i_3] = (((arr_22 [i_2] [i_3] [i_12] [i_12]) * (((arr_22 [8] [i_3] [i_3] [i_2]) ? (arr_22 [i_2] [i_2] [i_3] [i_12]) : var_0))));
                }
                arr_52 [i_2] = (var_0 - 209);
            }
        }
    }
    #pragma endscop
}
