/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_1 [i_0])));
        var_19 = arr_1 [i_0];
    }
    var_20 = ((1 - ((-var_7 ? (max(var_10, var_14)) : (((var_1 ? var_6 : var_9)))))));
    var_21 = var_13;
    var_22 = (~((var_10 ? var_16 : (var_16 && -2))));
    #pragma endscop
}
