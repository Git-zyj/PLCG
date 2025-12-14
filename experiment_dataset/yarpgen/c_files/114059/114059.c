/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_14;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [6] &= var_7;

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                var_18 = 9223372036854775801;
                arr_8 [10] [i_2] [1] [10] = (arr_6 [i_0] [i_2 - 4] [6] [6]);
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_19 = var_16;
                var_20 |= 65535;
                arr_11 [i_0] [i_3] [i_3] = (arr_10 [i_0] [i_1] [i_1]);
            }
            var_21 = (arr_1 [i_0] [i_1]);
            var_22 = (arr_5 [7]);
            var_23 = var_15;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
            {
                arr_17 [2] [8] [i_5] |= (arr_12 [i_0] [6] [i_5 - 1]);
                var_24 = var_9;
            }
            for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
            {
                var_25 = -9223372036854775802;
                var_26 = -9223372036854775802;
                var_27 = var_2;

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_28 = (min(var_28, 13263195537929616994));
                    var_29 = (min(var_29, (arr_15 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_4])));
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_30 = -6331;
                    var_31 = var_6;
                }
            }
            for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
            {
                var_32 = (min(var_32, var_9));
                var_33 ^= 3722798102;
            }
            arr_33 [i_0] [i_0] [i_0] = 0;
            var_34 = (max(var_34, 125));
            arr_34 [i_0] = (arr_14 [4] [i_4] [4]);
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    {
                        var_35 = (arr_39 [i_11 - 1] [i_11 + 2] [i_11 - 1]);
                        var_36 -= var_11;
                    }
                }
            }
            var_37 = (arr_3 [i_0]);
        }
        arr_45 [i_0] [i_0] = var_15;
    }
    for (int i_13 = 3; i_13 < 14;i_13 += 1)
    {
        var_38 = var_5;
        arr_48 [i_13] = var_6;
        var_39 = 25;
        var_40 = (arr_47 [i_13 - 3]);
    }
    for (int i_14 = 0; i_14 < 15;i_14 += 1)
    {
        var_41 = var_16;
        arr_51 [i_14] [i_14] = var_6;
    }
    var_42 = var_9;
    /* LoopNest 2 */
    for (int i_15 = 1; i_15 < 12;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            {
                var_43 = (arr_49 [i_15] [i_15]);
                var_44 = 10247;

                /* vectorizable */
                for (int i_17 = 1; i_17 < 12;i_17 += 1)
                {
                    var_45 += var_7;
                    var_46 = var_8;
                }
                for (int i_18 = 1; i_18 < 12;i_18 += 1)
                {
                    var_47 = (arr_59 [i_18 + 1] [i_16] [8]);

                    for (int i_19 = 1; i_19 < 13;i_19 += 1)
                    {
                        var_48 = (arr_61 [i_15 + 2] [1] [5] [i_19]);
                        arr_65 [i_15] [i_15] [2] [i_19 - 1] [2] = var_13;
                    }
                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 14;i_20 += 1)
                    {
                        var_49 = (max(var_49, var_11));
                        var_50 = var_10;
                    }
                    /* vectorizable */
                    for (int i_21 = 0; i_21 < 14;i_21 += 1)
                    {
                        arr_72 [i_15 - 1] [6] [12] [12] [12] = 1;
                        var_51 = var_2;
                    }
                    var_52 = (min(var_52, (arr_61 [i_15] [i_18 - 1] [i_18] [10])));
                    var_53 = (arr_60 [i_18 + 1] [i_18 + 1] [9] [i_18 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
