/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-(((((var_4 ? var_10 : 4192256))) ? (~var_0) : ((var_11 ? var_10 : var_2)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (var_4 ? (((arr_0 [i_0]) ? var_13 : (arr_1 [i_0]))) : (arr_1 [i_0]));
        var_16 += (190 ? (~127) : ((var_6 ? (-127 - 1) : (arr_1 [10]))));
        arr_2 [i_0] = (((!127) ? (arr_0 [i_0]) : ((127 ? (arr_1 [i_0]) : var_10))));
    }
    #pragma endscop
}
