/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((((-var_11 ? var_1 : ((min(var_19, var_12))))) >= ((var_7 ^ (var_15 == var_6))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = ((2520989799932234053 | (((~(-2147483647 - 1))))));
        arr_3 [i_0] = ((~(arr_1 [2])));
        arr_4 [0] [i_0] = ((-((~(arr_0 [i_0])))));
        var_22 = (max(var_22, var_19));

        for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1 - 1] [i_0] = (((1 < 3715) - (var_16 || var_19)));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_16 [i_0] = (~var_12);
                            var_23 ^= (((arr_9 [i_2] [i_2] [i_4] [i_2]) ? var_4 : (arr_9 [i_4] [i_4] [i_4 - 1] [i_4])));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_2 [i_0] [i_0]);
                        }
                    }
                }
            }
            var_24 ^= var_18;
            var_25 = ((~((1 ? var_8 : (arr_12 [i_0] [i_0] [i_1 + 1] [i_1])))));
        }
        for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_5] [i_5] = 15795;

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_26 |= (((arr_15 [i_6] [i_5 + 1] [i_6] [i_6] [i_5 - 3]) > var_15));

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_27 [i_0] [i_6] [i_6] [i_6] [i_6] [i_6] |= ((3439383289495571421 ? (~var_14) : ((((arr_22 [2] [i_5] [i_6]) << (var_15 - 59779285))))));
                    var_27 *= (((((arr_22 [i_0] [10] [i_6]) + -1)) * (!var_11)));
                }
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    var_28 |= (arr_12 [i_8 + 1] [i_8 + 3] [i_8 + 3] [i_8 - 1]);
                    var_29 = (min(var_29, ((((arr_26 [i_0] [i_5]) ? ((-27789 ? (arr_15 [i_6] [i_5] [i_6] [12] [i_0]) : (arr_5 [i_0] [i_6] [i_5 - 3]))) : var_7)))));
                    var_30 ^= ((var_10 ? ((86 ? var_4 : var_13)) : ((((arr_6 [i_5] [i_6]) != (arr_28 [i_6] [i_0] [i_5 + 1] [i_5 + 1] [1]))))));
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    var_31 = ((var_7 > (~15800)));
                    var_32 = (arr_22 [5] [1] [i_0]);
                    arr_34 [i_0] [i_0] [i_0] [i_0] = ((1 < (arr_5 [i_0] [i_0] [i_0])));
                }
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    var_33 = ((31 ? (arr_36 [i_0] [i_5 - 3] [i_10 - 1] [i_10]) : ((-(arr_11 [i_0] [i_5] [i_5] [i_6] [i_0] [i_6])))));
                    var_34 = (arr_32 [i_0] [i_5 + 1] [i_5 + 1] [i_5 + 1]);
                }

                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    arr_42 [i_0] [i_0] [1] [i_11] = var_7;
                    var_35 -= (((arr_1 [i_5 - 2]) >> var_17));

                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        var_36 = (((arr_6 [i_0] [i_5 - 3]) << var_7));
                        arr_45 [i_0] [i_5 + 1] [i_6] [i_11] [i_12] = ((-(arr_41 [i_0] [1] [i_5 + 1] [i_11])));
                        arr_46 [i_0] [i_0] [i_0] [i_0] = var_14;
                    }
                }
                for (int i_13 = 1; i_13 < 12;i_13 += 1)
                {
                    arr_49 [i_5 - 3] [i_0] [i_6] [i_13] [i_13] [i_13] = ((var_2 - (arr_41 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_13 - 1])));
                    arr_50 [i_0] = var_1;
                    arr_51 [i_0] [i_5] [i_5] [i_6] [i_13] = (i_0 % 2 == zero) ? (((((var_4 ? var_6 : -15795)) | ((31 >> (((arr_43 [i_0] [i_0] [i_5] [i_6] [i_13]) + 1931559301355358439))))))) : (((((var_4 ? var_6 : -15795)) | ((31 >> (((((arr_43 [i_0] [i_0] [i_5] [i_6] [i_13]) + 1931559301355358439)) - 3623139388448087592)))))));
                }
            }
            var_37 = ((-var_1 | (arr_8 [i_0] [i_5])));
            var_38 = (((arr_6 [i_5 - 2] [i_5 - 2]) ? -var_16 : (((arr_47 [5] [i_5] [0] [i_5] [i_5]) ? 32759 : 55219))));
        }
    }
    var_39 = ((-((var_9 ? ((var_17 ? 15330187172299170706 : var_8)) : (((max(var_0, var_1))))))));
    var_40 = (max(var_2, (!var_6)));
    #pragma endscop
}
