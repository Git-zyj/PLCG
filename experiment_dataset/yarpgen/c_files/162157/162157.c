/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = ((((min(((max((arr_0 [i_1] [i_1]), var_8))), ((var_5 * (arr_1 [i_0])))))) < (4044610406 & -4704918914909148263)));
                var_11 = ((-((var_9 ? var_2 : 4044610406))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_12 = (max(var_12, (((((min(21073, 1)))) & (min((arr_5 [i_0] [i_0]), (1 ^ 4294967295)))))));
                    var_13 = ((((-2147483647 - 1) & 2492673755)));
                    var_14 = (max(-21075, (((-32760 / 4044610395) / (-2147483647 - 1)))));
                }
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_15 = ((((((arr_9 [i_0] [i_3] [i_3] [i_0]) / (arr_2 [i_0])))) && ((((((18446744073709551615 ? var_3 : (arr_4 [i_0])))) ? (-2147483647 - 1) : 0)))));
                            var_16 = (min(var_16, 1));
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_17 = (((arr_4 [i_5]) != (arr_2 [i_5])));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_18 = (433442738 != ((((var_3 < (-2147483647 - 1))))));
                                var_19 = arr_7 [i_0] [i_6 + 1] [i_5];
                                var_20 = 250356888;
                                var_21 -= (arr_6 [6] [6]);
                                var_22 = (arr_11 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_7 + 1]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_23 |= (((-9223372036854775807 - 1) ? (arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [8]) : (arr_16 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1] [2])));

                    for (int i_9 = 3; i_9 < 10;i_9 += 1)
                    {
                        var_24 ^= ((((((var_2 + 2147483647) >> (((arr_0 [i_0] [i_0]) - 5725))))) ? (((arr_8 [i_0] [i_1] [1]) ? (arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0]) : var_7)) : var_0));

                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_25 = (max(var_25, (((-(arr_9 [i_0] [i_0] [4] [i_10]))))));
                            var_26 = (arr_23 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
                            arr_26 [i_0] [i_0] [i_0] [i_8] [i_8] = (((arr_6 [i_0] [i_8]) ? var_2 : (var_7 % 1)));
                            arr_27 [i_0] [i_1] [i_8] [i_8] [i_8] [i_8] = 0;
                        }
                        for (int i_11 = 3; i_11 < 10;i_11 += 1)
                        {
                            var_27 = (arr_25 [i_8]);
                            var_28 += 250356879;
                            var_29 = (((arr_11 [i_0] [i_0] [i_8] [i_0] [i_11 - 2] [i_8]) << ((250356884 / (arr_9 [i_0] [i_0] [i_8] [i_8])))));
                            var_30 ^= var_8;
                        }
                        for (int i_12 = 3; i_12 < 10;i_12 += 1)
                        {
                            var_31 = (arr_21 [i_0] [i_1] [i_0] [i_0] [i_8] [i_12 + 1]);
                            var_32 += 1;
                        }
                    }
                    arr_34 [i_8] [i_1] [i_1] = ((var_4 >> (((arr_3 [i_0]) - 40))));
                }
            }
        }
    }
    var_33 = var_2;
    #pragma endscop
}
