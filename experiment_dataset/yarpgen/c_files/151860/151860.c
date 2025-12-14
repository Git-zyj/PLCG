/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_16 = (7 ? (arr_1 [i_0] [i_0]) : ((((arr_1 [i_0] [i_0 - 1]) ? 262965943 : var_6))));
        var_17 = (5067 + -8153986129820860676);
    }
    #pragma endscop
}
