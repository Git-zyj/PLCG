/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = arr_0 [i_0];
        var_17 = arr_1 [i_0];
    }
    var_18 = var_16;
    var_19 = ((var_13 < ((min((!var_15), 65535)))));
    var_20 = ((((((2112241407683691273 ? 10262 : var_13))) ? ((var_10 ? var_3 : var_8)) : var_6)));
    #pragma endscop
}
