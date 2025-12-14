/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_19 = 17682;
        var_20 = (max(var_20, -111));
    }
    var_21 = var_5;
    var_22 = (max(var_22, var_11));
    #pragma endscop
}
