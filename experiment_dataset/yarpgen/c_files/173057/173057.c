/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = 158;
                var_12 = (min(var_12, (((~-1884040468) ? (arr_2 [i_0] [i_0]) : ((-((~(arr_2 [4] [14])))))))));
                arr_4 [i_0] = ((-((-1884040468 + (((arr_1 [i_0]) + 1884040445))))));
                var_13 = ((var_5 ? (!var_2) : (~-6688739651452074582)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_7 [14] = var_5;
        var_14 = var_9;
    }
    for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_15 = ((-((~(arr_1 [i_3 + 1])))));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_18 [i_3] [i_3] [9] [i_4] = ((-(arr_17 [i_3] [i_4] [i_5] [i_3 - 2])));
                        var_16 = -1884040441;

                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            arr_22 [i_4] [6] [i_6] [i_4] = (~0);
                            var_17 = (!1884040445);
                        }
                        var_18 = (((arr_21 [i_3 - 3]) ? (arr_13 [i_3 - 3]) : (arr_21 [i_3 - 2])));
                        var_19 = (min(var_19, (((~((var_7 ? 150 : (arr_10 [2]))))))));
                    }
                }
            }
            var_20 = -13;
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        var_21 = (max(var_21, ((max(13, 7)))));
                        var_22 = ((((var_9 || 1) ? -62 : ((var_10 ? var_6 : (arr_17 [i_3 - 3] [i_9] [i_9] [i_3 - 3]))))));
                        var_23 = (max(var_23, (!var_8)));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            arr_38 [i_3] [i_8] [i_11] = (arr_31 [i_3]);
                            var_24 ^= (~(1 || 211));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 10;i_15 += 1)
                {
                    {
                        var_25 ^= (65032 / var_9);
                        var_26 = (max(var_26, (min(((!(arr_25 [i_15]))), (!-var_1)))));
                    }
                }
            }
        }
    }
    for (int i_16 = 3; i_16 < 11;i_16 += 1) /* same iter space */
    {
        arr_49 [i_16] [i_16 - 3] = (((var_5 < 1073741823) - (((!(arr_36 [i_16] [i_16] [i_16] [i_16] [i_16]))))));
        var_27 += (((((var_7 ? (arr_26 [0] [i_16 + 1]) : -89))) - (min((~var_2), var_9))));
        var_28 = (!var_6);
        arr_50 [i_16] = (((((arr_2 [i_16] [1]) != (2042934838 || 10572))) ? var_0 : 248));
    }
    var_29 = ((-(+-1599678363)));
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 13;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 13;i_18 += 1)
        {
            {
                var_30 -= ((~((~(arr_0 [i_17] [i_17])))));

                /* vectorizable */
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {
                    var_31 ^= ((((arr_0 [i_17] [i_17]) ? 63 : (arr_6 [i_17]))));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 13;i_21 += 1)
                        {
                            {
                                var_32 = (~128);
                                var_33 += (arr_51 [i_17] [i_17]);
                                var_34 ^= (((arr_56 [i_21]) ? (arr_58 [i_17]) : var_7));
                                arr_65 [i_18] [i_18] [i_19] [i_19] [i_21] = (((arr_62 [i_18] [i_18] [i_18] [i_18] [1]) - ((-(arr_61 [0] [i_18] [10] [i_20] [i_21])))));
                            }
                        }
                    }
                    arr_66 [i_17] [i_18] [i_19] = (!var_6);
                }
            }
        }
    }
    #pragma endscop
}
