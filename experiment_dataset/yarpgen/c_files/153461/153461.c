/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((min((var_2 == var_12), ((var_13 ? var_11 : 18446744073709551615)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_17 = ((!(~16)));
            var_18 ^= ((-((4177893838 ? var_7 : var_2))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_19 -= (var_12 ^ -var_2);
                arr_10 [i_1] [i_1] [i_1] = ((!(!var_2)));
                arr_11 [7] [i_1] [i_1] = ((-((var_4 * (arr_3 [i_0])))));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_20 = (arr_9 [i_0] [i_0] [i_3]);
                    arr_19 [i_3] [i_3] [i_3] [i_1] [i_3] = var_5;
                    arr_20 [i_0] [i_0] [i_0] [i_1] = ((-(((arr_14 [i_0] [i_1] [i_0] [i_4]) << (((arr_1 [13]) - 25405897165061018))))));
                    arr_21 [i_0] [i_0] [i_1] = ((4291566277105007305 ? 12538554862176640685 : 91791836));
                }
                arr_22 [i_1] = (((!var_0) ? var_3 : var_1));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_21 ^= (0 ? (~var_13) : 18446744073709551615);
                            arr_28 [i_0] [i_1] [i_3] = (((~(arr_14 [i_6 + 1] [i_5] [i_3] [i_0]))));
                            var_22 = ((-((9350 ? (arr_3 [19]) : var_1))));
                            arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_23 [i_0] [i_0] [i_0] [i_0]);
                            var_23 = ((var_9 >> (((!(arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    arr_32 [i_0] [i_1] [i_1] [i_7] = var_2;

                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        var_24 += (((~var_13) << ((((var_0 ? var_15 : 18446744073709551610)) - 2279680893564898694))));
                        arr_35 [i_1] [i_8] [i_7] [i_3] [i_3] [i_0] [i_1] = var_13;
                        var_25 = ((!(arr_4 [i_0])));
                        var_26 = (((!(arr_1 [i_0]))));
                    }
                    for (int i_9 = 4; i_9 < 21;i_9 += 1)
                    {
                        var_27 = (((arr_13 [i_0] [i_1] [i_9 - 4]) ? (6 / 4288539163) : (-9223372036854775807 - 1)));
                        var_28 ^= ((~(var_12 <= var_14)));
                        arr_38 [i_1] [i_1] [i_1] [i_7] [i_7] = ((-var_3 ? var_0 : var_4));
                        var_29 = 1614190169;
                    }
                    arr_39 [i_0] [i_0] [i_1] [i_0] [i_0] = (((arr_6 [8] [8]) * (arr_18 [i_1])));
                    arr_40 [i_1] = ((0 ? 32768 : -6780));
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    var_30 = (16515072 ? var_5 : (arr_37 [i_1] [i_1] [0] [i_3] [i_10]));
                    var_31 += ((var_2 & (arr_42 [i_0] [i_0] [i_3] [i_0] [i_3])));
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                {
                    arr_45 [i_0] [i_1] [i_3] [i_11] [i_1] = (((0 ? var_1 : var_11)));
                    var_32 = (max(var_32, ((((((127 ? 1 : 1))) ? ((-2490683378776735698 ? var_2 : -351675174)) : (((-891566766758791147 ? -690279493 : 2117694011))))))));
                    arr_46 [i_0] [i_1] [i_11] [i_0] |= var_5;
                }
                for (int i_12 = 2; i_12 < 21;i_12 += 1)
                {
                    var_33 = (!-1275039346);
                    arr_50 [i_12] [i_0] [i_1] [i_1] [i_0] [i_0] = (!var_8);
                    arr_51 [i_1] [i_1] [9] [i_1] = -9223372036854775807;
                }
            }
        }
        var_34 += var_12;
    }
    for (int i_13 = 1; i_13 < 9;i_13 += 1)
    {
        arr_54 [i_13] = ((11009536353605162818 == (-9223372036854775807 - 1)));
        arr_55 [0] &= var_13;
        var_35 += var_4;
        arr_56 [i_13] = (max(var_8, ((427422855 ? ((max(8191, var_5))) : (arr_41 [i_13])))));
    }
    #pragma endscop
}
