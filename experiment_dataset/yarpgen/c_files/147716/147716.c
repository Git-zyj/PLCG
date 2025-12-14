/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = (min((((~var_4) & var_3)), var_4));
    var_12 = var_5;
    var_13 = ((var_5 ? (min(-0, (var_2 * var_9))) : (((-127 - 1) ? -18 : 0))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (-127 - 1);
                var_15 = (max(((var_2 ? (arr_0 [i_0 - 1]) : var_5)), (((var_6 | ((~(arr_1 [i_0 - 2]))))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_16 = var_9;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_17 = (max(var_8, (arr_10 [i_0 - 2] [i_1] [i_0 - 2] [i_4] [i_4] [i_2] [i_4])));
                            var_18 = (min(var_18, ((min((arr_8 [i_2]), (var_2 + -var_8))))));
                            arr_12 [i_4] [i_3] [i_3] [i_1] [i_0] = ((!(!18446744073709551605)));
                            arr_13 [i_3] [i_2] [i_3] = (((((arr_1 [i_0 - 1]) ? (arr_1 [i_1 - 2]) : (arr_1 [i_1]))) * (!127)));
                        }
                        var_19 *= (arr_6 [i_3] [i_2] [i_1 - 1]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_5] [4] [i_0] = (~var_2);
                        var_20 = var_4;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_22 [i_7] [7] [7] [i_2] [i_1] [i_0] [i_0 + 1] = ((((var_3 ? var_3 : var_2))));
                                var_21 = (((!1) + var_7));
                                arr_23 [i_7] [i_6] [i_2] [i_1] |= (min((((-10 > -127) ? (arr_7 [i_6] [i_1] [i_0 + 2] [i_0 - 2]) : (arr_15 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_6] [i_7] [i_0 + 1]))), ((min(-127, (!255))))));
                                arr_24 [i_0] [2] [i_2] [i_6] [i_7] = var_1;
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_35 [i_0 + 2] [i_0 + 2] = ((((((~9) & (((~(arr_4 [i_0]))))))) ? (arr_27 [i_0 - 1] [i_0] [i_0] [i_0]) : ((var_6 << (((((arr_3 [i_1 + 1]) + 37)) - 26))))));
                                var_22 = (((!(arr_30 [i_0] [i_1 - 2] [15]))) ? (((!(arr_5 [i_0 - 1] [i_8] [i_9])))) : (((((-1 ? 1 : 65535))) ? (arr_4 [i_0 + 1]) : ((((arr_21 [12] [12] [i_8]) != var_8))))));
                                var_23 = (max(var_23, (arr_14 [i_9] [i_8] [i_0] [i_0])));
                            }
                        }
                    }
                    var_24 = (((arr_21 [i_1 - 2] [i_0 - 2] [i_0]) && (arr_4 [i_1 - 2])));

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_25 = (arr_9 [4] [6] [i_1 - 2] [0] [i_11]);
                        arr_38 [i_8] [i_0] = (!30);
                        var_26 = var_3;
                    }
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        arr_42 [i_0 - 1] [i_12] = (~(0 % 1));
                        var_27 = ((((~((var_1 ? 18446744073709551596 : (arr_10 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_8] [i_12] [i_12]))))) - ((var_8 / (arr_14 [i_1 + 1] [i_0 + 2] [2] [i_0 + 2])))));
                    }
                    arr_43 [i_8] [i_1] [i_0] [i_0 - 2] = ((((1 <= 122) && 15)) ? (((((arr_20 [i_1 - 1] [i_1] [i_0 - 2] [i_0] [i_0 - 1] [i_0]) < (arr_20 [i_1 - 1] [i_1] [i_0 - 2] [5] [i_0] [i_0 - 1]))))) : (((var_4 + 110) ? -var_5 : (((((-127 - 1) > (arr_33 [6]))))))));
                    var_28 = ((var_6 - (((arr_40 [i_1] [1]) ? ((min(0, var_5))) : ((var_5 ? (arr_8 [2]) : (arr_2 [11] [i_1 - 2])))))));
                }
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    arr_46 [i_13] [i_0 + 1] [i_0 + 1] [i_0] = var_2;
                    var_29 -= (((((!((min((arr_0 [11]), (arr_36 [i_0 - 1] [i_1] [i_0 - 1] [i_1]))))))) > 1));
                }

                for (int i_14 = 1; i_14 < 13;i_14 += 1)
                {
                    var_30 = (min(var_30, (((~((-(arr_44 [i_0 - 2] [8]))))))));
                    arr_50 [i_0] [i_1 - 2] [i_0] = -var_3;
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            {
                                var_31 = (max(var_31, ((((((-(arr_4 [i_14])))) - (min(-var_5, ((var_4 ? (arr_5 [i_1] [i_1] [0]) : 127)))))))));
                                var_32 = ((((((!(arr_51 [i_0]))))) > var_1));
                                arr_55 [i_16] = ((-(!var_8)));
                                var_33 = (max(var_33, ((((((1 ? 9223372036854775808 : 65531))) ? (((-((max(0, -116)))))) : var_5)))));
                            }
                        }
                    }
                    var_34 = (!(((var_8 ^ (((arr_5 [i_0] [i_0] [i_0]) ? 18446744073709551615 : var_9))))));
                    var_35 = (((arr_49 [i_0 + 1] [i_1 - 2] [i_0 + 2] [i_1]) ? var_3 : ((((arr_54 [i_1 + 1] [i_0 - 2]) - (arr_54 [i_1 - 2] [i_0 + 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
