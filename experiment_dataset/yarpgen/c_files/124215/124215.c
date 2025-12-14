/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = 59090;
        var_19 = ((-((-(arr_0 [i_0] [i_0])))));
        var_20 = (arr_2 [i_0 + 1]);
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = (max((arr_1 [i_1 - 2]), 0));
        var_21 = ((!(((((17270486460363220484 ? 1176257613346331131 : -202284236)) >> (((arr_1 [i_1 - 2]) - 2331244756)))))));

        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_12 [i_1] [i_3] [i_2] [i_3] = (max((max((arr_0 [i_3] [i_2 + 2]), var_7)), (max((min(var_8, (arr_1 [i_1]))), var_16))));
                arr_13 [i_1] [i_1] [i_3] [i_1] &= 4095;
                var_22 = max((min(16352, (min((arr_8 [5] [8] [5]), -26111)))), (((max(6859597437417194078, 237)) ^ var_5)));
            }
            var_23 = (max(var_23, 9));
            arr_14 [i_1] [i_1] = ((arr_4 [i_1 - 2]) ? (arr_2 [i_2]) : (((~var_1) ? 511 : (arr_2 [i_1]))));
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = (min((((max(-202284236, 1048575)) ^ (~var_1))), var_12));
        var_24 = (arr_2 [i_4]);
        var_25 = ((-(((((16777215 ? (arr_2 [i_4]) : var_18))) ? ((((arr_1 [i_4]) ? 127 : (arr_10 [1] [i_4] [10] [i_4])))) : (~1048599)))));
        arr_19 [i_4] = var_9;
        var_26 ^= 14005;
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            arr_25 [i_6] = var_3;
            var_27 = var_11;
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    {
                        var_28 = 4294967280;
                        var_29 = var_11;
                    }
                }
            }
            var_30 = (arr_20 [i_5]);
        }
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    {
                        arr_40 [i_9] [i_9] [i_11] [i_9] = ((var_15 ? 1048576 : var_9));
                        var_31 = ((!((max(17270486460363220496, -202284236)))));
                        var_32 = (arr_2 [i_5]);
                        arr_41 [i_9] [i_10] = (max((((~1048575) ? var_9 : ((min(65535, 202))))), 181));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    {
                        arr_46 [i_9] [i_9] [i_9] [i_9] = ((((arr_37 [i_9 - 1] [i_9 + 1]) ? (min(var_17, (arr_29 [i_5] [i_9] [i_9 + 2] [i_9 + 2] [i_5] [i_9]))) : var_18)));

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            var_33 = var_9;
                            var_34 = (((arr_36 [i_9] [i_9] [i_9 + 1]) ? 9232 : (arr_34 [i_9] [i_9] [i_9 + 1] [i_9 + 1])));
                            var_35 = (!var_4);
                            var_36 = (max(var_36, (1400746137648073507 || var_2)));
                        }
                        var_37 = (arr_16 [i_5]);
                    }
                }
            }
        }

        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            var_38 = (max(var_38, var_14));
            var_39 = (arr_38 [i_5] [i_5] [i_15]);
            /* LoopNest 3 */
            for (int i_16 = 1; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 11;i_18 += 1)
                    {
                        {
                            var_40 = var_14;
                            var_41 = ((~((var_13 ? (arr_59 [i_5] [i_17 + 1] [i_5] [i_17 - 2] [i_17] [i_16 - 1]) : (arr_59 [i_16] [i_17 + 1] [i_16] [i_17 + 1] [i_17] [i_16 + 1])))));
                        }
                    }
                }
            }
        }
        var_42 = var_9;
    }
    var_43 = 44426;
    #pragma endscop
}
