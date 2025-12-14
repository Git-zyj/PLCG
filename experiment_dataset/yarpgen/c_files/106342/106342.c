/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_3 + 1] [i_2] [i_3 + 1] [i_0] = (max(((((min((arr_2 [i_4]), 5975)) <= (arr_11 [i_0] [i_0])))), -7871116685842098888));
                                var_15 = (((arr_12 [i_4 - 2] [i_0] [i_0] [i_0 - 1]) ? (!5988686098764235258) : (((arr_7 [i_2] [i_2] [i_3 - 1] [i_3 - 1]) >> (((arr_7 [i_3] [i_3] [i_3] [i_3 + 1]) - 772184871))))));
                                var_16 ^= (arr_2 [i_4]);
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] [i_0] = (max((arr_12 [i_1] [i_0] [i_2] [i_1]), 1));
                    var_17 &= ((((((min(var_5, (arr_2 [i_0]))) ^ ((((-5988686098764235258 && (arr_4 [i_0] [i_0] [i_2])))))))) ? (((min((((arr_7 [i_2] [i_2] [i_2] [i_2]) && 870409540)), 1)))) : ((((-(arr_8 [i_0] [i_0 - 1] [i_0 - 3] [i_1] [i_2] [i_2]))) + (max((arr_1 [i_2]), (arr_0 [i_2] [i_2])))))));
                }
            }
        }
    }
    var_18 = ((var_3 ? 5988686098764235258 : var_11));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                arr_22 [i_5] = (arr_21 [i_5] [i_5] [i_5]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        {
                            arr_28 [i_6] [i_6] [10] [i_8 + 1] [i_5] [i_5] &= (32 >= 32);
                            arr_29 [i_5] [i_6] [i_8] [i_8] = max(var_6, ((5988686098764235258 ? 65535 : (((arr_27 [1] [1] [i_7] [i_8] [1] [i_7]) & 5975)))));
                            var_19 ^= (((arr_18 [i_8 + 2] [i_8 + 1] [i_8]) ? (arr_27 [i_8] [i_7] [i_7] [i_7] [14] [i_5]) : (arr_20 [i_7] [i_6] [i_5])));
                            var_20 = (arr_27 [i_8 + 2] [i_8] [i_8 + 1] [i_8 + 2] [i_8 + 1] [i_8 - 1]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                arr_41 [i_5] = 169;
                                arr_42 [i_5] [i_6] [i_5] [i_10 - 2] [i_10] [i_11] [i_10] = var_13;
                                var_21 = (((min((((arr_37 [i_5] [i_6] [i_9] [i_10] [i_6]) ^ 3424557756)), (arr_18 [i_5] [i_5] [i_5])))) ? (arr_27 [i_5] [i_10] [i_9] [i_10] [i_10 - 1] [i_10]) : 32);
                                var_22 += (((arr_40 [i_10 + 1] [i_10 - 2] [5] [i_10] [i_10] [i_10]) > (arr_40 [i_10 + 1] [i_10 - 2] [i_5] [i_9] [i_5] [i_5])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_13;
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        for (int i_13 = 3; i_13 < 17;i_13 += 1)
        {
            {
                arr_47 [i_12] = (((arr_43 [i_12] [i_12]) == ((((!-1293626663) == ((1443150929 ? 65535 : -33)))))));
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 17;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 1;i_16 += 1)
                        {
                            {
                                var_24 |= ((min((max((arr_53 [i_12] [i_12] [1] [i_12] [i_12]), 1)), ((((arr_50 [i_13] [16] [i_16]) ^ (arr_56 [i_12] [i_14] [i_14] [i_15] [i_16])))))));
                                var_25 = (((var_0 ? (arr_52 [i_16] [i_16] [i_16] [i_16 - 1] [i_16]) : (arr_53 [i_16] [i_16] [i_16] [i_16 - 1] [i_15]))) >= (((max(2455, -27388)))));
                                arr_57 [i_12] [i_13] [i_13] [i_14] [i_14] [i_13] [i_16 - 1] = ((~(((arr_55 [i_12]) / (-6330 & var_2)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
