/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_2] [i_1] [i_1] = ((min(((max((arr_1 [i_0] [i_0]), (arr_2 [i_0])))), (((arr_5 [i_0] [i_1] [i_1]) ? 1 : var_3)))));
                            var_13 = (i_1 % 2 == zero) ? (((((~(arr_8 [i_1] [i_1] [i_2] [i_3]))) & (((arr_0 [i_0] [i_1]) >> (((arr_8 [i_1] [i_0] [i_1] [i_0]) - 93))))))) : (((((~(arr_8 [i_1] [i_1] [i_2] [i_3]))) & (((arr_0 [i_0] [i_1]) >> (((((arr_8 [i_1] [i_0] [i_1] [i_0]) - 93)) + 47)))))));
                        }
                    }
                }
                var_14 &= (!127);

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    arr_16 [i_4] &= ((1065920846085741525 ? (((var_12 * (arr_7 [i_4] [i_0] [i_4])))) : (min((((~(arr_10 [i_4] [i_4] [i_4] [i_0])))), var_1))));
                    arr_17 [i_1] [i_1] [i_4] [i_4] = ((((max((arr_15 [i_1] [i_1] [i_4]), (min(1, -9223372036854775797))))) ? ((-var_7 ? var_4 : var_7)) : ((-((min((arr_3 [i_1]), 23662)))))));
                }
                arr_18 [i_0] [i_1] = (max((((120 / -1890305551) ? (((max((arr_2 [i_0]), (arr_3 [i_1]))))) : (arr_11 [i_1] [i_1]))), (((!(var_2 * var_4))))));
            }
        }
    }
    var_15 = ((var_12 ^ ((((min(-3532, var_4))) ? ((min(0, 77))) : ((var_7 ? 6065 : var_4))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_25 [i_5] = (min(1, (max(((-28522 ? (arr_22 [i_5] [i_6]) : (arr_24 [i_5] [i_5] [i_5]))), ((((arr_21 [i_5]) <= 1)))))));

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    arr_28 [i_5] [i_6] [i_6] = ((1 ? 2355157420 : (min(7, 3840))));
                    arr_29 [i_7] &= (min((arr_20 [i_7]), ((max(var_1, var_6)))));
                    var_16 = (arr_26 [i_5]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 19;i_9 += 1)
        {
            {

                for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    arr_37 [i_8] [i_8] [i_8] = ((~(~4224326672)));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                var_17 = (((arr_31 [i_8]) != 1));
                                arr_42 [i_9] [i_11] [i_8] [i_9] [i_9] &= 124;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        arr_45 [i_8] [i_9 + 1] [i_8] [12] [i_8] = ((!(0 * 77)));
                        arr_46 [i_13] [i_8] [i_8] [i_8] = ((-((var_8 ? (arr_33 [i_8] [i_8]) : var_3))));
                    }
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 3; i_16 < 18;i_16 += 1)
                        {
                            {
                                arr_53 [i_15] [i_15] [i_15] [i_8] [i_9] [i_9 + 1] [i_8] = (((var_8 % 747278057) ? (~-28522) : (!1)));
                                var_18 = (min(var_18, (~1640281436755387155)));
                            }
                        }
                    }

                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_19 = (min(var_19, ((((((-(arr_33 [i_8] [i_9])))) ? (1 >= 1) : var_3)))));
                        arr_58 [i_8] [i_9 - 2] [i_9] [i_17] &= var_1;
                        arr_59 [i_9 + 1] [i_8] = (((arr_33 [i_8] [i_8]) ? 1 : (arr_33 [i_8] [i_8])));
                    }
                    var_20 = (arr_52 [i_8] [i_9 - 1]);
                    arr_60 [1] [i_8] [13] = ((1 >= (var_11 & 65535)));
                    var_21 = (((arr_48 [i_8] [i_9 - 2]) ? (arr_48 [i_8] [i_9 - 1]) : (arr_48 [i_8] [i_9 - 1])));
                }
                var_22 = (((-5111720565646207173 && -10409) << ((((max(2451280173, (arr_54 [i_8] [16] [i_8] [i_8] [i_9] [i_9 - 2])))) ? 0 : (max((arr_51 [i_8] [i_9 - 1] [i_9 - 2]), (arr_30 [i_8])))))));
                arr_61 [13] [i_8] = ((-(arr_54 [i_8] [i_8] [i_8] [i_8] [i_8] [i_9])));
            }
        }
    }
    #pragma endscop
}
