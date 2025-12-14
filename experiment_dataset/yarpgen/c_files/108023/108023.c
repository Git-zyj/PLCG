/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_0 [19]);
                arr_5 [i_0] = var_7;
                var_14 = (min(var_14, ((1150851112 ? (arr_0 [i_1]) : 13824156219667798227))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_9 [i_2] = ((-3718202629154191902 ? (((((var_13 ? (arr_0 [i_2]) : var_3))) ? var_10 : (((arr_6 [i_2] [11]) ? 47012 : (arr_3 [i_2]))))) : var_13));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_17 [0] = var_10;
                    var_15 = (max(var_15, 2323117684));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_25 [i_2] [i_5] [i_5] [i_6 - 1] = (arr_14 [14]);
                                arr_26 [i_2] [i_2] [i_2] [13] [i_5] = 13824156219667798231;
                                arr_27 [i_5] [i_6] [i_5] [12] = (((arr_15 [i_3]) ? -1 : (((((var_12 ? var_7 : var_4))) ? ((1 ? -819694312 : var_12)) : ((-1 ? var_9 : var_2))))));
                                arr_28 [12] [i_5] [9] [i_5] [i_2] = ((((var_8 ? (((var_5 ? var_7 : var_10))) : (arr_23 [i_6 + 1])))) ? (((((var_13 ? var_10 : var_8))) ? 4622587854041753388 : (((5880389127063736624 ? 4294967295 : -7771799999302792358))))) : (((-11701 ? (arr_13 [i_5] [i_5] [i_5]) : ((7 ? var_4 : (arr_21 [i_5] [i_5] [i_4] [i_5])))))));
                            }
                        }
                    }
                    arr_29 [i_4] [i_4] [1] [0] = ((var_5 ? var_6 : ((var_0 ? var_1 : (arr_8 [i_4] [i_3])))));
                }
            }
        }
        arr_30 [i_2] = 37;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        arr_37 [i_8] = (((((arr_19 [i_2] [i_7] [i_8] [i_9]) ? var_3 : var_6))) ? 1 : ((13 ? 1 : (arr_19 [i_2] [i_7] [i_9] [i_9]))));
                        arr_38 [i_8] [i_8] [i_8] [i_8] [i_8] = (((arr_15 [i_8]) ? ((-13 ? ((var_1 ? 5880389127063736626 : (arr_20 [i_8] [i_7] [i_7]))) : (arr_2 [i_2] [i_7]))) : (arr_12 [i_8] [i_2])));
                        arr_39 [i_2] [i_2] [i_2] [i_9] [i_9] [i_9] = var_0;
                        arr_40 [10] [10] [i_9] = var_10;
                    }
                }
            }
        }
        var_16 = (arr_23 [i_2]);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        arr_44 [i_10] = ((var_13 ? 13527 : var_2));
        arr_45 [2] [10] |= ((((((arr_1 [i_10]) ? var_9 : var_7))) ? (((arr_0 [i_10]) ? -827057710 : -1249401416254233464)) : 1845679862621282352));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 19;i_14 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((4294967286 ? 4294967286 : -32)))));
                                arr_56 [i_11] [i_11] [i_13] [i_11] [i_10] = var_12;
                            }
                        }
                    }
                    arr_57 [i_10] = var_1;
                }
            }
        }
    }
    #pragma endscop
}
