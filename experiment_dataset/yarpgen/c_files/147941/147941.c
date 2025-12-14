/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((min(248, var_11)))));
    var_20 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_21 &= 1;
        var_22 = var_1;
        var_23 |= (!58);
    }
    #pragma endscop
}
