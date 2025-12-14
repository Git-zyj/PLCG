/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 ^= ((!(var_10 + 19565)));
                                var_16 = (min(var_16, ((((min((arr_4 [i_0] [i_0] [i_4 - 1] [i_3]), 0)) - (min((arr_4 [i_3] [1] [i_4 - 3] [i_3]), var_3)))))));
                            }
                        }
                    }
                }
                arr_11 [i_1] [i_1] = 11555;
                var_17 = (((176 | var_11) ? (((max(var_7, var_12)) * var_0)) : (((-(~41))))));

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_18 = (((((arr_4 [i_5] [i_5] [i_0] [i_0]) + 9223372036854775807)) << ((((((-(arr_10 [2] [i_1] [i_5] [i_5]))) + 30223)) - 50))));
                    arr_15 [i_0] [i_0] [i_1] [i_5] = ((((max(var_13, ((min(19309, var_0)))))) ? (((var_11 || (arr_1 [i_0])))) : ((-(var_6 | var_10)))));
                }
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    var_19 = (((((max((arr_3 [i_0] [i_1] [i_6]), -19309)))) / -8850));

                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        var_20 = (arr_17 [i_0] [i_0] [i_6] [i_7]);
                        arr_22 [i_0] [i_0] [i_7 - 1] [i_1] = (min(((1815351708647473823 ? var_0 : (arr_5 [i_6 + 3] [i_6] [i_1] [i_6 + 3]))), (arr_5 [i_6 + 2] [i_6 + 1] [i_1] [i_6])));

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_21 = (max(var_21, ((max(var_0, (((arr_16 [8] [i_7 + 4] [i_7 + 2] [8]) ? var_4 : (arr_16 [12] [i_7 + 4] [i_7 + 2] [12]))))))));
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] = (!var_13);
                            var_22 |= arr_18 [2] [i_1] [10] [i_7];
                        }
                        var_23 += (111 ^ -64);
                    }
                    var_24 = ((+((min((arr_18 [i_1] [i_6 + 3] [i_1] [i_6 + 3]), -8588)))));
                    arr_26 [i_1] [i_1] [i_0] = 1143914305352105984;
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_30 [7] [i_1] [i_1] [i_0] = (((var_8 || 7109) ? (max((((arr_2 [i_1] [i_1]) ? var_5 : var_3)), 48868)) : ((min((arr_23 [i_9] [i_1] [i_1]), (arr_23 [i_0] [i_1] [i_1]))))));
                    arr_31 [i_0] [2] [2] |= (((arr_14 [i_0] [8]) / ((min((arr_8 [8]), 7109)))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_38 [i_1] [i_0] [i_9] [i_1] [i_1] = ((-((var_8 ? var_11 : var_9))));
                                arr_39 [i_0] [i_1] [i_1] = (max((max((arr_7 [1] [i_11 - 3] [i_1] [i_11 + 2] [1]), var_8)), var_4));
                            }
                        }
                    }
                    arr_40 [i_0] [i_1] [1] [i_9] = ((19309 ? -var_9 : (((var_0 + 2147483647) << (var_9 - 6)))));
                }
            }
        }
    }
    var_25 = ((83 ? var_5 : ((var_5 + (((747287593 ? -64 : 82)))))));
    var_26 = var_8;
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            {
                arr_47 [i_12] [i_12] &= (min(var_12, 1023681039));
                arr_48 [i_13] = ((-2186622137340139981 * ((((var_4 >= (arr_45 [i_12] [12])))))));
                /* LoopNest 3 */
                for (int i_14 = 1; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            {
                                var_27 = ((!(((var_1 | (arr_53 [i_14 + 1] [i_14 + 1] [i_14 + 1]))))));
                                arr_57 [i_13] [i_13] [i_14] [i_14] [22] = (((((-98 ? (arr_45 [3] [i_14 + 1]) : var_11))) ? (((1023681039 || (-2147483647 - 1)))) : ((((min((arr_53 [i_12] [i_15] [i_15]), var_4))) ? ((20338 ? 68 : var_14)) : (-2147483647 - 1)))));
                                arr_58 [i_12] [i_13] [i_13] = ((((min((arr_46 [i_14 + 1] [i_13]), (arr_51 [i_14 + 1])))) ? (((~var_14) ? (~var_11) : var_12)) : (((((var_10 & (arr_56 [i_12] [i_13] [16]))) ^ 32584)))));
                                var_28 = (((min(var_8, (arr_55 [i_12] [i_13] [i_14 + 1] [17] [i_16] [i_14 + 2]))) % (min(var_2, var_9))));
                                arr_59 [i_12] [i_13] [i_16] = (!var_14);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
