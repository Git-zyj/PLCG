/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_16 -= ((((-(min((arr_1 [i_0 + 1] [i_0]), var_8)))) >> (((arr_1 [i_0 - 1] [i_0 + 1]) / (arr_1 [i_0 + 2] [i_0 - 1])))));

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_17 = ((+(min((((var_9 ? (arr_3 [i_0] [1]) : (arr_3 [2] [i_1])))), var_5))));

            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                var_18 -= (max(var_6, (((~(arr_2 [i_0 + 2] [6]))))));
                var_19 = (min(((-(((!(arr_3 [i_2] [i_1 - 1])))))), (((((-(arr_4 [i_0] [i_0] [i_2] [i_2])))) ? (var_7 >= var_4) : (arr_2 [14] [i_1 + 1])))));
            }
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                arr_9 [7] [7] [1] [i_3] = ((+(max((var_11 > var_6), ((var_9 ? (arr_8 [i_0] [i_1] [16]) : (arr_7 [i_0] [5] [i_1] [i_3])))))));
                var_20 += ((((max(((~(arr_2 [i_0] [i_3]))), (arr_1 [i_0 + 2] [1])))) ? var_2 : ((-var_5 ? -var_14 : (((((arr_3 [i_1] [5]) == var_13))))))));
            }
            var_21 = (max((max(((var_14 / (arr_3 [i_0] [i_1 + 1]))), (arr_1 [i_0] [1]))), ((min(254, var_0)))));
            var_22 = (arr_7 [i_0] [i_0] [i_1 - 1] [1]);
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_23 -= (arr_6 [i_0] [i_0 + 1] [i_4 - 1]);
            arr_12 [4] [i_4] = (((var_8 == var_0) + var_3));
            var_24 = (max(var_24, (((+(((arr_4 [10] [i_0] [1] [i_4 + 1]) / var_14)))))));
            var_25 = ((var_0 ? (arr_7 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4]) : var_10));
            var_26 = ((var_11 ? (arr_1 [i_4 + 2] [i_0 + 2]) : var_0));
        }
        for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_5] [i_5 - 1] = ((((min((~var_7), (((var_14 >= (arr_4 [i_0] [i_0] [i_0] [i_0]))))))) > (((((arr_10 [i_5 + 2] [7]) == (arr_6 [i_0] [6] [i_5]))) ? var_3 : (((arr_11 [i_0] [i_5 + 1] [i_5]) + var_6))))));
            var_27 = (((((arr_1 [i_5 + 1] [i_0 + 1]) > ((max(var_2, var_0))))) ? (((208 << (202 - 201)))) : (((((arr_14 [i_5] [6]) ? var_14 : (arr_13 [2] [i_5 + 1]))) - (arr_7 [i_0] [i_5] [i_5] [i_0 + 2])))));
            arr_17 [i_5] [i_5] [1] = (arr_15 [i_5] [i_5]);
        }
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        var_28 = (max(var_28, ((((~var_7) / ((((((arr_15 [i_6] [8]) ? (arr_7 [i_6 + 1] [i_6] [9] [i_6]) : var_4))) * (arr_11 [i_6] [i_6] [i_6]))))))));
        arr_22 [i_6] = (((!8326) ? (arr_21 [i_6 - 1]) : ((((arr_5 [i_6 - 1]) && var_4)))));
    }
    var_29 = (var_14 | var_1);
    #pragma endscop
}
