/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((30914 ? 131071 : 180));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_16 = ((var_11 ? 1 : var_8));
        var_17 = ((131071 ? 8135992133563295913 : 11740491135406364682));
        var_18 = ((1 ? 7398 : var_8));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [3] [3] [i_3] = 111;
                        arr_12 [11] [11] [11] [i_2] [2] [10] = (((arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 1]) ? ((~(arr_1 [i_0]))) : 2));
                        var_19 = ((1 > (arr_9 [i_0] [i_0] [i_0] [1])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_25 [i_6] [13] [i_6] [i_6] [i_6] = ((var_2 ? var_7 : (arr_9 [i_4] [i_8] [i_6 + 3] [i_4 - 1])));
                            arr_26 [i_8] [i_6] [i_4] [i_6] [3] = (((arr_24 [i_6]) ? var_4 : 1));
                        }
                        for (int i_9 = 2; i_9 < 13;i_9 += 1)
                        {
                            var_20 = var_1;
                            var_21 = (var_14 | var_8);
                            var_22 = (!1);
                        }
                        var_23 = ((((18119735296243279563 ? (arr_27 [10] [i_4 - 1] [i_5] [i_4] [i_4 - 1]) : 665493647)) | 65535));
                        arr_29 [i_4] [i_6] [i_5] [0] [i_7] = (arr_4 [0] [i_5]);
                        arr_30 [i_4 + 2] [6] [9] [i_6] = (((~1) == (!var_11)));
                        var_24 = (((var_0 ^ var_9) ? var_4 : ((((var_14 && (arr_24 [i_4])))))));
                    }
                }
            }
        }
        arr_31 [i_4] = ((((203 ? (arr_28 [i_4] [i_4] [i_4 + 2] [i_4] [i_4]) : 52)) > 1));
        var_25 += (1 != 1);
        arr_32 [i_4 - 1] = var_6;
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        var_26 |= ((((-(arr_33 [i_10]))) - ((9364 ? 3 : 1))));
        arr_37 [3] = 1;
        arr_38 [i_10] = ((0 ? (arr_33 [i_10]) : ((1 ? ((((arr_34 [i_10] [i_10]) > var_8))) : (-1471141644 > 166)))));
    }
    #pragma endscop
}
