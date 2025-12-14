/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_13 |= -7741;
        var_14 = var_12;
        var_15 = (arr_0 [i_0]);
        var_16 = (max(var_16, var_11));
    }
    var_17 = var_5;
    #pragma endscop
}
