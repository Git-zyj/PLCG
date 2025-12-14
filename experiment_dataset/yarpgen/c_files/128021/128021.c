/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_15 = 0;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = (arr_5 [i_0]);

            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                arr_9 [i_0] [i_2] [9] = 22692;
                arr_10 [i_0] [i_2] [i_0] [i_0] = 1;
            }
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                var_16 = 0;

                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    arr_16 [1] [i_4] = 421961405415150525;
                    var_17 = -3474258509541372948;
                    arr_17 [i_4] = (arr_7 [i_0] [i_0] [i_3] [i_4]);
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_18 = var_11;
                        var_19 = var_13;
                        arr_24 [i_0] = var_12;
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {
                        arr_33 [i_8] [i_8] = 1;
                        var_20 = var_9;
                        var_21 = 6;
                    }
                }
            }

            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_22 = (arr_34 [i_7] [i_10]);
                var_23 = (arr_5 [i_10]);
                var_24 = var_13;
                arr_37 [i_0] [i_0] [i_7] [i_0] = 0;
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        var_25 = (arr_34 [i_11] [i_11]);

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_26 = 1559822139;
            var_27 = (-2147483647 - 1);
            arr_44 [i_11] = var_6;
        }
        for (int i_13 = 1; i_13 < 14;i_13 += 1)
        {
            var_28 = (arr_45 [i_11] [i_13] [i_11]);
            arr_47 [i_11] [i_13] = 7170;
            var_29 = (-9223372036854775807 - 1);
            arr_48 [i_11] [i_13] [i_13] = var_8;
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            arr_61 [i_14] [i_15] [i_14] [i_14] [i_18] [5] [i_14] = var_8;
                            var_30 = (arr_0 [9]);
                            var_31 = var_2;
                            arr_62 [i_14] [i_15] [i_16] [i_16] [i_16] = var_13;
                        }
                    }
                }
            }
            var_32 = 84;
            var_33 = 58382;
        }
        arr_63 [i_14] = 12;
        var_34 = var_0;
        var_35 = var_7;
    }
    for (int i_19 = 4; i_19 < 20;i_19 += 1)
    {
        var_36 = (arr_64 [i_19]);
        var_37 = var_6;
        var_38 = (arr_65 [i_19]);
    }

    for (int i_20 = 2; i_20 < 21;i_20 += 1)
    {
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 22;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 22;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 22;i_23 += 1)
                {
                    {
                        var_39 = -6098032963017514346;
                        var_40 = var_11;
                        var_41 = (arr_73 [1] [i_20] [i_20] [i_20 + 1]);
                        arr_77 [i_20] [i_21] [i_21] [i_20] [i_20] [i_20] = 111;
                        arr_78 [i_20] = 171;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 22;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 22;i_25 += 1)
            {
                {
                    arr_86 [1] [i_20] [i_25] = 0;
                    var_42 = 15;
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 22;i_26 += 1)
                    {
                        for (int i_27 = 4; i_27 < 19;i_27 += 1)
                        {
                            {
                                var_43 = (arr_71 [i_20]);
                                arr_92 [i_20] [14] [i_20] [i_20] [i_20] = (arr_81 [i_20]);
                                var_44 = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
