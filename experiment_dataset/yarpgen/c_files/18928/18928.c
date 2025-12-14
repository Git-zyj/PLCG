/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (~-7922115041291994496);
        arr_5 [i_0] = (min((9451 ^ var_1), (((arr_2 [i_0]) ? (arr_2 [i_0]) : var_5))));
        arr_6 [19] = -var_16;
        var_17 += (((-127 - 1) ? (max((arr_1 [i_0] [i_0]), var_15)) : var_2));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_9 [i_1] = (((arr_8 [i_1]) - 55346));
        var_18 = (min(var_18, (((4482329141667136629 ? var_1 : 127)))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_19 = ((-11946 - (arr_8 [i_2])));
        arr_14 [i_2] [i_2] = ((((((var_10 ? var_9 : var_13))) ? -6470 : ((12404276084698699239 ? (arr_12 [i_2]) : -1034280424)))));
        var_20 = (max((1 <= var_14), ((4482329141667136629 & ((var_15 ^ (arr_7 [i_2])))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        var_21 |= ((+(((arr_15 [i_3 + 1]) ? 4771067271082115123 : 19385))));
        var_22 = var_16;
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                var_23 = var_10;
                arr_22 [i_4] [2] = 1;
            }
        }
    }
    #pragma endscop
}
