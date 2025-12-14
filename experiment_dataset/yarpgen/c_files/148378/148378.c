/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_11 = var_3;
                                var_12 = 217;
                                var_13 = 9747951911674968342;
                            }
                            var_14 = var_1;

                            for (int i_5 = 1; i_5 < 13;i_5 += 1)
                            {
                                var_15 = 18446744073709551602;
                                var_16 = (max(var_16, 9));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                var_17 *= 1764184561;
                                var_18 = 13;
                                arr_18 [i_2] [i_2] [i_3] [i_2] = 3436022376;
                                var_19 = var_0;
                                var_20 = (arr_15 [i_2] [i_0] [i_2] [i_0] [i_0 - 2]);
                            }
                        }
                    }
                }
                var_21 *= 9;
                var_22 |= 1040187392;
            }
        }
    }

    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            arr_23 [3] = (arr_19 [i_7]);

            for (int i_9 = 1; i_9 < 22;i_9 += 1)
            {
                arr_26 [i_9 + 2] [i_9] [i_9] [i_7] = -393707434;
                var_23 = (arr_25 [i_9]);
                arr_27 [13] [18] [i_9] = (arr_25 [i_9]);
                var_24 |= (arr_22 [i_9] [i_9 + 1]);
            }
            var_25 = 255;

            for (int i_10 = 2; i_10 < 21;i_10 += 1)
            {

                for (int i_11 = 1; i_11 < 22;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        var_26 = var_2;
                        var_27 = 18446744073709551602;
                        var_28 *= 8388607;
                    }
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        arr_38 [i_8] [i_11] [i_8] [2] = var_2;
                        arr_39 [i_13] [i_11] [i_11] [0] [i_7] = -16156;
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        arr_44 [i_7] [i_8] [i_14] [i_11] [i_14] [i_14] = 9671;
                        var_29 = -168630301;
                        var_30 = var_4;
                        var_31 = var_9;
                    }

                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        arr_47 [i_15] [i_15] [i_11] [i_7] [i_15] [i_11] = (arr_36 [i_10 + 3] [i_10 - 2] [i_11] [i_10 - 2] [i_10 + 1]);
                        var_32 = (arr_29 [i_7]);
                        var_33 = var_4;
                        arr_48 [i_15] [i_11] [i_10] [i_8] [i_8] [i_11] [13] = 23568;
                        var_34 = -1764184577;
                    }
                }
                arr_49 [i_7] [i_8] [i_10] [i_7] = var_7;
                var_35 = var_8;
            }
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                var_36 += 1470084426;
                var_37 = 6666328609513848842;
            }
            for (int i_17 = 1; i_17 < 23;i_17 += 1)
            {
                var_38 = -1764184557;

                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    var_39 = (arr_28 [i_17 - 1] [i_17 + 1] [i_17 + 1] [i_17 - 1]);
                    arr_59 [i_17] [i_17] = var_10;
                }
                for (int i_19 = 0; i_19 < 24;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 24;i_20 += 1)
                    {
                        var_40 = var_3;
                        var_41 = (arr_54 [i_17 - 1]);
                        var_42 = var_2;
                    }
                    for (int i_21 = 0; i_21 < 24;i_21 += 1)
                    {
                        var_43 = (arr_41 [i_17 + 1] [i_17 + 1] [i_17] [i_8] [i_17 + 1] [i_17 - 1] [i_8]);
                        arr_67 [20] [i_17] [i_19] [20] [i_17] [i_17] [20] = 3671703607;
                        arr_68 [i_17] [i_8] [i_8] [i_8] [i_17] [19] = var_7;
                        var_44 = 47900;
                    }
                    for (int i_22 = 3; i_22 < 20;i_22 += 1)
                    {
                        var_45 = var_4;
                        var_46 -= var_6;
                        var_47 = 0;
                    }
                    for (int i_23 = 0; i_23 < 24;i_23 += 1)
                    {
                        var_48 = (max(var_48, var_1));
                        arr_75 [10] [0] [10] [i_17] [i_17] = (arr_52 [i_7] [i_7] [i_7] [i_7]);
                        arr_76 [i_17] [i_8] = (arr_73 [i_17] [i_17 + 1] [i_17 - 1] [i_17 - 1]);
                    }
                    var_49 &= (arr_65 [i_7] [i_17 + 1] [i_17 + 1] [4] [i_17 - 1] [i_17 + 1] [i_17]);
                    var_50 = 18430;
                }
                var_51 = 0;
            }
        }
        for (int i_24 = 0; i_24 < 24;i_24 += 1)
        {

            for (int i_25 = 0; i_25 < 24;i_25 += 1)
            {
                arr_82 [i_7] [i_24] [i_25] = var_3;
                var_52 = 3130512078;
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 24;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 24;i_27 += 1)
                    {
                        {
                            arr_87 [i_7] [i_27] [i_27] [i_7] = -276162416;
                            var_53 &= 1724767320;
                        }
                    }
                }
                var_54 = -9059;
                arr_88 [i_7] [1] [i_7] = (arr_45 [i_24] [i_25] [i_24] [i_7] [i_24]);
            }
            var_55 = var_2;
            /* LoopNest 2 */
            for (int i_28 = 1; i_28 < 23;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 24;i_29 += 1)
                {
                    {
                        var_56 = (max(var_56, (arr_69 [i_7] [i_7])));
                        var_57 *= var_7;
                        arr_97 [i_28] [i_24] [i_24] = 14;
                    }
                }
            }
        }
        for (int i_30 = 0; i_30 < 24;i_30 += 1)
        {
            arr_100 [i_7] [i_7] = -2068884972;
            var_58 = (arr_57 [i_30] [i_30] [i_30]);
            var_59 = (arr_71 [i_7] [i_7] [i_7] [1] [20] [i_30]);
        }
        var_60 = var_0;
        var_61 = var_8;
        var_62 = (max(var_62, var_1));
        arr_101 [i_7] = 81;
    }
    #pragma endscop
}
