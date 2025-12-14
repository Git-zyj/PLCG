/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (max((((arr_0 [i_0]) ? var_5 : 5)), ((min((arr_1 [i_0]), ((var_9 ? var_8 : (arr_1 [i_0]))))))));
        arr_4 [i_0] [i_0] = (((((-var_2 ? (arr_2 [i_0]) : (arr_0 [i_0])))) ? ((((arr_1 [i_0]) != (arr_0 [i_0])))) : var_7));
        arr_5 [3] = (((((((((arr_0 [2]) ? (arr_2 [i_0]) : (arr_0 [i_0])))) ? ((((arr_0 [17]) != (arr_1 [i_0])))) : 54))) ? (arr_1 [i_0]) : ((var_7 % (arr_1 [i_0])))));
        arr_6 [i_0] [i_0] = ((((((!0) ? ((var_7 ? var_6 : (arr_2 [i_0]))) : var_7))) ? ((~(arr_0 [i_0]))) : ((((~-86) ? (~48) : (((arr_2 [i_0]) ? 202 : (arr_0 [i_0]))))))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_10 [i_1] = ((((((arr_2 [i_1 + 1]) ? (((((arr_2 [i_1]) != (arr_0 [i_1]))))) : (((arr_0 [i_1]) ? var_7 : (arr_7 [i_1] [i_1])))))) ? (arr_1 [i_1 - 2]) : ((~(arr_9 [i_1] [i_1 - 1])))));
        arr_11 [i_1] = ((!((max((arr_9 [1] [i_1 + 1]), (arr_8 [i_1] [i_1 + 2]))))));
        var_12 *= ((var_0 ? (arr_8 [10] [i_1 - 1]) : (0 && 1529100581)));
    }
    var_13 = max(var_4, var_0);
    var_14 = var_3;
    #pragma endscop
}
