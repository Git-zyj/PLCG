/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((var_15 <= (-2147483647 - 1)))), var_18));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 |= ((((arr_0 [i_0] [i_0]) ? var_16 : (-2147483647 - 1))));
        var_22 = var_14;
        var_23 = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : -1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_24 = (max(var_24, (((73 ? 29 : var_19)))));
        var_25 = (((((~(-2147483647 - 1)))) ? var_9 : (((var_5 ? 3 : 0)))));
    }
    var_26 -= (min(var_8, var_10));
    #pragma endscop
}
