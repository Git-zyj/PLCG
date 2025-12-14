/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = ((var_2 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        var_15 = (min(var_15, (((var_2 ? (arr_0 [i_0] [i_0]) : var_8)))));
    }
    var_16 = (max(var_6, var_12));
    #pragma endscop
}
