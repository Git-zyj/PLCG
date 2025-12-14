/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [5] = max(((((max(221, var_4))))), (((221 <= var_2) & (max(107, var_15)))));

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_13 [i_1] = (~var_15);
                        var_18 |= (arr_10 [i_2] [18] [i_2]);
                    }
                    arr_14 [i_2] [i_1] [i_1] [i_0] = ((-(((((240 ? 1152921504606715904 : var_10))) ? (arr_6 [i_0] [i_1] [i_2]) : (max(5696493116249556746, (arr_9 [i_2] [i_1])))))));
                }
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    var_19 = ((3112607413 ? (max(var_7, 15288546615121134059)) : (arr_6 [13] [i_1] [i_4 + 1])));
                    arr_17 [i_1] = var_15;
                    var_20 = ((647841041 ? (min((arr_16 [i_4] [i_4 + 1] [i_4 + 1]), (max(-405885318, -5696493116249556746)))) : (arr_6 [i_4] [i_4 + 1] [i_4 + 1])));
                    var_21 = ((-(((arr_8 [i_1] [i_4 + 1] [i_4 + 1] [i_1]) - var_10))));
                }
                var_22 = var_11;
            }
        }
    }
    var_23 = (max(((((var_14 < var_3) ? 524288 : var_0))), var_16));
    var_24 = var_14;

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    arr_28 [i_7] = ((var_9 ? (((arr_11 [i_5] [i_6] [i_7]) ? var_3 : var_5)) : var_0));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_36 [7] [7] [i_7] [i_7] [i_7] [i_6] [i_5] = ((min(127, (arr_8 [i_7] [i_8 + 1] [i_8 - 1] [i_7]))) / var_12);
                                var_25 *= var_6;
                                arr_37 [i_9] [i_9] [i_9] [i_7] [i_9] [0] [i_5] &= ((-(arr_1 [i_5] [i_9])));
                            }
                        }
                    }
                }
            }
        }
        var_26 |= (arr_24 [10]);

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_40 [i_10] [i_10] = ((((var_17 ? var_4 : (arr_4 [i_5] [i_10] [2]))) > var_2));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        arr_46 [i_5] [2] [i_11] [i_10] = var_13;
                        var_27 = ((((((arr_33 [i_12] [i_11] [i_10] [i_5]) ? var_2 : (arr_33 [i_5] [i_10] [i_11] [i_12])))) ? (((((arr_8 [i_5] [i_5] [21] [i_10]) < var_5)) ? ((var_16 ? (arr_20 [i_5] [i_10]) : var_10)) : (arr_32 [i_10] [i_5] [i_11] [i_10] [i_5] [i_10]))) : (arr_29 [i_10])));
                    }
                }
            }
        }
    }
    var_28 = (max(var_28, 32761));
    #pragma endscop
}
