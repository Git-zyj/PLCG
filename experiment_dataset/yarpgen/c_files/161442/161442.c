/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((1 << (184 - 159))) ^ (((-106 > ((2701136356 ? var_16 : 72)))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_20 = var_1;
            var_21 = (((((122 <= (arr_0 [i_0 - 1])))) - (((!(arr_4 [i_0 + 1]))))));
            var_22 = (((((88 / ((106 ? -107 : var_10))))) && -var_5));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_23 = ((((min((arr_7 [i_0 - 1] [i_0 + 1]), var_17))) ? ((max(var_2, (arr_7 [i_0 - 1] [i_0 + 1])))) : ((min((arr_7 [i_0 - 1] [i_0 + 1]), -98)))));
            var_24 = (((((!71) && (var_1 | var_18))) ? (((((-115 ? 56826 : -107))))) : (arr_6 [i_0 - 1] [i_0 - 2] [i_2 + 1])));
            arr_8 [i_2] = (-((-(arr_5 [i_0 - 2]))));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_25 = (arr_13 [i_0]);
                    var_26 = (~var_6);
                    var_27 = var_12;
                }
            }
        }
        arr_14 [i_0 - 2] = ((((183 * var_18) ? ((((arr_7 [i_0] [i_0]) ? var_6 : var_15))) : ((var_15 ? var_8 : 11148505663424365011)))));
    }
    for (int i_5 = 1; i_5 < 24;i_5 += 1)
    {
        var_28 = (!var_7);
        var_29 = (min(105, ((116 ? (arr_16 [i_5]) : (arr_16 [i_5])))));
        var_30 = (arr_16 [i_5]);
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_31 = ((((((arr_22 [i_7] [i_6 + 1]) * (arr_22 [i_6] [i_6 + 1])))) ? (var_1 / var_17) : (203 / var_16)));
            arr_24 [9] [9] = (((var_10 & var_18) ? (((min((arr_20 [4] [i_6 + 1]), var_2)) << (((175099317 | var_2) - 175103436)))) : (!1)));
            var_32 = (min((((arr_18 [i_6 + 1] [i_6 + 1]) || var_6)), (!90)));
        }
        for (int i_8 = 4; i_8 < 11;i_8 += 1)
        {
            var_33 = ((~((-107 ^ (~4178843637614844286)))));
            var_34 = ((((var_6 > (var_2 / var_10))) ? ((min(var_7, var_3))) : 211));

            for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
            {
                arr_30 [i_6] [i_8] [i_8] = (((((116 > var_15) & var_4)) / -107));
                arr_31 [i_8] [i_8] [i_8] = (((-47 == 3864033461) / ((((arr_0 [i_6 + 1]) == (arr_0 [i_6 + 1]))))));
                var_35 = ((((min((((arr_21 [i_6] [i_6] [i_6]) / (arr_1 [0] [i_6]))), -var_13))) ? ((((((arr_25 [i_9] [i_9] [i_9]) && (arr_23 [i_6 + 1] [i_8] [i_8])))) + (72 + 175099317))) : (var_2 == 96)));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
            {
                var_36 = (1 < var_2);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_40 [i_6] [i_6] = (var_1 | var_4);
                            var_37 = (((((1 >> (61 - 53)))) ? (((arr_37 [8] [i_12] [1] [i_11] [8]) ? (arr_20 [i_6] [i_6]) : var_4)) : (arr_25 [i_6] [i_6] [i_11])));
                            var_38 = (((79 | 175099316) ? ((var_7 + (arr_18 [7] [7]))) : var_18));
                        }
                    }
                }
            }
        }
        var_39 = ((!(arr_38 [i_6 + 1] [i_6] [i_6] [i_6] [i_6 + 1])));
    }
    #pragma endscop
}
