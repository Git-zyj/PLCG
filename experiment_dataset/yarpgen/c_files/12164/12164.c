/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (max(var_0, (min(var_4, (min(var_7, var_6))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_8 [i_1] [i_2] [i_3] = (min(56, 1));
                        arr_9 [i_1] [i_2] [i_2] [2] [i_1 + 1] [i_3] |= (arr_5 [i_0] [i_1] [i_2] [i_3]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_11 = (max(var_11, ((max((arr_16 [i_0]), ((max((arr_4 [i_0 - 1] [i_1 + 1]), (arr_14 [i_0] [i_1] [i_4] [i_5 - 2] [0] [i_6])))))))));
                            var_12 = (max((max((arr_13 [i_0 - 1]), (arr_1 [i_1]))), (arr_15 [i_6] [i_5 - 1] [i_1 - 1] [i_1] [i_0] [i_0])));
                            arr_17 [i_0] [i_6] [i_4] [i_6] [i_6] [i_1 - 1] [i_0] = (min((arr_5 [i_0 - 1] [i_1 + 1] [i_4] [i_1 + 2]), (max((arr_5 [i_0 - 1] [i_1 - 1] [i_4] [i_1 + 2]), (arr_5 [i_0 - 1] [i_6] [i_4] [i_1 + 2])))));
                            arr_18 [i_0] [i_1 + 2] [i_1] [i_4] [i_5 + 2] [i_6] = (min((arr_5 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1]), (arr_0 [i_0 - 1] [i_5 + 2])));
                            var_13 = (arr_7 [i_5] [i_5 + 2] [i_5] [i_5 - 1]);
                        }
                    }
                }
            }
            arr_19 [i_0] [i_0 - 1] [i_0] = (max((arr_7 [i_0] [i_0] [i_1 - 1] [i_1 + 2]), (arr_13 [i_0])));
        }
        for (int i_7 = 1; i_7 < 8;i_7 += 1) /* same iter space */
        {
            var_14 = (max(var_14, (arr_11 [i_0] [i_7 - 1] [i_0] [i_0 - 1])));
            arr_22 [i_0 - 1] [i_7] [i_7] = (max((arr_3 [8] [i_0 - 1] [i_7 + 2]), (max((arr_3 [i_7] [i_0 - 1] [i_7 + 1]), (arr_3 [i_0] [i_0 - 1] [i_7 - 1])))));
        }
        arr_23 [i_0 - 1] = (max((max((arr_10 [i_0 - 1]), (arr_1 [i_0 - 1]))), (arr_10 [i_0 - 1])));

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_15 = (min((arr_26 [i_0] [i_0 - 1]), ((max((arr_14 [i_0 - 1] [i_0 - 1] [i_8] [i_8] [i_0] [i_8]), (arr_14 [i_0] [i_0 - 1] [i_0] [i_8] [i_0 - 1] [i_0 - 1]))))));
            var_16 *= (max((max((arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_25 [i_0 - 1] [9] [i_8]))), (arr_10 [i_0 - 1])));
            var_17 -= (max((arr_25 [i_0 - 1] [i_0 - 1] [i_0]), (arr_25 [i_0 - 1] [i_0 - 1] [i_0 - 1])));

            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            arr_37 [i_11] [i_10] [i_9] [i_8] [i_0] = (arr_28 [i_9] [i_10] [i_11]);
                            var_18 = (arr_28 [i_0 - 1] [i_0 - 1] [i_0]);
                            arr_38 [i_11] = (min((arr_10 [i_0 - 1]), (min((arr_25 [i_10] [i_10] [i_0 - 1]), (arr_28 [i_11] [i_10] [i_0 - 1])))));
                            var_19 = (max((arr_0 [i_0 - 1] [i_0 - 1]), (max((arr_0 [i_0 - 1] [i_0 - 1]), (arr_11 [i_0] [i_0 - 1] [i_0 - 1] [6])))));
                            var_20 = (max((min((arr_15 [i_0] [i_8] [i_9] [i_10] [i_10] [i_9]), (arr_15 [i_0] [i_8] [i_8] [i_9] [i_10] [i_11]))), (max((arr_15 [i_11] [i_10] [i_10] [i_9] [i_8] [i_0 - 1]), (arr_15 [1] [i_8] [1] [i_10] [i_10] [i_11])))));
                        }
                    }
                }
                arr_39 [i_0] [i_8] [i_8] [i_8] |= (arr_27 [i_0] [i_8]);

                /* vectorizable */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    var_21 |= (arr_30 [i_9] [i_0 - 1] [i_0]);

                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        var_22 = (arr_42 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                        var_23 = (arr_10 [i_13]);
                        var_24 = (arr_12 [i_0 - 1] [i_12] [i_9] [i_12]);
                    }
                    for (int i_14 = 2; i_14 < 8;i_14 += 1)
                    {
                        arr_50 [i_0 - 1] [i_8] [i_9] [i_12] [i_14 - 1] [i_14] = (arr_48 [i_14 - 2] [i_8] [i_8] [i_0 - 1] [i_8]);
                        arr_51 [i_0] [i_8] [i_9] [i_9] [9] [i_14] = (arr_20 [i_0 - 1] [i_8]);
                        arr_52 [i_0] [i_8] [i_9] [i_9] [i_14 + 2] [i_14] [i_14] = (arr_2 [i_0 - 1] [7] [i_14 - 1]);
                        var_25 = (arr_29 [i_0 - 1] [i_8] [i_8] [i_8] [i_14 - 2]);
                        var_26 = (arr_33 [i_0] [i_14 + 2] [i_9] [i_12] [i_0 - 1] [i_0]);
                    }
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        var_27 &= (arr_30 [i_9] [i_12] [i_15]);
                        arr_55 [i_0] [i_0] [i_9] [i_12] [i_15] = (arr_47 [i_0 - 1]);
                        arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_44 [i_0] [i_0] [i_0] [i_0 - 1] [i_0]);
                        var_28 += (arr_27 [i_0 - 1] [i_15]);
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1)
    {
        arr_60 [0] = (arr_57 [i_16]);
        arr_61 [i_16] = (min((min(1, 20)), (arr_57 [1])));
        var_29 = max((arr_57 [i_16]), (max((arr_59 [i_16]), (arr_57 [i_16]))));
        var_30 = (arr_57 [i_16]);
        var_31 ^= (min((min((arr_59 [i_16]), (arr_59 [i_16]))), (max(32761, (arr_58 [i_16])))));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 22;i_17 += 1)
    {
        var_32 = (arr_64 [i_17] [i_17]);
        arr_66 [i_17] = (arr_62 [i_17]);
        var_33 *= arr_62 [i_17];
        var_34 = (arr_65 [9]);
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 22;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 22;i_20 += 1)
                {
                    {

                        for (int i_21 = 0; i_21 < 22;i_21 += 1)
                        {
                            var_35 = (arr_72 [i_17] [i_18]);
                            var_36 -= (arr_62 [i_20]);
                        }
                        arr_80 [i_17] [i_18] [i_19] [i_20] [i_20] [i_20] = (arr_74 [i_17] [i_18] [i_19] [i_19] [i_20] [i_20]);
                        arr_81 [i_17] [i_18] [i_19] [i_20] = (arr_67 [i_17] [i_20]);
                        var_37 = arr_79 [i_17] [i_18] [i_18] [i_19] [i_20];
                        var_38 = (arr_71 [i_20] [i_19] [i_17]);
                    }
                }
            }
        }
    }
    var_39 |= var_9;
    var_40 = var_4;
    #pragma endscop
}
