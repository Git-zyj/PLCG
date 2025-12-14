/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_12 ^= (((((~(arr_2 [i_0 - 1] [i_0 + 2])))) ? ((~(arr_2 [i_0 + 2] [i_0]))) : var_5));
        arr_4 [i_0] = var_7;
        var_13 = (((((((min((arr_2 [i_0] [i_0]), var_6))) ? (max((arr_1 [i_0]), var_1)) : (((var_4 ? var_1 : 1047070025)))))) ? var_2 : (((~1047070016) ? -839833297 : 2066257123))));
        var_14 = (!var_3);
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_9 [i_1] [14] |= (arr_5 [i_1 - 1] [i_1 + 1]);
        var_15 = (max(var_15, (~-1756233883)));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_16 += (arr_11 [i_2]);
        arr_12 [i_2 - 1] = (((arr_2 [21] [i_2 - 1]) ? (max(var_1, (arr_2 [i_2] [i_2 - 1]))) : var_7));
    }
    var_17 += ((~var_3) ? (min((min(36549, 1229907350)), (var_4 / -1756233875))) : var_6);
    #pragma endscop
}
