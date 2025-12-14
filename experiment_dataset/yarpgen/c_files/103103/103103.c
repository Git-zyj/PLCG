/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((!var_10) ? var_5 : var_12)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (max(var_17, ((((((arr_0 [i_0] [i_0]) ? (arr_1 [1]) : ((var_6 ? 18446744073709486080 : (arr_1 [5]))))) != 6)))));
        var_18 = (min(var_18, (((9 ? 18446744073709486080 : 3857)))));
    }
    #pragma endscop
}
