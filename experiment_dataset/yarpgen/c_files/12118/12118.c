/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = var_8;
        var_11 = (min(var_11, var_6));
        var_12 = (-100 == 0);
    }
    var_13 = (0 + var_0);
    var_14 = (max(var_14, var_2));
    #pragma endscop
}
