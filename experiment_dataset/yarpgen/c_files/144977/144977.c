/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_7, 205));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_11 = ((((((arr_8 [i_1] [i_2] [21]) || var_8))) || ((!(!var_7)))));
                                var_12 = (!12);
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            var_13 = 4547781411485576957;
                            var_14 = ((0 * (((((max(var_7, var_5))) ? var_8 : var_0)))));
                        }
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_7] [i_2] [i_0] = (var_0 ? (((-(951807299 * 1)))) : 0);
                            var_15 = (arr_6 [i_0] [i_2]);
                        }
                        var_16 = (arr_19 [i_0 - 1] [i_1] [i_1] [i_1] [10]);

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_26 [i_2] [i_5] [i_2] [i_1] [i_2] = ((var_7 || (((var_8 ? ((var_5 ? 1 : var_2)) : ((((!(arr_0 [11]))))))))));
                            var_17 = ((((arr_20 [i_2 + 2] [i_0 + 1]) * var_3)));
                            arr_27 [i_8] [i_2] [i_2 - 1] [i_2] [19] = (max(-255, (arr_21 [i_0] [i_0 - 1] [i_0 + 1] [i_2 - 1] [19] [i_5 + 1] [i_5])));
                            arr_28 [i_0] [i_1] [i_2] [i_5 - 1] [7] = var_0;
                        }
                    }
                    for (int i_9 = 3; i_9 < 23;i_9 += 1)
                    {
                        var_18 = (max((!18), ((((min(4294967267, 13898962662223974659))) ? ((var_5 ? (arr_21 [i_2] [i_1] [i_0] [1] [i_1] [i_9] [i_2]) : 65535)) : var_8))));
                        var_19 = (!65535);

                        for (int i_10 = 2; i_10 < 23;i_10 += 1)
                        {
                            arr_34 [i_0 + 1] [i_1] [8] [2] [i_2] = ((((var_9 || 4294967295) ? (arr_19 [i_0] [i_0] [i_2 + 1] [i_9] [i_10]) : (arr_14 [i_0] [i_2] [i_2 - 1] [i_0]))) * ((((arr_21 [i_0] [i_1] [21] [21] [i_9 - 1] [i_9] [i_10]) ? (arr_8 [i_1] [i_2] [i_1]) : (!0)))));
                            arr_35 [i_9] [i_2] = (arr_21 [i_10] [i_9] [i_2] [i_2] [1] [1] [i_0]);
                        }
                        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            arr_39 [i_2] [i_2] [i_2] = var_8;
                            var_20 = ((var_1 || (((((arr_9 [i_11] [i_2]) || var_5)) || var_1))));
                            arr_40 [i_2] = max((~var_6), ((((((var_7 ? var_1 : var_3))) || (var_8 * var_9)))));
                            var_21 = (((arr_12 [i_9 - 1] [i_0 - 1] [i_0 - 1] [i_2 + 2]) * (arr_12 [i_9 + 1] [i_0 + 1] [i_2] [i_2 - 1])));
                            var_22 = ((-1 ? -64 : 227));
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                        {
                            var_23 = ((~((((~13) || -4294967295)))));
                            var_24 = var_2;
                        }
                    }
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        var_25 = var_0;
                        var_26 = var_7;

                        for (int i_14 = 1; i_14 < 23;i_14 += 1)
                        {
                            var_27 = var_5;
                            var_28 = var_7;
                            var_29 = (((~4547781411485576977) * var_9));
                            var_30 = (((((~(min(var_6, 1))))) ? (((-(((arr_10 [i_0 + 1] [i_0 + 1] [i_2] [11] [18] [i_14]) >> (var_4 - 4488900510394445593)))))) : ((var_2 ? (arr_21 [i_0] [i_1] [i_14] [i_13] [i_0 + 1] [i_13] [i_0]) : (var_3 / 1412494885156448206)))));
                        }
                        for (int i_15 = 3; i_15 < 22;i_15 += 1)
                        {
                            var_31 = 2837053303;
                            arr_53 [i_2] [i_2] [i_2] [i_13] = (min(((((var_6 ? 0 : var_6)))), ((((min((arr_42 [i_0] [1] [17] [i_2 + 1] [i_13] [22] [i_2]), (arr_48 [i_0] [i_1] [i_1] [12] [i_13] [i_2] [i_15 + 2])))) ? ((var_6 ? 7 : (arr_50 [i_2] [i_1]))) : var_2))));
                            var_32 = -8;
                            var_33 = ((max((arr_37 [i_0 + 1] [i_0 - 1]), var_6)) * var_2);
                        }
                        for (int i_16 = 1; i_16 < 23;i_16 += 1)
                        {
                            var_34 = (i_2 % 2 == zero) ? ((((!0) * (((arr_43 [i_0] [i_0 - 1] [i_2 + 1] [i_2] [i_16 - 1]) >> (((arr_43 [i_0] [i_0 - 1] [i_2 + 2] [i_2] [i_16 - 1]) - 72))))))) : ((((!0) * (((arr_43 [i_0] [i_0 - 1] [i_2 + 1] [i_2] [i_16 - 1]) >> (((((arr_43 [i_0] [i_0 - 1] [i_2 + 2] [i_2] [i_16 - 1]) - 72)) - 145)))))));
                            var_35 = (min(((-(~var_4))), (min((min((arr_18 [i_0] [i_0] [8] [i_0] [5] [5] [10]), var_5)), ((min(var_1, 1)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
