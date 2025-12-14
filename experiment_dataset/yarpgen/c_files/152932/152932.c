/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = min((arr_1 [i_0]), (arr_2 [i_0] [i_0]));
        var_18 = ((arr_1 [i_0]) ? var_5 : ((var_6 ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        var_19 = (max(var_19, ((max(127, var_7)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_20 = var_3;
            var_21 = (min(var_21, (arr_7 [i_1])));

            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_14 [8] [i_2] [11] = (arr_2 [i_1] [i_2]);
                    var_22 = (-9223372036854775807 - 1);
                    var_23 = ((~((1765930152 ? (arr_13 [i_2] [i_3 + 1] [i_2] [i_1]) : var_16))));
                }
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    arr_18 [i_3] [i_2] [1] [i_5] = (((var_3 > var_12) > ((var_9 ? 7 : (arr_0 [i_2])))));
                    var_24 = (((arr_17 [i_1] [i_1] [0] [i_3] [i_5 + 1] [i_5]) != (arr_17 [i_1] [i_2] [0] [i_2] [i_2] [1])));
                    var_25 = ((var_13 ? var_9 : var_0));
                    arr_19 [i_1] [i_2] [16] [i_5] = 2957654;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_26 = (arr_1 [1]);
                    var_27 = ((var_0 ? (arr_9 [i_1] [i_3 + 1] [i_3]) : (arr_11 [i_1] [i_3 + 2] [i_3 + 2])));
                    arr_22 [i_1] [i_2] [i_3] [i_6] = var_12;
                    var_28 = var_5;
                }
                arr_23 [4] = (((~var_9) - (arr_17 [i_1] [i_2] [i_1] [i_2] [i_3] [i_3])));
                var_29 = -var_10;
                arr_24 [i_1] [i_3 + 2] [i_1] [i_3 + 2] = var_5;
            }
        }
        for (int i_7 = 3; i_7 < 14;i_7 += 1)
        {

            for (int i_8 = 2; i_8 < 17;i_8 += 1)
            {
                var_30 = (arr_16 [i_1] [i_7 - 2] [i_7] [i_8 + 1]);
                var_31 = var_3;
                arr_31 [i_8] [i_7] [i_1] [i_1] = (((arr_16 [i_7 + 1] [i_7 + 1] [i_7 + 4] [i_7 + 2]) == 4015012088));
                var_32 = (((arr_29 [i_7 + 4] [i_7 - 2] [i_7 - 2]) % (arr_28 [i_7 + 3])));
                var_33 = var_8;
            }
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                var_34 = (454990325 > 12);
                var_35 = var_10;
                arr_35 [i_1] [i_7] [i_9] = (((arr_5 [i_7 - 3] [i_7 + 3]) ? (arr_26 [i_9] [i_9] [i_9]) : (arr_8 [14])));
                var_36 = (((var_12 >= var_0) ? ((var_15 ? (arr_9 [i_1] [i_1] [i_9]) : (arr_2 [i_1] [i_9]))) : (arr_1 [1])));
            }
            arr_36 [i_1] = (((-127 - 1) ? ((210 ? var_13 : var_8)) : -119));
        }
        var_37 = var_1;

        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
        {
            var_38 = var_9;
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        {
                            arr_48 [i_1] [i_10] [i_1] [i_11] [i_12] [i_13] = (arr_43 [i_1] [i_1] [i_1] [i_1] [12]);
                            var_39 = (max(var_39, ((((arr_12 [i_11 - 1] [i_11 - 1] [i_11 - 1]) > -9223372036854775803)))));
                            var_40 = ((-(arr_12 [2] [i_11] [i_10])));
                            var_41 = -var_15;
                        }
                    }
                }
            }
            var_42 = (max(var_42, ((((arr_10 [i_1] [i_10] [i_1] [i_10]) ? ((((arr_7 [i_1]) ? var_4 : var_4))) : var_11)))));
            var_43 = (arr_42 [i_10] [i_1] [i_10] [i_10]);
        }
        for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 1; i_15 < 16;i_15 += 1)
            {
                var_44 = (arr_11 [i_15] [1] [i_1]);
                arr_55 [i_1] [i_14] [i_15] [i_1] = (arr_42 [i_1] [i_14] [3] [i_15 + 2]);
                var_45 = (max(var_45, (arr_25 [i_14])));
                var_46 = 22880;
            }
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    var_47 = ((10910106260782144442 * (arr_26 [i_1] [i_14] [i_16])));
                    arr_61 [9] [i_16] [i_16] [i_17] [13] [i_17] = ((var_11 ? (arr_21 [12] [13] [i_1] [i_17] [i_17]) : (arr_21 [i_1] [i_14] [i_17] [i_14] [i_17])));
                }
                for (int i_18 = 3; i_18 < 16;i_18 += 1)
                {
                    var_48 = (arr_44 [i_18 - 2] [i_18 + 1] [i_18 - 2] [16] [i_18 - 3] [i_18 - 3]);
                    var_49 += var_4;
                    var_50 = (((arr_26 [i_18 - 3] [i_14] [i_1]) < (arr_26 [i_14] [i_16] [i_18 - 2])));
                }
                arr_65 [i_1] [1] [i_1] [i_14] |= (((var_16 ? 2409989528 : -14080)));
                arr_66 [i_16] [i_14] [14] = (((((var_10 ? (arr_11 [i_1] [i_14] [1]) : var_8))) ? (((var_4 > (arr_58 [i_1] [i_14])))) : ((var_14 ? -32756 : 0))));
            }
            /* LoopNest 3 */
            for (int i_19 = 2; i_19 < 17;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 14;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 17;i_21 += 1)
                    {
                        {
                            arr_75 [10] [i_14] [17] [i_19] [i_20] [i_20] [i_20] = (((arr_13 [i_1] [i_20 - 2] [i_19 - 1] [i_21 + 1]) ? (arr_69 [i_21] [i_20 + 3] [i_19 + 1] [i_21 + 1]) : (arr_69 [i_1] [i_20 + 3] [i_19 - 2] [i_21 - 2])));
                            arr_76 [i_19] [i_20] [i_19] [i_20] [4] = (((arr_39 [i_19 - 2] [i_19 - 2] [i_19 - 1]) ? (arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [16]) : (arr_58 [i_1] [i_1])));
                        }
                    }
                }
            }
            var_51 = (min(var_51, var_12));
            arr_77 [i_1] [i_1] [10] = ((((arr_5 [i_1] [i_1]) ? (-9223372036854775807 - 1) : var_17)));
        }
        var_52 = -11;
    }
    var_53 = var_12;
    var_54 = (max(((((~var_8) - var_0))), ((((15647645874777109940 ? 2799098198932441676 : 126)) | (min(var_12, var_12))))));
    var_55 -= (min(var_10, ((var_0 ? ((-121 ? 279955191 : 400115614)) : (24 <= var_1)))));
    #pragma endscop
}
