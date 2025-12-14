/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((0 * ((((1 ? 4294967295 : var_2)) / var_14))));
    var_17 = ((((min(var_7, (var_13 < 0)))) ? (((!12) ? (((max(252, 32548)))) : (max(var_15, var_7)))) : (1 / 252)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_18 = (min(var_18, ((((arr_1 [i_1]) << (var_15 + 17343))))));

            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                var_19 *= ((var_1 ? 5 : 3));
                var_20 = ((!((var_14 <= (arr_4 [6])))));
                arr_9 [i_0] = 4294967291;
            }
            arr_10 [i_0] = (~4294967286);
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    {
                        var_21 = (max(var_21, (((var_15 ? var_0 : (arr_3 [i_1] [i_4] [i_4]))))));

                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_22 = (i_0 % 2 == 0) ? ((((arr_8 [i_4 + 3] [i_1] [i_3 - 2]) ? ((var_4 << (((arr_16 [i_0] [i_1] [i_3] [i_4] [i_0]) - 44943)))) : (1 | 2147483647)))) : ((((arr_8 [i_4 + 3] [i_1] [i_3 - 2]) ? ((var_4 << (((((arr_16 [i_0] [i_1] [i_3] [i_4] [i_0]) - 44943)) + 8336)))) : (1 | 2147483647))));
                            var_23 += ((~(((arr_7 [1] [i_1] [i_3] [i_4]) << (arr_13 [i_5] [i_4])))));
                            var_24 = (arr_13 [i_1] [i_1]);
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_25 = var_7;
                            var_26 = (max(var_26, var_14));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        var_27 = (max(var_27, (((24 >> (((arr_25 [i_9] [i_8 - 2] [i_7]) + 18858)))))));
                        var_28 = (((arr_5 [i_0] [i_7] [i_0]) ^ (arr_20 [i_0] [i_7] [i_0] [1] [i_9] [i_9] [i_9])));
                        arr_28 [i_0] [i_0] [i_8] [i_9] = ((~(((arr_2 [i_0]) ? var_5 : 16128))));
                        var_29 += (arr_22 [6]);
                    }
                }
            }

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_30 = (min(var_30, 4));
                arr_31 [i_0] [8] [i_0] [i_0] = ((~(var_13 ^ var_1)));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 13;i_12 += 1)
                    {
                        {
                            arr_39 [i_0] = (arr_8 [i_0] [0] [5]);
                            var_31 |= ((var_14 ? ((var_10 ? 1 : (arr_33 [i_0] [i_10]))) : (arr_36 [i_12 - 2] [i_12] [i_12 - 1] [i_12 - 2] [i_12 - 2] [i_12 - 2] [i_12 + 1])));
                            var_32 -= (((arr_19 [i_12] [i_11] [2] [2] [i_7] [i_0] [i_0]) ? -var_2 : -2));
                            arr_40 [i_0] [8] [i_10] [8] [11] [i_11] [i_12] = (!var_6);
                        }
                    }
                }
                var_33 = (min(var_33, ((((0 && var_11) ? (arr_21 [4]) : 14564088055565328422)))));
            }
            var_34 = (arr_26 [i_7] [i_0]);
            arr_41 [13] [i_0] [i_0] = 16383;
        }
        arr_42 [i_0] [i_0] = min(1, 1);
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
    {
        arr_45 [i_13] [i_13] = ((-(arr_36 [i_13] [2] [i_13] [i_13] [i_13] [12] [i_13])));
        var_35 = (13 + -2203264185213761221);
        var_36 += ((var_13 >> (!var_4)));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
    {
        var_37 *= ((var_14 ? (var_14 - var_13) : ((var_8 ? -16384 : (arr_27 [i_14])))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 0;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                {
                    arr_53 [i_14] [i_15] [i_15] [0] = 4294967295;
                    var_38 = (((((524160 || (arr_25 [i_14] [13] [10])))) != ((1 % (arr_43 [i_14] [13])))));
                }
            }
        }
        var_39 -= ((arr_27 [i_14]) <= (arr_38 [i_14] [i_14] [1]));
    }
    var_40 = var_2;
    #pragma endscop
}
