/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_16 = -1;
        var_17 = var_15;
        var_18 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_19 = var_7;
        var_20 = -1672890423;
    }
    var_21 = (max((max(var_12, var_4)), var_6));
    var_22 = (max(var_3, 1));
    var_23 = var_0;
    #pragma endscop
}
