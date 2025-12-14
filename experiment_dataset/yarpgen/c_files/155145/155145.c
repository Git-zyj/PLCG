/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = var_8;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = var_6;
        arr_5 [4] &= var_6;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_13 [i_0] = var_2;
                        arr_14 [i_3] [i_0] [i_0] [i_0] = var_9;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_12 = var_2;
            arr_19 [i_4] = var_9;
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 3; i_7 < 8;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_13 = var_7;
                            var_14 = var_2;
                            var_15 = var_4;
                        }
                    }
                }
            }

            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                arr_32 [8] [i_6] [i_6] [i_4] = var_4;
                arr_33 [i_4] [i_4] = -96;
                var_16 = var_1;
            }
            var_17 = var_2;

            for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
            {
                var_18 = var_7;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            arr_44 [i_4] [i_6] [i_6] [i_4] [i_13] = var_8;
                            arr_45 [i_4] [i_13] [i_13] = var_6;
                        }
                    }
                }
                var_19 = var_0;
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
            {
                var_20 = var_7;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 10;i_16 += 1)
                    {
                        {
                            var_21 = var_7;
                            arr_52 [i_4] [i_4] [i_14] [i_15] [i_4] [i_16] = var_4;
                        }
                    }
                }
            }
            for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
            {
                var_22 = var_7;
                var_23 = var_7;
                arr_55 [2] [i_4] = var_7;
                var_24 *= var_3;
                arr_56 [i_4] = var_0;
            }
            for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
            {
                arr_60 [i_6] [i_6] [i_4] = var_5;
                var_25 = var_2;
                arr_61 [9] [i_4] = var_5;
            }
            arr_62 [i_4] [i_6] = var_8;
        }
        arr_63 [i_4] [i_4] = var_0;
        arr_64 [i_4] = var_9;
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 20;i_19 += 1)
    {

        for (int i_20 = 0; i_20 < 20;i_20 += 1)
        {
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 20;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 20;i_23 += 1)
                    {
                        {
                            var_26 = (min(var_26, var_0));
                            var_27 = var_5;
                            arr_78 [i_20] [i_20] = var_6;
                        }
                    }
                }
            }
            arr_79 [i_20] = var_4;
        }
        for (int i_24 = 2; i_24 < 19;i_24 += 1) /* same iter space */
        {
            var_28 = -5889110545903277540;
            arr_83 [i_19] = var_0;
            arr_84 [i_19] [17] [i_24] |= var_1;
        }
        for (int i_25 = 2; i_25 < 19;i_25 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_26 = 2; i_26 < 17;i_26 += 1)
            {
                for (int i_27 = 3; i_27 < 17;i_27 += 1)
                {
                    {
                        var_29 *= var_6;

                        for (int i_28 = 0; i_28 < 20;i_28 += 1)
                        {
                            arr_96 [i_25] [i_25 + 1] [i_26] [16] [i_28] &= var_4;
                            var_30 = var_9;
                        }
                        for (int i_29 = 2; i_29 < 19;i_29 += 1)
                        {
                            arr_99 [i_27] [i_27] [i_26] [i_25] [i_27] = var_2;
                            arr_100 [i_19] [4] [i_25] [16] [i_27 + 3] [i_27] [i_29 + 1] = var_9;
                            var_31 = var_9;
                            var_32 = var_0;
                        }
                        var_33 += 9212238693002942342;
                        arr_101 [i_25] &= var_8;
                    }
                }
            }
            var_34 = var_9;
        }
        arr_102 [i_19] = var_8;
    }
    #pragma endscop
}
