/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_3));
    var_15 = 255;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [3] = var_8;
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] [2] = var_5;
                            arr_17 [i_2] [i_4] [i_3] [1] [i_2] [i_1] [i_0] = 14;
                            arr_18 [i_0] [0] [i_2] [i_3] [i_4] = 216;
                        }
                    }
                }
            }
            var_16 ^= (arr_7 [i_1] [i_0]);
        }
        var_17 = 14;

        /* vectorizable */
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            var_18 = var_0;
            var_19 |= 247;
            arr_21 [i_0] [i_5] = 247;
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
        {
            var_20 ^= (arr_12 [i_6] [i_0] [i_0] [11]);
            arr_24 [i_6] [i_0] = -6671089176448545889;
            var_21 = (arr_5 [i_0]);
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
        {
            var_22 = (min(var_22, (arr_26 [i_7] [i_0])));
            arr_29 [i_7] = 2251799796908032;

            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {

                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    var_23 ^= var_5;
                    arr_35 [i_9 + 1] [i_9] [i_9] [i_0] = (arr_11 [i_8]);
                    arr_36 [i_0] [i_7] [i_8 - 2] [i_9] = 9;
                    var_24 &= (arr_14 [i_7] [i_8]);
                }

                for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                {
                    var_25 = (max(var_25, 234));
                    arr_39 [i_0] [i_7] [i_8] [i_10] [i_0] [i_0] = -3574;

                    for (int i_11 = 3; i_11 < 12;i_11 += 1)
                    {
                        arr_42 [i_11] [i_7] [1] = (arr_37 [9] [i_8] [i_8] [i_0]);
                        arr_43 [i_11] [i_7] [i_8 + 1] = (arr_32 [i_8 - 2]);
                        var_26 ^= (arr_32 [i_10]);
                        arr_44 [i_0] [i_7] [i_11] [i_10] [i_11] = 255;
                    }
                    var_27 -= 240;
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                {
                    arr_47 [i_12] [i_8 - 2] [i_7] [i_0] [i_0] = -1117382574;
                    var_28 = (max(var_28, 233));
                }
            }
        }
        arr_48 [i_0] [i_0] = 18446744073709551608;
        var_29 = var_3;
    }
    for (int i_13 = 4; i_13 < 9;i_13 += 1)
    {
        var_30 = var_3;

        for (int i_14 = 1; i_14 < 8;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                var_31 ^= 22;
                arr_55 [i_13 - 4] [i_14] [i_14] = (arr_1 [11] [i_14 + 1]);
                arr_56 [i_14] [i_14 + 2] [i_14] = var_9;
            }
            for (int i_16 = 1; i_16 < 7;i_16 += 1)
            {
                var_32 = (arr_3 [i_13 + 1]);
                arr_60 [i_14] = var_10;

                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 11;i_18 += 1)
                    {
                        var_33 &= var_9;
                        var_34 = var_6;
                        var_35 += 4;
                        var_36 += 128;
                    }
                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        var_37 = (arr_20 [i_13]);
                        var_38 = 1;
                    }
                    var_39 ^= 2701354017;
                    var_40 = var_10;
                    var_41 = var_9;
                }
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    arr_71 [i_14] [i_16] [i_14] [i_14] = var_13;
                    arr_72 [i_14] [i_14] = 28;
                }
                arr_73 [i_14] [i_14] = 64999;
            }
            var_42 = (arr_4 [i_13 - 3]);
            var_43 = 7;
        }
        for (int i_21 = 0; i_21 < 11;i_21 += 1)
        {
            var_44 = 240;
            var_45 = (max(var_45, var_1));
            var_46 = var_7;
        }
        /* vectorizable */
        for (int i_22 = 0; i_22 < 11;i_22 += 1)
        {
            var_47 ^= (arr_12 [i_13] [i_13] [1] [i_22]);
            arr_79 [i_22] = 2817649782;
            var_48 += (arr_11 [i_13 - 3]);
        }
    }
    var_49 &= 15957500435631472690;
    var_50 = var_4;
    #pragma endscop
}
