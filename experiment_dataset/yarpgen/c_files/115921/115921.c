/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 |= (arr_2 [i_0] [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = ((((((arr_5 [i_0] [i_0] [i_0]) ? var_2 : var_8))) ? var_1 : var_7));
            arr_7 [i_0] [i_1] = var_8;
        }
        arr_8 [i_0] |= (arr_1 [i_0]);
        var_11 -= (arr_0 [i_0]);
    }
    var_12 = ((189 ? 1279056813 : -6637437591029707876));
    var_13 = var_8;
    var_14 = ((var_5 ? ((-23 ? 2218282755 : 1350392798)) : var_4));
    #pragma endscop
}
