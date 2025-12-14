/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = -var_16;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_21 = (min(var_21, ((min(var_9, ((((((var_0 && (arr_2 [i_0] [i_1])))) & (18446744073709551615 || var_4)))))))));
            var_22 = ((-1 - ((((18446744073709551602 ? (arr_1 [i_0]) : 65535))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_23 = 3883005017881862723;
            var_24 = (arr_0 [i_0]);
            var_25 = (((arr_0 [i_0]) ? var_4 : 14322));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_26 = (((!var_14) * var_15));
            var_27 = 18446744073709551614;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        {
                            var_28 = ((((arr_11 [8] [i_4] [i_0] [i_0]) << (((arr_12 [i_0] [i_5] [i_5]) - 14764)))));
                            var_29 = (max(var_29, (((58 ? var_8 : (arr_16 [i_4] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1]))))));
                            var_30 = (((arr_14 [i_6 + 1] [6] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1]) ? (arr_14 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1]) : 8775094125300250518));
                        }
                    }
                }
            }
            var_31 = arr_10 [i_0] [i_0];
        }
    }
    var_32 += (min(var_7, var_11));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                var_33 = ((var_6 * (((-(198 || 19))))));
                var_34 = (min(-2068, 18446744073709551596));
                var_35 = (((arr_17 [i_7] [i_7]) << ((((~((var_11 ? (arr_21 [i_7] [i_8]) : var_10)))) - 32))));
            }
        }
    }
    var_36 = var_17;

    /* vectorizable */
    for (int i_9 = 3; i_9 < 11;i_9 += 1)
    {
        var_37 = (((((-2057437298 ? 2464120514 : -96))) > ((var_9 ? (arr_20 [i_9]) : var_12))));
        var_38 = (arr_22 [i_9 + 2]);
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    {
                        var_39 = (((arr_21 [i_9] [i_9 + 2]) - var_10));
                        var_40 = ((var_6 ? (arr_21 [i_10 - 1] [9]) : var_4));
                        var_41 = (min(var_41, (((536870911 ? (arr_18 [i_9 - 2] [i_9 + 2]) : -22)))));
                    }
                }
            }
        }
        var_42 = (arr_32 [i_9] [i_9]);
    }
    #pragma endscop
}
