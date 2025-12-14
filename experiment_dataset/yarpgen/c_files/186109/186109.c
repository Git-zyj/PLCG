/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 = (((((3121148727609405566 ? 15325595346100146049 : 3797079938))) ? var_16 : 119));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_7;
        var_19 = (min(var_19, (((var_9 + var_11) ? ((var_0 + (var_12 / -19206))) : (((~var_0) ? ((var_16 ? var_5 : 17826726884008696661)) : (((((arr_0 [i_0] [2]) || var_12))))))))));
        var_20 = (min((((var_13 | var_5) + -355753962)), -var_16));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = (arr_4 [i_1] [i_1]);
        var_21 += (((~4105250715) ? 31507 : var_9));
        var_22 = var_13;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [i_3] [i_1] [i_1] [i_1] = var_3;
                                var_23 = (arr_10 [i_1] [i_1] [1]);
                            }
                        }
                    }
                    var_24 = (~-31503);

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_25 = ((var_1 ? -9 : (var_7 != var_16)));
                        arr_22 [i_3] = -var_6;
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {

            for (int i_9 = 3; i_9 < 24;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    arr_34 [i_8] = (~var_14);
                    var_26 = var_13;

                    for (int i_11 = 3; i_11 < 24;i_11 += 1)
                    {
                        var_27 = (max(var_27, var_2));
                        arr_38 [i_7] [22] [i_11 - 3] [i_10] [i_8] = (((~5382782691361647423) ? 24 : var_11));
                        var_28 = (var_14 - var_7);
                    }
                    for (int i_12 = 2; i_12 < 24;i_12 += 1)
                    {
                        var_29 *= -472600805080676754;
                        arr_41 [i_8] [i_8] [i_9 + 1] [i_10] [i_12] = ((91 ? 0 : 1280263274));
                        arr_42 [i_8] = var_12;
                        var_30 |= ((var_9 == (arr_30 [i_7] [i_10] [i_9 + 1] [i_7])));
                    }
                }
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    arr_46 [i_13] [i_8] [i_8] [i_7] = (var_10 ? var_5 : (arr_23 [i_9 - 2] [i_8 - 1]));
                    var_31 = ((~((var_9 ? var_9 : 5))));
                    var_32 = (92 | -19192);
                    arr_47 [i_8] [i_9] [i_8 - 1] [i_8] = (!0);
                    arr_48 [i_7] [i_8] [i_8] [i_13] = -13055;
                }
                var_33 &= ((var_1 ? (arr_23 [i_8 - 1] [i_8 - 1]) : var_2));

                for (int i_14 = 1; i_14 < 23;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        var_34 = ((var_12 ? var_10 : var_12));
                        var_35 = arr_30 [i_8] [i_9 - 1] [i_14] [i_8];
                        var_36 -= (((arr_35 [i_7] [i_7] [i_8 - 1] [0] [i_14] [i_15]) ^ (arr_40 [i_9 - 2] [i_9 - 3] [i_9 + 1])));
                    }
                    for (int i_16 = 1; i_16 < 23;i_16 += 1)
                    {
                        arr_58 [i_7] [i_8] [i_9] = var_16;
                        var_37 = ((1 ? 21 : var_10));
                        var_38 = var_0;
                    }
                    for (int i_17 = 2; i_17 < 22;i_17 += 1)
                    {
                        arr_61 [i_8] [i_8] [i_9 - 3] [i_9 - 3] [15] = ((0 | ((var_2 ? (arr_25 [i_7]) : var_9))));
                        var_39 = var_11;
                        var_40 = (min(var_40, ((var_12 ? var_16 : var_10))));
                    }
                    arr_62 [i_8] [i_7] = (27 + var_1);
                }
                var_41 = ((-(arr_32 [i_9] [i_9 - 3] [i_8 - 1] [i_8 - 1])));
            }
            for (int i_18 = 0; i_18 < 25;i_18 += 1)
            {
                var_42 = (((7172354896549085986 ^ 110) / var_0));
                arr_66 [i_7] [i_18] [i_8] [i_7] = (var_9 != 355647067);
            }
            var_43 = ((((var_0 ? var_13 : (arr_28 [i_7] [i_8] [18]))) > (arr_57 [i_8 - 1] [i_7] [i_8] [i_7] [i_7] [i_7])));
            arr_67 [i_8] [i_8] = -104;
        }
        /* vectorizable */
        for (int i_19 = 1; i_19 < 24;i_19 += 1)
        {
            var_44 = ((var_12 ? 11 : var_9));
            var_45 = (((((200 ? var_1 : 29024))) ? var_13 : (arr_50 [i_19 - 1] [i_19 - 1] [i_19 - 1])));
            var_46 ^= -var_6;
        }

        for (int i_20 = 3; i_20 < 23;i_20 += 1)
        {
            var_47 = (min(var_47, var_1));
            arr_73 [i_7] = (((((((var_8 ? var_4 : 298050861)) | var_4))) ? (((~(6 & var_5)))) : (var_15 | var_8)));
        }
        for (int i_21 = 0; i_21 < 25;i_21 += 1)
        {
            var_48 = ((var_6 ? (min(3683153239, 4)) : (((-(var_4 && 33))))));
            arr_76 [i_21] = var_2;
        }
    }
    #pragma endscop
}
