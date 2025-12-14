/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_9, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_12 *= var_6;

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = (arr_8 [i_2] [i_3 + 1] [8]);
                                var_14 = ((~((~(arr_4 [i_1 - 1] [i_1 - 1] [i_3 + 2])))));
                            }
                        }
                    }
                    var_15 = (min(var_15, var_2));
                    arr_12 [i_0] [i_0] [i_2] [i_2] = (!1804650054);
                    var_16 *= ((~(min((~-1804650047), var_8))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_1 + 3] [i_5] = -1804650055;
                    var_17 += ((((((arr_10 [i_0]) ? var_4 : (arr_9 [11] [i_1 + 1] [11])))) && var_7));
                    var_18 = (i_5 % 2 == zero) ? ((((arr_14 [i_5] [i_1 + 2] [i_1 + 3] [i_5]) >> (var_6 + 1475832509)))) : ((((((arr_14 [i_5] [i_1 + 2] [i_1 + 3] [i_5]) + 2147483647)) >> (var_6 + 1475832509))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_19 = (max(var_19, 105));
                                var_20 = ((((-105 >= (arr_0 [i_5]))) ? (((arr_18 [7] [7] [i_5] [7] [i_7]) ? (arr_9 [i_7] [i_5] [i_5]) : var_7)) : ((((arr_13 [i_1 - 3] [i_5] [i_6]) ^ 1804650070)))));
                                arr_23 [i_5] [i_5] = (((((13524 ? var_9 : 114))) || ((((arr_13 [0] [i_1 + 2] [i_7]) ? (arr_21 [9] [i_5] [i_5] [i_6] [10]) : var_10)))));
                            }
                        }
                    }
                    var_21 *= (arr_7 [i_0] [i_1 - 4] [i_1 - 1] [i_1 - 1]);
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_22 = ((((((18446744073709551602 ^ -2071700617199963617) ? (max(1804650069, var_1)) : 19))) ? var_3 : 18363));
                                arr_31 [i_1] [i_9] [8] [8] [8] &= 1205349436906442168;
                                var_23 = (max(((8875725806977637885 ^ ((1340449014 ? var_8 : (arr_28 [7] [i_9] [i_8] [12]))))), (((((((arr_15 [i_1]) * var_3))) ? 4237221096 : 2499586176)))));
                                var_24 = (arr_26 [i_10 + 1] [i_10 - 1] [i_10 + 1] [9]);
                                arr_32 [i_8] [11] = ((!((min((arr_13 [i_0] [i_9] [i_10 + 1]), -1804650059)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 11;i_13 += 1)
                        {
                            {
                                arr_39 [i_11] [6] [i_11] [i_11] [i_11] = ((!((((((var_8 ? var_9 : (arr_22 [i_11] [i_1 + 1])))) ? ((4294967288 ^ (arr_9 [i_0] [8] [8]))) : var_5)))));
                                var_25 = (((((1340449014 ? (((0 > (arr_25 [i_11] [i_1 - 1])))) : (((!(arr_8 [i_0] [i_0] [i_12 + 1]))))))) == ((2671770069 | (((arr_0 [0]) ? 18446744073709551597 : (-2147483647 - 1)))))));
                                var_26 = 8875725806977637869;
                                arr_40 [11] [i_11] [i_12 + 2] [i_11] [i_11] [i_11] [i_0] = (-9223372036854775807 - 1);
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (+(((104 % var_4) / var_8)));
    #pragma endscop
}
