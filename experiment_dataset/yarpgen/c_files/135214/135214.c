/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(((((((var_11 ? 19744 : var_0))) ? var_1 : ((min(var_1, 19749)))))), (max(-19744, 3126942665))));
        arr_4 [i_0] [i_0] = -19745;
        arr_5 [i_0] = arr_0 [i_0] [i_0];
        var_19 = (max(var_19, (((!(((var_3 << ((((min(var_16, var_13))) - 21987))))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_20 = var_13;
        var_21 = (max(var_21, var_3));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_13 [i_2] = (((~-19745) ? var_0 : var_9));
        var_22 = var_7;
        arr_14 [i_2] = ((((min(var_12, 60438))) < ((var_9 ? var_18 : var_1))));
    }
    var_23 = 4218751478;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            {
                var_24 = -19727;
                var_25 = 1111105407;
            }
        }
    }
    var_26 = ((((max((var_13 - var_8), var_3))) ? ((var_1 ? ((var_4 >> (var_17 + 7569393882760749268))) : ((var_9 ? -19744 : var_7)))) : -var_2));
    var_27 = (min(var_27, (max(-19744, 26532))));
    #pragma endscop
}
