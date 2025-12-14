/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_10 / var_0) ? var_9 : var_6))) ? var_3 : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [3] [i_0] = 6685257329801421969;
                            arr_13 [i_0] [i_1] [i_1] [i_1] = ((-992321900 != (((arr_6 [i_2] [8] [8]) ? (!694719185) : (arr_5 [i_0] [i_1] [i_1])))));

                            for (int i_4 = 2; i_4 < 23;i_4 += 1)
                            {
                                var_12 *= var_0;
                                arr_17 [i_4] [i_0] [i_2] [i_2] [i_0] [i_0] = (((arr_14 [i_0] [i_1] [i_2] [i_3] [i_4]) % (min((arr_15 [i_4 - 2] [i_4 - 1]), var_2))));
                                var_13 = (min(var_13, (((6812697304805372686 <= (((arr_7 [i_4 - 1]) ? (arr_7 [i_4 + 1]) : (arr_7 [i_4 - 1]))))))));
                                var_14 *= var_8;
                            }
                            var_15 = var_3;
                        }
                    }
                }
                var_16 = (min(var_16, ((((max((arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [21]), (~var_6)))) ? ((var_5 ? (min(var_10, var_10)) : (arr_14 [18] [i_0] [0] [i_0] [i_1]))) : (max(var_9, 18446744073709551615))))));
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_23 [2] [i_0] = ((-((1243907982 ? 0 : ((797967197 ? var_4 : var_2))))));

                            for (int i_7 = 3; i_7 < 23;i_7 += 1)
                            {
                                var_17 |= (((arr_24 [i_6 - 1] [i_6 - 1] [i_6]) ? (arr_24 [i_6 - 1] [13] [10]) : var_9));
                                arr_28 [i_0] [i_0] [i_1] [i_0] [i_5 - 3] [i_1] [i_1] = ((((!(var_5 ^ 128))) ? (797967183 || 128) : ((((-(arr_14 [i_6] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_0]))) + (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])))));
                                var_18 = ((-(((max((arr_11 [i_0] [i_0] [11] [i_0] [18] [19]), 8731)) * ((((arr_24 [i_0] [i_1] [i_1]) * 6539)))))));
                            }
                            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                            {
                                var_19 = (arr_9 [i_0]);
                                arr_31 [i_0] [i_1] [i_5 - 2] [i_6 + 1] [i_0] = 6539;
                                var_20 = ((((min((min(var_10, var_1)), 3825513265))) ? (arr_14 [i_5] [i_5 + 1] [i_6] [i_6 + 1] [i_8]) : -0));
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                            {
                                var_21 = ((((var_9 ? var_5 : (arr_22 [i_5 - 3] [i_9]))) > (((((arr_19 [8] [i_1] [i_1]) && var_2))))));
                                arr_34 [20] [i_1] [1] [i_0] = (~1);
                            }
                            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                            {
                                arr_39 [i_0] [i_0] [i_0] [i_6] [i_10] = ((var_9 >= ((1140359207 ? 1 : 6814950071400295479))));
                                var_22 = (((((arr_4 [i_6 + 1] [i_6 + 1]) ? 1 : (arr_4 [i_6 + 1] [i_6 + 1]))) * var_3));
                            }
                            var_23 ^= (arr_5 [i_0] [i_0] [i_0]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 4; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_24 = (max(((154414930254270025 ? ((((arr_0 [i_0]) * var_6))) : var_9)), ((((((arr_7 [i_12]) ? var_5 : (arr_37 [i_13] [i_12 - 1] [4] [i_11] [i_1] [18] [4])))) ? (((arr_37 [i_0] [i_0] [i_0] [i_0] [17] [i_0] [i_0]) / var_5)) : (var_7 / var_10)))));
                                var_25 = var_3;
                                var_26 = (min(var_26, ((((((+(((arr_18 [i_0] [i_0] [i_0] [i_0]) | (arr_11 [i_0] [i_1] [i_11] [i_11 - 1] [i_12 - 2] [i_13])))))) ? (2018960755 - 7012920985092908367) : (((((49572 ? var_4 : (arr_21 [12] [i_11 + 3] [i_12 + 1] [i_13]))) | ((min(var_7, (arr_42 [i_0] [6] [i_11] [i_1]))))))))))));
                                var_27 = ((~((-((-(arr_32 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
