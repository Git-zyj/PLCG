/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (~var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (((arr_1 [i_1]) <= ((min((arr_1 [i_1]), (arr_1 [i_1]))))));
                var_21 ^= (16383 <= 0);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {
            {
                var_22 = var_19;
                arr_10 [i_2] [i_3] [i_3] |= (arr_1 [17]);

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_13 [i_2 + 2] = (max((arr_4 [i_2 - 1] [i_2 - 1]), (min(((18446744073709551614 ? 18446744073709551600 : (arr_4 [i_2] [13]))), ((min(0, -1)))))));
                    arr_14 [1] = ((((((arr_9 [i_2 + 3] [i_3 - 3]) ? 1 : 573334243))) ? (arr_8 [i_2 + 1] [i_3] [i_3 - 2]) : (((arr_9 [i_2 + 2] [i_3 + 1]) ? (arr_12 [i_2 + 1]) : 65535))));
                    arr_15 [i_2] [i_3] = ((((((-19 ? var_0 : 95)))) ? (((max((var_6 >= -9), (min((arr_2 [i_4]), var_4)))))) : 18446744073709551591));
                    arr_16 [i_3] &= (min(16720, (min((max(var_8, (arr_11 [i_2] [i_3] [i_3] [i_4]))), (((var_9 >> (((arr_6 [i_2]) - 12271650765277002080)))))))));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_20 [i_2] [i_2] [i_3] [10] = var_16;

                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        var_23 = (var_11 != var_9);
                        arr_25 [i_2 + 1] [i_3] [i_5] = var_13;
                        var_24 = (min(var_24, (((+((((((arr_12 [i_5]) * (arr_21 [i_2] [7] [i_2] [i_2])))) ? (min((arr_7 [i_2]), 11)) : -44)))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_25 *= (((arr_28 [i_2] [i_3 + 1] [i_3] [i_5]) ? (arr_28 [i_2] [i_3 - 2] [i_8] [i_8]) : 20929));
                            var_26 = -6955535040147045234;
                            var_27 = (((((20913 ? 130624361 : (arr_19 [i_2] [i_2] [i_2])))) ? -30453 : -17360));
                            var_28 = var_9;
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_29 = 18446744073709551615;
                            arr_36 [i_2] [i_2] [i_3] [i_5] [i_5] [i_7] [i_9] = (((241 <= var_4) ? (arr_22 [i_3 - 1] [8] [i_7] [i_9]) : (arr_23 [i_9] [i_3] [i_2])));
                        }
                        var_30 = (min(var_30, (arr_18 [i_2 - 1] [i_3] [i_5])));
                        arr_37 [i_7] = (arr_35 [i_2 + 1] [i_3] [i_3] [i_3] [i_3] [i_5] [i_7]);

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_31 = var_5;
                            arr_40 [i_2] [i_3] [i_10] [i_5] [i_7] [i_7] [i_10] = var_2;
                            arr_41 [i_2] [i_10] [i_5] [i_2] [i_10] [i_3 - 2] = var_1;
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            arr_45 [12] [2] [i_7] [i_5] [i_3] [i_2] = ((((((arr_7 [i_2]) ? (arr_35 [i_2] [i_2] [i_3] [i_5] [i_7] [i_11] [i_11]) : var_19))) - var_14));
                            var_32 *= (arr_18 [i_2 + 3] [i_3 - 1] [i_3 + 1]);
                            arr_46 [i_11] [i_7] [i_5] [i_3 + 1] [i_2] &= (arr_9 [i_2 + 1] [i_3 - 3]);
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_33 = ((((var_11 || (arr_39 [i_2] [i_3] [i_5] [i_7]))) ? (arr_6 [i_2 + 2]) : ((var_0 << (((arr_27 [i_2] [i_3 - 1] [i_5] [i_12]) - 25676))))));
                            var_34 = (min(var_34, (arr_31 [i_2] [i_2] [i_2] [i_2] [1])));
                            arr_49 [i_2] [i_3] [i_5] [i_7] [i_12] [i_12] = (var_0 ? (~8191) : -3);
                        }
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        arr_52 [i_2] [i_3 - 1] [i_3] [i_5] [i_13] = ((arr_35 [i_3 - 2] [i_3] [i_5] [i_13] [i_13] [i_13] [i_13]) / (arr_32 [i_3 - 2] [1] [i_5] [i_5] [8] [i_13] [i_13]));
                        arr_53 [1] [i_3] [i_5] [i_13] = (arr_4 [i_2] [i_2 + 3]);
                        arr_54 [i_2] [0] [i_2] = var_18;
                    }
                    var_35 = (max(44616, ((max(44628, (arr_29 [i_3 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            {
                                var_36 = (arr_43 [i_2] [i_3] [i_5] [i_15] [i_15] [i_14] [i_14]);
                                var_37 = 48808;
                            }
                        }
                    }
                }
                var_38 *= (arr_47 [i_2] [i_2 + 2] [i_2] [i_2] [5]);
                arr_59 [i_2] [i_3] = var_17;
            }
        }
    }
    var_39 = (min(var_39, (~var_0)));
    var_40 = var_3;
    #pragma endscop
}
