/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 ? (((var_0 || (!var_1)))) : (var_3 && var_1)));
    var_11 = (min(var_11, (((((((58772 << (3726824123715311856 - 3726824123715311855)))) ? var_7 : var_1))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (max(var_12, (arr_1 [i_0])));
        var_13 = (arr_1 [i_0]);
        var_14 = arr_0 [i_0];
        var_15 = (arr_0 [i_0]);
    }
    #pragma endscop
}
