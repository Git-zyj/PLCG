/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_5));
    var_14 |= ((((min((96 || var_0), 4))) ? (((var_5 % var_11) ? var_12 : var_0)) : var_0));
    var_15 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = ((5663 + (((-127 - 1) - var_0))));
        var_17 |= var_5;
    }
    #pragma endscop
}
