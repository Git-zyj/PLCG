/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_4 / var_2);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 += (arr_2 [14]);
        var_12 = (((arr_2 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])));
    }
    var_13 = (max(((var_5 ? ((var_6 ? var_8 : var_4)) : var_4)), ((max(var_2, var_9)))));
    #pragma endscop
}
