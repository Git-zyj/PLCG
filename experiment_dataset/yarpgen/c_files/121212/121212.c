/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 = var_11;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_17 = (((arr_1 [i_0 + 1]) ? (var_14 & var_4) : (((arr_3 [i_0] [i_1]) & var_4))));
                        var_18 -= (var_3 < (((arr_8 [i_0] [i_1]) ? var_9 : var_4)));
                        arr_10 [11] [12] [i_1] = var_7;

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            var_19 = -var_14;
                            var_20 = (var_9 ? (arr_0 [i_0 - 2] [i_0 - 2]) : (arr_3 [i_1] [i_1]));
                            var_21 = ((var_10 ? var_9 : (~var_2)));
                            var_22 = var_4;
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_15 [i_5] [i_5] = (!var_6);
            var_23 = (max(var_23, (((((var_14 && (arr_3 [8] [8]))) ? var_14 : (!var_1))))));
            arr_16 [i_0] [i_5] = var_13;
            var_24 = (arr_7 [i_0 + 1] [8] [i_5] [i_0]);
        }
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            var_25 = var_11;
            arr_19 [i_6] [9] = ((var_9 ? var_6 : (var_7 & var_12)));
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_26 = ((~((var_0 ? (arr_24 [i_8] [15] [i_8]) : var_11))));
            arr_25 [i_8] = (((arr_23 [i_7] [i_7] [i_8]) ? var_4 : (arr_24 [i_8] [i_7] [i_7])));
            var_27 = (max(var_27, (((var_9 ? (!4) : var_6)))));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                {
                    var_28 += (((((arr_29 [i_7] [16]) ? var_14 : (arr_29 [1] [i_7]))) >> ((((var_4 - (arr_22 [i_7] [i_7] [i_7])))))));
                    var_29 = (((((min(var_0, (arr_29 [i_7] [i_9])))) ? ((var_10 ? var_14 : var_4)) : (((var_14 ? (-9223372036854775807 - 1) : var_14))))));
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        arr_34 [i_11] = var_12;
        arr_35 [i_11] = (var_9 ? ((var_13 ? (((arr_22 [i_11] [i_11] [i_11]) / var_9)) : -var_6)) : (arr_11 [i_11] [i_11] [i_11] [1] [12]));
    }
    var_30 *= ((var_0 ? ((((!(251 + var_1))))) : ((var_14 + (var_5 - var_12)))));
    var_31 = var_5;
    #pragma endscop
}
