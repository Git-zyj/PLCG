/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_10 < 4258694412);
    var_13 *= var_2;
    var_14 += var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_15 = (((~var_11) > (~var_1)));
                            var_16 ^= 1810645642;
                            var_17 = var_5;
                            arr_8 [i_0 - 2] [i_3] = var_1;
                        }
                    }
                }

                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((var_4 != (max(((max(1810645642, var_9))), var_8))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_4] [i_4] [i_0] = ((((((var_4 + 2147483647) >> var_9))) & (var_8 & var_3)));
                                var_18 = (((var_0 / 45) ^ (var_5 + var_2)));
                                var_19 = max((!2484321653), var_3);
                                var_20 = ((var_2 | (var_11 & 15892448746692298832)));
                            }
                        }
                    }
                    var_21 = var_7;
                    var_22 *= var_7;
                }

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_23 = ((-var_4 & (min(var_11, var_7))));
                                arr_25 [i_0] [i_0 + 1] [i_0] [i_8] = ((~(~var_11)));
                                var_24 = ((-(((var_0 + 2147483647) >> (var_5 - 191)))));
                                var_25 = var_2;
                            }
                        }
                    }
                    var_26 = (min(var_26, ((max((var_0 && 15892448746692298833), -119)))));
                    var_27 = ((2554295327017252777 | ((2554295327017252782 & ((((var_4 + 2147483647) >> (var_8 - 1616321843686558085))))))));
                    var_28 *= (((var_2 || (var_7 || 25))));
                    arr_26 [i_7] [i_1] [i_7] = (min((var_6 & var_5), (max(0, var_0))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                arr_33 [i_10] = var_7;
                                arr_34 [1] [5] [i_1] [i_10] [i_10] [i_10] = (var_7 % -var_4);
                                var_29 = (min(var_29, var_1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 15;i_14 += 1)
                        {
                            {
                                var_30 = (!var_3);
                                var_31 = var_7;
                                var_32 = (~var_5);
                                arr_42 [i_10] [i_1] = (!1952855829);
                                arr_43 [4] [i_10] [i_10] [6] [i_14] = var_11;
                            }
                        }
                    }

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_33 = (!var_3);
                        var_34 = var_7;

                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            var_35 += (var_8 / 1);
                            var_36 = (~7);
                            var_37 = (max(var_37, (var_3 - var_6)));
                            var_38 = -var_1;
                            var_39 = 15892448746692298810;
                        }
                        for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
                        {
                            arr_54 [i_1] [i_1] [11] [i_1] [i_10] = (~var_10);
                            var_40 = -var_9;
                        }
                        for (int i_18 = 0; i_18 < 17;i_18 += 1) /* same iter space */
                        {
                            arr_59 [6] [6] [6] [i_0] [6] &= (7293308289747154422 & 7293308289747154422);
                            arr_60 [5] [2] [2] [i_1] [3] [i_1] [i_10] = (~0);
                            var_41 = (max(var_41, (!15892448746692298832)));
                        }
                        for (int i_19 = 2; i_19 < 14;i_19 += 1)
                        {
                            var_42 = 8;
                            var_43 = (!11153435783962397205);
                            var_44 = (max(var_44, 94));
                            arr_64 [i_10] [i_19] [i_10] [i_19 + 2] [i_10] [i_10] = (var_3 < -268435392);
                        }
                        var_45 *= -var_8;
                    }
                    for (int i_20 = 4; i_20 < 15;i_20 += 1)
                    {
                        var_46 = (max(var_46, (-2002687403 <= var_2)));
                        arr_67 [i_0] [i_10] = (!var_9);
                        var_47 ^= (var_1 & var_2);
                        var_48 = var_8;
                    }
                    for (int i_21 = 3; i_21 < 16;i_21 += 1)
                    {

                        for (int i_22 = 2; i_22 < 16;i_22 += 1)
                        {
                            var_49 = ((var_1 || (var_0 ^ 1952855837)));
                            arr_73 [4] [i_10] [4] [1] [7] [4] = ((!(~var_2)));
                        }
                        for (int i_23 = 0; i_23 < 17;i_23 += 1)
                        {
                            var_50 ^= (~576460752303423487);
                            var_51 = var_3;
                            var_52 += var_4;
                            var_53 = (var_9 - -1952855830);
                            var_54 += (15892448746692298839 % var_9);
                        }
                        var_55 = (max(var_55, var_0));

                        for (int i_24 = 0; i_24 < 17;i_24 += 1)
                        {
                            var_56 = (max(var_56, (((!(var_2 && 15892448746692298833))))));
                            arr_78 [i_10] [i_1] = -var_3;
                        }
                    }
                }
                for (int i_25 = 1; i_25 < 16;i_25 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_26 = 4; i_26 < 15;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 17;i_27 += 1)
                        {
                            {
                                var_57 = var_8;
                                var_58 |= (max(var_5, var_6));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_28 = 1; i_28 < 15;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 17;i_29 += 1)
                        {
                            {
                                var_59 = ((-var_10 || (~var_4)));
                                var_60 = 11354630867206786122;
                            }
                        }
                    }
                    var_61 = ((~((min(var_1, var_5)))));
                    var_62 = -30046;
                }
            }
        }
    }
    #pragma endscop
}
