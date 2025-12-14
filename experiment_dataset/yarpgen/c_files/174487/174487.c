/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_1 [i_0]) ? (arr_0 [i_0]) : (((-(arr_3 [i_0]))))));
        arr_5 [i_0] = (min((((var_2 ? (arr_2 [i_0] [i_0]) : var_7))), (((arr_2 [i_0] [0]) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_1] [i_2] = ((var_12 ? (((var_17 > var_10) ? (arr_9 [i_2] [i_2] [i_1] [i_0]) : (arr_6 [i_0] [i_1 + 1]))) : var_5));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] = (arr_15 [i_0] [i_2]);
                                arr_20 [i_0] [i_1] [10] [i_1] [i_1] [i_0] [3] = (~76);
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (((arr_14 [i_0] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_3] [i_4 + 1]) ? (arr_9 [i_0] [i_1 + 1] [i_0] [i_4 - 2]) : var_15));
                            }
                        }
                    }
                    arr_22 [i_0] [2] = (arr_16 [i_1] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 3]);
                }
            }
        }
        arr_23 [i_0] = ((!(arr_2 [i_0] [i_0])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_27 [14] [14] = ((1 ? 642781159 : -642781159));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_18 += ((var_7 ? (arr_30 [i_6] [i_6] [i_6] [i_5]) : ((((((arr_28 [i_5]) ? -642781159 : 9663)) < 642781167)))));
                    var_19 = var_1;
                    arr_33 [i_5] [i_6] [11] = ((((((1 ? 31352 : 8259660147636380524)) ? ((-642781157 ? 11251140007005757787 : 6)) : 235))));
                }
            }
        }
    }
    var_20 = var_17;
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                {
                    arr_44 [i_8] = (((((var_12 - (arr_39 [i_8] [i_8])))) ? ((-(arr_32 [i_9 - 1] [i_8] [i_8]))) : (min((arr_36 [i_8 - 1]), (1 - 9223372036854775791)))));
                    var_21 = (arr_29 [i_8] [i_9]);
                    arr_45 [12] [12] [12] |= (arr_35 [i_8]);
                    var_22 ^= (3727380794078103720 ? (arr_42 [14]) : (((var_10 ? (arr_30 [i_8] [i_8] [i_8 - 1] [i_9 - 1]) : var_12))));
                    arr_46 [i_8] = (((((~(arr_32 [i_10 + 3] [i_8] [i_10 + 2])))) ? (arr_24 [i_9]) : (arr_30 [i_8] [i_9] [i_9] [i_9])));
                }
            }
        }
    }
    var_23 = 0;
    var_24 = (max(var_24, var_16));
    #pragma endscop
}
