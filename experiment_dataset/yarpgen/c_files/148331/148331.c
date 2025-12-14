/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_15 = (arr_1 [i_0] [i_0]);
        var_16 = (max(var_16, (((((((var_8 ? 58 : -1069676414))) ? (min(var_11, -60)) : ((253 + (arr_0 [i_0]))))) + -50))));
        var_17 = (+((var_5 << ((((arr_1 [i_0] [i_0 - 1]) <= 3))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_4 [i_1] [10] = ((var_0 * (max((((arr_2 [i_1] [i_1]) ? -21 : var_3)), ((min(var_9, 15)))))));
        var_18 = (arr_1 [i_1] [i_1]);
        var_19 = (max(58, var_2));
    }
    var_20 = ((((var_10 ? var_7 : (max(var_2, var_5)))) + 58));

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_8 [i_2] = (min(((var_7 ? (arr_7 [i_2] [i_2]) : var_0)), var_7));
        var_21 = (min(var_21, 58));
        var_22 = (min(var_22, ((((~128) || ((((!58) ? (((((arr_7 [3] [i_2]) || var_1)))) : 29196))))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_23 = (max(var_23, (!15)));
        arr_12 [i_3] = 242;

        /* vectorizable */
        for (int i_4 = 2; i_4 < 6;i_4 += 1)
        {
            arr_15 [i_3] [i_3] = ((-102 ? 31 : var_3));
            var_24 = (max(var_24, ((((arr_11 [i_3]) != (arr_11 [i_4 + 1]))))));
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_25 = ((((max(var_9, 29185))) ? -5 : (((var_6 ? (arr_17 [i_5]) : var_10)))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 14;i_8 += 1)
                {
                    {

                        for (int i_9 = 2; i_9 < 14;i_9 += 1)
                        {
                            var_26 = (((253 || var_5) <= ((((arr_20 [i_7] [11] [i_8] [i_8 - 2]) || 18446744073709551602)))));
                            var_27 = (min(var_27, (((1359809770 ? (((((0 ? 736777312 : (arr_27 [i_5] [i_5] [i_7 + 3] [i_7 + 3] [13] [i_6] [i_7 + 3])))) ? (max(-1404001692, 48)) : (~17))) : (arr_18 [14]))))));
                            var_28 |= (((~(min(18446744073709551615, 109)))));
                        }

                        for (int i_10 = 3; i_10 < 13;i_10 += 1)
                        {
                            arr_33 [i_5] [i_5] = min((max(58, 16752582586024248779)), (max(var_11, var_7)));
                            var_29 = (max(var_29, ((((~-var_10) + (((77 <= 131) << (min(var_3, 5)))))))));
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            arr_38 [i_5] [i_5] [i_5] [10] [i_11] = var_0;
                            arr_39 [i_5] [i_7 + 1] [i_7] [i_5] [i_5] = ((((((arr_24 [i_5] [i_8] [i_8 - 3] [i_8]) * 13))) ? (min(16752582586024248792, 1391)) : 1));
                            arr_40 [i_5] [i_5] [i_5] [i_5] [i_8] [1] [i_5] |= ((((max((var_9 != var_12), 242))) ? (((((32 + 1402) == (max(1, (arr_34 [i_8]))))))) : (max(var_8, ((max(64144, 114)))))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_30 = ((~(arr_37 [i_5] [i_6] [i_8 - 1])));
                            var_31 = (arr_35 [i_12] [i_12] [i_8 - 3] [i_7 + 1] [i_5] [i_5]);
                        }
                        var_32 = -41;
                        var_33 = ((min((((151 == (arr_22 [i_8] [i_6] [i_7] [0])))), (arr_23 [i_5] [i_5]))));
                    }
                }
            }
        }
        var_34 = ((var_0 | (~255)));
    }
    for (int i_13 = 2; i_13 < 20;i_13 += 1)
    {
        var_35 |= (((max((arr_45 [i_13 + 1]), ((-(arr_45 [18]))))) << (((min(var_11, (arr_46 [i_13 - 1]))) - 2795))));
        var_36 = (((((1 ? 14 : 14816))) << (((9882391191402653928 * 109) - 7269483587735284397))));
    }
    #pragma endscop
}
