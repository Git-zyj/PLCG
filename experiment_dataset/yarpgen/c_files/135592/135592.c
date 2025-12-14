/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_13 = ((((min(8388607, 30137))) && 150));
                            var_14 = ((~(arr_0 [i_0])));
                            var_15 = (min(var_15, (arr_7 [i_3 + 1] [12] [i_3 + 1] [i_3])));
                        }
                    }
                }
                var_16 -= var_11;

                /* vectorizable */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_17 = ((-((~(arr_3 [i_0] [1] [7])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_18 = (0 <= -12503);
                                var_19 ^= (((((arr_11 [i_0] [i_5] [i_0]) * var_3))) ? (5053 ^ -1966171122249311589) : (((arr_5 [i_4] [i_4] [i_1] [i_0]) ? var_8 : (arr_11 [8] [i_5] [i_4]))));
                                arr_17 [i_6] [i_0] [i_4] [i_4] [i_1] [i_0] [7] = (var_5 | 53);
                                var_20 = (((arr_1 [i_0] [i_0]) ? -113 : (~104)));
                            }
                        }
                    }
                    var_21 = (((((arr_2 [12] [i_1] [i_4]) / (arr_7 [i_0] [i_0] [i_4] [i_0]))) != (-24014 == 4750679518003921872)));
                    var_22 *= var_2;
                }
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_24 [i_0] = (-30121 / 1);
                        var_23 = var_5;
                    }
                    var_24 = (max(var_24, (((((255 && ((max(64, 60))))) ? ((max(1, var_9))) : (max(((2 ? var_7 : var_7)), ((12503 ? 12408 : var_4)))))))));
                    var_25 |= var_8;
                    var_26 = var_1;

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_27 = (max((max((max(3234177338, (arr_10 [i_0] [i_9]))), (((229 ? 63 : -5054))))), (max((max(var_0, 3063354000908994661)), (9077 / var_0)))));
                        var_28 = -79;
                        var_29 &= arr_26 [i_0] [i_1] [i_7];
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        arr_32 [i_0] [i_1] [i_0] [i_7] [i_10] = arr_7 [i_0] [i_0] [i_7] [i_0];
                        arr_33 [i_10] [i_10] [i_10] [i_10] [i_10] [i_0] = ((-9078 ? (arr_5 [i_7 - 1] [7] [i_7 + 1] [i_7 - 1]) : ((var_10 ? (arr_18 [i_0] [i_0]) : -8339483136709691867))));

                        for (int i_11 = 4; i_11 < 13;i_11 += 1)
                        {
                            var_30 = 5053;
                            arr_36 [i_0] [i_0] [13] [i_10] = 3037850891;
                            var_31 = (arr_5 [i_0] [i_1] [3] [2]);
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_32 = 4750679518003921872;
                            var_33 = (((229 | 40) & -42));
                            var_34 = (((arr_38 [i_0] [i_1] [i_7] [i_10] [i_12] [i_0]) ? var_10 : (arr_34 [i_0] [i_7 - 1])));
                            var_35 = (i_0 % 2 == zero) ? (((((((arr_4 [i_0] [i_0] [i_7] [i_7]) >> var_6))) ? (arr_23 [i_0] [i_0] [i_0] [i_0] [i_12]) : ((((arr_5 [i_0] [i_7] [i_10] [i_12]) ? 61 : 229)))))) : (((((((((arr_4 [i_0] [i_0] [i_7] [i_7]) + 2147483647)) >> var_6))) ? (arr_23 [i_0] [i_0] [i_0] [i_0] [i_12]) : ((((arr_5 [i_0] [i_7] [i_10] [i_12]) ? 61 : 229))))));
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            arr_43 [i_0] [i_0] [i_7] [6] [i_13] = (var_1 >= (arr_4 [i_0] [i_0] [i_10] [i_13]));
                            var_36 = (min(var_36, (arr_25 [i_7 + 1])));
                        }
                        var_37 = arr_9 [i_0] [i_1] [0] [i_0];
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        arr_46 [i_0] [i_0] [i_7] [i_0] = (arr_8 [i_0] [i_0] [i_7 - 1] [i_0]);
                        var_38 = (max(var_38, ((max((min(4706, (max(8365366498299100900, 203)))), (arr_1 [i_0] [i_1]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
