/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (arr_0 [i_1] [i_0]);
                arr_4 [i_0] [i_0] [i_1] = ((!(arr_0 [i_0] [i_0])));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (((((~(arr_5 [i_2] [i_2] [i_2])))) && ((((arr_2 [i_0] [i_1] [i_2]) ? (arr_7 [i_0] [i_2] [i_2]) : var_8)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = ((((((-((var_4 << (var_2 - 46376))))) + 2147483647)) >> (var_5 - 1214475211)));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] |= ((((!(arr_11 [i_0] [i_2])))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_22 [i_6] [i_5] [i_5] [i_5] [i_1] [i_0] = -29234;
                        var_12 = (arr_12 [i_0] [i_0] [i_1] [i_5] [i_6] [i_6]);
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_5] [i_5] [i_7] [i_7] [i_8] = var_3;
                            var_13 = ((var_1 ? (arr_2 [i_8] [i_7] [i_1]) : (!var_9)));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_33 [7] [i_9] [i_5] [i_7] [i_9] = -125;
                            var_14 *= (((((-(arr_27 [i_0] [i_0] [i_1] [i_0] [i_9])))) != (arr_10 [i_7])));
                            arr_34 [i_0] [i_0] [i_0] = (arr_18 [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] = (12022587810976509702 + 1);
                            arr_40 [i_5] [i_7] [i_1] [i_0] [i_10] [i_0] [i_5] = ((~(arr_19 [i_0] [i_0])));
                            var_15 = (arr_37 [i_0] [i_1] [i_0] [i_7] [i_10] [i_10]);
                        }
                        var_16 = 110;
                        arr_41 [i_7] [i_1] = (arr_38 [i_1]);
                        var_17 = (!-7582124154208643226);
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_45 [18] [i_1] [i_5] [i_11] [i_11] = var_5;

                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_18 ^= (~131);
                            var_19 = ((~(arr_1 [i_5])));
                            arr_49 [i_0] [i_1] [i_5] [i_11] [i_11] [i_5] = (arr_23 [i_11]);
                        }
                        var_20 = (~-730061203);
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            var_21 ^= 125;
                            var_22 = (((((~(arr_6 [i_1] [i_5] [i_13] [i_14])))) ? (arr_47 [i_14] [i_0] [i_0] [i_13]) : ((var_2 ? var_10 : (arr_6 [5] [i_13] [i_13] [4])))));
                        }
                        var_23 = (min(var_23, ((((arr_9 [i_0] [i_0] [i_13]) / var_7)))));
                        var_24 = (((var_10 + var_4) == (arr_52 [i_0])));
                        arr_56 [i_0] [i_1] [0] [17] [i_13] = (arr_43 [i_0] [i_1] [i_5] [i_13]);
                    }
                    var_25 = (min(var_25, (~var_9)));
                }
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    arr_59 [16] = ((-(min(((-7505 ? (arr_1 [i_0]) : (arr_27 [i_1] [i_1] [i_1] [i_1] [i_1]))), (((-730061203 & (arr_38 [i_1]))))))));
                    var_26 = ((~(((((4503599627370495 ? (arr_1 [i_0]) : var_0))) ? (arr_38 [i_0]) : (((arr_43 [i_0] [i_0] [i_15] [i_15]) ? (arr_26 [i_0] [i_1] [i_15] [i_15] [i_1] [i_1]) : 179))))));
                }
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    var_27 = ((-(max((~179), ((var_1 ? (arr_7 [i_0] [i_16] [i_16]) : (arr_32 [i_0] [i_0] [i_1] [i_1] [i_1] [19] [i_16])))))));
                    arr_64 [i_0] [i_1] [i_0] |= min(((((arr_9 [i_0] [i_0] [i_0]) && (!var_1)))), (min(((var_1 ? var_0 : var_10)), ((var_1 ? var_5 : 18446744073709551615)))));
                }
            }
        }
    }
    var_28 = (((var_4 ? var_7 : 125)));
    var_29 = var_3;
    #pragma endscop
}
