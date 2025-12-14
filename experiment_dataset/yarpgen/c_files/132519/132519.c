/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((~var_13) ? ((max(var_4, var_12))) : (min(var_11, 81036387036422905)))) > (var_1 >= 252)));
    var_15 = (max(var_15, -var_3));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (((((min((arr_2 [i_0]), var_3))) ? ((-(arr_2 [i_0]))) : var_4)));
        var_17 = (((var_0 + (arr_3 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_6 [10] &= ((min(var_1, (arr_5 [i_1 - 1] [i_1 - 1]))));
        var_18 = var_8;
        var_19 = 128;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_20 = var_8;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                {
                    var_21 = (max(var_21, 6406));
                    var_22 ^= (+(((arr_9 [i_4 + 2] [i_4 + 2] [i_4 + 3]) ? var_8 : (arr_9 [i_4 + 1] [i_4 + 3] [i_4 + 3]))));
                    arr_14 [14] |= var_3;
                    var_23 = ((18365707686673128710 ? 776419206480964534 : 11));
                }
            }
        }
        var_24 = (min(var_24, 18365707686673128710));
        var_25 = (min(var_25, 2195574666564033121));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    arr_26 [i_6] [i_5] [i_6] = max((min(var_3, (max(var_6, 4397509640192)))), 83);
                    arr_27 [i_5] [i_6] [i_7] = (min(((4360142086336991511 ? 18446744073709551615 : var_4)), 6920221782640709794));
                    var_26 = (max(var_26, (((min((arr_19 [i_5] [i_6] [i_7]), 70334384439296))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        var_27 = ((((163 && (arr_31 [i_5]))) ? ((var_6 ? (arr_31 [i_10]) : var_4)) : (arr_31 [i_10])));
                        var_28 = (max(var_28, ((min(181, (arr_33 [i_5]))))));
                        var_29 = (arr_28 [i_10]);
                        arr_35 [i_5] [i_5] [i_8] [i_5] [i_5] [i_10] = 8174;
                    }
                }
            }
        }
        var_30 = (var_12 ? (min((arr_22 [i_5] [i_5]), var_12)) : (arr_22 [i_5] [i_5]));
    }
    #pragma endscop
}
