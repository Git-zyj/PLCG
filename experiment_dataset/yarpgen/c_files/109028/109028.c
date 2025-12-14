/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = 2853416524;
        arr_2 [i_0] = (18 != -1395672892292864041);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 = (max((!var_13), 22));
        arr_6 [i_1] = (~4294967284);
        var_19 = var_3;
        var_20 = (max(var_20, 18446744073709551615));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                {
                    arr_15 [10] [7] [7] = var_15;
                    arr_16 [i_2] [10] [i_2] = var_4;
                }
            }
        }
    }
    var_21 = var_8;
    var_22 = (min(var_22, ((((22 & 4294967284) ? (((((var_13 ? var_5 : var_8))) ? -7230567580009891527 : (((-6796798052280100208 ? var_10 : var_12))))) : var_3)))));
    var_23 = 4211084891837838192;
    #pragma endscop
}
