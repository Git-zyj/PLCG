/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = ((-(((var_7 - 6114115340489416842) + (((209 ? 0 : var_13)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (max(var_17, ((((arr_0 [i_0]) ? (arr_0 [i_0]) : 32767)))));
        var_18 = (min(var_18, ((((((1 ? var_2 : (arr_0 [1])))) ? 1 : (arr_0 [i_0]))))));
    }
    #pragma endscop
}
