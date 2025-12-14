/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_9;
    var_21 = (min(var_15, (max(var_18, var_4))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_22 = var_9;
        var_23 = (min(((min(var_10, var_12))), var_8));
    }
    #pragma endscop
}
