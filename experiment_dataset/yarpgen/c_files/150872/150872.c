/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_19));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_21 -= (0 * 158);
        var_22 = 114;
    }
    var_23 = var_2;
    #pragma endscop
}
