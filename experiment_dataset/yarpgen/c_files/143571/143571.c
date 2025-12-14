/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_14 & (var_1 & var_5)))) ? (((var_10 ^ 96) & (max(18446744073709551615, var_1)))) : (var_10 | 18446744073709551615)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = 1;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_17 = (max(var_17, ((((arr_1 [i_0] [i_1]) ? (-9223372036854775807 - 1) : var_2)))));
            arr_6 [i_0] [i_0] = -var_5;
            var_18 = (arr_3 [i_0]);
        }
        arr_7 [i_0] [i_0] = (!55226);
        var_19 = 0;
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_10 [i_2] = ((((max(var_12, (arr_9 [i_2])))) ? (min((min(0, (arr_9 [i_2]))), (~0))) : var_9));
        arr_11 [i_2] = ((((2 ? 1 : ((14 << (32765 - 32755))))) >> 0));
        var_20 = (1 + (max((min((arr_8 [i_2]), (arr_9 [i_2]))), var_4)));
        var_21 = ((15205 * (min(((var_14 ? var_5 : var_6)), ((min((arr_8 [i_2]), var_3)))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_22 &= (((-2147483647 - 1) ? (arr_18 [i_3] [i_3] [i_3]) : 1));
            var_23 = (((arr_15 [i_3] [i_4]) << (((arr_3 [i_4]) ? 1 : (arr_18 [i_3] [i_3] [i_3])))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_24 = var_4;
                            var_25 = ((1 ? 2147483622 : 2147483643));
                        }
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_26 *= ((-(arr_27 [i_9])));
                arr_31 [i_3] [i_3] [i_3] = ((var_7 ? 127 : 511));
                var_27 = (((-33554432 + 2147483647) << (((((-127 - 1) + 141)) - 13))));
                arr_32 [i_3] [i_3] = ((-(9161 + 18231)));
                arr_33 [i_3] [i_8] [i_3] [i_3] = (((((arr_17 [i_3] [i_3]) / (arr_5 [i_3] [i_3] [i_3]))) / 737));
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_28 = (max(var_28, 18446744073709551614));
                            arr_42 [i_3] [i_3] [i_3] [i_3] [i_3] = 1;
                            arr_43 [i_11] [i_3] [i_3] [i_3] [i_3] = ((18446744073709551615 ? (483868276 + -1622214961) : (((10 ? 1 : -108)))));
                        }
                    }
                }
                var_29 = (min(var_29, 0));
            }
            for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        {
                            var_30 = arr_18 [i_3] [i_3] [i_8 - 1];
                            var_31 ^= 18446744073709551589;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 3; i_16 < 16;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 0;i_17 += 1)
                    {
                        {
                            var_32 = (((arr_53 [i_3]) * (arr_53 [i_3])));
                            var_33 ^= arr_52 [i_3] [i_3] [i_3] [i_3] [i_3];
                            var_34 |= (((arr_49 [i_16] [14] [i_16 - 1] [i_16] [i_16] [i_16 - 3] [i_16 + 1]) >> (14220 - 14176)));
                        }
                    }
                }
            }
            for (int i_18 = 0; i_18 < 17;i_18 += 1) /* same iter space */
            {
                var_35 = (max(var_35, 1));
                var_36 = (arr_48 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]);
            }
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 17;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 17;i_20 += 1)
                {
                    {
                        var_37 = 18446744073709551605;
                        var_38 += ((((arr_24 [i_3] [i_8] [i_3] [i_8] [i_8] [i_3] [i_3]) * 47319)) < (arr_47 [i_8 - 1] [i_19] [i_8 - 1] [i_8 - 1]));
                    }
                }
            }
            var_39 = (min(var_39, (~-1)));
            var_40 = 18;
            var_41 = (max(var_41, ((((arr_19 [i_3] [i_8] [i_3] [i_8 - 1]) + (arr_30 [i_3] [i_8 - 1] [i_8] [i_8]))))));
        }
        arr_64 [i_3] = (!1);
        arr_65 [i_3] = (((((arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) != -103)) ? (((arr_25 [i_3]) >> 0)) : (arr_61 [i_3] [i_3] [i_3] [i_3])));
    }
    for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
    {
        var_42 = ((4294967295 << (14214 - 14207)));
        var_43 &= (((((!((max((arr_36 [16] [16]), 0)))))) != ((1 * ((max(var_0, (arr_67 [i_21]))))))));
        arr_69 [i_21] [i_21] = ((9223372036854775805 ? (((arr_37 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]) + (arr_49 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]))) : -1));
        var_44 += ((max((102 - var_5), ((var_0 ? -1 : (arr_46 [i_21]))))));
    }
    #pragma endscop
}
