/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min(var_9, (max(var_0, var_8)))));
    var_18 = var_10;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = var_12;
        var_20 = (min(var_11, (0 - 1)));
    }
    #pragma endscop
}
