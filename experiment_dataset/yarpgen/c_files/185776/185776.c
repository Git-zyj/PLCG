/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!(((var_14 ? (var_0 <= var_14) : var_10)))));
    var_16 = ((-72 ? 72 : -100));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_17 = ((((((var_7 ? (arr_11 [i_1] [6] [6] [i_1]) : var_3))) ? (!var_3) : (max((arr_1 [i_2]), (arr_10 [12] [i_1] [i_1] [i_1 + 2] [12] [i_1 + 2]))))));
                        arr_12 [i_1] [i_2] [i_3] = (((arr_0 [i_0 - 2] [i_1 - 1]) ? ((var_2 ? (arr_6 [i_1 + 2] [i_1 + 2]) : (arr_0 [i_0 - 3] [i_1 + 1]))) : (102888508 + 1)));
                    }
                    var_18 ^= (max(((-(min((arr_9 [i_0] [i_0]), var_9)))), (arr_9 [i_0 + 1] [i_1 + 2])));

                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        var_19 = (arr_11 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_1]);
                        var_20 = (((arr_1 [i_0 + 1]) ? ((max(var_0, var_3))) : ((max((arr_8 [i_1] [i_1 - 1] [i_1 - 1] [1]), (arr_9 [i_1] [i_1 + 1]))))));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_21 = (min((arr_6 [i_0] [i_0]), var_6));
                            var_22 += (max((((arr_1 [1]) - (max(var_12, var_5)))), (((max(var_4, (arr_2 [i_0 + 1])))))));
                            var_23 = max(((((max(var_2, (arr_7 [i_0] [i_0] [1])))) ? (max(var_12, var_4)) : var_12)), ((((((var_13 ? (arr_18 [i_0] [i_1] [9] [i_5] [11]) : var_7))) && (((arr_11 [i_0 + 4] [i_1 + 1] [7] [i_1]) || var_14))))));
                        }
                        for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_24 = (((-((var_6 ? var_13 : var_0)))) / ((min((arr_8 [i_0] [i_1] [7] [i_0]), (arr_7 [1] [1] [i_2])))));
                            var_25 = (min(((((var_6 >> (var_2 - 52694815))))), ((12288 ? 38 : -72))));
                        }
                        for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            var_26 += 12288;
                            var_27 = ((((((var_14 ? var_13 : (arr_16 [1] [i_1] [i_1] [i_1] [i_1]))) ? var_11 : (arr_22 [i_1 - 1] [3] [i_5] [i_8 - 1])))));
                        }
                        var_28 = var_10;
                        var_29 -= max((min((-41 % 1), (arr_5 [0]))), (arr_14 [i_0 - 4] [i_1] [i_2] [i_1] [6]));
                        var_30 |= ((((max(var_8, 1955785996))) ? (((((var_0 ? var_7 : (arr_22 [5] [1] [i_2] [i_2])))))) : ((-((var_0 ? var_12 : (arr_18 [i_0] [i_0] [i_0] [14] [i_0])))))));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_31 = ((~(arr_10 [i_1] [i_1] [14] [i_1 + 1] [i_1 + 1] [i_1])));
                        var_32 -= ((((((var_9 / var_2) >> (((((arr_23 [i_0] [i_0 + 3] [i_0] [i_0 + 1] [i_0 + 2]) << (var_4 - 209147604))) - 3665821678))))) ? (max(var_11, (max((arr_20 [i_9]), var_11)))) : (((((max(var_10, var_3))) ? (max(var_2, (arr_15 [i_0]))) : (arr_17 [i_0 + 2] [i_0 - 2] [i_2] [0]))))));
                    }
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        var_33 |= var_9;

                        for (int i_11 = 3; i_11 < 14;i_11 += 1)
                        {
                            arr_39 [i_0] [i_0] [i_0] [i_1] [i_0] = ((var_8 ? (max((arr_7 [i_1 + 1] [i_1 + 1] [i_10 + 1]), (arr_7 [i_1 + 2] [i_1 + 2] [i_10 + 1]))) : (min(((-(arr_14 [i_0 + 2] [i_1 - 1] [1] [i_10] [i_11 - 2]))), (max(var_6, var_12))))));
                            var_34 = (arr_3 [1] [i_0 - 1]);
                        }
                        arr_40 [i_1] [i_1] [i_1] [i_1] = var_6;
                    }
                    var_35 = ((min(var_9, var_9)));
                }
            }
        }
    }
    #pragma endscop
}
