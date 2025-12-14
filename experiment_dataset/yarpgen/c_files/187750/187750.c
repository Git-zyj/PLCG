/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 62;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_15 = (min(var_15, ((((((62433 ? ((4294967293 ? var_0 : 6178162112036200672)) : var_4))) ? (((((arr_1 [i_0 + 2]) != (arr_1 [i_0]))))) : (min(0, -1)))))));
        var_16 = (((((var_10 ? var_1 : var_9)))));
        var_17 = var_10;
        arr_2 [i_0 + 1] [i_0] = var_7;
        var_18 = 65535;
    }
    #pragma endscop
}
