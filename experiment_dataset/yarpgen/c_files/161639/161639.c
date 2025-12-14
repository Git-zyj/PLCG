/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (!((min(-16, ((min(var_11, (arr_1 [i_0]))))))));
        arr_3 [i_0] |= (((!var_6) ? (~var_11) : ((((((var_12 ? var_10 : (arr_1 [i_0])))) || (50735 && -1567508450046028751))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_13 = (!var_2);
            var_14 = (((arr_4 [i_1]) & (arr_4 [i_0])));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_15 = var_8;
            arr_8 [i_0 + 2] [i_0 + 2] = arr_7 [i_0 - 4] [1];
            arr_9 [i_0] = var_1;
        }
        arr_10 [i_0] [i_0] = (!var_7);
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_16 = ((!((((var_6 ^ var_9) ? (((arr_13 [i_3] [i_3]) ? (arr_11 [i_3] [i_3]) : var_12)) : var_1)))));
        var_17 ^= (arr_13 [14] [14]);
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        var_18 = (max(var_18, (arr_15 [i_4])));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_22 [i_7 + 3] [i_5] [i_5] = (((((1 ? 16230 : (arr_15 [i_4])))) ? (max(var_5, (arr_17 [i_5] [i_6 - 1] [i_6 - 1]))) : (max(var_2, 1544034047))));
                        var_19 = (((max(((((arr_19 [i_4] [i_5] [i_5] [i_4]) | var_9))), (max((arr_16 [i_5]), 13457019629452250290)))) & (arr_12 [i_4])));
                        arr_23 [i_5] [i_5 + 3] [i_5 + 3] [i_5 - 1] [i_5] [i_5] = (((((((arr_12 [i_4 + 1]) & 3126394243)))) ? var_2 : (((((min((arr_12 [i_4]), (arr_15 [i_7])))) ? (arr_21 [i_7]) : (!3421973861))))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        var_20 = (max(var_20, 2788439207));
        var_21 *= var_0;
        var_22 ^= var_6;
    }
    var_23 &= (max(var_10, (var_8 & var_2)));
    #pragma endscop
}
