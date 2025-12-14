/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_6 ? var_10 : 1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 += (arr_0 [i_0]);
        var_15 = (arr_0 [i_0]);
    }
    var_16 = ((var_12 ? (((var_11 ? 31505 : var_12))) : 511));
    #pragma endscop
}
