/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 += -110;
        var_19 = -55;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_20 = -90;
        var_21 = 0;
        var_22 = -1;
    }
    #pragma endscop
}
