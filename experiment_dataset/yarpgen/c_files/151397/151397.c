/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_2;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((!(((var_8 ? var_2 : var_5)))));
        var_20 = var_9;
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [6] = ((((min(((((arr_5 [i_1]) ? var_1 : (arr_6 [i_1])))), ((var_11 ? var_16 : 51))))) ? (((5273 ? var_16 : var_11))) : (((max((arr_5 [i_1]), var_3))))));

        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            arr_10 [10] [i_2 - 3] [i_2] = 51;
            var_21 = 14148;
            arr_11 [i_1] [i_2 - 2] = (min(40, var_3));
            arr_12 [i_2 + 2] [i_1] [i_1] = (~2357261955780509769);
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_20 [i_1] [i_3] [i_4] [0] [0] = (((((var_4 ? var_3 : var_8))) && ((((((arr_15 [13] [10]) >= var_11)) ? (((var_17 / (arr_13 [i_1])))) : (((arr_8 [10]) ? (arr_8 [10]) : var_0)))))));
                        var_22 += ((29 % ((var_5 ? var_2 : ((var_2 ? var_10 : var_9))))));
                        var_23 = ((!((max((var_14 * var_15), (arr_8 [i_5]))))));

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_24 [i_6] [15] [13] [5] [i_5] = (((max(var_12, var_9)) >= (((min((arr_5 [i_5 - 2]), var_12))))));
                            var_24 = (((((!(-26 && var_10)))) % ((((arr_8 [i_5 - 2]) > var_8)))));
                            var_25 = (max((((var_3 || ((((arr_17 [i_1] [2]) ? 91 : 39227)))))), ((224685853 ? var_0 : (var_13 > var_4)))));
                            var_26 = ((((min((!var_10), ((-52 ? var_8 : (arr_16 [8] [i_3] [i_3] [i_3])))))) > (min((!var_13), -var_9))));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_27 = ((((((19444 ? 408 : 2103268782)) > var_3)) ? ((((!var_0) > ((max(69, var_6)))))) : var_3));
                            var_28 = (arr_27 [i_5 - 1] [i_7] [i_5 - 2]);
                        }
                        /* vectorizable */
                        for (int i_8 = 4; i_8 < 15;i_8 += 1)
                        {
                            var_29 = var_18;
                            arr_31 [i_8] [3] [i_5] [i_4] [i_3] [i_8] = (((arr_28 [i_1] [7] [i_4] [i_1] [1]) ? var_13 : (arr_30 [i_8])));
                            var_30 = var_0;
                        }
                    }
                }
            }
            var_31 -= ((((arr_23 [5]) ? 322486806521558317 : (((min(var_2, var_18)))))));
        }
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    {
                        arr_40 [i_1] [14] [6] [i_11] = (((((((arr_38 [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_2 : -51)))) ? var_17 : (((arr_28 [i_1] [i_9 - 1] [3] [i_9 + 1] [i_9 + 1]) ? (arr_33 [i_9 + 1] [i_9 + 1]) : var_7))));
                        var_32 = 254;
                        arr_41 [i_1] [i_9] [i_10] [i_10] [i_1] = min((min((var_0 + var_3), (max(var_9, -8352758622173252816)))), 2103268782);
                        var_33 = var_4;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_34 = (max(var_34, ((((((arr_43 [i_9 + 1] [i_9 - 1] [7]) ? var_3 : (40 * var_17)))) / (((-5365253048659433709 ? var_10 : var_8)))))));
                            arr_51 [i_14] [i_1] [2] [1] [i_1] [i_1] = ((((((arr_43 [i_1] [i_9 + 1] [i_1]) ? var_15 : (arr_43 [i_1] [i_9 - 1] [i_9 - 1])))) ? ((var_4 ? (var_7 >= var_16) : -var_15)) : (((4068929778 + var_15) ? ((var_0 ? var_1 : var_15)) : (arr_6 [i_9 - 1])))));
                        }
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        var_35 = var_11;
        var_36 = (max((((!11684) / (arr_37 [i_15]))), -8));
    }
    for (int i_16 = 1; i_16 < 20;i_16 += 1)
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                {
                    arr_62 [i_16] [i_16] [14] [14] = ((-8 ? 750113991736190969 : 53851));
                    /* LoopNest 2 */
                    for (int i_19 = 1; i_19 < 21;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 22;i_20 += 1)
                        {
                            {
                                var_37 = var_8;
                                arr_68 [13] [i_16] [i_18] [i_16] [i_16 - 1] = 1519803407;
                                var_38 &= (((((arr_59 [14] [i_17] [14]) | var_9)) >= (((min(var_12, var_6))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_21 = 1; i_21 < 18;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 22;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 22;i_23 += 1)
                {
                    {
                        arr_75 [i_16] [i_16] [i_22] [i_16] = (max(((((222 | 173) && (9862444579529695037 && 9791985146728254982)))), (((82 + var_18) ? (((var_9 ? var_11 : var_1))) : (arr_59 [i_16] [i_16] [i_16])))));
                        var_39 = 17780;
                        arr_76 [i_16] [17] [6] [i_16] = (min(var_5, ((((var_8 ? var_16 : var_2)) * (var_11 / var_6)))));
                    }
                }
            }
        }
        arr_77 [i_16] = ((-9336 * (((min(20, var_16))))));
        arr_78 [i_16] = (~var_0);
    }
    var_40 = min(9791985146728254976, 9523592291107009710);
    var_41 = ((((min((var_5 || var_0), (var_8 * var_13)))) ? (((((13172 ? var_16 : var_3))))) : (max((var_13 | var_9), var_3))));
    #pragma endscop
}
