/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = (min(var_0, var_2));
        var_13 = (max(var_13, var_7));

        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_14 = (~(min(-var_7, (~var_4))));
                arr_8 [i_0] [i_0] [i_0] = min((!var_7), (!var_2));
                arr_9 [i_0] [i_0] [i_1 - 2] [i_0] = (min(var_1, -var_2));
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_14 [i_0] [i_0] [i_3] [i_0] = (~var_2);
                var_15 &= (min((~15), 8297360087727818601));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                arr_17 [i_4] [8] [i_4] |= (~var_1);
                var_16 = (max(var_16, (~var_10)));
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_21 [i_0] [i_1] [i_0] = var_0;
                arr_22 [i_0] [i_0] [i_5] = (min((min((~var_7), -var_3)), -var_4));
            }
            arr_23 [2] [i_0] [i_1] = ((~(min((min(var_8, var_2)), (~var_7)))));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_27 [i_0] [0] |= var_0;
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 8;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_39 [i_0] [i_6] [0] [i_0] = var_11;
                            var_17 = (min(var_17, var_10));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            arr_42 [i_10] |= (~var_3);
            var_18 += 12;

            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                arr_46 [4] [i_0] = var_10;
                var_19 = (min(var_19, var_8));

                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    arr_49 [i_0] [i_10] [i_0] [i_0] [i_0] [i_0] = (~var_0);
                    arr_50 [i_0] = ((~(~var_6)));

                    for (int i_13 = 1; i_13 < 7;i_13 += 1)
                    {
                        var_20 += var_8;
                        var_21 += var_4;
                        var_22 = (~var_10);
                    }
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        var_23 *= var_7;
                        arr_56 [i_0] [i_12] [8] [i_10] [i_0] = var_2;
                    }
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        arr_61 [i_0] [i_10] [i_11] [i_12] [i_15] [i_11] [i_0] |= (~var_9);
                        arr_62 [i_0] = (!var_2);
                    }
                }
                for (int i_16 = 1; i_16 < 8;i_16 += 1)
                {
                    var_24 *= 15;
                    arr_65 [i_0] [8] [i_0] [i_0] [i_16 + 2] = ((~(~var_8)));
                    arr_66 [i_0] [i_0] [i_0] = var_6;
                }
                var_25 *= var_5;
            }
            var_26 *= (!-var_9);
        }
        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            arr_70 [i_0] = -var_9;
            var_27 = (min(var_27, (~var_11)));
            var_28 = (max(var_28, var_6));
        }
        var_29 = (min((min((~122), var_1)), var_8));
    }
    for (int i_18 = 2; i_18 < 15;i_18 += 1)
    {
        arr_75 [i_18 - 1] = (min((((min(var_3, var_10)))), var_6));
        var_30 = (~var_5);
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 17;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                {
                    arr_80 [i_18] [i_18 + 1] [i_19] = ((~(min(15444773817380733967, 2034145071))));
                    arr_81 [1] [i_19] [1] |= var_11;
                    /* LoopNest 2 */
                    for (int i_21 = 2; i_21 < 15;i_21 += 1)
                    {
                        for (int i_22 = 4; i_22 < 16;i_22 += 1)
                        {
                            {
                                var_31 += (min(((~((min(var_9, var_3))))), (!var_3)));
                                var_32 = (max(var_32, (~112)));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_23 = 3; i_23 < 11;i_23 += 1)
    {
        arr_88 [i_23] = var_1;
        arr_89 [i_23] = (!var_3);
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 13;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 13;i_25 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_26 = 3; i_26 < 12;i_26 += 1)
                    {
                        for (int i_27 = 1; i_27 < 11;i_27 += 1)
                        {
                            {
                                var_33 ^= ((-(max(var_6, (min(var_4, var_5))))));
                                arr_101 [i_24] [i_26 - 1] [i_23] [i_23] [i_24] [8] = -var_7;
                                var_34 = (max(var_34, var_2));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 13;i_28 += 1)
                    {
                        for (int i_29 = 3; i_29 < 10;i_29 += 1)
                        {
                            {
                                var_35 |= var_7;
                                var_36 |= (min(((-(min(var_10, var_3)))), (min((max(var_2, var_5)), var_3))));
                                var_37 = ((!(~var_10)));
                            }
                        }
                    }
                }
            }
        }
        var_38 = (max(var_38, ((max(var_7, var_4)))));
    }
    var_39 = (min((((~((min(var_9, var_2)))))), var_5));
    #pragma endscop
}
