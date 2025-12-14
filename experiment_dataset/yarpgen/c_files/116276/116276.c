/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (arr_2 [i_0] [i_0]);
                var_20 = var_6;

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_21 = ((var_4 ? 255 : (arr_12 [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1])));
                            var_22 = -32765;
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((var_14 ? var_17 : var_10));
                            arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = var_12;
                            var_23 += (var_7 ? (arr_7 [i_1 + 2] [i_1 - 1]) : (arr_5 [i_0] [i_0] [i_1 - 1]));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            var_24 -= (arr_11 [i_5] [i_3] [i_0] [i_1] [i_0]);
                            var_25 -= (~var_4);
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_20 [3] [i_1] [i_1 + 1] [3] [i_1] [i_6] = (((((2192779609379040251 ? var_5 : ((max(var_10, var_6)))))) ? ((min(var_10, (arr_4 [1] [i_1] [i_1 + 2])))) : 16128));
                            arr_21 [i_0] [i_1] [i_0] = var_8;
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_24 [i_0] [i_1] [1] [8] [i_0] = max(((var_3 ? 49408 : 18446744073709551615)), 16128);
                            arr_25 [i_0] [i_0] [i_0] [i_1] = min(var_16, (((var_14 / var_5) ? ((max(var_11, var_14))) : ((var_17 ? var_3 : var_7)))));
                        }
                        arr_26 [i_0] [0] [i_3] [i_2] |= (min(20806, 9223372036854775807));
                        var_26 |= (max(((((min(var_13, var_3))) ? var_16 : 181)), (((-(arr_23 [i_1] [i_1] [i_1] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 2]))))));
                        var_27 ^= (((min(var_8, var_2))));
                    }
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        arr_29 [i_2] [i_2] [i_1] [i_2] &= (min(4294967295, ((max(14515, ((1 ? 20806 : 0)))))));
                        var_28 = ((((((var_12 ? var_3 : var_2))) % var_14)));
                    }
                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        arr_32 [i_1 + 2] [i_1] [i_2] [i_9 + 1] [i_1] = ((var_7 ? (((max((arr_12 [i_0] [i_9] [i_2] [9] [i_1] [i_1]), 20893)))) : 18446744073709551615));
                        arr_33 [i_0] [i_0] [2] [i_1] = (!4294967266);

                        for (int i_10 = 1; i_10 < 11;i_10 += 1)
                        {
                            arr_36 [i_0] [i_1] [i_2] [i_9] [i_10] [i_9] = var_17;
                            var_29 = (((((max(var_7, var_12)) == (min(var_12, 32767)))) && (var_10 - 1)));
                            var_30 = (((((var_7 || (arr_34 [i_0] [i_1] [i_2] [i_10 + 2] [i_1 + 2] [i_9] [8])))) * ((var_10 ? var_10 : 3))));
                        }
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 13;i_11 += 1)
                        {
                            var_31 = (((988775053 << (((arr_9 [2] [i_2] [i_9] [i_11]) - 3077589614)))));
                            var_32 = (!var_4);
                            var_33 = (((arr_34 [i_1 - 1] [i_1] [i_2] [i_9] [i_11 - 1] [i_11 - 1] [i_11]) < var_11));
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            arr_41 [i_0] [i_1] [1] [i_9] [5] [i_1] [i_0] = (max(62, -2297881259952967381));
                            var_34 ^= ((((min(9223372036854775807, 1))) ? (max((((arr_28 [i_0] [i_1] [12] [i_9] [i_12]) ? var_11 : (arr_15 [i_12] [i_12] [i_12] [i_2] [i_12]))), ((var_10 ? var_9 : 126)))) : var_4));
                            arr_42 [i_0] [1] [i_2] [i_9 - 2] [i_1] [i_0] = (min(((min(-22970, (arr_17 [i_1 + 1])))), (((arr_17 [i_1 + 1]) << (var_0 - 31415)))));
                            var_35 ^= (((((((min(-4238, 192))) ? (var_12 >> var_8) : var_17))) ? ((min(var_17, var_6))) : var_11));
                        }
                        var_36 = (min(var_36, (((-(((49407 <= (var_3 ^ var_17)))))))));
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        var_37 = (min(var_37, ((min((max(-8390385420780830232, var_10)), var_13)))));
                        var_38 = (arr_4 [i_0] [i_1] [i_1 - 1]);
                        var_39 = (((arr_38 [i_0] [i_1] [i_2] [i_2] [i_13]) & var_15));
                    }
                    arr_45 [i_0] [i_0] [i_1] = (min((min(-9223372036854775807, 4032)), (!var_11)));
                    arr_46 [i_0] [i_0] [i_0] [i_1] = (min((max(0, 201326592)), ((max((arr_4 [i_0] [i_1] [10]), var_13)))));
                    arr_47 [i_1] [i_1] [i_1] [i_1 + 2] = ((40 - (9223372036854775807 | 20806)));
                }
                for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                {
                    arr_50 [0] [i_1] [i_14] |= 1;
                    var_40 = ((((var_9 ? 18014398509481983 : var_6)) / var_9));
                    arr_51 [10] [i_1] [i_1] [i_14] = -1;
                }

                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    var_41 = -1963151263;
                    var_42 = var_0;
                    arr_55 [6] [i_1] [0] [i_1] = ((4 ? (((((arr_7 [i_1 + 1] [i_1 - 1]) <= (arr_7 [i_1 + 1] [i_1 + 1]))))) : (((arr_7 [i_1 - 1] [i_1 + 2]) ? var_14 : var_2))));
                }
            }
        }
    }
    #pragma endscop
}
