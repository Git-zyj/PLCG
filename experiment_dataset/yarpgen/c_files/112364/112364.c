/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_4 ? ((var_4 ? (var_1 || var_11) : (max(var_0, var_1)))) : (var_10 && var_8)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [4] [i_0] &= (6 / 4294967291);
        arr_4 [i_0] = ((~(arr_0 [i_0])));
        arr_5 [i_0] = (4 % 235);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_13 = (min(var_13, var_5));
        var_14 = (!4294967291);
        arr_8 [i_1] = ((((var_6 ? var_1 : var_0)) + var_10));
    }
    var_15 = var_6;
    #pragma endscop
}
