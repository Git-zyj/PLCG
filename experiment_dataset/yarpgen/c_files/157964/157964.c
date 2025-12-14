/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, -1));
                    var_17 = (min(var_17, (arr_0 [2])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_18 = ((127 ? ((max(52727, (959390813 && 2890997520)))) : (!var_0)));
                    var_19 |= (~43704);
                    arr_15 [i_5] [i_3] [i_3] [i_3] = ((!12) ? (((((arr_11 [i_3] [i_4]) ^ 1637)))) : (((max(3894, (arr_9 [i_5]))))));
                }
            }
        }
    }
    var_20 += (var_3 % -var_8);
    var_21 = (min((!var_7), var_4));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                {
                    var_22 = (max((arr_16 [i_6] [i_6]), ((((arr_7 [i_6 + 1] [i_8 - 2]) ? (arr_12 [i_6 + 1] [i_8 - 1]) : 1636)))));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_23 -= (max(var_14, (arr_14 [i_7] [i_7] [i_7] [i_8])));
                        var_24 = 24;
                        var_25 = ((-(min(-3565370690820964052, var_9))));
                        var_26 = (min(((max(((((arr_23 [i_6] [i_7] [i_8] [i_9]) ? var_1 : var_3))), (((arr_14 [i_6 + 1] [i_7] [i_8 - 1] [i_6]) ? 797434812 : (arr_20 [i_6] [i_8 + 3])))))), ((var_9 + (arr_26 [i_6 + 1] [i_7] [i_8] [i_9] [i_7] [i_8 + 1])))));

                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 11;i_10 += 1)
                        {
                            var_27 = (min(var_27, var_12));
                            var_28 = (min(var_28, ((((arr_10 [i_6 + 1] [i_7] [i_8]) ? 797434813 : 107)))));
                            var_29 = (arr_26 [i_6 + 1] [i_7] [i_8] [i_9] [i_10 + 1] [i_7]);
                            var_30 = (max(var_30, ((((arr_27 [i_10] [i_10 - 2] [i_10] [i_10 - 3] [i_10] [i_10]) ? 0 : -25)))));
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            var_31 = (min(var_31, (((~(arr_9 [i_6]))))));
                            var_32 = ((~(max(((var_1 ? var_14 : (arr_7 [i_6] [i_6]))), (~1)))));
                            var_33 = (((((((129 ? 1537044569 : 1732544451)) >> (48 - 28)))) ? (arr_21 [i_8] [i_7] [i_11]) : (min((((arr_32 [i_11] [i_6] [i_8 - 1] [i_6] [i_6 + 1]) / (arr_33 [i_6] [i_6] [i_7] [i_8] [i_9] [i_11]))), (arr_24 [i_6])))));
                            var_34 = ((((!(arr_16 [i_6] [i_7]))) ? (((!(((var_8 ? (arr_22 [i_6] [i_9]) : var_0)))))) : ((~(max((arr_14 [i_6] [i_9] [i_8] [i_6]), 15))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        var_35 = (arr_21 [i_8 - 1] [i_8 - 2] [i_6 + 1]);
                        arr_37 [i_6] [i_6] [i_8] = (((arr_12 [i_6] [i_7]) ? (arr_20 [i_6 + 1] [i_8 + 1]) : ((((var_10 && (arr_20 [i_6 + 1] [i_12])))))));
                    }
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        arr_42 [i_13] [i_6] [i_6] [i_6] = ((~(((var_5 % var_2) | ((max(7340032, 2477699377804471125)))))));
                        arr_43 [i_7] [i_7] [i_7] [i_7] [i_6] [i_7] = ((((((var_12 & var_3) ? (max(var_12, var_8)) : var_14))) ? var_9 : var_12));
                    }
                }
            }
        }
    }
    #pragma endscop
}
