/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 |= ((var_1 ? (arr_2 [i_0]) : var_17));
        var_20 = (min(var_20, (arr_1 [i_0] [i_0])));
        var_21 = arr_0 [i_0];
        var_22 = (min(var_22, (~1)));
    }
    var_23 = var_11;
    var_24 = (min(var_24, (((!(((var_1 ? 127 : 1))))))));
    #pragma endscop
}
