/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 16642930763991432677;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min(110, (min((arr_0 [i_0]), (arr_0 [i_0])))));
        var_17 &= -var_4;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_14 [i_3] [i_1] = ((+(((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_3]) : (arr_2 [i_1] [i_1])))));
                        var_18 = (!var_15);
                        arr_15 [i_1] [3] [i_3] = var_10;
                        arr_16 [i_3] = 1;
                    }
                }
            }
        }
        arr_17 [i_0] [9] = var_6;
    }

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_19 = (min(var_19, 3959099653));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_31 [i_4] [i_4] [i_5] [i_6 - 1] [i_7] [i_7] [i_6] = (min(((((!(arr_25 [i_6] [i_6] [i_7]))) ? ((101 ? var_15 : (arr_22 [i_4] [1]))) : -var_13)), (((arr_28 [i_6] [i_5]) ? 1 : 9151314442816847872))));
                                arr_32 [22] [22] [22] [i_7] [i_8 - 1] [i_8] [8] &= (arr_24 [2] [i_6 - 1] [i_8 + 1]);
                                var_20 = 1152921504606846976;
                            }
                        }
                    }
                    var_21 = var_11;
                    arr_33 [11] [i_5] [i_6] = (max((((((105 ? var_10 : (arr_27 [i_4] [i_4])))) ? (((arr_25 [i_6] [i_6] [i_5]) ? (arr_19 [1]) : var_3)) : (arr_28 [i_6] [i_6]))), (((!(arr_29 [i_6 - 1] [i_6]))))));
                }
            }
        }
        arr_34 [3] = ((~((~(arr_25 [i_4] [1] [i_4])))));

        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {

            for (int i_10 = 3; i_10 < 23;i_10 += 1)
            {
                arr_40 [i_4] [i_4] = (((((arr_21 [i_4]) ? var_4 : ((min(-7401000492504657954, var_7))))) | ((((!(arr_38 [i_9] [i_10]))) ? (arr_19 [i_9]) : (arr_39 [5] [i_9] [i_10] [15])))));
                arr_41 [i_10 - 2] = (((((((((arr_21 [i_4]) ? (arr_35 [i_10] [8] [8]) : var_0))) ? (max(var_6, (arr_18 [21]))) : var_8))) ? (-9223372036854775807 - 1) : var_2));
            }
            arr_42 [i_4] [i_4] [i_4] = (max((((arr_23 [i_4] [i_9]) ? (~0) : var_1)), (arr_27 [4] [4])));
        }
        arr_43 [i_4] [18] = (-var_4 ? ((((min((arr_20 [i_4]), -9223372036854775803)) | (arr_38 [i_4] [i_4])))) : ((-(max(17293822569102704639, var_15)))));
    }
    #pragma endscop
}
