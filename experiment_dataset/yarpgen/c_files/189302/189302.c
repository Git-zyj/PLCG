/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_8));
    var_11 = var_6;

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_12 = ((1806530929 - (max(var_5, (-1 == var_5)))));
        var_13 = ((-var_5 ? ((4657 ? (arr_0 [i_0 - 3] [i_0 + 2]) : (var_9 & var_0))) : (arr_1 [i_0])));
    }
    #pragma endscop
}
