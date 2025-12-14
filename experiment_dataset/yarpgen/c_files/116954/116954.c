/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0 - 2] = ((((((arr_0 [i_0] [i_0 - 3]) ? (arr_1 [i_0 - 3] [i_0 - 3]) : -18))) ? (min((arr_2 [i_0 - 1]), ((((arr_0 [i_0 - 2] [6]) != var_11))))) : (((arr_0 [i_0 - 4] [i_0]) / ((60 ? (arr_2 [i_0 - 4]) : (arr_2 [i_0])))))));
        var_16 = (min(var_16, ((max(var_0, ((~((2038363119 ? var_9 : 0)))))))));
    }

    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_17 -= ((var_2 == (((((((arr_2 [i_1]) ? (arr_1 [i_1] [10]) : (arr_1 [i_1] [i_1])))) ? var_6 : (arr_4 [9] [i_1]))))));
        arr_7 [i_1] |= (((((+((1 ? (arr_0 [i_1 + 1] [i_1]) : (arr_5 [i_1 - 1])))))) ? 255 : (max(((0 ? (arr_0 [15] [i_1]) : (arr_1 [i_1] [i_1 + 1]))), (((-(arr_4 [i_1] [17]))))))));
    }
    var_18 = (max((((245 ? 1 : 254))), ((((min(var_11, var_11))) ? var_6 : var_9))));
    #pragma endscop
}
