/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = (((max((arr_7 [i_0] [i_1] [i_2]), (7151 * var_1)))) ? (~var_0) : ((var_0 ? 7151 : ((var_7 ? (arr_2 [6] [2]) : var_6)))));
                    arr_10 [i_2] [i_1] [i_0] = (((-9223372036854775807 - 1) <= ((((max(7132, (arr_4 [i_0])))) ? 11193007224649268907 : (arr_8 [i_0])))));
                    var_10 = ((((max(((7151 ? 2600813418 : 36675)), (arr_4 [i_2])))) ? var_8 : var_5));
                }
            }
        }
    }
    var_11 = (var_5 >= -6918203365405811975);

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_13 [i_3] = (((-2147483638 ? (arr_12 [i_3] [i_3]) : -12229)));
        arr_14 [i_3] [i_3] = -2147483643;
        arr_15 [i_3] [i_3] = ((((((arr_11 [i_3]) ? (arr_11 [20]) : 2600813418))) > var_5));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_18 [i_4] = ((!(((((arr_17 [i_4]) != var_6))))));
        var_12 = (((max((var_1 >= var_3), (arr_12 [i_4] [i_4])))) ? -7137 : var_0);
        var_13 ^= (((((arr_12 [i_4] [i_4]) - (arr_12 [i_4] [i_4]))) + (((arr_11 [19]) ? (arr_12 [8] [i_4]) : (arr_12 [12] [i_4])))));
        var_14 ^= ((max((arr_17 [i_4]), var_5)) << (((--36676) - 36676)));
        arr_19 [i_4] [18] = -2147483622;
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            {
                arr_26 [i_5] &= ((36694 ? ((var_2 * (((!(arr_20 [i_6])))))) : var_4));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    arr_30 [i_5] [8] [i_6] = (((arr_22 [i_5 + 1]) ? (arr_29 [i_6 - 3] [10]) : (arr_29 [i_6 - 3] [i_5])));
                    var_15 = -9223372036854775789;

                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        var_16 += (((arr_32 [i_6] [6] [i_7] [i_7] [i_8 + 1]) ? (arr_32 [i_7] [i_8] [i_8] [i_7] [i_8 + 1]) : -1091107444));
                        arr_33 [i_5] [i_6] [i_6] [i_5 + 1] = ((var_0 ? var_6 : (arr_23 [i_6 + 1] [i_6])));
                        arr_34 [15] [i_6] = 107;
                    }
                    arr_35 [i_7] [i_6] [i_6] [3] = (arr_29 [i_5] [i_7]);
                    arr_36 [i_5] [12] [i_6] = var_9;
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    var_17 = min(19701, (12114 == var_4));
                    var_18 ^= -2147483638;
                }
            }
        }
    }
    #pragma endscop
}
