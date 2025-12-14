/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = -1;
                var_17 |= ((+(max((arr_6 [i_0] [8]), ((-18 + (arr_2 [i_0 + 1] [i_1])))))));
                var_18 = var_7;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 ^= (~var_8);
                                var_20 += -var_3;
                                var_21 = ((!((((arr_1 [i_0 - 1] [i_4 - 3]) ? (arr_4 [i_0 - 2]) : (arr_1 [i_4 - 4] [i_4 - 2]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_22 &= (arr_6 [i_5] [10]);
                                var_23 = var_6;
                                var_24 ^= (((((~(arr_7 [i_0] [i_0 + 1] [i_0 + 1])))) || -var_10));
                                var_25 *= ((((-(arr_8 [i_6] [i_0 + 1] [i_0 + 1]))) / 1));
                                var_26 = ((var_2 >> (((~var_11) - 5203570289432238157))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            {

                /* vectorizable */
                for (int i_10 = 3; i_10 < 18;i_10 += 1)
                {
                    var_27 = 4294967291;
                    arr_31 [i_8] [i_9] [i_9] [i_9] = (arr_21 [1]);
                    var_28 = var_6;
                    var_29 = (max(var_29, (((var_9 != (~var_3))))));

                    for (int i_11 = 2; i_11 < 18;i_11 += 1)
                    {
                        var_30 = -7;
                        var_31 = (((arr_32 [i_8] [i_10 + 2] [i_10] [i_10 + 1] [i_11 - 1] [1]) ? var_5 : (arr_28 [i_9] [i_9] [i_10 - 1])));

                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_32 = var_12;
                            var_33 = (max(var_33, 3937714076070177714));
                        }
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            var_34 = ((+(((arr_36 [i_13] [i_13] [i_10] [i_11] [i_11] [i_13]) ? var_10 : var_5))));
                            arr_40 [i_11] [i_11] [i_11] [i_11] [10] = (var_10 % var_13);
                            var_35 = (max(var_35, ((((((var_9 ? 217 : 0))) ? (((arr_37 [i_8] [i_8] [i_9] [i_10] [i_10 - 2] [i_11] [16]) - (arr_21 [i_13]))) : var_7)))));
                        }
                        var_36 = 12;
                    }
                    for (int i_14 = 2; i_14 < 18;i_14 += 1)
                    {
                        var_37 = ((3937714076070177718 ? var_6 : var_6));
                        var_38 |= var_11;
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 19;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        {
                            var_39 = (((~15) >= (-var_11 >= 32739)));
                            var_40 = (max(var_40, (arr_29 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 - 1])));
                            var_41 = var_3;
                        }
                    }
                }
                arr_50 [i_8] [i_8] = (((arr_46 [i_8] [i_9] [i_8] [i_9]) ? (((((arr_20 [i_8]) % (arr_45 [0] [0] [i_8]))))) : (((((~(arr_45 [i_8] [i_8] [i_8])))) ? (arr_21 [i_8]) : 10))));
            }
        }
    }
    #pragma endscop
}
