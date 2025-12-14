/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_11;
    var_20 = (!var_18);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [13] [13] [i_2] = (((((arr_4 [i_1 + 1]) ? (arr_6 [i_1 - 1] [i_1] [i_2] [i_1]) : var_10))) ? (arr_3 [i_1 + 1]) : (arr_4 [i_1 - 1]));
                    var_21 |= (((((-(max((arr_4 [i_1]), 92))))) ? ((((((max(var_16, (arr_0 [i_1] [10]))))) <= (arr_6 [i_2] [i_0] [i_0] [i_0])))) : var_4));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_22 = var_5;
                                arr_15 [i_3] [15] [19] = 70;
                            }
                        }
                    }
                }
            }
        }
        var_23 *= var_10;

        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            arr_18 [i_0] [16] = (min(-8400315282025186698, -92));
            var_24 = (max(var_24, (((((((((!(arr_3 [3])))) > (arr_17 [i_0] [i_5] [17])))) / var_5)))));
            var_25 *= ((-((((((arr_5 [i_0] [i_0] [4]) == (arr_4 [i_5])))) / ((-31 ? -38 : 93))))));
            var_26 &= var_10;
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_27 = (min(var_27, (((-(max(4433230883192832, -77)))))));
            arr_22 [i_0] [i_6] = (((((!((max(var_10, 11)))))) >> ((((-(arr_0 [9] [12]))) - 95))));
            var_28 = (min(var_28, var_9));
            arr_23 [i_6] = (min((4433230883192832 + -39), ((-78 ? -4232964894555566620 : 75))));
        }
        arr_24 [i_0] [i_0] = (arr_9 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_28 [i_7] [i_7] = (min((var_13 - -13), (((-13 ? 93 : 87)))));

        for (int i_8 = 4; i_8 < 15;i_8 += 1)
        {
            arr_33 [i_8] = ((-(((4444285231318415752 < -5645002743494602899) ? -8569899663938208623 : (max(-77, 974903827451232825))))));
            arr_34 [i_8] [i_7] [i_7] = ((+(((arr_27 [i_8 - 3]) ? (-127 - 1) : (arr_27 [i_8 - 3])))));
            var_29 = max(((var_16 ? 299949220172699069 : (arr_11 [i_7] [i_7] [i_7] [i_8] [i_8] [i_8]))), ((((arr_11 [i_7] [i_7] [i_7] [i_8] [i_8] [i_8 - 1]) < -299949220172699069))));

            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                var_30 = (~(max((arr_20 [i_8 + 1]), (arr_20 [i_8 + 1]))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            arr_44 [i_7] [i_7] [i_7] [10] [i_7] [i_7] [i_7] = (arr_9 [i_7] [i_9] [i_9] [i_9]);
                            arr_45 [i_7] [i_7] [i_7] [i_7] [i_10] [i_7] = (((((arr_29 [12] [i_8 - 3]) <= (arr_29 [i_8] [i_8 - 3]))) || (arr_29 [i_8] [i_8 - 3])));
                            var_31 = arr_0 [i_10] [i_10];
                            var_32 = min((((arr_35 [1] [i_8 - 4] [i_8 - 4] [i_10]) ? (arr_35 [i_7] [i_8 - 1] [13] [i_10]) : 28)), (arr_35 [i_7] [i_8 - 3] [0] [4]));
                            var_33 &= ((+(((arr_27 [i_11]) ? (arr_27 [i_11]) : (arr_27 [i_8 - 4])))));
                        }
                    }
                }
                var_34 = ((((((var_17 >= (-5645002743494602911 | -43))))) >= (((((var_10 ? (arr_1 [i_7]) : (arr_31 [i_8])))) ? (arr_12 [i_7] [i_7]) : (arr_3 [i_7])))));
            }
            arr_46 [i_8] = (121 ? var_14 : -5645002743494602899);
        }
        arr_47 [i_7] [i_7] = var_8;
    }
    var_35 = ((var_1 ? var_4 : var_13));
    #pragma endscop
}
