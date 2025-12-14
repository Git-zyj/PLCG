/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((((-var_5 ? -var_6 : (var_4 <= var_8)))) ? var_3 : var_2)))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 -= var_8;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_12 |= (((arr_8 [i_0]) ? ((((((arr_1 [i_2] [i_2]) ? (arr_8 [i_0]) : var_8))) ? var_7 : ((var_9 ? var_3 : (arr_1 [i_2] [i_2]))))) : (((((!var_9) && (var_2 / var_8)))))));
                    var_13 = (i_0 % 2 == 0) ? (((((+(((arr_3 [i_0] [i_1] [i_0]) >> (((arr_1 [i_0] [i_0]) - 1014021301)))))) > ((((!(~var_1)))))))) : (((((+(((arr_3 [i_0] [i_1] [i_0]) >> (((((arr_1 [i_0] [i_0]) - 1014021301)) - 1892835081)))))) > ((((!(~var_1))))))));
                    var_14 = ((((((min(var_1, var_0)) ? (((var_9 ? (arr_6 [i_0] [i_0 + 1] [i_1] [i_0]) : var_1))) : (((arr_4 [i_0]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (arr_1 [i_0] [i_1])))))) ? (((var_3 % var_5) ? ((var_6 * (arr_7 [i_0] [i_1] [i_2 - 1] [i_2 - 1]))) : var_1)) : (-94 / 837606392)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_15 -= ((((((arr_10 [1] [i_3]) ? var_4 : var_8))) ? ((((arr_10 [i_3] [i_3]) ? var_9 : (arr_9 [0])))) : (((arr_10 [i_3] [i_3]) ? (arr_10 [i_3] [i_3]) : var_9))));
        var_16 *= (1 ^ 122);
        var_17 = (((((arr_10 [i_3] [i_3]) ? (arr_9 [i_3]) : var_8)) & (((arr_9 [i_3]) ? var_5 : var_3))));

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_15 [i_3] = ((((var_9 ? (arr_10 [i_3] [i_4]) : (arr_11 [i_3])))) ? (arr_12 [i_3] [i_3]) : (((arr_14 [i_4] [i_3] [i_3]) * var_0)));
            var_18 ^= (((((arr_10 [i_3] [i_3]) ? var_5 : (arr_13 [i_3] [i_4] [i_4]))) | ((var_2 ? var_2 : var_2))));
            arr_16 [i_3] = ((~(((arr_12 [i_3] [i_4]) ? (arr_13 [i_4] [1] [i_3]) : var_7))));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                {
                    var_19 -= ((!(((~(arr_21 [i_3] [i_3] [i_6] [i_7]))))));
                    var_20 ^= ((var_7 ? (arr_17 [i_6] [i_6]) : (((((arr_22 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) || (arr_13 [i_3] [i_5] [i_6])))))));
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    var_21 = (max(var_21, var_7));
                    var_22 = (((var_5 <= var_6) ? 1403053767 : var_2));
                    var_23 = ((((((arr_11 [12]) / (arr_25 [i_8] [i_6] [9])))) ? (arr_23 [i_3] [i_3]) : (((((arr_11 [i_8]) && (arr_14 [i_3] [i_5] [i_6])))))));
                }
                var_24 = ((-var_8 || (!var_2)));
                var_25 -= (((arr_25 [i_6] [i_6] [i_6]) * ((~(arr_20 [i_6] [i_5] [i_3])))));
                var_26 = ((var_7 <= ((var_9 ? var_3 : var_4))));
            }
            arr_26 [i_3] [i_5] = (arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_27 -= (((arr_27 [i_9] [i_3] [i_3]) ? (arr_14 [i_3] [i_3] [i_9]) : (((var_6 ? var_3 : (arr_20 [i_3] [i_9] [i_3]))))));
            var_28 += (((!var_6) != (~var_5)));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                arr_36 [i_11] [i_10] [i_11] [i_11] |= var_8;
                var_29 |= (var_0 / var_5);
                var_30 = (~var_4);
            }
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                var_31 -= (((((var_5 ? (arr_24 [i_3] [i_3] [3] [8]) : var_9))) | var_5));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 13;i_14 += 1)
                    {
                        {
                            var_32 = ((((((arr_23 [i_14] [i_13]) ? var_1 : (arr_25 [i_3] [i_3] [i_3])))) ? -var_7 : (arr_33 [i_12])));
                            arr_46 [i_3] [i_12] [i_12] = var_3;
                            arr_47 [i_3] [i_10] [0] [i_10] [i_14 + 1] [i_14] |= (((arr_42 [10]) ? (((arr_11 [i_3]) ? (arr_29 [i_10] [i_13]) : var_6)) : ((((!(arr_19 [i_13] [i_12] [i_12] [i_13])))))));
                            arr_48 [i_3] [i_10] [i_12] [i_12] [i_10] = var_7;
                            arr_49 [i_3] [i_3] [i_12] [i_12] [i_14] [i_12] = (((((var_6 ? (arr_17 [i_14] [i_13]) : var_6))) ? ((var_5 ? (arr_38 [i_12] [i_10] [i_12]) : var_7)) : (!var_1)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        {
                            var_33 = (min(var_33, (((var_3 ? (var_1 > var_2) : ((~(arr_11 [i_16]))))))));
                            var_34 = (!-7);
                            var_35 = (((((arr_31 [i_12] [i_10] [i_3]) * var_4)) & var_7));
                        }
                    }
                }
            }
            var_36 -= ((!((((arr_53 [i_3] [i_10] [3] [i_3] [i_10] [i_3]) ? (arr_17 [i_3] [i_3]) : var_7)))));
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 12;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    {
                        var_37 = (((((var_9 / (arr_20 [i_3] [i_10] [i_17])))) ? ((((!(arr_21 [i_18] [i_17] [i_3] [i_3]))))) : (((arr_20 [i_3] [13] [i_18]) ? (arr_51 [i_18] [i_3] [i_17] [i_17 + 2] [i_10] [i_3]) : var_6))));

                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            var_38 = (max(var_38, ((((((arr_20 [i_3] [8] [i_19]) && (arr_42 [i_18])))) ^ (arr_27 [i_19] [i_18] [i_17])))));
                            arr_62 [i_3] [i_10] [i_17 + 1] [13] [i_3] = ((-(~var_9)));
                        }
                    }
                }
            }
            var_39 -= (((var_9 ? var_4 : var_5)));
        }
    }
    for (int i_20 = 0; i_20 < 22;i_20 += 1)
    {
        /* LoopNest 2 */
        for (int i_21 = 1; i_21 < 19;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 20;i_22 += 1)
            {
                {
                    var_40 = (min((((+(((arr_66 [1] [1]) / (arr_69 [i_21 - 1] [i_21] [i_21 + 1])))))), (arr_63 [i_20])));
                    var_41 = ((((!(var_6 && var_9))) && ((min(var_9, ((min(var_7, var_0))))))));
                }
            }
        }
        var_42 = (max(var_42, (~var_5)));
    }
    var_43 -= var_4;
    var_44 = ((-(((var_9 + 9223372036854775807) >> (((~var_5) - 2230842141443245360))))));
    #pragma endscop
}
