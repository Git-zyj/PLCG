/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_7 || 1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = ((var_8 ? var_8 : var_3));
        var_13 = -103;
        var_14 = ((var_7 ? (~-100) : var_3));
    }
    #pragma endscop
}
