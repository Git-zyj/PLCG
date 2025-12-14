/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (((((var_10 ? var_10 : var_5))) ? (((max(var_0, var_6)))) : (var_9 - var_4)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_13 &= var_8;
        var_14 = (127 ? 41 : 32764);
    }
    var_15 &= (((min(47645, var_2))));
    var_16 = var_11;
    #pragma endscop
}
