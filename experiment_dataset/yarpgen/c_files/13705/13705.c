/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~-47);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = (max(var_14, (((((var_10 ? var_10 : var_8)) & ((var_11 ? var_0 : 13319227674363800746)))))));
        var_15 = (((-146927384 ? 146927367 : 3)));
    }
    #pragma endscop
}
