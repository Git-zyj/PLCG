/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max((max(var_9, var_5)), ((min(60982, var_11))))));
    var_18 = (-var_15 ? (min(var_15, var_14)) : var_6);

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_19 = ((-2147483645 ? ((((((arr_1 [i_0]) ? 1590897906 : (arr_1 [i_0])))) ? ((min((arr_1 [i_0]), (arr_1 [i_0])))) : (((4576 > (arr_0 [i_0])))))) : ((~(arr_1 [i_0 - 1])))));
        var_20 *= ((((((min((arr_0 [12]), (arr_1 [i_0 - 1])))) ? (((arr_0 [4]) ? (arr_0 [2]) : (arr_1 [i_0 - 1]))) : (arr_1 [i_0 - 1]))) + 63));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_21 = (min((arr_1 [i_1 - 1]), (arr_1 [i_1 - 1])));

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            arr_6 [i_1] [i_2] [i_1] = (i_2 % 2 == zero) ? ((((arr_2 [i_1 - 1] [i_1 + 1]) << (((min((arr_4 [i_2] [i_2]), (min(191989336, (arr_3 [i_2]))))) - 28077))))) : ((((arr_2 [i_1 - 1] [i_1 + 1]) << (((((min((arr_4 [i_2] [i_2]), (min(191989336, (arr_3 [i_2]))))) - 28077)) + 7214)))));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_22 = ((((min(60971, (min(4294967295, (arr_8 [i_1] [i_1])))))) + (((-1028111681 != 60961) ? (arr_3 [i_1 + 1]) : (((arr_1 [i_3]) ? (arr_0 [i_2]) : -16544))))));
                var_23 = (arr_0 [i_2]);
            }

            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                var_24 = arr_2 [i_1 + 1] [i_2 + 1];
                var_25 *= (min((((arr_5 [i_1 - 1] [i_2 - 1]) ? (arr_5 [i_1 - 1] [i_2 - 1]) : (arr_7 [i_1 - 1] [i_2 - 1] [8]))), ((~(arr_5 [i_1 - 1] [i_2 - 1])))));
            }
            arr_11 [i_2] [i_2] [i_2] = ((-0 ? ((max(0, 60982))) : (((arr_7 [i_1] [i_1] [i_2]) ? (arr_7 [i_1 - 1] [i_2 + 2] [i_2]) : (arr_7 [i_2] [i_2 - 1] [i_2])))));
        }
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            var_26 = ((-(min(1028111680, -1028111681))));
            arr_15 [i_1 + 1] [i_1] [i_1] = ((((((((-(arr_10 [i_1] [i_1] [i_5] [i_5])))) ? ((max((arr_10 [i_1] [i_1 - 1] [i_5] [i_1 - 1]), -1028111693))) : (min((arr_3 [i_1]), (arr_2 [i_5] [i_1])))))) ? (min((((-32767 - 1) ? (arr_1 [i_5]) : (arr_3 [i_1]))), (arr_14 [i_5 - 1] [i_1 - 1]))) : (min((arr_9 [i_5] [i_5 + 1] [i_5]), (arr_9 [i_5] [i_5] [i_5])))));
            var_27 = ((((((~(arr_12 [i_1])))) ? ((((!(arr_12 [i_1]))))) : (arr_2 [8] [i_5]))));
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_28 = ((((((arr_14 [i_1] [i_1]) | 209))) ? (arr_17 [i_6] [i_1 + 1] [i_1 - 1]) : (((arr_0 [4]) / 4560))));
            var_29 *= -56;
            var_30 += (arr_13 [i_1] [i_1]);
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_31 += (min((arr_1 [i_1]), ((+(min((arr_9 [i_7] [i_7] [8]), (arr_14 [i_1] [i_7])))))));
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_32 = (((arr_19 [i_1] [i_10]) ? (arr_18 [i_7]) : ((min(((((arr_14 [i_9] [i_9]) && (arr_12 [12])))), (arr_5 [i_1 + 1] [i_1]))))));
                            arr_29 [i_8] = ((((((arr_23 [i_1 + 1]) ? (arr_23 [i_1 - 1]) : (arr_23 [i_1 + 1])))) ? (arr_4 [i_8] [i_7]) : 3999641996));
                        }
                    }
                }
            }
            var_33 = (arr_1 [i_1]);
            arr_30 [i_7] [i_1] [i_1] = (((1 && 60992) ? ((((((arr_22 [i_1] [4] [i_7]) ? (arr_8 [i_1] [i_1]) : (arr_5 [1] [1])))) ? (((max((arr_12 [i_1]), 16)))) : (((arr_13 [i_1] [i_7]) ? (arr_27 [i_1] [i_1] [i_7] [i_7] [i_7]) : (arr_7 [i_1] [i_1] [1]))))) : (arr_4 [4] [i_7])));
        }
    }
    var_34 *= (((((var_10 ? var_8 : (var_0 <= var_14)))) ? (-9223372036854775807 - 1) : var_10));
    var_35 -= (var_8 || var_9);
    #pragma endscop
}
