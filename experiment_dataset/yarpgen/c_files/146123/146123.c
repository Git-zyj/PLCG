/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [2] = var_12;
        arr_4 [i_0] = (220 - var_8);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = var_11;
                    arr_12 [i_2] [i_1] [1] = 174;
                    var_18 = (~-var_14);

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_15 [i_0] [8] [i_3] [1] = var_10;

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_1] [i_4] [18] [i_3] = 16568823426274788315;
                            arr_20 [i_3] [i_1] [i_3] [i_3] [i_4] [1] [i_3] = -18;
                        }
                    }
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_1] [i_2] [7] [i_5 - 2] = 887404363767678157;
                        arr_24 [i_5 + 1] = (~var_12);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_28 [i_0] [i_1] [0] [i_2] [i_6] = 15498853949544958277;

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            arr_31 [12] [i_1] = -114;
                            arr_32 [i_0] [i_1] [13] [13] [6] = var_16;
                            var_19 = (~var_0);
                            var_20 = var_7;
                            var_21 = ((var_3 >= var_1) <= var_3);
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_22 = (~var_0);
                            arr_36 [i_8] [i_8] [i_1] = var_5;
                            arr_37 [16] [i_8] [i_2] [i_2] [i_2] = (1 * 78);
                            arr_38 [i_0] [i_8] [7] [i_0] [i_0] [i_0] = 81;
                            arr_39 [i_8] [i_1] = -17130;
                        }
                        arr_40 [i_6] = var_14;
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        arr_44 [i_9] [i_2] = 27745;
                        arr_45 [15] [i_2] [i_1] [1] [i_0] = var_13;
                    }
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        arr_48 [i_10] = (((~4020615638649755843) > 11102));
        arr_49 [1] [i_10] = (((!90) != (((((max(88, var_1))) <= -89)))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 8;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            {
                                arr_62 [i_11] = var_0;
                                arr_63 [i_10] [i_11] [i_11] [9] [9] = (~var_8);
                            }
                        }
                    }
                    var_23 = 176;
                }
            }
        }
    }
    for (int i_15 = 1; i_15 < 24;i_15 += 1)
    {
        arr_66 [i_15 - 1] = (!var_6);
        var_24 = ((!(min((!var_5), var_8))));
    }
    #pragma endscop
}
