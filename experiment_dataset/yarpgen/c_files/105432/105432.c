/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105432
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

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_15 = (22 | -var_2);

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_16 -= (max(((var_9 ? var_9 : (arr_10 [i_3] [i_3] [i_3 - 1] [i_2] [i_2]))), (((min((arr_0 [i_2]), var_4)) ^ ((0 ? var_13 : var_8))))));
                        arr_11 [i_0] [i_1] [i_1] [i_0] = ((((max(((min(7, 95))), var_10))) || (var_3 - var_8)));
                        arr_12 [i_3] [i_0] [i_0] [i_0] = ((~(arr_10 [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 1])));
                        arr_13 [i_0] [i_1] [i_2] [i_2] |= (max((arr_7 [i_0] [i_3 + 1] [i_2] [i_3]), (((arr_7 [i_0] [i_3 + 1] [i_2] [7]) / var_2))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_17 = ((+(max(((((arr_10 [i_0] [i_0] [4] [i_2] [i_0]) ? (arr_14 [i_1] [i_4]) : var_9))), (arr_16 [i_0])))));
                        arr_18 [i_4] [i_2] [i_0] [i_0] [i_0] = var_0;
                        var_18 += max(4294967293, 234);
                        var_19 += min((max(var_5, -108)), var_13);
                    }
                    var_20 *= var_8;

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_21 ^= ((min((1284992992 / 106), var_11)) % (min(var_7, 118)));
                            var_22 = (max(var_22, ((max(((((min(var_7, var_5)) + 159))), (min(-0, (arr_19 [i_6] [i_2] [i_2] [i_1] [i_2]))))))));
                            var_23 = var_13;
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_5] [i_0] [7] [7] [i_5] [i_5] [3] = (((114 + 249) ^ (((arr_0 [i_0]) | (arr_0 [i_0])))));
                            arr_26 [1] [1] [i_0] = (519336520 ? 100384019 : 122);
                            arr_27 [i_0] [8] [i_0] [5] [5] = ((~(max(519336531, (arr_5 [i_7])))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, (((arr_29 [5] [5] [i_2] [5] [i_5] [i_2] [i_8]) ? var_12 : 15))));
                            var_25 = (arr_1 [i_0]);
                            var_26 *= ((var_12 ? var_14 : var_7));
                        }

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            arr_33 [i_0] [i_5] [i_2] [i_0] [i_0] [i_0] = (max(((max(var_8, (min(107, var_8))))), 1999112811));
                            arr_34 [6] [i_0] [i_1] [i_1] [i_2] [i_1] = (min(2115307122, 46));
                        }
                        arr_35 [i_0] [i_0] [0] [i_0] = (((+-127) | 124));
                        var_27 = (((min(var_10, 9)) >= ((((-77 + 2147483647) << (((-373991260 + 373991270) - 10)))))));
                    }
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 9;i_12 += 1)
                        {
                            {
                                arr_46 [i_0] [i_1] [i_10] [i_11] [i_0] [i_0] [i_12] = ((86 ? (max(var_6, 3803485785)) : 187));
                                arr_47 [i_10] [i_0] [i_11] [2] [i_10] [i_0] [i_0] = (arr_41 [i_12 + 1]);
                                arr_48 [i_0] [7] [i_10] [i_11] [i_12] = (min(((max(101, var_8))), var_7));
                            }
                        }
                    }
                    var_28 = (max(var_28, (((~(((!(((22 ? 49 : var_8)))))))))));
                    var_29 = (min(var_9, (((max(3728410949, var_6)) / var_12))));

                    for (int i_13 = 1; i_13 < 10;i_13 += 1)
                    {
                        var_30 = (((arr_0 [i_0]) > (((-121 | var_11) ? 249 : (-2147483647 - 1)))));
                        arr_53 [i_0] [1] [i_0] [8] = (((var_13 + var_2) ? ((105 / (arr_0 [i_0]))) : (arr_0 [i_0])));
                    }
                }
                var_31 = ((max(0, -1987420241)));
            }
        }
    }
    var_32 += var_11;
    var_33 |= (min((((!(((0 ? -2147483643 : 0)))))), ((var_5 ? -var_13 : -var_13))));
    var_34 = ((~((var_2 + (min(107, (-2147483647 - 1)))))));
    var_35 = (-10 * var_1);
    #pragma endscop
}
