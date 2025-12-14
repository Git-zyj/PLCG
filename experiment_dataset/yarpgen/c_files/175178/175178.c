/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((arr_3 [i_1] [i_1] [i_1]) ^ 1048575)));
                arr_7 [i_1] [i_0] [2] = ((-(arr_5 [i_1])));
                arr_8 [i_1] = (min((min((arr_1 [i_0] [i_0]), var_7)), (((+((((arr_5 [i_1]) > var_11))))))));

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    arr_11 [i_0] [0] [i_1] = var_4;
                    arr_12 [i_0] [i_1] [i_2] = (max((((((1048575 ? var_8 : var_1))) ? (max(var_5, (arr_9 [i_1] [i_1]))) : var_16)), ((((arr_10 [10] [7] [i_2] [i_1]) >= (((arr_0 [0] [i_2]) ^ var_2)))))));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_15 [i_1] = (min((((!(((var_10 ? (arr_1 [i_1] [i_1]) : var_2)))))), var_16));
                    var_18 = ((((min(var_9, var_14))) ? ((((arr_13 [i_0] [i_1] [i_3]) | var_4))) : (arr_14 [i_0] [i_1] [i_3])));
                }
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    var_19 = (min(var_19, (((+(((arr_17 [i_0] [i_4 + 1] [i_4 + 2] [i_4 + 1]) / (arr_10 [2] [i_4 - 2] [i_4 - 2] [i_0]))))))));
                    arr_19 [i_0] [i_1] [i_0] [i_0] = ((((max((18446744073709551609 * var_4), ((((arr_9 [i_1] [i_1]) ? var_10 : 3516794834)))))) && (((((!(arr_0 [5] [5]))) ? var_14 : (min((arr_5 [i_1]), (arr_16 [0]))))))));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_29 [i_0] [i_1] [1] [0] [i_0] = (-((4293918705 ? var_15 : (arr_17 [i_1] [i_1] [i_6] [i_7]))));
                                var_20 = 32767;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_21 = max((arr_25 [i_9 + 1] [i_9 + 1] [i_9] [i_9] [7] [i_1]), var_12);
                                arr_34 [i_0] [i_1] [i_5] [i_1] [8] = var_15;
                                arr_35 [i_1] = ((((((arr_1 [i_0] [i_0]) + (arr_3 [i_0] [i_1] [i_5])))) && var_6));
                                arr_36 [i_5] [0] &= ((~59125) ? (((arr_20 [i_9 - 2] [i_9] [i_5] [i_5]) ? var_7 : (arr_20 [i_9 - 1] [i_5] [i_5] [i_5]))) : 2147483639);
                                arr_37 [i_0] [i_1] [i_5] [7] [i_8] [i_1] = ((var_1 ? (arr_5 [i_1]) : ((var_4 ? (((arr_9 [i_1] [i_1]) ^ var_10)) : (min((arr_32 [i_0] [2] [7]), (arr_23 [3] [i_8] [1] [i_8])))))));
                            }
                        }
                    }
                }
                arr_38 [i_1] [i_0] [i_1] = ((max(((var_14 ? (arr_26 [i_0] [i_0] [i_1] [i_1] [i_1]) : var_6)), (min(100663296, (arr_17 [i_1] [i_1] [i_1] [i_1]))))));
            }
        }
    }
    var_22 = (max((((var_10 ? -13 : var_15))), (max(var_10, (max(var_0, var_8))))));
    var_23 = (((((var_15 ? var_2 : var_0))) ? (((((var_10 ? var_13 : 59155))))) : ((var_1 ? var_14 : var_12))));

    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        arr_42 [i_10] [10] = 18446744073709551593;
        arr_43 [i_10] [i_10] = ((+(((min((arr_40 [i_10]), -1))))));
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 20;i_11 += 1)
    {
        arr_47 [i_11] = (((arr_45 [i_11]) ? (((arr_45 [i_11 + 2]) ? (arr_44 [i_11]) : var_13)) : (arr_45 [i_11 + 2])));
        arr_48 [i_11] [i_11] = ((~(arr_44 [i_11])));
        arr_49 [i_11 - 2] [21] = var_4;
    }
    #pragma endscop
}
