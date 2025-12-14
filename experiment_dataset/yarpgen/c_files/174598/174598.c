/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 -= var_8;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_12 &= 132;
                        var_13 = ((((min((arr_8 [i_0]), (arr_8 [i_0])))) ? (arr_3 [i_0]) : 41));
                        arr_11 [i_0] = (arr_4 [i_0]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_14 [i_0] [4] = (((arr_7 [i_0] [i_2 + 1] [i_2 + 1] [i_2 - 1]) ? (((arr_8 [i_0]) | 507904)) : (arr_6 [i_2 - 1] [i_0])));

                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [1] = (((arr_5 [i_5 - 2] [i_0]) || var_4));
                            var_14 += (16522704962030222850 >= var_3);
                            var_15 += ((2452 >> (((-127 - 1) + 147))));
                        }
                        var_16 = (max(var_16, ((((arr_17 [i_2 - 1] [i_2] [i_2] [4] [i_2]) || var_6)))));
                        var_17 = (max(var_17, ((((((2452 ? -42 : -507934))) ? (!997358142) : ((((arr_16 [i_0] [0]) && (arr_12 [10])))))))));
                        var_18 = (((var_7 ? 4196123043080530183 : 16384)) / (((7492156486253201428 ? 1 : (-9223372036854775807 - 1)))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_26 [i_7 - 2] [i_0] [7] [i_0] [i_0] = -4294967295;
                                var_19 = var_7;
                                arr_27 [i_0] [i_0] = 1;
                                var_20 = ((+(((arr_23 [i_0] [i_0] [i_1] [i_6 - 1]) ? (arr_23 [i_0] [7] [i_6] [i_6 - 1]) : 1803856908))));
                            }
                        }
                    }
                    var_21 = (((((var_4 ? (((!(arr_12 [i_0])))) : (((arr_4 [i_0]) ? (arr_6 [i_0] [i_0]) : (arr_4 [i_0])))))) ? (((arr_21 [i_0]) ? (arr_21 [i_0]) : (arr_21 [i_0]))) : (507912 | var_2)));
                }
            }
        }
        var_22 ^= ((3 ? 128 : (!42)));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_30 [i_0] [i_0] = ((arr_23 [i_0] [i_8] [i_0] [i_8]) | (arr_23 [i_0] [i_0] [i_0] [i_0]));
            var_23 += ((-(arr_17 [i_0] [i_0] [i_0] [0] [10])));
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 11;i_11 += 1)
                    {
                        {
                            arr_39 [i_0] [1] [i_9] [i_0] [i_11 + 1] = (((arr_12 [i_0]) ? (arr_12 [i_0]) : (arr_12 [i_0])));
                            arr_40 [i_0] [0] [i_9] [0] [i_11] [i_0] = ((~(~1)));
                            var_24 = (((((165 > (arr_7 [i_0] [i_9] [i_10] [i_11])))) | ((((arr_20 [i_9 - 1]) > var_5)))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 9;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        {
                            var_25 = arr_16 [i_13 - 1] [i_0];
                            arr_49 [i_0] [i_0] [i_0] [i_13] [i_0] = (((((var_0 ? (arr_41 [i_14] [i_0] [i_0] [i_0]) : 194784238))) + ((var_4 ? (arr_46 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_3 [i_0])))));
                            var_26 = ((((((arr_7 [i_0] [i_8] [i_12] [i_14]) ? -21034 : var_4))) >= (((arr_15 [i_0] [i_0] [i_12] [i_13] [i_13] [4]) ? (arr_46 [i_14] [i_13] [i_12] [0] [i_0]) : var_2))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    {

                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            var_27 ^= ((arr_36 [i_0] [i_8] [i_15] [i_16] [10]) ? var_1 : (arr_51 [i_0] [i_0] [i_0] [i_0]));
                            var_28 = (-var_2 || -var_6);
                            arr_58 [i_0] [1] [1] [11] [1] [1] [i_17] = (((arr_56 [i_0] [1] [i_15]) ? (arr_56 [i_0] [i_8] [i_17]) : (arr_56 [i_0] [1] [i_17])));
                        }
                        arr_59 [8] [i_16] [i_16] [i_16] &= ((-(arr_53 [i_0] [i_8] [i_8] [i_15] [i_16] [i_16])));
                        var_29 = (((~var_6) ? (-3 || 4) : 24539));
                        var_30 = ((17 ? ((-(arr_6 [i_0] [i_0]))) : (arr_54 [i_0] [i_8] [i_0])));
                    }
                }
            }
        }
    }
    var_31 += ((var_2 + ((var_3 ? var_9 : -3))));
    var_32 = var_9;
    #pragma endscop
}
