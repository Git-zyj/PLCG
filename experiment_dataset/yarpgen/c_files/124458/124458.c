/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    var_20 = var_1;
    var_21 &= (max((max(var_2, (1 * 4))), var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_22 = var_13;
        arr_2 [i_0] = var_13;

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_23 = var_10;
                    var_24 = (max(var_24, (var_11 <= var_8)));
                    arr_10 [i_2] [14] = var_2;
                    arr_11 [i_2] [i_1] [14] [i_2] = var_14;

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (var_4 >> var_12);
                        arr_15 [i_4] [i_4] [i_3] [i_2] [i_2] [i_1] [i_0] = (1 && 3635);
                        arr_16 [7] [14] [2] [i_1 - 1] [2] [9] [2] = var_10;
                        arr_17 [i_1] [i_2] [i_3] [i_4] = var_8;
                    }
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_25 ^= ((var_5 & (((3635 >> (705779335 - 705779315))))));
                    arr_20 [i_0] [i_0] [i_0] = var_18;
                    var_26 = (705779320 | var_0);
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    arr_23 [i_0] [i_0] = var_10;
                    var_27 = var_1;
                }

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    arr_28 [i_0] [7] [i_2] [7] = var_5;

                    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_28 = (61878 * 3662);
                        var_29 = var_13;
                        var_30 = (min(var_30, var_3));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_7] [8] [i_2] [i_7] [i_9] [8] [8] = var_1;
                        arr_35 [i_0] [i_1] [i_1] [1] [i_7] [i_7] [i_9] = ((var_7 << (var_4 - 41946)));
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_31 = var_15;
                        var_32 = (2 == 52847);
                    }
                }
                arr_38 [i_0] [i_0] [i_0] = (101 > 1178339887);
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                arr_41 [1] [i_11] = var_4;
                arr_42 [i_11] [i_1] [i_0] = var_13;
            }
            arr_43 [i_1] [i_1] [i_0] = var_7;

            for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
            {
                var_33 = (min(var_33, (var_0 >= var_14)));
                arr_47 [i_12] [14] [i_12] = (var_12 - var_2);
                var_34 = var_2;
            }
            for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    arr_53 [i_0] [3] [12] [12] = var_4;

                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        var_35 = (max(var_35, (var_1 >= var_13)));
                        var_36 = var_17;
                    }
                    var_37 = var_8;
                }
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    arr_61 [i_0] [i_0] [8] [i_0] = var_13;
                    var_38 = (min(var_38, ((((var_13 | var_12) >= var_4)))));
                    var_39 = (var_3 != var_6);

                    for (int i_17 = 1; i_17 < 14;i_17 += 1)
                    {
                        var_40 |= var_6;
                        var_41 = (min(var_41, (var_14 + var_7)));
                        var_42 = (max(var_42, var_18));
                        arr_64 [i_16] [i_16] [i_0] [i_0] = (var_7 - var_16);
                        var_43 = var_0;
                    }
                }

                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    var_44 = (var_9 + var_0);
                    var_45 = (max(var_45, var_0));
                }
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    arr_69 [i_19] [i_13] [i_1] [i_1] [i_0] = var_13;
                    arr_70 [i_19] [i_13] [i_1] [10] [i_0] [i_0] = (var_8 != var_18);
                    var_46 = (var_14 | var_2);
                }
                var_47 = (min(var_47, var_12));
            }
            arr_71 [4] [i_0] [i_1] = var_2;
        }
        for (int i_20 = 0; i_20 < 15;i_20 += 1)
        {
            var_48 = (var_9 | var_15);

            for (int i_21 = 1; i_21 < 1;i_21 += 1)
            {
                arr_77 [i_20] = var_17;

                for (int i_22 = 2; i_22 < 14;i_22 += 1)
                {
                    arr_81 [i_22 - 2] [i_20] [i_0] = (var_16 * var_7);
                    var_49 &= var_9;
                }
                for (int i_23 = 2; i_23 < 14;i_23 += 1)
                {
                    arr_85 [i_20] [i_21] [10] [i_23] [i_0] [i_0] = var_18;
                    arr_86 [i_20] [i_20] = (((var_9 * var_0) <= var_11));
                }
            }
            for (int i_24 = 4; i_24 < 12;i_24 += 1)
            {
                var_50 &= var_2;
                var_51 = (12689 * 17152);
                arr_89 [i_0] [i_0] [i_20] [i_20] = var_6;
            }
            arr_90 [i_20] = var_0;

            for (int i_25 = 0; i_25 < 15;i_25 += 1)
            {

                for (int i_26 = 0; i_26 < 15;i_26 += 1)
                {

                    for (int i_27 = 0; i_27 < 1;i_27 += 1)
                    {
                        arr_98 [4] [i_20] [i_20] [i_20] [i_20] = (var_6 && var_16);
                        arr_99 [i_0] [i_20] [i_20] [i_26] [i_27] = var_11;
                    }
                    var_52 = (min(var_52, var_14));
                }
                arr_100 [i_20] [i_20] [i_20] = var_5;
            }
        }
        var_53 *= (((var_11 + 9223372036854775807) >> (var_6 - 62868)));

        for (int i_28 = 3; i_28 < 14;i_28 += 1)
        {
            arr_103 [i_28] [i_28] = var_9;
            var_54 -= var_9;
            var_55 = var_7;
        }
        for (int i_29 = 0; i_29 < 15;i_29 += 1)
        {
            arr_106 [i_0] = (var_5 <= var_11);
            var_56 = var_14;
        }
    }
    for (int i_30 = 0; i_30 < 25;i_30 += 1)
    {
        arr_109 [i_30] [i_30] = (max((var_7 != var_6), var_5));
        var_57 = (min(var_57, var_16));
    }
    #pragma endscop
}
