/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_10 = (min(var_10, var_7));

                for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_11 = (arr_0 [i_2 + 1] [i_1 - 1]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_12 = (min(var_12, var_1));
                        var_13 = (arr_0 [i_0] [i_1]);
                        arr_9 [i_0] [10] [i_2] [i_3] = var_6;
                    }
                    var_14 = var_0;
                }
                for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    arr_13 [i_4] [i_1] &= (arr_6 [i_0] [i_1 - 2] [i_0]);
                    var_15 = (max(var_15, (arr_4 [i_0] [i_1 + 1] [i_4 + 2])));
                }
                for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_5] [i_5] = var_1;
                    arr_18 [i_0] [i_5] [1] [10] = var_8;
                    arr_19 [i_0] [i_0] [i_5] [i_5 + 1] = var_1;
                }

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    arr_22 [i_6] [i_0] [i_0] = var_7;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_16 = (arr_24 [i_6] [i_7] [i_8]);
                                var_17 *= var_6;
                            }
                        }
                    }
                    var_18 = (max(var_18, (arr_1 [i_0] [i_6])));

                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        arr_29 [i_0] [i_9 + 1] [i_9] [17] = var_4;
                        var_19 = (arr_10 [i_0] [i_6] [i_9 - 1]);
                        var_20 = var_7;

                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            var_21 = (min(var_21, var_6));
                            var_22 = var_3;
                        }
                    }
                    for (int i_11 = 1; i_11 < 17;i_11 += 1)
                    {
                        arr_35 [i_0] [i_11] [i_6] [i_6] = arr_2 [i_1 + 1] [i_11 - 1] [i_11 + 1];
                        var_23 = (max(var_23, var_3));
                        var_24 = arr_24 [i_11 - 1] [i_6] [i_1 - 1];
                        var_25 = (arr_14 [i_11] [i_11] [i_11] [i_0]);
                    }
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        arr_38 [6] [i_0] [i_1 - 1] [i_1 - 1] [9] [i_12] = var_6;
                        var_26 = (max(var_26, var_4));
                    }
                    arr_39 [i_0] [i_1] [i_6] [i_6] = var_6;
                }
                arr_40 [16] = (arr_10 [4] [i_0] [i_0]);
            }
        }
    }

    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
        {
            arr_46 [i_13] [i_13] = var_7;
            var_27 = (arr_25 [i_13] [i_14] [i_13] [i_14] [i_13]);
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
        {
            var_28 = var_9;
            var_29 |= (arr_30 [i_13] [i_13] [i_15] [i_15]);
        }

        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            arr_54 [i_13] [i_13] = var_7;
            arr_55 [i_13] = (arr_20 [i_13]);
            arr_56 [i_13] = (arr_25 [i_13] [i_13] [i_16] [i_16] [i_16]);
        }
    }
    for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
    {
        var_30 = (arr_45 [i_17] [i_17]);
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 14;i_19 += 1)
            {
                {
                    arr_66 [i_17] [i_17] [i_17] [i_17] = var_2;
                    arr_67 [i_19] [i_17] [13] = var_9;
                }
            }
        }
        var_31 = (arr_33 [i_17] [i_17] [i_17] [i_17] [i_17]);
        arr_68 [i_17] = (arr_27 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]);
    }
    for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
    {
        var_32 = var_2;
        var_33 += (arr_36 [i_20] [i_20] [i_20] [11] [i_20] [i_20]);
        arr_73 [i_20] = (arr_63 [10] [i_20] [10]);
    }
    for (int i_21 = 0; i_21 < 20;i_21 += 1)
    {
        arr_77 [i_21] = var_3;
        arr_78 [16] [i_21] |= (arr_76 [i_21] [i_21]);
    }
    var_34 = var_7;
    var_35 = var_6;
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 15;i_22 += 1)
    {
        for (int i_23 = 3; i_23 < 14;i_23 += 1)
        {
            {
                arr_86 [i_23] = (arr_0 [i_23] [2]);
                arr_87 [i_22] [i_23] [i_23 + 1] = var_5;
                arr_88 [i_22] [i_23] [i_23] = arr_15 [i_23 - 3];
                var_36 = (arr_28 [i_23] [i_23 - 1] [i_22] [i_23]);
            }
        }
    }
    #pragma endscop
}
