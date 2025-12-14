/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (min(var_0, ((0 ? var_6 : var_11))));
        var_13 = (min(var_13, (((((max(28672, var_4))) ? var_4 : (min(2, 1471169724)))))));
        var_14 = (((((1 ? var_8 : 0))) ? (min(1668253925, var_10)) : (((77 ? var_10 : 28648)))));
        var_15 = (((!-54) ? (~-545837107) : var_2));
        arr_4 [i_0] [i_0] = ((1 ? ((-68 ? 28353 : (-127 - 1))) : ((var_9 ? var_0 : var_1))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_16 = ((!(((var_12 - ((var_0 ? var_6 : 28671)))))));
        var_17 = (((~28672) ? 1 : (max(var_11, var_5))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_18 = ((-(~0)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_17 [i_2] [14] [i_2] [i_3] = 18446744073709551601;
                    arr_18 [i_4] [i_2] [i_2] = (4294967295 - 395941558);
                }
            }
        }
        var_19 = (min(var_19, (4 - 15)));
        arr_19 [i_2] [i_2] = (var_8 & var_6);
    }
    var_20 = ((((((var_7 ? 1010006025 : 395941558))) ? var_10 : (!var_10))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                arr_28 [i_5] [i_5] = max((((var_6 ? (((var_6 ? var_3 : var_1))) : ((-127 ? 2613591185 : 80))))), (min(var_0, (min(1, var_6)))));
                var_21 = ((var_1 - ((12 ? 2576970823 : var_12))));
                var_22 = (((max(0, var_11)) - ((((max(36880, 127)))))));
            }
        }
    }
    var_23 = ((((max(1, var_8))) - var_9));
    #pragma endscop
}
