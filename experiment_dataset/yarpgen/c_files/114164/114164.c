/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_16 == (var_7 < var_17)));
    var_19 = var_2;
    var_20 = var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = var_15;
        var_21 = ((var_14 * var_13) * (arr_2 [i_0 + 2]));
        var_22 = ((((var_10 ? var_6 : var_1)) + 1804307181));
    }
    #pragma endscop
}
