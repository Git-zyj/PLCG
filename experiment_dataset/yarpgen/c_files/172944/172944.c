/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((-((3117563376 ? 281440616972288 : -16))))) ? (((((17726530644648715724 ? var_3 : var_3))) * (6552 / var_2))) : var_0));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 = var_2;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] [i_1] [i_0] = (arr_2 [i_0 + 1] [i_0]);
                    var_16 = ((16140901064495857664 ? var_1 : (arr_5 [i_0] [i_1] [11] [i_0 + 1])));
                }
            }
        }
        var_17 = ((!(-229455175 * 4294967295)));
        var_18 = var_6;
        var_19 = var_1;
    }
    var_20 |= (min(var_9, ((((max(231, var_11))) ? (((-9223372036854775807 - 1) ? 9645238880458918757 : 1)) : (((min(197, var_10))))))));
    #pragma endscop
}
