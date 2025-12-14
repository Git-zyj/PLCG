/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((var_6 | (min((~18446744073709551598), ((min(var_3, var_3)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~(arr_0 [i_0] [i_0])));
        var_11 = (max(var_11, (((~((((max((arr_1 [i_0]), (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0]))))))));
        var_12 = (max(var_12, (arr_2 [i_0] [i_0])));
        var_13 += (~27);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_14 = (min(var_14, ((((arr_5 [i_1]) ? (arr_5 [i_1]) : ((~(arr_5 [i_1]))))))));
        arr_6 [i_1] [i_1] = (((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])));
        var_15 += ((~(arr_4 [i_1] [i_1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            {
                var_16 = ((((((((arr_0 [i_2] [i_3]) ? (arr_5 [i_2]) : (arr_0 [i_3] [i_3])))) ? ((-(arr_5 [i_2 - 1]))) : (arr_7 [i_2]))) + (arr_9 [i_2] [14] [i_3])));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_17 += ((((((arr_10 [i_4]) + ((-(arr_16 [i_2 + 1] [i_2] [i_3] [i_4] [i_5] [i_6])))))) ? ((~((-(arr_7 [i_3]))))) : ((~(arr_9 [9] [i_3 + 1] [i_4])))));
                                var_18 = (min(var_18, (((~(min(18446744073709551598, ((min(0, 8388607))))))))));
                                arr_19 [i_2] [i_3 - 1] [i_2] [i_5 - 1] [i_6] = var_6;
                            }
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_19 = (arr_10 [i_2 + 1]);
                    var_20 = (((var_9 <= var_0) ? ((1 ? 18446744073709551599 : 8388589)) : (((~(arr_17 [i_3] [i_2]))))));
                    var_21 = var_2;
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    arr_26 [i_2] [i_2] [i_3] [i_2] = (~7053059862149268956);
                    var_22 = ((((((arr_9 [i_8 - 1] [i_3] [i_8]) ? (arr_9 [i_8 - 1] [i_3 - 2] [i_3]) : (arr_9 [i_8 - 1] [i_3] [3])))) ? (((-(arr_16 [i_8 - 1] [5] [i_8 - 1] [5] [i_3 + 1] [i_3])))) : ((4503565267632128 ? 1350588499 : 1))));
                }
                for (int i_9 = 3; i_9 < 13;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_33 [i_2] [i_2] [i_2] [i_2] [i_9] [i_10] [14] = (((((~((~(arr_7 [i_2])))))) ? (~12) : ((~(arr_23 [i_3 - 1] [i_2 + 1])))));
                                var_23 += (~18);
                            }
                        }
                    }
                    var_24 = (max(var_24, (arr_20 [i_9 + 1] [i_3 - 2] [i_2])));
                    var_25 = ((-(arr_12 [i_2])));
                    var_26 = ((~(min((~var_2), (arr_10 [i_2 - 1])))));
                }
                arr_34 [i_2] = ((~((var_5 ? (arr_13 [i_3 - 1] [i_3 - 2] [i_2] [2]) : (arr_13 [i_2 + 1] [i_3 - 2] [i_3 + 1] [i_3 + 1])))));
            }
        }
    }
    #pragma endscop
}
