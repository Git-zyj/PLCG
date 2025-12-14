/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(min((~var_9), var_5))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_4;

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            var_14 = (min(var_14, var_10));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] &= var_2;
                        }

                        for (int i_5 = 4; i_5 < 9;i_5 += 1)
                        {
                            var_15 |= max(((var_8 ? var_10 : 16777215)), ((max(var_8, 15872))));
                            var_16 ^= ((((min((~var_0), var_5))) ? var_11 : -18689));
                        }
                        arr_17 [2] [i_1] [2] [i_3] = (min(64179, (max(3341819778, var_2))));
                        var_17 -= 3221225472;
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            var_18 = var_0;
            var_19 = (var_9 ? 3597863434 : var_4);
            var_20 = (max(var_20, (!255)));
        }
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            arr_23 [i_7] = (~(max(567513067, 12239)));

            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_21 = ((~3868494237) ? ((var_3 ? var_3 : 3597863434)) : (min(var_9, var_2)));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 7;i_10 += 1)
                    {
                        {
                            var_22 = var_2;
                            var_23 = (max(var_23, ((((((0 ? 46846 : var_9))) ? ((~(max(var_6, var_9)))) : (((var_11 ? 112 : 34338))))))));
                            arr_31 [i_7] [i_7 - 1] [4] [4] [i_10] = var_3;
                        }
                    }
                }
                arr_32 [i_0] [i_0] [i_7] = (min((max((min(var_3, 61513733)), (!53275))), (max(225, var_7))));

                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    var_24 += max(330417177, 48590);
                    var_25 *= (-(max((min(var_12, var_12)), 1479688034)));
                }
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                arr_39 [i_7] [i_7 + 2] [1] [i_12] = (max(26302, (~var_2)));

                for (int i_13 = 1; i_13 < 9;i_13 += 1)
                {
                    var_26 = ((((max(var_7, 127))) ? (max(1583478098, var_4)) : -var_2));
                    var_27 += (max(13547, 126));
                    var_28 = (min(var_28, (((0 ? (~var_9) : (((var_0 ? 8955 : var_10))))))));
                }
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    var_29 = -0;
                    arr_45 [i_0] [i_7] [i_12] = ((-((1479688034 ? var_9 : var_12))));
                    arr_46 [i_14] &= (min((min(-var_0, ((var_5 ? var_7 : 936281411)))), var_5));
                    arr_47 [6] [i_7 - 1] [i_12] [i_7] = (min((max(16252928, 110)), (!38)));
                }
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    arr_50 [i_7] [i_12] [i_7] [i_7] = ((51989 ? var_6 : (max(var_11, 953147518))));
                    var_30 = var_1;
                }
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 9;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        {
                            var_31 = (min(var_31, (max((((var_0 ? 14380 : (!7)))), var_6))));
                            arr_57 [i_0] [i_0] [i_7] [i_7] [1] [i_16] [i_17] = (-2420397811 ? 1073741823 : 4274377811);
                            var_32 = (min(var_32, 1073741810));
                            arr_58 [i_0] [i_7] [9] [i_16] [2] [i_7] = ((~var_2) ? var_9 : (((41553 ? var_8 : var_1))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 3; i_18 < 10;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        {
                            var_33 = 1717316377;
                            arr_64 [i_7] [i_7] [i_12] [i_12] [i_18] [7] [i_19] = 0;
                            arr_65 [i_7] [0] [i_7] [i_7] = var_4;
                            arr_66 [i_0] [i_18 + 1] [i_7] [i_0] [i_0] = (((var_10 ? 953147516 : 3341819778)));
                        }
                    }
                }
                arr_67 [i_7] = (max((max(var_12, var_9)), (((var_9 ? var_10 : var_2)))));
            }
            for (int i_20 = 1; i_20 < 10;i_20 += 1)
            {
                arr_70 [i_0] [i_7 + 2] [i_7] [10] = max(var_0, (((!(~var_2)))));
                var_34 = (max(var_34, var_1));
                arr_71 [i_0] [i_7] [i_7] [i_7] = 0;
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 11;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 10;i_22 += 1)
                    {
                        {
                            var_35 = (((min((max(var_1, var_3)), 157))) ? (((min(65511, var_8)))) : (max((((164 ? var_5 : var_10))), 0)));
                            var_36 = var_0;
                        }
                    }
                }
            }
            var_37 = max((((var_9 ? var_4 : var_10))), var_7);
        }
        var_38 = (!var_5);
    }
    var_39 = (!16256);
    var_40 = var_5;
    #pragma endscop
}
