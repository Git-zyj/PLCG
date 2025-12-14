/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_9;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_14 = -var_8;
        var_15 = var_11;
    }
    var_16 = var_1;
    var_17 |= var_12;
    #pragma endscop
}
