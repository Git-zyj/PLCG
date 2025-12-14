/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_5 ? (max(7967218521370250483, var_3)) : (!var_7)))) ? (((35184372088831 ? 35184372088804 : (-2147483647 - 1)))) : (max((668493750 / 175), (max(var_1, var_8))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = ((((((arr_2 [i_0]) % 1))) > (((arr_1 [i_0] [i_0]) | (arr_0 [i_0])))));
        arr_4 [i_0] = (((arr_0 [i_0]) ? ((((!(arr_2 [i_0]))))) : (((arr_1 [i_0] [i_0]) / (arr_2 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_21 = (max(var_21, (((((arr_7 [i_1]) ? (arr_7 [1]) : (arr_5 [i_1])))))));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_22 = (arr_8 [i_1 + 1]);

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_23 = (max(var_23, (((35184372088839 << (217 - 164))))));
                var_24 = (max(var_24, (!180)));
                var_25 = (max(var_25, (arr_0 [i_2])));
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_18 [i_1 - 2] [i_2] [i_1 - 2] [i_1] = (arr_9 [i_1 - 2] [i_1 - 1] [i_1 + 1]);
                arr_19 [7] = (((arr_9 [i_1] [i_1 - 2] [8]) ? (arr_15 [i_1] [i_1 - 2] [i_1] [1]) : (arr_9 [i_1] [i_1 - 2] [7])));
            }
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_26 = (((arr_15 [i_1 - 2] [i_1] [i_1 - 1] [i_1]) > ((((arr_8 [i_1 + 2]) ? 1224793063 : 36862)))));
                arr_22 [i_1] [i_2] [10] = ((arr_7 [i_1 - 2]) > ((18446744073709551614 ? 191 : (arr_20 [i_1] [9] [i_5] [i_5]))));
            }
        }
    }

    for (int i_6 = 3; i_6 < 21;i_6 += 1)
    {
        arr_27 [i_6] = (~174);
        var_27 = (max(var_27, ((((arr_23 [8] [8]) ? (((((((arr_25 [i_6] [i_6]) - (arr_23 [14] [14]))) > (arr_23 [i_6 - 3] [20]))))) : ((-1 ? ((-(arr_23 [i_6] [22]))) : 80)))))));
        var_28 = (max(var_28, ((min(((-(arr_25 [i_6] [i_6 + 2]))), (max(((16245719174266015468 ? (arr_23 [i_6] [14]) : (arr_24 [i_6] [18]))), (arr_23 [i_6 - 3] [0]))))))));
    }
    var_29 = ((-(max((((var_16 ? var_7 : 4692536864509647900))), (max(var_4, -116))))));
    var_30 = (min(var_30, ((min(((((46760 ? var_13 : var_8)))), ((17179869183 ? 1 : -1)))))));
    #pragma endscop
}
