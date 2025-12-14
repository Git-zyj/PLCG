/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -0;
    var_12 = (max((min((max(var_10, var_9)), var_2)), ((max(-25, ((var_6 ? var_2 : var_1)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 ^= (min((max((max(26, var_4)), ((var_9 ? (arr_2 [2] [2]) : 26)))), ((max((min(-112, 22155)), var_0)))));
                    var_14 = ((((arr_4 [i_0 - 1] [i_0 - 1]) ? (-9223372036854775807 - 1) : (arr_2 [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_0] = ((~(arr_8 [i_1] [18] [i_3] [i_1])));
                                arr_13 [i_0] [1] [i_2 + 3] [i_0] [i_0] = ((!((((arr_9 [i_0 - 1] [i_2 + 3]) ? (arr_9 [i_0 - 1] [i_0 - 1]) : 24)))));
                                var_15 -= ((9223372036854775807 ? ((min(22155, var_8))) : -12305));
                                var_16 = ((-(((!((min(19, (arr_5 [23] [23] [23] [i_0])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    arr_21 [i_7] [i_5] [i_5] = (((-(max((arr_1 [i_5]), (arr_17 [i_5] [i_6] [i_6 + 2]))))));

                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        var_17 = ((var_3 ? var_9 : 536838144));
                        arr_24 [i_5 + 1] [i_5 + 1] [i_5] [i_5] = -41201;
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_27 [i_5] [i_5] [i_5] [i_5] [i_9] [i_9] = 4294967284;
                        var_18 = ((0 ? 23 : 16715));

                        for (int i_10 = 1; i_10 < 18;i_10 += 1)
                        {
                            var_19 ^= -2739154238;
                            arr_31 [i_9] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_5] [i_9] = (arr_25 [i_5] [i_5] [i_5] [i_9] [i_5]);
                            arr_32 [i_5] [i_9] [i_7] [i_9] [i_9] [i_10] |= 5;
                        }
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_20 = ((!(((27440 ? (arr_2 [i_5] [i_6]) : 0)))));
                            var_21 = (((arr_7 [i_5] [i_6 - 1] [i_6 - 1]) ? (arr_7 [i_5] [i_5] [i_5]) : (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])));
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                        {
                            arr_37 [i_5] [i_6 + 1] [i_7] [i_5] [i_5] = (arr_3 [i_5] [1] [i_7]);
                            var_22 += ((var_4 ? var_6 : (arr_35 [i_6] [i_6] [i_6] [i_6 + 2] [i_12])));
                            var_23 = ((6039956135146962655 ? 62561 : 24065));
                        }
                        for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                        {
                            var_24 = (((((arr_18 [i_5 + 2] [i_5 + 2] [i_5 - 1]) + 2147483647)) << (((var_0 + 50) - 20))));
                            arr_41 [i_5] [i_6 + 2] [i_6 + 2] [i_5] [17] [i_13] = 2742;
                        }
                    }
                    var_25 += ((max(94, var_9)));
                }
            }
        }
    }
    #pragma endscop
}
