/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-((((min(55608, var_3))) / var_3))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((+(((arr_0 [i_0]) << (((arr_0 [i_0]) - 22281))))))) : (((+(((arr_0 [i_0]) << (((((arr_0 [i_0]) - 22281)) + 840)))))));
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = (arr_0 [i_0]);
        var_14 = (arr_1 [i_0 + 1]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((((!var_8) % 55608)))));
                    var_16 = ((((171 ? 0 : 0)) < (!14)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (122 || var_12)));
                                arr_15 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 2] = 56796;
                                arr_16 [i_0] [i_1] [i_1] [i_0] = var_3;
                                arr_17 [i_0] [i_1] [i_0] [i_0] [i_2] [i_3] [i_0] = ((var_11 ? (!var_0) : (((arr_5 [i_3] [i_3] [i_2]) ? (arr_6 [i_0] [i_0] [i_0 - 3]) : var_7))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_18 = (44 ? (arr_13 [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0]) : 14);
                                arr_22 [i_0] [i_0] = var_10;
                                var_19 = (min(var_19, (((!(arr_1 [i_1 - 1]))))));
                                arr_23 [i_0] = ((1 ? -1 : 32765));
                                var_20 = (((arr_19 [i_0] [i_5] [i_2] [i_1] [i_0 - 1] [i_0]) ? ((var_3 ? var_3 : (arr_8 [i_0] [i_1 + 1] [i_5] [i_0]))) : var_7));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {
                        arr_35 [i_9] [i_10] = ((((var_1 ? (arr_33 [i_8] [i_9]) : (arr_33 [i_9] [i_9])))) ? (max(var_0, (arr_33 [i_7] [i_9]))) : (arr_33 [i_8] [i_9]));
                        var_21 ^= (!2147483641);
                    }
                }
            }
        }
        var_22 = (min(var_22, var_12));
        arr_36 [i_7] [i_7] = ((!((!(((var_11 ? var_7 : var_3)))))));
        var_23 = 1;
        /* LoopNest 3 */
        for (int i_11 = 3; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 20;i_13 += 1)
                {
                    {
                        var_24 = (max((max(var_7, (((arr_32 [i_7] [i_12] [i_7] [i_7] [i_7] [i_7]) ? 215 : (arr_26 [i_11 + 2] [i_11 + 2]))))), ((var_11 ? var_2 : var_5))));
                        var_25 = (min(var_25, 9223372036854775807));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 4; i_14 < 20;i_14 += 1)
    {
        arr_45 [i_14] [i_14] = (arr_26 [i_14 - 3] [i_14 - 1]);
        arr_46 [i_14] = -22;
        var_26 = (max(var_26, ((((arr_28 [i_14 - 4]) > (arr_28 [i_14 - 4]))))));
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 18;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                {
                    var_27 = ((+(((arr_32 [i_14 - 1] [i_14 - 4] [i_14] [i_14 - 4] [i_14] [i_14]) ? var_9 : 41))));

                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        var_28 += arr_34 [i_17] [i_17] [i_15 + 3] [i_16] [i_15 + 3] [i_14];
                        var_29 = (max(var_29, (arr_49 [i_14 - 1])));
                    }
                    var_30 -= 1;
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 19;i_18 += 1)
    {
        var_31 = var_8;
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 19;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 18;i_20 += 1)
            {
                {
                    var_32 ^= var_0;

                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        var_33 = (min(var_33, (!var_8)));
                        arr_65 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = (max((((!(!var_12)))), var_4));
                    }
                    arr_66 [i_18] [i_18] [i_20] = (arr_14 [i_18] [i_20] [i_19] [i_19] [i_19] [i_18]);
                }
            }
        }
    }
    var_34 = (max(15376203525112803697, var_7));
    #pragma endscop
}
