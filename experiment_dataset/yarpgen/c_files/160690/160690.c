/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((((((((arr_0 [i_0]) ? var_16 : 31708))) ? (!var_18) : (arr_0 [i_0])))) ? (((((~(arr_1 [i_0] [i_0])))) ? 12288 : (arr_1 [i_0 + 1] [i_0 - 1]))) : ((((arr_2 [i_0]) / ((max(var_14, var_2)))))));
        var_21 = (((arr_2 [i_0]) > var_10));
        var_22 = (min((min(var_6, ((var_11 ? (arr_2 [i_0]) : (arr_0 [i_0]))))), (arr_2 [i_0 + 1])));
        arr_4 [i_0] [i_0] = (max(((min(((var_10 ? (arr_0 [5]) : (arr_2 [i_0]))), (((arr_0 [i_0]) ? (arr_1 [i_0 - 1] [i_0]) : var_17))))), ((~(min(-1, var_3))))));
        var_23 = (min(var_23, ((((arr_1 [i_0] [i_0 - 1]) ? (!61158) : (((arr_1 [i_0] [i_0 - 1]) ? (arr_1 [i_0] [i_0 - 1]) : (arr_1 [i_0 + 1] [i_0 - 1]))))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_24 = ((!(((((arr_5 [i_1] [i_1 - 1]) ? var_9 : (arr_2 [i_1]))) > ((min((arr_2 [i_1]), (arr_1 [i_1] [i_1 - 1]))))))));
        var_25 ^= ((((max((arr_1 [i_1 - 1] [i_1]), (((arr_1 [i_1] [i_1]) ? 1 : var_6))))) ? var_19 : ((((var_18 > (arr_1 [i_1] [i_1]))) ? var_3 : (var_19 + var_2)))));
    }
    #pragma endscop
}
