/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_4));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_12 = (min(var_12, (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1])));

            /* vectorizable */
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [i_2] = var_6;
                var_13 = var_2;
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_14 = (arr_6 [i_1 - 1] [i_3 + 2]);
                            var_15 = (arr_1 [i_0]);
                            arr_17 [i_0] [5] [5] [i_3] [i_3] [i_3] = arr_13 [13] [i_1 + 1] [i_3] [i_3 + 3] [i_4 + 2];
                        }
                    }
                }
                var_16 = (arr_12 [i_0] [i_1 - 1] [i_0]);

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_22 [i_0] [i_0] [2] [i_0] [9] [i_0] = var_1;
                    arr_23 [17] [i_1] [i_1] [14] = (arr_21 [i_0] [i_0] [0] [i_2 - 1] [i_0]);
                    var_17 = (arr_7 [i_0] [i_1 - 1] [i_2 + 1] [i_2 + 1]);
                }
            }
            /* vectorizable */
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                var_18 = arr_21 [i_0] [i_1] [i_1] [i_1] [i_1];
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_30 [i_6] [i_7] [i_7] [i_6] [i_8] = var_3;
                            var_19 = (arr_29 [i_0] [i_1] [17] [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_1]);
                            arr_31 [i_8] [i_0] [i_6 + 2] [i_1 + 1] [i_0] [i_0] |= (arr_26 [i_7 - 1] [i_7 - 1] [i_0] [i_7 + 2]);
                        }
                    }
                }
            }
            for (int i_9 = 2; i_9 < 22;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                {
                    var_20 = (arr_6 [i_0] [i_0]);
                    var_21 = var_0;
                    arr_38 [i_0] [i_1 + 1] [1] [i_9] [i_9] = var_4;
                }
                for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                {
                    var_22 &= var_7;
                    var_23 = var_5;
                }
                var_24 = (max(var_24, (arr_24 [i_1 + 1])));
                arr_42 [i_0] [i_9] [i_1] [i_9 + 1] = var_4;
                arr_43 [i_9] [i_1] [i_9] = var_6;

                for (int i_12 = 3; i_12 < 21;i_12 += 1) /* same iter space */
                {
                    var_25 = var_9;
                    arr_46 [i_9] [i_1 + 1] [i_1 + 1] [i_1 - 1] = (arr_11 [i_1 + 1] [i_9 + 1] [i_9] [i_9] [i_1 + 1] [i_0]);
                }
                for (int i_13 = 3; i_13 < 21;i_13 += 1) /* same iter space */
                {
                    arr_49 [1] [1] [i_9] [i_9 - 1] [i_9 - 1] [i_13] = var_1;
                    var_26 = (arr_10 [i_0] [i_1 + 1] [i_0] [i_1 + 1]);

                    for (int i_14 = 2; i_14 < 23;i_14 += 1)
                    {
                        var_27 = (arr_2 [i_9 + 1] [i_9]);
                        var_28 = arr_40 [14] [14] [14] [14] [23];
                    }
                    var_29 = var_5;
                }
                for (int i_15 = 3; i_15 < 21;i_15 += 1) /* same iter space */
                {
                    arr_54 [i_0] [i_0] [i_1 + 1] [18] [i_9] [i_15 - 3] = (arr_25 [i_1 + 1] [i_9 - 1] [i_15 + 2] [i_15 - 2]);
                    arr_55 [i_9] [i_1] [i_9] = (arr_21 [i_9 + 1] [i_9 + 1] [i_9 + 2] [i_9 - 1] [i_9 + 2]);
                    arr_56 [i_0] &= (arr_1 [i_0]);
                }
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            var_30 -= (arr_53 [i_0] [i_0] [i_0] [i_0] [i_16] [i_16]);
            arr_61 [i_0] [i_16] [i_16] = arr_48 [i_0] [i_0] [i_0] [i_0];
            var_31 = var_8;
            var_32 = var_0;
            arr_62 [i_0] [i_16] [i_16] = var_7;
        }
        for (int i_17 = 2; i_17 < 23;i_17 += 1)
        {
            var_33 *= (arr_26 [i_0] [i_0] [i_0] [i_0]);
            var_34 = var_7;
        }
    }
    for (int i_18 = 1; i_18 < 10;i_18 += 1)
    {
        arr_67 [i_18] = (arr_41 [i_18] [i_18] [i_18]);
        arr_68 [6] [i_18] = (arr_29 [i_18] [i_18] [i_18] [i_18] [i_18 + 1] [i_18] [i_18]);
        /* LoopNest 2 */
        for (int i_19 = 3; i_19 < 10;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 11;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 4; i_21 < 10;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 10;i_22 += 1)
                        {
                            {
                                arr_82 [i_18 + 1] [i_19] [i_20] [i_18 + 1] [i_18] = (arr_29 [i_18 + 1] [i_18 + 1] [i_19] [i_19 - 2] [i_19 - 3] [i_19 + 1] [i_21 - 1]);
                                arr_83 [i_18] [i_18] [i_20] [i_21 - 3] [i_22] = (arr_25 [i_19] [i_19 - 3] [i_19 - 3] [i_19]);
                                arr_84 [i_18] [i_19] [i_20] [i_20] [i_20] [i_18] [i_22 - 1] = var_3;
                                arr_85 [i_22] [i_18] [i_18] [i_18] [i_18] = arr_44 [i_18 + 1] [i_18];
                            }
                        }
                    }
                    arr_86 [i_19] [i_19 - 3] [i_19 - 3] [i_18] = var_1;
                    var_35 = (arr_15 [i_18] [i_19] [i_19 - 1] [i_20] [i_20] [i_20] [i_20]);
                }
            }
        }

        for (int i_23 = 1; i_23 < 1;i_23 += 1)
        {
            var_36 -= var_7;
            arr_89 [i_18 - 1] [i_18] = (arr_13 [i_23] [i_23 - 1] [i_18] [i_23] [i_23 - 1]);
        }
        /* vectorizable */
        for (int i_24 = 2; i_24 < 10;i_24 += 1)
        {
            var_37 = (arr_50 [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18] [i_18 - 1] [i_18]);
            arr_93 [i_18] [i_18] = (arr_1 [i_18]);
            var_38 ^= (arr_81 [i_18] [i_18] [i_18] [i_24 + 1] [i_18]);
        }
        for (int i_25 = 0; i_25 < 11;i_25 += 1)
        {
            var_39 ^= (arr_16 [i_18 - 1] [i_25]);

            for (int i_26 = 1; i_26 < 9;i_26 += 1)
            {
                arr_99 [i_18] [i_26] = var_1;
                var_40 = (max(var_40, var_5));
            }
        }
    }
    for (int i_27 = 1; i_27 < 15;i_27 += 1) /* same iter space */
    {
        var_41 -= (arr_10 [i_27 + 2] [i_27] [i_27] [i_27]);

        for (int i_28 = 1; i_28 < 15;i_28 += 1)
        {
            arr_104 [i_27] = (arr_18 [i_27]);
            arr_105 [i_27] [i_28 - 1] = (arr_28 [i_27] [2] [i_28] [i_27] [i_28]);
        }
    }
    for (int i_29 = 1; i_29 < 15;i_29 += 1) /* same iter space */
    {
        var_42 = (arr_63 [i_29 + 2]);
        arr_108 [i_29 - 1] [14] |= var_6;
        var_43 = (max(var_43, (arr_24 [i_29])));
    }
    #pragma endscop
}
