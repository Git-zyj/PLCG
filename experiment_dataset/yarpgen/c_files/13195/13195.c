/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_14));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (max(4294967286, (26 - -2126200745)));
        var_17 = (min(var_17, ((min(var_5, var_2)))));
        arr_3 [i_0] = ((((-4678 - (arr_1 [i_0] [i_0]))) + ((((min(var_3, var_9))) + var_7))));
        var_18 = (((min(((var_9 ? var_5 : var_10)), 1)) >= ((min(((min(255, (arr_1 [i_0] [i_0])))), (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [4]))))))));
        var_19 += min((((!((max(10, -79)))))), (min(var_15, (arr_0 [10] [10]))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = ((((((arr_4 [i_1]) + 9284567618747352771))) << (((!((max((arr_4 [i_1 + 1]), -32462))))))));
        var_20 = (arr_4 [i_1]);
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        arr_9 [10] |= ((var_5 ? (((min(var_15, (arr_5 [i_2]))) << (((arr_0 [14] [14]) - 67)))) : ((var_10 & (~1)))));
        arr_10 [i_2] [i_2] = (min(((-(arr_7 [i_2]))), ((((arr_7 [i_2]) && (arr_7 [i_2]))))));
        var_21 = (max((min(var_10, (((!(arr_4 [i_2])))))), var_11));
    }
    var_22 = ((var_3 + var_2) ? ((2641395596932079830 ? var_0 : (-4096 * var_3))) : (max((min(var_4, var_7)), var_2)));
    var_23 = (99 >= 35963212);
    #pragma endscop
}
