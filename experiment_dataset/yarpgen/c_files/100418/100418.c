/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? var_3 : (arr_1 [i_0])));
        arr_3 [i_0] = ((!(!var_10)));
        var_12 = var_8;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [12] [i_0] = (((var_5 || 14) ? 3165826985 : (var_1 / 1275178977)));
                        arr_13 [i_0] [3] [i_1] [6] [i_0] = ((-14 & (arr_11 [i_3] [i_3 - 1] [i_2] [i_3 + 2] [i_3])));
                        var_13 += (((arr_5 [i_1]) ? (arr_5 [i_1]) : var_4));
                        var_14 = (!0);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                var_15 = (arr_4 [i_4] [i_4] [i_4]);
                var_16 = var_1;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_17 = (((arr_26 [7] [1] [1] [1]) || (!54)));
                            arr_28 [i_4] [i_4] [8] [i_4] [8] = var_7;
                            arr_29 [i_4] [i_4] [i_4] = var_7;
                            arr_30 [i_4] [i_5] [i_5] [i_4] [7] [i_4] [i_8 - 2] = (arr_1 [i_8 - 1]);
                        }
                    }
                }
                arr_31 [i_4] [i_4] [i_6] = var_6;
            }
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                arr_35 [i_4] [i_4] [i_4] [i_4] = (!(arr_0 [i_4]));
                arr_36 [i_4] [i_4] [i_9 - 1] [i_4] = var_1;
                arr_37 [15] [i_4] [i_9 + 1] [i_4] = ((0 ? var_2 : (arr_11 [i_9] [i_9 + 2] [i_9 + 1] [5] [i_9 - 1])));
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {
                        arr_43 [i_4] = (((1 ? var_5 : (arr_25 [i_4] [i_11]))));

                        for (int i_12 = 2; i_12 < 16;i_12 += 1)
                        {
                            arr_47 [i_4] [i_4] [1] [i_4] [i_4] [1] = ((var_7 ? var_4 : (arr_23 [i_12 - 2] [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 - 2])));
                            arr_48 [i_12 - 2] [i_4] [1] [i_4] [i_4] = 4161531766;
                            arr_49 [16] [i_4] [i_4] [i_4] = -var_2;
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            arr_53 [i_4] [i_13] [i_11] [i_10] [i_4] [i_4] = ((((var_4 ? 133435531 : var_10)) - var_5));
                            var_18 = 2550539945;
                            arr_54 [5] [i_5] [i_5] [9] [i_4] = (!var_8);
                        }
                    }
                }
            }
            var_19 = (((arr_46 [i_5] [i_5] [i_5] [i_4] [i_5] [3] [2]) ? (arr_24 [i_4] [i_4] [i_4]) : (arr_51 [i_4] [i_4] [i_4] [i_4] [i_5] [i_5])));
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                {
                    arr_60 [i_4] [i_4] [i_4] = 1;

                    for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
                    {
                        arr_65 [i_4] [i_4] [i_4] [i_4] [i_4] = ((((arr_21 [i_4] [i_4] [i_14] [i_14] [i_4]) ? 17 : (arr_6 [i_14]))));
                        arr_66 [i_14] [i_14] [i_4] [13] = ((arr_21 [i_4] [i_14] [i_14] [i_16] [i_14]) + (arr_58 [i_4] [1] [1] [i_16]));
                    }
                    for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
                    {
                        arr_69 [i_4] [1] = (((-14 + 2147483647) << (var_5 - 117)));
                        arr_70 [i_4] [i_14] = var_1;
                    }
                    for (int i_18 = 3; i_18 < 13;i_18 += 1)
                    {
                        arr_75 [i_4] = ((13688716536187204522 * (var_8 & var_4)));
                        arr_76 [i_4] [i_4] [i_4] [i_4] [1] = (!0);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 17;i_19 += 1)
    {
        arr_79 [i_19] [i_19] = (arr_61 [i_19] [i_19]);
        var_20 = (min(var_20, (((((!(arr_11 [1] [1] [1] [1] [i_19]))) ? (arr_55 [1]) : var_2)))));
    }
    var_21 = ((((var_0 - 2) ? (var_9 || var_1) : 0)));
    var_22 = var_1;
    var_23 = ((var_10 ? var_2 : (((!((max(var_5, 838218658))))))));
    #pragma endscop
}
