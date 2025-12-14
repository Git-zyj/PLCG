/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_4));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_16 = var_7;
        var_17 = (max(var_17, var_5));
        var_18 = (max(var_18, var_8));
        var_19 = (min(var_19, (-19076 & -19076)));
    }
    #pragma endscop
}
