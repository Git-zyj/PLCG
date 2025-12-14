/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 8388607;

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((((-4413 ? 4387 : 4388))) || 16));
        var_14 = (max(var_14, var_5));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_15 = var_4;
        var_16 = (min(var_16, (((((-4412 ? (0 - 10306344983940115442) : -4980156537602675619)) % 1)))));
    }
    #pragma endscop
}
