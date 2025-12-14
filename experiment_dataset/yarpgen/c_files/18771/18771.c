/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_8;
    var_12 = ((var_0 ? ((min(1, 1))) : (((var_9 || 32768) ? (var_2 && var_8) : (!var_8)))));
    var_13 -= var_3;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = ((0 ? 65535 : 1));
        var_15 = ((((1 ? -21 : 1)) >= 2147483637));
        arr_2 [i_0] = ((456878225 ? var_10 : 4294967289));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] = (((-9223372036854775807 - 1) ? (arr_4 [1] [i_1]) : (var_7 * var_3)));
        var_16 = (max(var_16, -13305));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_17 = (-9223372036854775807 - 1);
        var_18 += 1;
        var_19 -= (((((arr_4 [i_2] [i_2]) ? (arr_1 [i_2]) : var_8)) > var_7));
    }
    var_20 = (min(var_20, ((min(59392, ((var_1 ? var_10 : var_2)))))));
    #pragma endscop
}
