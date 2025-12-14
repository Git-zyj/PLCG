/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((-28000 + (-127 - 1)))), (((((var_7 ? var_10 : var_9))) ? var_11 : (min(-28000, 3057248086))))));
    var_14 = (max(var_14, ((((var_1 ^ var_9) ? ((((min(var_11, var_1))) ? -28000 : (!-28000))) : ((max(-7, -28010))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((127 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))))));
        var_15 = var_1;
        var_16 = var_8;
    }
    var_17 = ((((var_6 - (16384 + 1237719209))) - var_0));
    #pragma endscop
}
