/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_22 = (max(var_22, var_13));
        var_23 = 49010;
    }
    #pragma endscop
}
