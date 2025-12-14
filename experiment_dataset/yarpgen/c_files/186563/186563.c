/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 = var_8;
    var_20 = var_10;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = var_11;
        var_21 = var_7;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, var_16));
                    arr_9 [i_0] [i_0] [i_2] = var_2;
                }
            }
        }
        var_23 ^= var_16;
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_24 = (min(var_24, var_14));
        var_25 = var_16;
    }
    for (int i_4 = 4; i_4 < 10;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            var_26 = var_17;
            var_27 *= var_8;
            arr_19 [i_5] = var_11;
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    arr_26 [i_4 - 3] [i_8] [i_7] [i_8] = var_8;
                    arr_27 [i_4] [i_6] [i_7] [i_8] = var_10;
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                {
                    var_28 = var_2;
                    var_29 = var_16;
                    arr_30 [6] [3] [i_7] = var_2;

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_30 = (max(var_30, var_13));
                        arr_33 [i_4] [i_6] [6] [i_9] [i_10] [i_7] = var_8;
                        arr_34 [7] [i_7] [i_4] [i_9] [0] = var_3;
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    arr_37 [i_4] [i_6] [i_7] [i_7] [i_11] = var_8;
                    var_31 = var_1;
                    var_32 = var_13;
                    arr_38 [i_4] = var_7;
                }
                arr_39 [i_4] = var_7;
            }
            var_33 -= var_13;
            arr_40 [i_6] [10] = var_2;
        }
        /* vectorizable */
        for (int i_12 = 3; i_12 < 9;i_12 += 1)
        {
            var_34 = var_12;
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    {
                        arr_49 [i_4] [i_13] [i_13] [i_14] = var_7;
                        var_35 = var_11;
                        var_36 = var_2;
                        var_37 = var_10;
                        var_38 = var_16;
                    }
                }
            }
            var_39 = var_0;
            var_40 = var_5;
            arr_50 [i_4] [5] = var_10;
        }
        var_41 = var_1;
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 10;i_16 += 1)
            {
                {
                    arr_55 [6] [i_15] = var_4;

                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        arr_60 [i_16] = var_17;
                        arr_61 [i_17] [i_16] [7] [i_4] = var_14;
                        var_42 = var_9;
                    }
                    arr_62 [6] [i_16] = var_12;
                    /* LoopNest 2 */
                    for (int i_18 = 3; i_18 < 9;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 11;i_19 += 1)
                        {
                            {
                                arr_69 [i_19] [i_18] [i_16] [3] [i_18] [8] = var_3;
                                var_43 ^= var_0;
                                arr_70 [i_18] [i_15] [1] [i_18] [i_19] [i_16] = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_44 = var_7;
    #pragma endscop
}
