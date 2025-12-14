/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_11);
    var_18 ^= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_19 = (min(var_15, var_11));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = ((~((var_0 ? ((min(0, 168))) : (var_9 < var_7)))));
                                var_21 = var_6;
                                var_22 = (min(var_22, var_15));
                                arr_11 [i_0] [i_1] [i_0] [14] [i_4] = ((-var_10 <= (arr_10 [i_4 + 4] [i_4 + 4] [i_0] [i_1] [9])));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_23 = var_4;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_24 |= -117;
                                var_25 ^= (max((arr_1 [5] [i_1 + 1]), (((arr_18 [i_1] [i_5] [i_1 + 1] [i_1 + 1]) ? -104 : var_4))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    var_26 = ((-(arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_8 + 4])));
                    var_27 &= var_6;
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    var_28 &= (min(28, -93));
                    arr_24 [i_0] [8] = var_4;
                }
                arr_25 [9] [i_0] = (max(((-(min(var_8, var_3)))), var_5));

                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    var_29 = (min(var_29, var_14));
                    var_30 |= (max(var_3, -14));

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_31 = arr_22 [i_1] [i_0];

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_32 -= -69;
                            var_33 = (max(var_33, ((min(-14, (!var_6))))));
                            arr_35 [i_12] [i_11] [i_0] [15] [i_0] [9] [10] = ((((((144115119356379136 ? -6 : 1)) ? (!var_6) : var_4))));
                        }
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_34 = var_0;

                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            arr_42 [i_14] [i_13] [i_0] [8] [1] = var_2;
                            var_35 = (min(var_35, (((!(~2147483647))))));
                            arr_43 [6] [2] [i_10] [i_0] [i_14] [i_10] [i_13] = 576460752303423488;
                        }
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            arr_47 [1] [11] [i_10] [i_0] [1] = ((((min((arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]), 9223372036854775807))) ? ((1 ? 4005843650732621789 : var_2)) : ((((arr_45 [6] [i_1 + 1] [i_1 + 1]) << 1)))));
                            arr_48 [i_0] [0] [i_0] [2] [i_13] [8] |= (min((max(var_2, ((min(var_9, var_12))))), (((min(16, var_5))))));
                            var_36 = (min(var_36, var_3));
                            var_37 = (min(var_37, 9223372036854775807));
                        }
                    }
                    var_38 = var_13;
                }
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 14;i_17 += 1)
                    {
                        for (int i_18 = 2; i_18 < 15;i_18 += 1)
                        {
                            {
                                var_39 *= (max(var_0, ((var_6 ? var_2 : (!var_16)))));
                                var_40 = ((175 ? (((16160915900473985185 ? 1 : 4359))) : (min((arr_46 [0] [i_1] [i_0] [i_17 - 1] [i_17 - 1] [i_0]), (arr_46 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_18 - 1] [i_18])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 16;i_19 += 1)
                    {
                        for (int i_20 = 3; i_20 < 15;i_20 += 1)
                        {
                            {
                                var_41 *= ((var_6 ? ((var_2 ? 0 : 5)) : var_8));
                                var_42 = (((min(var_13, (arr_20 [i_0]))) - (arr_55 [i_0] [i_1 + 1] [i_16] [i_19] [2])));
                            }
                        }
                    }
                }
                for (int i_21 = 0; i_21 < 16;i_21 += 1)
                {
                    var_43 = 2076775370;
                    arr_64 [6] [4] [i_21] [0] &= ((~(((((min(var_5, (arr_2 [0])))) || var_5)))));
                    var_44 = (min(var_44, 15));

                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        var_45 = var_0;
                        var_46 = var_4;
                        var_47 = 255;
                        arr_68 [i_0] [i_1] [i_0] = (min(var_1, ((((~(arr_28 [i_0] [i_1 + 1] [11] [14])))))));
                    }
                }
                var_48 &= var_13;
            }
        }
    }
    var_49 = (min(var_49, (((((min(((var_7 ? var_12 : 1)), var_10))) ? ((((min(var_13, 93))) ? ((1 ? var_14 : 32)) : var_14)) : ((~((var_14 ? var_14 : -111)))))))));
    #pragma endscop
}
