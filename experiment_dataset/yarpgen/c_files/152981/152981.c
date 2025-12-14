/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 = var_11;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_17 = (min(var_17, ((((arr_2 [i_0 - 1] [i_0 + 1]) ? 46829 : (arr_2 [i_0 - 1] [i_0 - 1]))))));
            arr_4 [i_0] [i_1] [i_1] = (((arr_2 [i_0] [i_0 - 1]) ? var_4 : 0));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    arr_9 [i_0] [i_3] = (((((arr_2 [13] [9]) ? var_10 : 1))) ^ (arr_5 [i_3 - 1] [i_3 - 1] [i_3 + 1]));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_3] [i_0 - 1] [i_0] = (((arr_0 [i_5 - 1]) / var_7));
                                arr_17 [i_3] [i_2] [i_3] [i_4] [i_5] = (((arr_1 [i_0 - 1]) >> (arr_13 [i_0 - 1] [i_0 - 2] [i_3] [i_3 - 1] [i_3 + 1])));
                                var_18 = ((((var_14 ? (arr_14 [i_0] [i_2] [i_3] [21]) : 43)) << ((((arr_13 [i_0] [i_2] [i_3] [i_4] [i_5 + 1]) < (arr_14 [i_0] [i_3] [i_4] [i_5]))))));
                                arr_18 [i_0] [20] [i_2] [i_3] [i_3] [i_5 + 1] [i_5] = ((823 > ((var_13 ? (arr_5 [i_3 - 1] [10] [i_5 - 1]) : (arr_1 [i_0])))));
                            }
                        }
                    }
                    arr_19 [i_3] = (((arr_5 [i_3] [10] [i_3 - 1]) ? var_1 : ((var_11 ? (arr_2 [i_2] [i_3]) : (arr_6 [i_0] [i_3])))));
                    var_19 = (((arr_2 [i_0 + 1] [i_0]) >> var_2));
                    var_20 = (((arr_7 [i_0 + 1] [i_0] [i_0 - 1]) ? (arr_7 [i_0 + 1] [i_0] [i_0 - 1]) : (arr_7 [i_0 - 1] [i_0] [i_0 + 1])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                {
                    arr_24 [i_0] [i_7] [i_7] = 9223372036854775807;

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        arr_27 [i_0 - 2] [i_7] [i_7] [i_7] [i_8] = ((var_14 ? (arr_26 [i_0] [i_7] [i_7 + 2] [i_8]) : (arr_20 [i_0 + 1] [i_7 + 2])));
                        arr_28 [1] [i_7] [i_7 + 2] [i_7] [i_8] = ((-((18692 ? (arr_15 [i_7] [i_6] [i_7] [i_8] [i_8]) : 18684))));
                        arr_29 [i_7] [i_6] [i_7 + 2] [19] = (5 + (arr_3 [i_0] [i_6] [i_7]));
                    }
                }
            }
        }
        arr_30 [i_0] [i_0] &= (~-43);
        var_21 = (((((18707 ? (arr_6 [i_0] [i_0]) : 18692))) ? ((((arr_8 [i_0] [i_0 - 2]) ? 347988519 : (arr_20 [i_0 - 2] [i_0])))) : var_10));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_22 = ((((max(var_11, (arr_15 [i_9] [i_9] [i_9] [i_9] [i_9])) + (arr_12 [i_9] [i_9] [i_9])))));
        arr_34 [14] [i_9] = (min(((((64455 / (-127 - 1))) / (arr_7 [i_9] [i_9] [5]))), ((+(((arr_20 [i_9] [i_9]) / (arr_14 [i_9] [11] [i_9] [i_9])))))));
    }
    for (int i_10 = 2; i_10 < 17;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            arr_42 [i_10] [i_10] [i_10] = (((arr_20 [i_10 + 2] [i_10 + 3]) ? (arr_35 [i_10]) : (((arr_20 [i_10] [i_10 + 3]) * var_2))));
            var_23 *= ((-(arr_14 [i_10 + 3] [i_10] [i_10] [i_10])));
        }
        var_24 |= (((arr_3 [i_10] [i_10] [i_10]) ? 173 : ((((347988519 ? var_13 : var_2)) << (arr_13 [i_10] [i_10 + 2] [14] [i_10 + 3] [i_10])))));
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                {
                    var_25 *= ((180 || (((var_4 ? ((min(-347988520, -113))) : (((arr_0 [i_10]) ? (arr_7 [i_10] [i_10] [i_10]) : 46852)))))));
                    arr_47 [i_10] [i_10] [i_12 - 1] [i_13] = var_0;
                }
            }
        }
    }
    #pragma endscop
}
