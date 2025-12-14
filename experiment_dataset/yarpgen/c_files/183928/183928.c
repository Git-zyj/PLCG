/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 += (arr_1 [12] [i_0]);
        var_14 *= (arr_0 [i_0]);

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_6 [21] [i_1 + 2] &= (arr_4 [i_0] [i_0]);
            arr_7 [i_1] = arr_2 [1] [i_1];
            var_15 = (max(var_15, (arr_0 [i_0])));
        }
        for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_16 = (arr_8 [i_0] [i_0] [i_0]);
            var_17 = (arr_8 [i_0] [i_0] [i_0]);
            arr_10 [i_0] [i_0] &= (arr_3 [i_0] [i_0]);
            arr_11 [i_0] [i_0] = arr_3 [i_0] [i_0];
        }
        for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_18 = (arr_12 [i_0] [i_3 - 1]);
                            var_19 = (arr_13 [i_0]);
                        }
                    }
                }
            }
            var_20 *= (arr_16 [i_0] [i_3 + 1]);
        }
        for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        var_21 = (arr_31 [i_0] [i_7] [i_7] [i_8] [i_9]);
                        arr_33 [i_0] [i_7 + 1] [i_8] [i_9] = (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_22 *= (arr_26 [i_7]);
                    }
                }
            }
            var_23 = (arr_32 [i_0] [i_0] [20] [i_7] [i_7]);
            arr_34 [i_0] [i_7] [i_7] = (arr_9 [10] [i_7 - 1] [10]);
        }
        var_24 = (arr_16 [i_0] [i_0]);
    }

    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_25 = (arr_9 [i_10] [i_10] [i_10]);
        arr_38 [i_10] [i_10] = (arr_13 [i_10]);
    }
    for (int i_11 = 1; i_11 < 17;i_11 += 1)
    {
        var_26 = (arr_4 [i_11] [i_11 - 1]);
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 15;i_15 += 1)
                        {
                            {
                                var_27 += (arr_4 [i_11] [i_11]);
                                var_28 = arr_25 [i_11] [i_11];
                            }
                        }
                    }
                    var_29 = (arr_8 [i_11] [i_12] [i_13]);
                    var_30 = (min(var_30, (arr_46 [i_13] [i_13] [i_12] [i_11])));
                    var_31 = arr_8 [i_11] [i_11] [i_13];
                }
            }
        }

        for (int i_16 = 0; i_16 < 18;i_16 += 1)
        {
            var_32 -= (arr_25 [i_11] [i_11]);
            arr_57 [i_11] [i_11] [i_11] = (arr_16 [i_11] [i_16]);
            var_33 = (arr_48 [i_11] [i_11] [i_11] [i_11]);

            for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
            {
                var_34 = (arr_24 [i_11 + 1]);
                arr_60 [i_16] [i_17] = (arr_40 [i_17]);
                var_35 = (min(var_35, (arr_24 [1])));
            }
            for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
            {
                var_36 = (arr_40 [11]);
                arr_64 [i_11] [i_16] [i_18] [i_18] = (arr_13 [i_11]);
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 18;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 18;i_20 += 1)
                    {
                        {
                            arr_70 [i_11 - 1] [i_11] [i_11] [i_11 + 1] [1] [7] &= (arr_30 [22] [i_16] [i_16] [i_16]);
                            arr_71 [i_11 - 1] [i_16] [i_18] [i_19] [i_19] [1] = (arr_68 [i_11] [i_11 + 1]);
                            arr_72 [3] [i_16] [i_16] = (arr_22 [i_11 - 1] [22] [i_18] [i_19] [i_20] [9]);
                            var_37 = (arr_25 [i_16] [i_20]);
                        }
                    }
                }
            }
            for (int i_21 = 2; i_21 < 15;i_21 += 1) /* same iter space */
            {
                arr_75 [i_21] = (arr_43 [i_11] [i_11]);
                arr_76 [2] [i_11] = (arr_41 [i_11]);
                arr_77 [i_16] [i_16] [i_11] = (arr_27 [i_11] [i_16] [i_11]);
                arr_78 [17] [i_16] = (arr_68 [5] [16]);
                arr_79 [i_21] [i_16] [i_16] [i_11] = (arr_12 [6] [i_11]);
            }
            for (int i_22 = 2; i_22 < 15;i_22 += 1) /* same iter space */
            {
                var_38 = (arr_18 [i_22] [i_11]);
                arr_83 [i_22] [i_22] [i_22] [i_22] = (arr_67 [17]);
            }
        }
        arr_84 [i_11] = (arr_49 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]);
    }
    var_39 = var_6;
    #pragma endscop
}
