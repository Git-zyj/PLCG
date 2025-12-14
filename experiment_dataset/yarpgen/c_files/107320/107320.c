/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((2927 * 4), var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (!((!(arr_0 [i_0] [i_0]))));
        var_15 = (min(var_15, 17232336737642112952));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_16 = (min(var_16, (~21)));
            var_17 = (max(var_17, -1754105281));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {

                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    var_18 = (var_0 | var_1);
                    arr_13 [i_1] [i_1] [i_3] [i_4 - 1] = -232;
                    arr_14 [i_1] = (!var_7);
                    var_19 ^= (var_7 * ((((arr_0 [i_2] [i_2]) == var_7))));
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_20 = ((var_5 ? 1641346295 : var_13));

                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_1] = var_6;
                        var_21 |= ((+(((arr_18 [i_1] [i_2] [i_3] [i_2] [i_5] [i_6] [i_6 + 1]) << (((arr_1 [i_2]) - 68))))));
                        var_22 = (i_1 % 2 == 0) ? ((18446744073709551615 << (((arr_10 [i_6 - 1] [i_1] [i_5]) + 12228)))) : ((18446744073709551615 << (((((arr_10 [i_6 - 1] [i_1] [i_5]) + 12228)) - 28747))));
                        var_23 = ((-(arr_18 [i_6 + 1] [10] [12] [i_1] [i_6 + 1] [10] [i_6 + 1])));
                    }
                    for (int i_7 = 2; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        var_24 = (71 | -1);
                        arr_24 [1] [i_2] [1] [i_1] [i_7 - 1] [i_5] = ((241 ? 17 : -10821));
                    }
                    for (int i_8 = 2; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_25 ^= (((arr_20 [i_8] [i_8] [i_8 + 1] [i_8 + 2] [i_8] [i_8] [i_8 - 2]) ? ((((var_12 + 2147483647) << (1 - 1)))) : ((5 ? (arr_11 [8] [i_2] [i_3] [i_2] [i_1]) : var_6))));
                        var_26 *= var_2;
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_27 = var_2;
                        var_28 = -32532;
                        var_29 = (min(var_29, (21544 >= 6271)));
                        var_30 *= ((!(arr_23 [10] [10] [i_3] [10] [i_2])));
                    }
                    var_31 = (min(var_31, (arr_11 [i_1] [i_2] [i_3] [6] [i_1])));
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_32 *= 1;
                            arr_37 [i_1] [i_2] [i_1] [i_1] [i_11] = (1 * var_11);
                        }
                    }
                }
            }
            for (int i_12 = 3; i_12 < 13;i_12 += 1)
            {
                var_33 *= -3152;
                var_34 = (max(var_34, (3169927732132452076 >= 1)));
                var_35 = (max(var_35, (((247 ? 86 : 26315)))));

                for (int i_13 = 3; i_13 < 10;i_13 += 1)
                {
                    var_36 = (min(var_36, -181));
                    var_37 = (min(var_37, (((-(var_9 == var_0))))));
                    var_38 = (max(var_38, var_1));
                }
            }
            for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
            {

                for (int i_15 = 2; i_15 < 13;i_15 += 1)
                {
                    var_39 |= (((arr_38 [i_15 + 1] [i_15]) ? (((arr_36 [i_1] [i_2] [i_1] [i_14]) ? -10893 : 28437)) : ((4977577908004429366 ? (arr_15 [i_14]) : var_3))));
                    var_40 = ((-8909 >= (arr_28 [i_2] [i_1] [i_14] [i_15 + 1] [i_2])));
                }
                arr_48 [i_1] [i_1] [i_1] [i_1] = (var_13 == 24068);
            }
            for (int i_16 = 0; i_16 < 14;i_16 += 1) /* same iter space */
            {
                arr_51 [i_2] |= ((var_5 ? (((arr_36 [i_2] [i_2] [i_2] [i_2]) ? (arr_11 [i_1] [i_16] [i_16] [i_2] [i_1]) : (arr_43 [i_16] [i_16]))) : 24068));
                var_41 *= 63;
            }
        }
        var_42 *= var_3;
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            for (int i_18 = 2; i_18 < 11;i_18 += 1)
            {
                {
                    var_43 = 16384;
                    var_44 *= ((!(arr_40 [i_18] [i_17] [i_17] [i_1] [i_1] [i_18])));
                    var_45 = (min(var_45, (24043 | 422495719)));

                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        arr_60 [i_1] [9] [i_17] [9] [i_1] = (arr_26 [i_1] [i_17] [i_1]);
                        arr_61 [i_1] [i_17] [i_18 + 3] [i_1] = (arr_17 [i_1] [i_1] [i_1] [i_1] [i_19]);
                        var_46 = var_10;
                    }
                }
            }
        }
    }
    var_47 = (!var_8);
    #pragma endscop
}
