/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_18 = ((-(arr_2 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] = min((((255 + ((min(1, var_7)))))), (min(((min(var_9, var_14))), var_2)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_2] [i_0] [4] [i_0] [i_0] = var_1;
                                var_19 = (min(756442297, ((min((max(var_9, (arr_6 [i_0] [i_0]))), (~31))))));
                                var_20 = (min((min((arr_0 [i_1 - 1]), 64385)), (max(55757, (arr_0 [i_1 - 3])))));
                            }
                        }
                    }
                    arr_16 [i_2] [i_1 + 1] [i_1] = ((!(((~(232410221 | 1))))));
                    var_21 = (min(var_21, ((((arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 1]) + (((arr_4 [i_1 - 2] [i_1 - 1] [i_1 + 1]) + (arr_10 [i_0] [i_1] [i_0] [i_1 + 1]))))))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_22 &= (max((--0), var_12));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        arr_28 [i_8] [i_5] [6] [i_6] [i_5] [6] = (~var_12);
                        var_23 -= ((((-1 & (arr_9 [i_5] [i_5] [i_5]))) > var_6));
                    }
                    var_24 = (max((max((((2902369063 | (-32767 - 1)))), (~-5590705893354926444))), var_10));
                }
            }
        }
        arr_29 [i_5] = (min((min((min(var_0, 41007)), (!20511))), 0));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
    {
        var_25 = (((4294967168 & 25900) ? (~var_15) : ((55757 | (arr_5 [8] [i_9])))));
        var_26 = (arr_27 [i_9] [1] [i_9] [i_9] [i_9] [i_9]);
        var_27 = var_3;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_28 = ((255 + (arr_35 [i_10])));
                    var_29 = var_9;
                    arr_42 [i_10] [i_10] [i_11] = 0;
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_30 = (max(var_30, 1));
                                var_31 *= ((((var_12 ? var_11 : -30412)) ^ var_17));
                            }
                        }
                    }
                }
            }
        }
        var_32 = (((arr_23 [i_10] [i_10] [i_10] [11]) | (arr_23 [i_10] [i_10] [i_10] [0])));
        /* LoopNest 2 */
        for (int i_15 = 4; i_15 < 12;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 11;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 11;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 11;i_18 += 1)
                        {
                            {
                                var_33 = (max(var_33, -1));
                                var_34 = 18897;
                                var_35 *= ((!(~var_2)));
                            }
                        }
                    }
                    arr_58 [i_15] [i_15 - 2] = ((var_17 | (var_8 & var_2)));
                    arr_59 [i_10] [i_15] [12] = (var_12 / var_0);

                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        var_36 -= 3538524999;
                        arr_63 [1] [i_19] [i_10] [i_19] [i_10] |= 15859516280698302315;
                    }
                    for (int i_20 = 2; i_20 < 12;i_20 += 1)
                    {
                        var_37 = (((arr_30 [i_10]) ? (arr_30 [i_10]) : var_0));
                        arr_67 [i_10] [i_15] = var_16;
                        arr_68 [1] [i_15] = (!248);
                        var_38 = (var_5 & 55);
                        var_39 = var_10;
                    }
                }
            }
        }
    }
    var_40 = (max(var_8, (min((max(0, 17)), var_8))));
    var_41 = ((var_1 ? var_17 : (((var_7 & var_17) | 960))));
    var_42 = 1;
    var_43 = (min(var_43, var_0));
    #pragma endscop
}
