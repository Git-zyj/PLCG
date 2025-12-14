/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 |= ((max(var_4, var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_13 = (+(((arr_6 [i_0] [i_0] [i_0]) - (arr_0 [i_1] [i_2]))));
                    var_14 -= ((~((-(arr_6 [i_2] [i_1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = -30647;
                                arr_11 [i_0] [15] [i_4] [i_4] [i_4] [0] = (min(-16, ((~(arr_4 [i_1] [7])))));
                                var_16 = ((((!(arr_10 [i_0] [i_1] [13] [i_3] [i_4]))) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_4]) : ((min((arr_10 [i_0] [i_1] [i_2] [i_0] [i_4]), (arr_10 [i_0] [1] [i_0] [i_0] [i_4]))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [12] [1] &= ((var_1 ? (arr_10 [i_7] [i_7 + 2] [i_7 + 1] [i_7] [i_5]) : -var_8));
                                var_17 = (max(var_17, (14 == var_0)));
                                var_18 *= 75;
                                var_19 = (max(var_19, (~-var_2)));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            var_20 = 21;
                            var_21 = ((var_5 ? ((235 ? var_3 : var_1)) : ((((arr_4 [i_1] [7]) ? 235 : (arr_6 [i_0] [i_0] [16]))))));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_22 |= (((((var_7 ? var_0 : var_0))) ? 792985585 : (((var_2 || (arr_21 [i_0] [6] [i_5]))))));
                            var_23 = (min(var_23, (((!(arr_0 [i_0] [i_1]))))));
                            arr_29 [i_10] [i_10] = (((arr_1 [i_0]) % (arr_1 [i_5])));
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_24 = 254;
                            var_25 = ((((((~(arr_22 [i_0] [i_0]))) + 2147483647)) << (((arr_12 [i_0] [i_1]) - 14276936266566016329))));
                            var_26 = (min(var_26, (~var_7)));
                            arr_32 [i_0] [5] [i_8] = ((-(arr_25 [i_0] [19] [i_0] [i_0] [i_0])));
                            var_27 -= (arr_13 [i_0] [i_8] [i_11]);
                        }
                        for (int i_12 = 1; i_12 < 17;i_12 += 1)
                        {
                            var_28 *= -var_6;
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(arr_34 [i_12 + 1] [i_12 + 3])));
                            arr_38 [i_1] [i_1] [i_1] = (2147483642 / 2066976073757984812);
                        }
                        var_29 = (((arr_8 [i_0] [i_0] [i_0] [i_5]) ? (arr_31 [i_0] [i_1] [i_5] [i_8]) : 1));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_42 [i_0] [i_0] [i_5] = (~1);
                        var_30 &= (((((3455804031881818447 == (arr_12 [i_0] [i_0])))) << (((((-9223372036854775807 - 1) ? var_4 : var_2)) - 1529637542))));
                        var_31 |= (((arr_26 [i_13] [12] [i_1] [i_1] [i_0]) & 0));
                    }
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        arr_45 [i_0] [i_0] [3] [i_0] = (((arr_20 [i_14] [i_5] [2] [i_0]) || 1505726809367755418));

                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            arr_48 [i_15] [i_14] [i_14] [i_14] [i_14] = ((13055 == (arr_13 [i_0] [i_0] [i_0])));
                            var_32 -= ((-((4238291485654104999 ? var_0 : (arr_31 [i_0] [i_5] [9] [i_5])))));
                            arr_49 [19] [i_0] [i_0] [0] [i_15] = (arr_25 [i_0] [i_1] [i_5] [i_0] [i_1]);
                        }
                        var_33 = (min(var_33, var_10));
                    }
                }
                var_34 = ((-(max((var_9 > var_9), (((arr_6 [i_1] [i_0] [i_0]) ? 14002888922782998786 : (arr_24 [i_0] [i_0])))))));
                arr_50 [0] [i_0] [i_0] = ((var_4 <= (max(1, -792985563))));
            }
        }
    }
    #pragma endscop
}
