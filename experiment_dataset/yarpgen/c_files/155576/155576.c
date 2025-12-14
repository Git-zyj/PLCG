/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(~var_1)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [0] = var_17;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_21 = var_11;
                        arr_10 [i_1] [1] = -var_2;
                        var_22 = 18014398509481984;
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = (arr_3 [i_0] [i_0] [i_0]);

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_15 [i_4] = (arr_6 [i_0] [i_4]);
            arr_16 [2] = ((!((!(arr_1 [i_0])))));
            arr_17 [i_0] [i_4] [5] = -65535;
            var_23 += (((-(arr_7 [i_0] [i_0] [i_0] [5] [i_4] [i_4]))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_24 -= (~12);
            arr_21 [i_5] = (!11);
        }
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            var_25 = (arr_12 [15] [i_6] [15]);
            arr_26 [i_6] = 12;
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_31 [i_7] [i_8] = 32767;
            var_26 &= var_5;
            arr_32 [1] |= (~var_19);
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_27 = (~-6014);
            var_28 = (arr_25 [i_9] [i_7] [i_7]);

            for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
            {
                var_29 = (min(var_29, 9223372036854775807));

                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    arr_40 [i_9] = (~(arr_35 [i_7] [i_7]));
                    var_30 = 3072;
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        var_31 -= 6014;
                        var_32 = 62464;
                        var_33 = ((~(arr_4 [i_9])));
                    }
                    var_34 = var_5;
                    var_35 = 245;

                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        var_36 = 255;
                        arr_49 [i_7] [2] [i_14] [i_12] [1] |= (~4771504868632887735);
                        var_37 = (!-1);
                        var_38 = var_17;
                    }
                    var_39 = (max(var_39, var_3));
                }
                for (int i_15 = 1; i_15 < 10;i_15 += 1)
                {
                    var_40 = (arr_28 [i_7]);
                    arr_52 [i_7] [i_9] [11] [i_10] [i_9] = (--1);
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    arr_55 [i_7] [i_7] [i_9] [i_16] [4] [i_9] = var_2;
                    arr_56 [i_9] [4] [i_10] [i_10] = 9223372036854775807;
                    var_41 = ((~(arr_42 [i_7] [8] [10] [i_16] [8] [i_7])));
                    var_42 = -9416861251486801608;
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        {
                            var_43 = (((~(arr_60 [i_9] [9] [i_10] [10] [i_9]))));
                            var_44 = (!var_14);
                            var_45 = (arr_28 [i_7]);
                            var_46 = (((-(arr_9 [i_7] [i_9] [i_10] [6]))));
                        }
                    }
                }
                var_47 = (min(var_47, (~var_15)));
            }
            for (int i_19 = 0; i_19 < 12;i_19 += 1) /* same iter space */
            {
                var_48 = (arr_0 [14]);
                arr_65 [i_9] [i_7] [i_9] [i_19] = (arr_13 [i_19] [i_9]);
            }
        }
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 12;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 12;i_21 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 3; i_22 < 11;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 12;i_23 += 1)
                        {
                            {
                                var_49 = var_2;
                                var_50 = (arr_43 [i_7] [i_21] [i_21] [i_22]);
                            }
                        }
                    }
                    arr_76 [i_7] [i_20] [i_21] = (~var_19);
                    /* LoopNest 2 */
                    for (int i_24 = 1; i_24 < 9;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 12;i_25 += 1)
                        {
                            {
                                var_51 = 1024;
                                arr_81 [i_25] [i_20] [i_25] [i_24] [i_25] = 1938143871167731983;
                            }
                        }
                    }
                }
            }
        }
    }
    var_52 = var_8;
    #pragma endscop
}
