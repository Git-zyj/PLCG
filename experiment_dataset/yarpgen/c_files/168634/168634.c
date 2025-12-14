/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (min(var_12, 1));
                arr_6 [i_1] = (((1 == 1) >= ((max(var_9, 64526)))));
                var_13 = (max(var_13, (((var_10 || (arr_4 [i_1]))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = -1;
                                var_15 = ((!((((~8388) ? (arr_5 [i_0] [i_2] [i_3]) : 1)))));
                                arr_14 [i_4] [i_4] [i_2] [8] [i_2] [i_0] [i_0] = (max(275, ((min(var_5, (arr_10 [i_4] [i_2] [i_1] [i_0]))))));
                            }
                        }
                    }
                    var_16 |= ((var_3 ? var_0 : ((min(var_6, (arr_10 [i_0] [i_1] [i_1] [i_2]))))));
                }
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    var_17 = (((((arr_12 [i_0] [i_0] [i_0] [i_5 - 2] [i_5 + 2] [i_5 - 1]) ? (arr_4 [12]) : (((arr_15 [i_0] [8] [i_5 - 2] [i_5 - 2]) / var_0)))) ^ ((28 ? ((26321 ? 15 : (arr_9 [i_0] [i_0] [i_5 - 2] [i_5 - 2]))) : 30516))));

                    for (int i_6 = 4; i_6 < 12;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_18 ^= ((((min(((~(arr_15 [i_1] [i_5] [i_6 + 1] [4]))), 0))) ? (arr_18 [i_0] [1] [1] [i_0] [i_7]) : ((max((arr_15 [i_0] [i_6 + 1] [i_6 + 1] [i_6 - 2]), 1)))));
                            var_19 = min((((1 ? 65520 : var_3))), var_9);
                            var_20 = (max(((((max(57147, 6))) ? (var_9 != 1) : (~65525))), ((var_7 ? ((max(1, (arr_11 [i_7] [6] [i_5 - 1] [i_5 - 1] [i_1] [i_7])))) : (((arr_8 [i_0] [i_1] [i_5 - 1]) ? -27633 : (arr_2 [i_6] [i_6])))))));
                            var_21 = (((((~(arr_21 [i_0] [i_5 - 2] [i_6 + 1] [i_6 - 2] [i_6 + 1])))) ? var_8 : var_0));
                        }
                        var_22 = (min((max((((arr_17 [i_0] [i_0] [i_0] [i_0] [10] [i_0]) ? 1 : (arr_0 [i_0]))), var_8)), (((arr_9 [i_5 - 1] [i_5] [i_6 - 4] [i_6 - 4]) ? var_7 : (arr_20 [i_6 - 1] [i_6 - 1] [i_5 + 1])))));
                        var_23 = ((((!(arr_16 [i_6 - 3] [i_5 - 2] [i_1]))) ? ((~(arr_15 [i_6 - 4] [3] [i_6] [i_6]))) : ((max((arr_19 [i_6 - 3] [i_6] [i_5] [i_1] [i_1]), (arr_9 [i_6] [i_5] [i_5] [i_5]))))));
                    }
                    for (int i_8 = 4; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_24 += ((((var_5 ? (((arr_3 [i_5] [i_8]) ? 29056 : 41098)) : (var_3 <= var_6))) << (((max(((var_8 ? 41098 : 4944)), (arr_22 [i_5 + 2] [i_5 + 1] [i_8 - 1]))) - 41092))));
                        var_25 = var_8;
                        var_26 = 28364;
                        var_27 = ((~(!1)));
                        var_28 |= ((((max(57173, 0))) ? (!8736) : (((arr_1 [i_1]) ? ((((arr_13 [8] [i_1] [i_1] [i_5] [0]) == 65500))) : ((max(24443, 60585)))))));
                    }
                    for (int i_9 = 4; i_9 < 12;i_9 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_29 = (var_10 ^ 4951);
                            var_30 = (((arr_15 [i_0] [i_0] [i_0] [i_0]) & (arr_0 [i_5 + 1])));
                            arr_29 [i_9] [i_1] [i_5 + 2] [i_9] [i_9] [i_10] = (var_2 == (arr_13 [i_10] [i_5 - 1] [11] [i_10] [i_10]));
                        }
                        var_31 ^= 873;
                    }
                    var_32 = (arr_16 [i_0] [i_1] [i_5 + 1]);
                    arr_30 [i_0] [i_1] [i_5 - 2] = (min((min(((max((arr_15 [10] [10] [i_5] [i_5]), 41085))), (((arr_15 [i_0] [i_1] [i_5] [i_1]) ^ (arr_18 [i_0] [i_1] [i_1] [i_5 - 1] [i_1]))))), -var_7));
                }
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_38 [i_0] [i_1] [i_13] [i_11] [i_12] [i_12] [7] = arr_20 [7] [7] [i_12];
                                arr_39 [i_0] [i_13] = (((min((arr_10 [i_11 + 1] [i_11 + 2] [i_11 + 1] [i_11 - 1]), -var_7)) == (((((24437 ? (arr_12 [i_13] [6] [i_11] [i_1] [i_0] [i_0]) : var_7))) ? ((min(1, 1))) : 1))));
                            }
                        }
                    }
                    arr_40 [i_11 + 1] [i_0] [i_0] = (arr_15 [i_0] [i_0] [i_1] [i_1]);
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_33 = ((((max(41089, 1))) || ((max((max((arr_26 [1] [i_0] [i_1] [i_1] [i_1]), (arr_23 [i_1] [1] [i_14] [0]))), (arr_19 [i_14] [i_14] [i_1] [i_1] [i_0]))))));
                    var_34 = (max(1, (((arr_13 [i_0] [i_14] [i_0] [i_0] [i_0]) ? var_0 : (arr_13 [i_0] [i_0] [i_1] [i_14] [i_1])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 20;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            {
                var_35 = (max(((max(1, 48961))), ((~(((arr_43 [i_15] [i_16]) & 4946))))));
                var_36 = (min((((arr_44 [i_16] [i_16]) ? 1 : (arr_44 [i_16] [i_15]))), (arr_44 [i_16] [i_15])));
                arr_48 [i_15] &= ((((min(0, (arr_43 [i_15] [i_16])))) ? (arr_43 [1] [2]) : ((var_5 << ((((1 ? 50023 : 1)) - 49998))))));
            }
        }
    }
    var_37 = 13689;
    #pragma endscop
}
