/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_20 = (max(var_20, ((max((arr_1 [i_0 - 1] [i_0 - 1]), var_11)))));
        arr_2 [8] &= max(((126 ? ((-28067 ? 28075 : 55)) : (max(-712787898, 1)))), 31744);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_21 = (((!-17397) ? ((var_7 ? var_6 : var_2)) : (arr_1 [i_1 + 2] [i_1 + 3])));
        var_22 = (max(var_22, (((~(arr_0 [i_1 - 2]))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_2] = var_7;

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_23 = ((14985463535770448892 ? 9223372036854775807 : 1));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_15 [i_2] [i_2] [i_2] [7] [i_2] = (((arr_13 [8] [10] [i_1 + 1] [i_1 + 2] [9] [i_4]) ? (((arr_10 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 1]) ? var_11 : (arr_3 [i_4]))) : (((arr_14 [i_1] [i_2] [i_2] [i_4]) ? (arr_9 [i_1] [2] [i_1] [i_1]) : (arr_6 [i_3] [i_4])))));
                    arr_16 [i_2] = (arr_4 [8] [8]);
                    var_24 -= (((arr_3 [i_1 + 1]) ? (((!(arr_3 [i_1 - 1])))) : -var_1));
                    var_25 *= (arr_14 [i_1] [i_1] [i_3] [i_1]);
                    arr_17 [i_2] [i_2] = (-17400 / -2719553490712718490);
                }
            }
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_20 [7] [i_5] [7] = (-(arr_3 [i_1 + 1]));
            arr_21 [i_5] [i_5] = ((-((var_1 ? var_16 : (arr_3 [3])))));
            var_26 = ((arr_18 [i_1 - 1] [i_1 + 1]) ? (arr_18 [i_1 - 1] [i_1 + 1]) : (arr_18 [i_1 + 3] [i_1 - 1]));

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_27 = (!var_14);
                var_28 ^= var_14;

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_29 = (((((1 ? 18446744073709551615 : 43550))) ? (arr_13 [i_1] [6] [i_6] [i_1] [1] [i_6]) : var_10));
                    arr_26 [i_5] [i_5] [i_6] [i_7] [i_1] [i_7] = (arr_14 [i_1 + 2] [i_1 + 3] [i_5] [i_7]);
                }
                arr_27 [i_5] = var_2;
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_30 &= ((-((var_0 ? (arr_0 [0]) : (arr_1 [i_1] [i_5])))));
                var_31 *= (~0);
            }
            var_32 = (arr_6 [i_1] [i_5]);
        }
        var_33 = (arr_11 [i_1] [5] [i_1]);
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                arr_38 [i_9 + 2] [i_9] = ((((((arr_32 [i_9]) ? (arr_32 [i_9]) : (arr_32 [i_9])))) ? ((~(arr_31 [i_9 - 1]))) : ((((((arr_33 [i_9 + 2] [i_9]) ? (arr_35 [i_9] [i_9] [i_10]) : (arr_36 [i_9]))) < (arr_34 [i_9 + 1]))))));
                var_34 = (1 | -17381);
                var_35 = (var_7 ? ((max((min(-1, 4294967295)), var_4))) : ((1162938447 ? -5867327307671429633 : 8323821328679942134)));
                arr_39 [1] [i_9] [8] = (max(((~(arr_33 [i_9] [i_9]))), ((var_3 ? var_0 : -2573))));
                var_36 *= ((((((var_5 ? (arr_32 [1]) : var_7)) > (((var_13 ? (arr_37 [4]) : (arr_34 [i_9])))))) ? ((((((arr_31 [i_9]) ? var_13 : (arr_33 [0] [6])))))) : ((59515 ? ((var_18 ? (arr_32 [4]) : (arr_32 [12]))) : (((max((arr_33 [i_10] [22]), var_8))))))));
            }
        }
    }
    var_37 = (max(((var_10 ? var_17 : var_11)), ((var_8 ? var_14 : var_5))));
    #pragma endscop
}
