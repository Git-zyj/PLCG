/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = (min(var_21, (var_19 || var_16)));
        var_22 = -1;
    }
    var_23 = var_10;
    #pragma endscop
}
