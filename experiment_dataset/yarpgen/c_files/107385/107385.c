/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            arr_6 [i_0] &= ((((min((var_12 < 255), (arr_4 [i_0] [i_0] [i_0])))) ? (((var_14 ^ 58) ? (((var_17 < (arr_1 [i_1] [i_1])))) : (var_0 & var_14))) : (((((var_8 != (arr_5 [i_0] [10] [i_1 + 1])))) - (var_15 + var_17)))));
            arr_7 [i_0] [i_0] [4] = (arr_4 [i_0] [i_1 + 1] [i_1]);
            var_18 *= var_15;
        }
        for (int i_2 = 4; i_2 < 7;i_2 += 1)
        {
            var_19 = ((~(arr_9 [i_0] [i_2])));
            var_20 = (var_4 | var_15);
        }

        for (int i_3 = 4; i_3 < 8;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {

                for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_4] [i_3 + 1] = var_0;
                    var_21 = (((arr_15 [5] [i_0] [5] [i_4] [i_5 + 1]) && (arr_9 [i_5] [i_4])));
                }
                for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    var_22 = ((arr_17 [3] [1] [i_4] [i_4] [3] [1]) ? (var_5 != var_11) : (max((arr_9 [i_3 + 3] [i_6 + 1]), (((arr_1 [i_6 - 1] [i_0]) + (arr_12 [i_0] [6] [i_0]))))));
                    arr_19 [i_0] [i_3] [i_0] [i_6] = (!0);
                }
                var_23 = (max(var_23, (((~((var_9 ^ ((10675800987391713578 ? 5156058803138388010 : 252)))))))));
                var_24 = (max(var_24, 5156058803138388000));
                arr_20 [i_0] = (var_17 & var_9);
                var_25 = arr_14 [i_0] [i_0] [2] [i_0] [i_0];
            }
            arr_21 [i_0] [i_0] [i_0] = (arr_14 [i_3] [i_3 - 1] [i_0] [i_0] [0]);
            var_26 = (((((10419000395115462333 != (arr_2 [i_3 + 2])))) > (arr_2 [i_3 + 1])));

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                arr_24 [i_0] [7] [7] = (((arr_0 [i_3 + 1]) && ((min((arr_22 [i_3 + 3] [i_3 + 3] [i_3 + 3]), var_11)))));
                var_27 = (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) > (((arr_18 [i_7] [i_7] [i_3 + 3] [i_0]) | -var_6))));
                var_28 *= 14272056582332440220;
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                arr_28 [i_8] [i_8] = arr_1 [i_8] [1];
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        {
                            var_29 *= (((arr_8 [0] [i_3 - 2]) ? (11488845571632804161 + var_12) : var_8));
                            var_30 = var_9;
                            arr_33 [i_8] [i_10] = (((((arr_12 [i_10 + 2] [i_9 - 1] [i_0]) ? var_17 : ((var_16 ? 5156058803138388006 : var_9)))) == (arr_3 [i_8])));
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 9;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 9;i_13 += 1)
                    {
                        {
                            var_31 += (15054478631571172031 << 0);
                            var_32 = var_15;
                            var_33 -= arr_11 [i_0] [i_0];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 9;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        {
                            var_34 = var_13;
                            arr_47 [i_11] [i_11] [i_11] [1] [i_11] = ((28 ? 10307399186798489788 : 28));
                        }
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 11;i_16 += 1)
        {
            var_35 = (max(var_35, var_5));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    {
                        var_36 += (18409516313149005515 <= 47);
                        var_37 = ((115 << (15524678208864676822 - 15524678208864676800)));
                        var_38 -= ((~(((arr_38 [i_0] [i_0] [i_0] [i_17] [i_17] [i_18]) ? (arr_36 [1] [i_16] [i_16] [i_16] [i_16] [i_16]) : var_4))));
                        arr_56 [i_0] [i_16] [i_17] [i_18] [i_16] [i_0] = ((((((((((arr_32 [i_17] [i_16] [i_16] [i_16] [i_16] [i_16]) <= var_16)))) != var_3))) == ((((var_8 ? 211 : 0))))));
                    }
                }
            }
            arr_57 [i_0] [i_16] = (arr_9 [i_0] [i_16]);
            arr_58 [i_16] = 255;
        }
    }
    var_39 = ((var_0 ? (((13494268343373775684 | 15648500316754437142) ? (~255) : var_16)) : var_6));
    #pragma endscop
}
