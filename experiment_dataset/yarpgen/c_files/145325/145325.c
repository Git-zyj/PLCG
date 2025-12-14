/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = (!-11611);
        var_12 = (max(var_12, ((min(((((((arr_1 [i_0]) | (arr_1 [i_0 + 1])))) ? (((min(141, -11606)))) : ((var_3 ? 20779 : var_11)))), (((((arr_1 [i_0]) > 11611)))))))));
        var_13 = ((-((min((arr_0 [i_0 + 1]), 11611)))));
        var_14 = (max(var_14, (((((-11629 == ((-(arr_0 [i_0]))))) ? (((min((arr_0 [i_0 + 1]), -32758)))) : (min((arr_1 [i_0]), var_3)))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_15 = (min(var_15, (var_3 || 32736)));
        var_16 = (max(var_16, (~166)));
    }
    var_17 = ((((min(var_6, var_2)) >> (var_8 == var_8))));
    #pragma endscop
}
