/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((((7374668714211666088 > (((11072075359497885528 ? 394806790 : -394806806))))) ? (((!var_12) % var_13)) : (arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_20 = ((((min((arr_4 [i_0] [i_1]), 394806790))) ? var_18 : (((arr_4 [i_1] [i_0]) ? ((127 ? -127 : -121)) : 115))));

            /* vectorizable */
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                arr_10 [i_0] [i_2] = arr_7 [i_2] [i_1] [i_2];
                arr_11 [i_0] [i_2] = var_18;
                arr_12 [i_0] [i_2] [i_2 - 3] [i_2] = 958205627;

                for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    arr_15 [i_2] [i_2] [i_2 - 3] [i_2 - 3] [i_2] = (((arr_6 [i_0] [i_0] [i_2] [i_2 + 1]) ? 9264502552699443900 : 3811958187));
                    var_21 = (((98 ? (arr_7 [i_2] [i_1] [i_0]) : (arr_13 [i_0] [i_0] [i_2] [i_0]))));
                }
                for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 4; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_23 [12] [i_2] [18] [12] = 1616142032588102587;
                        arr_24 [1] [i_2] [i_5 - 3] [i_5 - 3] [i_4] [i_0] [i_5 - 4] = var_11;
                        var_22 = (((arr_21 [i_2] [i_2 - 2] [i_2] [i_2] [i_2 - 2]) != (arr_21 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [8])));
                    }
                    for (int i_6 = 4; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_2] [i_0] = (((arr_25 [i_6 - 1] [1] [i_6 - 4] [7] [i_2]) && (arr_19 [i_6] [8] [i_6 - 2] [i_6 + 1] [8] [4])));
                        var_23 = (((arr_6 [i_6 + 1] [i_2] [i_2] [i_2 + 1]) ? (arr_6 [i_6 - 4] [i_2] [i_2] [i_2 + 1]) : -49));
                    }
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        var_24 = (((arr_25 [i_0] [i_7 - 1] [i_2] [1] [i_2]) - (arr_25 [i_0] [i_7 + 2] [i_2 + 1] [i_0] [i_2])));
                        var_25 = (9223372036854775793 || 92);
                    }
                    var_26 = (arr_26 [i_1] [i_2] [i_2 - 1] [i_4] [i_4]);
                    var_27 = (min(var_27, ((((arr_5 [i_2 - 1]) * (arr_5 [i_4 + 2]))))));
                    arr_32 [i_0] [i_0] [i_1] [i_2] = 4230;
                }
                for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
                {
                    arr_36 [i_0] [i_2] [i_2 - 3] [i_2 - 3] [13] = (-(arr_14 [i_0] [i_2] [i_8 - 2] [i_8 - 2]));
                    var_28 = (arr_33 [i_0] [i_0] [i_2 + 1] [i_2 - 2] [i_8 - 2]);
                    arr_37 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((var_14 ? 1738887837 : (arr_8 [i_2 - 1])));

                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        arr_40 [i_2] [i_2] = (((((arr_17 [9] [i_0]) && -4401551922368451911)) ? var_13 : 3740666676));
                        arr_41 [i_1] [i_2 - 2] [i_2] = (arr_19 [i_8 - 2] [i_1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [1]);
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_29 = ((!(arr_33 [i_2] [i_2 - 2] [6] [6] [i_8 + 2])));
                        var_30 -= (((arr_13 [i_2] [i_2 + 1] [i_8] [i_2 + 1]) + (arr_9 [i_8] [i_8] [i_8 - 1] [i_8 + 2])));
                        arr_44 [14] [i_2] [i_8 + 2] [i_10] = (((arr_35 [i_2] [i_8 + 2] [i_2] [i_2]) ? (arr_28 [i_0] [18] [i_2] [i_8 + 1] [2]) : (((arr_30 [i_2] [14] [14] [14] [i_10] [i_1] [i_10]) ? (arr_21 [i_0] [1] [i_2] [i_0] [1]) : var_19))));
                    }
                }

                for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                {
                    arr_48 [i_2] = (((!var_11) ? 63 : (var_13 && var_4)));
                    arr_49 [i_2] [i_1] [i_2] = 88;
                    var_31 = (((arr_33 [i_0] [7] [i_1] [i_2] [i_11]) ? (((var_11 == (arr_0 [7])))) : (!var_19)));
                    var_32 = ((41934 ? 16383 : 140));
                }
                for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        var_33 ^= ((-127 ? var_1 : (arr_28 [i_13] [1] [i_1] [i_0] [i_0])));
                        arr_54 [i_2] = 41929;
                        var_34 = (-19 ? 9264502552699443918 : -397204282);
                        arr_55 [i_0] [i_2] = (var_17 ? var_13 : (arr_16 [i_0] [i_1] [i_2 + 1] [i_1]));
                    }
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        arr_58 [i_0] [i_0] [4] [i_2] [i_2] [i_2] [i_2] = ((var_3 ? (arr_22 [i_2] [i_2 + 1]) : (arr_22 [i_2] [i_2 - 3])));
                        var_35 = (((arr_6 [i_2 - 2] [i_2] [i_2] [i_2 - 2]) ? var_9 : (arr_6 [i_2 + 1] [1] [i_2] [18])));
                    }
                    var_36 *= var_19;
                    var_37 = ((((var_16 ? var_17 : var_3))) - ((var_0 ? var_17 : var_8)));
                    var_38 *= var_3;
                }
            }
        }
        for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
        {
            arr_62 [i_15] [i_0] [i_0] = ((((2147483647 || (((var_8 ? (arr_60 [16] [i_15] [i_15]) : var_19))))) ? 1 : (((var_16 >= (max(-394806790, 4294967295)))))));
            var_39 += ((((((arr_9 [i_0] [i_0] [i_15] [i_15]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : 41929))) ? (arr_9 [i_0] [i_0] [i_0] [i_15]) : ((~(arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))));
            var_40 = (max(var_9, (arr_26 [i_0] [i_0] [i_0] [i_15] [i_15])));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
        {
            var_41 = (max(var_41, var_8));
            arr_65 [i_0] = (((arr_5 [i_0]) ? -102 : var_14));
        }
        var_42 *= ((-(max(-127, -394806791))));
    }
    var_43 ^= var_5;
    var_44 = (min((((!((min(var_7, var_14)))))), var_4));
    var_45 = var_8;
    #pragma endscop
}
