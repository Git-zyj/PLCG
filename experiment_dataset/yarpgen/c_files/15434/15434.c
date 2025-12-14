/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    var_21 = var_9;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_22 = ((+(((var_12 | var_1) & ((var_4 ? var_2 : var_11))))));
        var_23 = (((((-var_12 ^ ((min(var_11, var_4)))))) ? (((var_2 ? var_3 : var_14))) : (var_3 < var_2)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2] = (min(((max(-1422629778, (arr_9 [7] [i_2] [i_3 + 2] [i_3])))), ((5506 ? 6074 : 1574229006))));
                    arr_12 [i_1] [i_1] [i_3 + 1] [14] = (min((((arr_9 [i_3 + 2] [i_3 - 2] [i_3] [i_3 + 3]) | var_8)), (~var_16)));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_16 [i_1] = ((-(((arr_10 [i_4]) ? var_18 : var_1))));
                        var_24 = (arr_15 [i_1] [i_3 + 3] [i_3 - 2] [i_1]);
                        arr_17 [i_1] [i_1] = (arr_4 [i_1]);
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_21 [i_1] [i_1] [i_3] [i_5] = (max((((arr_2 [i_1]) * var_4)), ((~(arr_2 [i_1])))));
                        var_25 = (min(2, 23350));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_29 [i_1] [15] [i_2] [i_2] [1] [i_1] [i_2] = (arr_15 [i_1] [i_2] [22] [i_1]);
                                arr_30 [i_7] [i_1] [1] [i_1] [i_1] = (arr_13 [i_1] [i_2] [21] [i_6]);
                            }
                        }
                    }
                    arr_31 [i_2] [i_2] [i_1] [i_3] = max(((~(var_18 + var_15))), (((-((~(arr_27 [i_1] [i_1] [i_1] [i_3])))))));
                }
            }
        }
        arr_32 [i_1] = ((~(((arr_13 [i_1] [i_1] [i_1] [i_1]) | (arr_13 [i_1] [i_1] [i_1] [i_1])))));
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        var_26 = (((var_10 >> ((((var_4 ? var_7 : var_1) - 21876))))));
                        arr_41 [i_1] [20] [i_1] [i_10] = ((var_19 - ((-(((arr_3 [i_9]) | var_13))))));
                        arr_42 [i_1] [i_1] [i_1] [i_1] = (((((~(arr_34 [7] [i_9] [7])))) * var_18));
                    }
                }
            }
        }

        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {
            arr_46 [i_1] [16] = var_11;
            arr_47 [i_1] [i_1] [i_11] = ((-(((!(~var_6))))));
            arr_48 [i_1] [i_1] = ((var_2 ? ((((((arr_19 [i_1] [i_1] [i_11] [i_11] [i_1]) ? var_13 : (arr_36 [i_1] [i_1] [i_1] [i_11]))) | var_7))) : (min(var_3, (arr_26 [i_11] [i_11] [i_11] [20] [i_1] [i_1])))));
            var_27 = (((~-var_18) ? ((max(var_8, var_15))) : var_8));
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
        {
            arr_53 [i_1] = 4;
            arr_54 [i_1] = (arr_10 [14]);
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                var_28 = ((((((((arr_6 [i_1] [i_13] [20]) < (arr_5 [i_1] [i_13]))) ? ((var_14 ? (arr_24 [i_1] [i_13] [16] [22] [i_14] [i_13]) : var_6)) : (min(var_19, var_4))))) ? (((var_17 || var_14) ? var_2 : var_9)) : (((((max(var_13, var_15))) ? var_17 : ((var_13 ? var_16 : (arr_2 [5]))))))));
                arr_60 [i_1] [i_1] [18] [i_1] = (--5);
                arr_61 [i_1] [i_13] [i_1] [i_1] = (min(var_18, (((((((arr_36 [i_1] [i_1] [i_14] [i_14]) - var_0))) ? (arr_7 [i_1] [6]) : var_19)))));
                arr_62 [i_1] [i_1] = ((max((arr_52 [i_1]), var_9)));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        {
                            arr_69 [i_1] [i_1] [i_13] [i_14] [i_15] [i_16] = ((((((min(59447, -19012))) ? ((var_15 ? var_6 : var_9)) : (arr_52 [i_1]))) < (((((var_0 ? (arr_35 [i_1] [i_1]) : var_11)) | var_0)))));
                            var_29 = var_4;
                            arr_70 [i_1] = (((arr_20 [i_1] [19]) >> ((var_5 ? (((var_19 ? var_16 : var_0))) : (max(var_2, (arr_8 [i_14])))))));
                        }
                    }
                }
            }
            arr_71 [i_1] = (((((((min((arr_10 [i_1]), var_1))) ? (var_6 / var_3) : (arr_35 [i_1] [i_1])))) ? (var_3 / var_11) : (((var_15 ? var_1 : var_3)))));
            var_30 = (3799042860 | 558456403);
        }
        var_31 = ((((-var_16 ? (((arr_4 [i_1]) % var_5)) : (((arr_58 [i_1] [i_1] [17]) ? var_7 : (arr_52 [i_1]))))) < 0));
    }
    #pragma endscop
}
