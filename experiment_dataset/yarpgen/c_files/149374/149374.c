/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 2559028437;
    var_17 = ((var_9 ? ((var_4 ? var_0 : ((var_13 ? var_14 : var_7)))) : var_0));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 += var_3;
        var_19 = var_7;
    }
    #pragma endscop
}
