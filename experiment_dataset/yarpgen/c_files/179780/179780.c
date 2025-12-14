/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(715764553979763662, (((-((var_16 ? var_13 : var_11)))))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 &= ((((+(((arr_4 [i_0 + 3] [12] [i_2] [12]) / (arr_8 [0] [0] [0] [0]))))) >> (var_0 + 2292)));
                        var_21 = (((~var_3) ? 2032 : (((((var_0 * (arr_6 [1] [i_1 + 1] [i_1 + 1] [7] [i_0]))) < (!var_2))))));
                    }
                }
            }
        }
        arr_10 [i_0] = var_15;
        var_22 = (max(var_22, var_9));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = ((((-(max((arr_6 [i_4] [i_4] [i_4] [i_4] [i_4]), 715764553979763662)))) < (((~((715764553979763654 ? 4096 : (arr_1 [i_4]))))))));
        var_23 *= (((((((((arr_11 [i_4]) ? 4092 : var_13))) ? ((var_10 ? var_7 : (arr_1 [i_4]))) : ((var_2 ? var_2 : (arr_4 [i_4] [i_4] [i_4] [i_4])))))) ? ((var_5 / (arr_6 [i_4] [i_4] [i_4] [i_4] [i_4]))) : (((max((arr_7 [i_4] [i_4] [i_4] [i_4]), var_17))))));
        arr_14 [i_4] = (arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [12]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_26 [i_5] [i_6] [i_7] [i_8] [i_7] [13] = (~var_11);
                        var_24 = ((~(715764553979763662 || 0)));
                    }
                }
            }
        }
        var_25 = (max(var_25, (((((((arr_25 [6] [i_5] [i_5] [i_5]) ^ var_3))) + 536870912)))));
    }
    for (int i_9 = 1; i_9 < 14;i_9 += 1)
    {
        arr_30 [13] = (((!var_1) | ((((((arr_29 [i_9 + 2]) ? -32738 : 61444))) ? (arr_27 [i_9] [i_9]) : (~-94)))));
        arr_31 [i_9 + 2] [i_9 + 2] = (((((3758096384 ? -32738 : 3758096401))) ? ((((((arr_28 [0]) ? (arr_29 [i_9 + 2]) : var_14))) ? var_17 : var_11)) : (((((arr_27 [i_9] [i_9]) + 2147483647)) >> (((arr_29 [i_9]) + 23943))))));
        var_26 = (min(18446744073709551605, (arr_29 [i_9 + 2])));
    }
    #pragma endscop
}
