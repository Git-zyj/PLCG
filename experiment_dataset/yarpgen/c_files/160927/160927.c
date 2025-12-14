/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_1));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0 + 4] = ((2500433902 ? 62601 : 1));
        arr_4 [i_0 + 1] = (((~(arr_1 [i_0 + 2]))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_20 = ((((2097151 - (arr_6 [i_1]))) + (arr_5 [i_1 - 2])));
        arr_8 [i_1] = (arr_0 [i_1 + 2]);
        arr_9 [i_1 - 1] = (((var_8 * var_0) / var_15));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                {

                    for (int i_4 = 3; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_1 + 2] [i_2] [i_3] [i_4] [i_4] = arr_7 [i_1 + 2];
                        var_21 = (-1 == 32767);
                        var_22 *= ((var_2 ? var_12 : -13438));
                        var_23 = ((var_11 > (arr_14 [i_4] [i_2])));
                    }
                    for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_24 = (var_0 <= 14578);
                        var_25 = ((~(~var_14)));

                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            var_26 &= (((arr_18 [i_5]) ? var_4 : (arr_21 [i_6] [i_3 + 1] [i_3 - 1] [i_5 - 3] [i_6 + 3] [i_5 - 1])));
                            arr_23 [i_1] [5] [i_3] [i_6] = (arr_20 [i_3 - 1] [i_3 + 1] [i_3 + 1]);
                            arr_24 [i_1] [i_2] [i_3] [i_6] [i_1 + 2] = 1794533394;
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_5 - 1] [14] = (arr_13 [i_5 + 2] [i_5 - 2] [i_5 + 2] [i_5 - 3]);
                            arr_28 [i_1] = ((~(arr_0 [i_1 - 2])));
                            var_27 = (max(var_27, (arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            var_28 *= ((9223372036854775803 ? 0 : (-32767 - 1)));
                            var_29 = (max(var_29, -9223372036854775803));
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            arr_35 [i_1 + 2] [i_5] [i_5] [i_5] [i_9] = (((arr_12 [i_3 + 1] [i_3 + 1] [i_1]) && (var_9 % -14808)));
                            var_30 = (arr_31 [i_1 + 2] [i_1 - 1]);
                            arr_36 [i_1 + 2] [i_2] [i_3] [12] [i_9] = (((arr_16 [8] [i_5] [i_3 + 1] [i_2]) ? (arr_25 [i_5] [i_5] [i_3 - 1] [i_1]) : (arr_26 [i_5 + 2] [i_5 + 1] [i_3 - 1] [i_3 - 1] [i_2])));
                        }
                    }
                    for (int i_10 = 2; i_10 < 14;i_10 += 1)
                    {
                        arr_40 [i_2] [i_3 - 1] [i_10 - 1] = arr_13 [i_1] [i_3 + 1] [i_3] [i_10];
                        arr_41 [i_1 - 2] [i_1 - 2] [i_3] = ((var_1 ? var_18 : (var_15 >= var_1)));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_49 [i_11] [i_11] [i_11] [i_3 - 1] [i_2] [i_11] = (((arr_43 [i_1] [i_11] [i_1 + 1] [i_1 - 2] [i_3 + 1]) & ((~(arr_0 [i_12])))));
                                var_31 = (min(var_31, (arr_20 [i_12 + 1] [i_3 + 1] [i_1 + 2])));
                                var_32 = (-5821765123868968084 / -712645913);
                            }
                        }
                    }
                    var_33 = (arr_31 [i_3] [i_1]);
                }
            }
        }
    }
    var_34 = var_7;
    #pragma endscop
}
