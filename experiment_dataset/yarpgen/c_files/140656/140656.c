/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_8 [i_1] [i_3] = (1 / var_10);
                        var_17 = (((12 ? (59771 == -83) : 1975598890)));
                        var_18 = (max(var_18, var_9));
                    }
                }
            }
        }
        var_19 = 1;
    }
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        arr_13 [i_4] = (1 * 3742066284);
        var_20 -= var_3;
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_21 = (!-22);

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_22 = (-1 != 12);
            var_23 *= 7;
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_24 = 1998760461;
            var_25 = (min(var_25, 1998760477));

            for (int i_8 = 3; i_8 < 14;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_26 = (0 | 1389867852);
                            arr_28 [i_5] [i_10] [i_8 - 3] [1] [i_10] [i_10] = (((1192955370 << (221 - 191))));
                            var_27 = var_16;
                            var_28 = (max(var_28, 1998760465));
                            arr_29 [i_5] [i_7] [i_5] [i_9 + 2] [i_10] = ((22 ? var_14 : var_7));
                        }
                    }
                }
                var_29 += ((var_7 ? 2374286562 : -17457));
                var_30 = 17477;
            }
            for (int i_11 = 2; i_11 < 14;i_11 += 1)
            {
                var_31 = (min(var_31, 3953537171));
                arr_32 [i_5] = var_4;
            }
            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                var_32 = (max(var_32, var_10));
                var_33 = (min(var_33, (31 + 4294967284)));

                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    var_34 = var_10;
                    var_35 *= var_1;
                    var_36 = (max(var_36, 1951823408));

                    for (int i_14 = 1; i_14 < 11;i_14 += 1)
                    {
                        arr_41 [i_5] [i_12] = (var_8 * -17457);
                        var_37 = (~0);
                        var_38 = var_1;
                        var_39 = -var_10;
                    }
                    for (int i_15 = 3; i_15 < 14;i_15 += 1)
                    {
                        arr_46 [i_12] [i_7] [i_12] = var_3;
                        var_40 = (1 && var_12);
                        var_41 ^= (0 && 15537);
                    }
                    for (int i_16 = 1; i_16 < 12;i_16 += 1)
                    {
                        arr_50 [i_12] [i_7] [1] [1] [i_13] [11] = ((var_0 ? -22 : (112411332 != 0)));
                        var_42 = var_15;
                    }
                }
                for (int i_17 = 0; i_17 < 0;i_17 += 1)
                {
                    var_43 = (-112411333 + 1);
                    var_44 = (var_9 ^ var_5);
                }
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    arr_56 [i_12] = 1;
                    arr_57 [i_12] = ((-1998760459 ? 1 : -112411335));
                }
            }
        }
        for (int i_19 = 2; i_19 < 14;i_19 += 1)
        {
            var_45 = ((((!(29160 || 0))) ? 29168 : (((!(((19 ? -112411333 : 0))))))));

            for (int i_20 = 0; i_20 < 15;i_20 += 1)
            {
                var_46 = (max(var_46, (((-(!3491063481))))));
                arr_65 [i_5] [7] [i_5] [i_20] = ((((1 ? 112411348 : -var_14)) << (1920680733 - 1920680708)));
            }
            arr_66 [i_5] [i_19] [i_19] = 4294967295;
            var_47 = (max(var_47, ((((1 == 112411348) ? 255 : 0)))));
        }
    }
    for (int i_21 = 0; i_21 < 11;i_21 += 1)
    {
        var_48 = 255;
        arr_71 [6] = (((~var_11) >= ((-341430124 ? 30977 : (var_9 == var_15)))));
    }
    var_49 = 2;
    #pragma endscop
}
