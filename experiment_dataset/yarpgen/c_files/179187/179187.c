/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_11);

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, var_0));
        arr_2 [i_0] = (arr_0 [18]);
        arr_3 [14] = 1835580437;

        for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_16 = (min((arr_4 [i_0] [i_0 + 2] [i_1 - 2]), (((!(arr_1 [i_1 - 1]))))));
            var_17 = (~506965032592356643);
        }
        for (int i_2 = 2; i_2 < 19;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_18 = (min(16739282487914646618, 986656726));
                var_19 += ((-var_2 ? (((var_13 > ((((arr_0 [i_0]) ? 3308310558 : var_4)))))) : (arr_6 [i_0] [19])));
                var_20 = (((min(var_4, 3308310558)) % (min(1, ((1102868505 ? 1102868498 : (-32767 - 1)))))));
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_21 = ((max(986656715, (arr_13 [i_2 - 2] [i_2 - 2] [i_6 + 1] [i_5 - 1]))));
                            var_22 = (((arr_18 [i_0] [i_0] [i_4] [i_0] [i_6]) < (!1)));
                            arr_19 [i_2] [i_5] [3] [12] [i_2] = ((((~(arr_18 [i_0] [1] [i_0] [i_0 + 1] [i_2 - 1])))) ? (arr_5 [i_2 - 1] [19]) : (arr_13 [i_2 - 1] [i_5 - 1] [i_6] [i_6 + 1]));
                        }
                    }
                }
            }
        }
        for (int i_7 = 2; i_7 < 19;i_7 += 1) /* same iter space */
        {
            var_23 = ((-(((!(arr_6 [i_7] [i_7]))))));

            /* vectorizable */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                var_24 = (!1);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_25 = (max(var_25, (arr_23 [i_0 - 1])));
                            var_26 = (max(var_26, ((var_8 ? (arr_15 [i_7 - 1] [i_7 - 1] [i_7 - 2] [i_0 - 1]) : (arr_15 [i_7 + 1] [i_7 + 1] [i_7] [i_0 + 1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_27 = (var_2 / var_6);
                            arr_35 [i_0 - 1] [i_0 - 1] [i_8] [i_11 + 2] [i_11 + 2] = (arr_8 [i_0 + 3] [i_11] [i_11 + 1]);
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_13 = 4; i_13 < 16;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        {
                            arr_43 [i_15] [i_14 - 1] [i_13] [i_7] [i_15] = 241;
                            var_28 = 1102868505;
                        }
                    }
                }

                for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                {
                    arr_48 [i_0] [16] = -429028538;

                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        arr_51 [i_0] [i_7] [0] [i_16] [i_16] [0] = (((var_3 + 2147483647) << (var_11 - 1967159604)));
                        var_29 = 986656751;
                    }
                    for (int i_18 = 2; i_18 < 19;i_18 += 1) /* same iter space */
                    {
                        var_30 = 3192098814;
                        arr_55 [i_0] [i_7 + 1] [i_13 + 4] [i_16] [i_7 + 1] [i_16] [i_18] = (arr_36 [i_7 - 2]);
                    }
                    for (int i_19 = 2; i_19 < 19;i_19 += 1) /* same iter space */
                    {
                        var_31 = (((arr_5 [i_16] [i_16]) >> (arr_1 [i_7])));
                        var_32 = (max(var_32, 854703216));
                    }

                    for (int i_20 = 3; i_20 < 18;i_20 += 1)
                    {
                        var_33 = ((!(arr_25 [i_0 + 3] [i_7] [i_13])));
                        arr_60 [i_20] [i_16] [i_13] [i_13 + 3] [i_0] [i_0] = (((arr_26 [5] [5] [i_13 + 2] [i_16] [2]) ? (arr_26 [i_0] [9] [i_13 + 1] [i_0] [1]) : (arr_26 [i_0] [i_13] [i_13 - 4] [i_20] [1])));
                        var_34 = (arr_7 [i_7 - 2]);
                        var_35 = (arr_22 [1] [i_13 - 4] [i_20]);
                    }
                    var_36 = (max(var_36, (((-1195815540 ? 247 : ((var_4 ? var_6 : var_4)))))));
                }
                for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
                {
                    arr_63 [i_21] [i_0] [i_7] [i_7] [i_0] = (arr_28 [14] [14] [i_13 - 1]);
                    arr_64 [i_0 + 3] [i_21] [i_13 - 1] [i_21] = var_7;
                    arr_65 [i_21] [i_0] [i_7 - 2] [i_0] [i_0] [i_21] = 1;
                    arr_66 [i_21] [i_7] [i_21] = var_5;
                }
                for (int i_22 = 0; i_22 < 0;i_22 += 1)
                {
                    arr_69 [i_0] [i_7 + 1] [i_22] [i_22] = (((((arr_40 [15] [i_13 + 3] [6] [6]) & 18446744073709551615)) > (((~(arr_28 [11] [11] [11]))))));
                    var_37 = (min(var_37, ((((!208) >= ((var_1 ? (arr_17 [i_0] [i_0] [i_0]) : var_10)))))));
                }
            }
        }
    }
    for (int i_23 = 1; i_23 < 17;i_23 += 1) /* same iter space */
    {
        arr_72 [1] = (((var_4 ? (((var_4 <= (arr_23 [15])))) : -116)));
        arr_73 [i_23] = (min((((!(arr_71 [i_23])))), (!9578361581266005718)));
        var_38 = 0;
        arr_74 [i_23] [i_23] = (arr_23 [6]);

        for (int i_24 = 1; i_24 < 17;i_24 += 1)
        {
            arr_77 [i_24] [i_24] = ((max((arr_44 [i_24 + 1]), (arr_44 [i_24 + 2]))));
            arr_78 [i_24] [13] [i_24 + 3] = (((arr_27 [i_23] [2] [i_23] [i_23]) ? ((((0 ? var_12 : 100)) / 1)) : ((var_6 ? ((min(var_6, (arr_71 [i_24 + 2])))) : (arr_5 [i_23 + 3] [i_23 - 1])))));
            /* LoopNest 3 */
            for (int i_25 = 0; i_25 < 20;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 20;i_27 += 1)
                    {
                        {
                            var_39 = (min(var_39, (((43498 ? -119 : 18138)))));
                            arr_87 [i_24] = var_1;
                            var_40 = 1;
                            arr_88 [i_27] [i_24] [i_26] [i_25] [i_24] [i_24] [i_23] = ((~(arr_47 [i_23] [i_23] [i_23] [i_23])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_28 = 1; i_28 < 16;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 20;i_29 += 1)
                {
                    {
                        var_41 = (min(((min((arr_71 [i_23 - 1]), (min(189, (arr_21 [i_29])))))), (((arr_95 [i_29] [19] [19] [i_23]) ? (arr_90 [i_23] [i_23] [1]) : (arr_29 [i_29] [i_29] [5] [8] [i_23 - 1])))));
                        arr_96 [i_23] [4] [i_24] = ((~(~var_0)));
                        arr_97 [i_24] = ((!(!-7254416507700255906)));
                    }
                }
            }
        }
    }
    var_42 = var_3;
    #pragma endscop
}
