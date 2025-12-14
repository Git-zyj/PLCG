/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_15 += -16;
        var_16 = (arr_0 [i_0] [i_0]);
        var_17 = 23748;
    }
    var_18 = (max(((max(var_2, var_0))), var_10));
    #pragma endscop
}
