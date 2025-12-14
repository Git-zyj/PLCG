/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = ((3607333133 ? 1 : 82));
        var_18 = (((((var_12 ? var_6 : var_15))) ? (((627966025 / 91) * (arr_0 [i_0] [i_0]))) : (((max(50863, 183))))));
    }
    var_19 = 213;
    var_20 -= (min((max((max(var_15, var_14)), (((var_4 ? 92 : var_11))))), ((max((((var_1 ? 31 : 1))), ((var_4 ? 39 : var_13)))))));
    var_21 = var_1;
    #pragma endscop
}
