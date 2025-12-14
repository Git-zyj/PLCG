/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((8451313356918109620 ? (max((min(140737488355327, var_8)), -var_3)) : var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 = (((~var_13) ? ((255 ? var_7 : var_7)) : var_13));
                    var_22 = 562949953421311;
                    arr_9 [i_0] = (((min(var_19, -1646881465628112847)) ^ (max(var_15, -8451313356918109624))));
                    arr_10 [i_0] = 54;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                arr_19 [i_3] [i_4] [i_4] = ((0 ? 1 : 41));
                arr_20 [i_4] [i_3] = ((((((1 == (arr_18 [i_3 + 1] [i_3 + 1] [i_4]))))) > (var_5 * var_14)));
                arr_21 [i_3] = 3463;
                var_23 = (((((9151314442816847872 ? 157 : (arr_7 [i_4] [i_4] [i_3 + 1])))) ? ((((arr_7 [i_3] [i_4] [i_3 + 1]) ? (arr_7 [i_4] [i_4] [i_3 + 1]) : (arr_7 [i_4] [i_4] [i_3 + 1])))) : ((var_18 ? 140737488355337 : var_16))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_35 [i_5] [i_5] [i_5] [i_5] [i_5] [i_8] = ((41 ? ((var_8 ? (~var_0) : (var_4 + 8600936304290209759))) : ((min((3490 - 235), ((40 ? var_2 : 28)))))));
                                var_24 = (~-837104750025016756);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            arr_41 [i_5] [i_6] [i_10] [i_6] = (~var_13);

                            /* vectorizable */
                            for (int i_12 = 0; i_12 < 19;i_12 += 1)
                            {
                                var_25 = (arr_33 [i_5] [i_6] [i_12] [i_11] [i_12]);
                                arr_44 [i_5] [i_10] [i_12] = var_0;
                                var_26 = (~175);
                                var_27 = ((~(arr_12 [i_11])));
                            }
                            for (int i_13 = 4; i_13 < 17;i_13 += 1)
                            {
                                arr_47 [i_5] [i_6] [i_10] [i_11] [i_13] = (((max(51, 5753036267661064417)) | -5584608653576099215));
                                var_28 -= (max(((((((arr_17 [i_6]) ? 31 : 111))) ? (var_12 || var_4) : (arr_30 [i_5]))), ((max(((26180 ? 54 : var_13)), 1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
