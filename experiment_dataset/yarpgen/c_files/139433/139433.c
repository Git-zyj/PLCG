/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_18 = ((var_15 ? ((var_17 ? var_7 : var_11)) : var_11));
        var_19 = var_5;
    }
    var_20 = (max(var_20, var_2));
    #pragma endscop
}
