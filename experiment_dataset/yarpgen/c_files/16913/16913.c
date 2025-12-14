/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_2));
    var_19 *= (-4 * var_16);
    var_20 = (6549760341258396212 / -var_13);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_21 = (!(((~(arr_1 [i_0 + 1] [i_0 + 1])))));
        arr_2 [i_0] = (((((arr_0 [i_0 + 1]) >= -var_7)) ? var_12 : ((((arr_0 [i_0 + 1]) ? var_10 : var_14)))));
        var_22 = var_12;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_23 += var_13;

        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                var_24 = (min((((arr_4 [i_2 - 2] [i_3 - 1]) + (arr_4 [i_2 + 1] [i_3 - 1]))), (max((arr_4 [i_2 + 2] [i_3 + 1]), var_12))));
                var_25 = (min(var_25, (arr_7 [i_1] [4] [i_2] [i_3])));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_26 = (max(var_26, var_14));
                            var_27 |= (var_7 * 0);
                        }
                    }
                }
                var_28 = 0;
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                arr_17 [i_1] [i_1] [i_2] [i_6] = (var_5 >= (arr_12 [i_1] [i_2 + 2] [i_2 + 2] [6] [i_2 + 2]));
                arr_18 [i_6] [i_1] [i_1] = (~var_2);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 8;i_8 += 1)
                    {
                        {
                            var_29 = (min(var_29, (((((arr_9 [i_1] [i_2 - 1] [i_6] [i_6] [i_8]) ? (arr_24 [i_1] [i_2 - 2] [i_6] [2] [i_8 + 2]) : 3))))));
                            var_30 = (!var_1);
                            var_31 = ((-var_11 / (((var_5 ? (arr_21 [i_8 - 1] [i_8 - 2] [i_8] [i_8] [i_8 - 2] [i_8 + 1]) : (arr_21 [i_8 - 1] [i_8 - 2] [i_8] [i_8 - 2] [i_8 + 3] [i_8 + 1]))))));
                            arr_25 [i_8 + 1] [i_1] [i_7] [i_7] [i_6] [i_1] [i_1] = arr_22 [i_8] [i_6] [i_6] [i_2] [i_1];
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                arr_29 [4] [4] [i_1] |= -14309;
                var_32 = var_5;
                var_33 = (((!(1 >= var_12))) ? (((!var_2) ? var_6 : -var_0)) : var_2);
                var_34 = ((((2998444730 ? ((-4 ? (-127 - 1) : 44564)) : (arr_23 [i_1] [i_2] [i_9] [i_2 + 1] [i_1]))) / (14309 * 2361948196189408082)));
                var_35 ^= ((var_8 * -var_17) ? var_14 : (var_9 >= var_15));
            }
            var_36 = (((var_9 >= (arr_26 [i_2 + 2] [i_2 + 2] [i_2 - 2]))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        {
                            var_37 = (((var_16 ? ((var_17 ? var_6 : var_16)) : var_10)));
                            arr_37 [i_1] [i_1] [i_1] [i_11] [i_1] = var_14;
                        }
                    }
                }
            }
        }
        for (int i_13 = 1; i_13 < 9;i_13 += 1)
        {
            arr_41 [i_1] = (((arr_30 [i_13 + 1] [i_13 + 2] [i_13 - 1] [i_13 - 1]) ? (arr_35 [i_13 + 1] [i_13 + 2] [i_13 + 1]) : 1));
            var_38 = (((0 ? 125 : 2636313025)));
        }
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
    {
        var_39 |= (((arr_39 [i_14]) * (((arr_3 [6]) / var_13))));
        var_40 -= (arr_35 [i_14] [i_14] [i_14]);
        arr_45 [i_14] [i_14] = ((!(((var_17 ? var_4 : (arr_38 [i_14]))))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                {
                    var_41 = (arr_46 [i_14] [i_15] [i_16]);
                    arr_51 [i_14] [i_15] [i_15] [i_16] = (min(var_0, ((((arr_28 [i_14] [i_15] [i_16]) ? (arr_28 [i_14] [i_15] [i_15]) : 74)))));

                    /* vectorizable */
                    for (int i_17 = 1; i_17 < 8;i_17 += 1)
                    {
                        arr_54 [i_14] = ((-(arr_7 [i_17 + 3] [i_17 + 1] [i_17 + 3] [i_17 + 2])));
                        var_42 = var_5;
                    }
                    for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
                    {
                        arr_59 [i_14] = ((var_5 ? (((((~(arr_7 [1] [i_15] [i_15] [i_15])))) ? var_3 : ((1 ? 11059074260088884444 : var_9)))) : ((((5880412363173978977 * 48) ? ((5880412363173978977 ? -125 : -117)) : 1)))));
                        arr_60 [i_14] [i_18] [i_16] [i_15] [i_14] [i_14] = (((((((-14309 ? 14309 : var_17)) >> (((min(var_0, -118)) - 2824513434527804415))))) ? ((((var_10 ? var_17 : 1522532480)) << (var_3 + 1409576569))) : ((var_16 | ((var_10 ? var_4 : -26026))))));
                        var_43 = (min(var_43, ((max(((var_11 ? (arr_57 [2] [i_15] [i_15]) : (arr_57 [i_14] [i_15] [i_16]))), (arr_57 [i_15] [i_15] [i_18]))))));
                        arr_61 [i_14] [i_16] = ((-1331961226 ? -27783 : 1296522577));
                    }
                    for (int i_19 = 0; i_19 < 11;i_19 += 1) /* same iter space */
                    {

                        for (int i_20 = 2; i_20 < 9;i_20 += 1)
                        {
                            arr_66 [i_15] [i_14] = var_15;
                            var_44 = ((((max(var_5, (((arr_22 [i_14] [i_14] [i_14] [i_19] [i_14]) ? var_10 : 12566331710535572626))))) ? var_8 : var_12));
                            arr_67 [i_14] [i_15] [i_14] = ((((!(arr_48 [i_20 - 2]))) ? ((var_14 ? (arr_48 [i_20 + 2]) : (arr_48 [i_20 - 2]))) : (arr_48 [i_20 - 2])));
                        }
                        arr_68 [10] [i_14] [i_16] [i_14] = (((-167589496 ? var_7 : 1708789664)));
                    }
                }
            }
        }
        var_45 = var_14;
    }
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 16;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 16;i_22 += 1)
        {
            {
                arr_76 [4] [i_22] = var_4;
                arr_77 [i_22] [i_22] [7] = ((((12999875571178896425 ? 5880412363173978959 : 225)) * (((var_15 ? (arr_72 [i_21]) : (arr_72 [i_22]))))));
                var_46 = var_3;
                var_47 ^= var_8;
            }
        }
    }
    #pragma endscop
}
