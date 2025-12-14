/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 ? (((min((var_12 > var_13), var_7)))) : ((var_3 | (min(var_8, var_15))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_17 = (-(((!(arr_1 [i_0])))));
        var_18 = (((((arr_1 [i_0]) % var_10)) >= (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_3 [i_0] = ((((~((1 ? (arr_2 [i_0]) : var_3)))) & var_8));
        var_19 = ((~((var_4 ? (arr_1 [i_0]) : var_3))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_20 = -1;
            var_21 = (max(var_21, (((((1 ? 1 : -4045398609527526098)) & ((((!(arr_5 [0] [i_1]))))))))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_22 -= ((((min((arr_8 [i_0]), (arr_1 [i_0]))) != var_2)));
            var_23 = (max(var_23, ((((!-var_3) * (((arr_2 [i_0]) ? (var_14 ^ var_11) : var_7)))))));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_24 = (min(var_24, ((((((-2 ? ((((!(arr_4 [i_0] [7] [i_0]))))) : ((var_1 ? var_15 : 16178062100543738957))))) ? ((var_5 ? -114 : (arr_7 [i_0] [i_0]))) : var_5)))));
            arr_12 [6] [i_0] [i_0] = ((((((arr_8 [i_3]) ? var_5 : (arr_2 [i_0])))) ? ((((arr_9 [i_3]) > var_3))) : (((((var_9 ? var_14 : var_11))) ? (((var_10 >= (arr_9 [i_3])))) : (min((arr_6 [i_3] [i_3] [i_0]), var_7))))));
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                var_25 *= ((-(arr_11 [5] [i_5 - 2] [i_6 - 1])));
                var_26 = ((!(arr_16 [i_4] [i_5 - 1])));
                var_27 = (((-8427638348716473423 ? 32767 : var_0)));
                var_28 &= var_8;
            }
            var_29 = ((((((arr_4 [i_4] [i_5] [i_5]) ^ var_4))) * var_10));
            var_30 = -var_15;
        }
        var_31 -= (min((((var_0 ^ -1) - ((11459667362272609511 ? (arr_8 [i_4]) : var_8)))), 217));
        var_32 &= ((!(arr_16 [i_4] [i_4])));
        var_33 = (min(var_33, (((((((min(-1, var_13)) << ((((-(arr_8 [i_4]))) - 817069101159586573))))) ? (((-(arr_16 [i_4] [i_4])))) : (min((((((arr_2 [i_4]) + 9223372036854775807)) << (((((arr_10 [5]) + 8494753991547086689)) - 54)))), 246082080)))))));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_34 = (arr_23 [i_7]);
        var_35 &= (min(((((arr_22 [i_7]) ? var_1 : var_6))), ((((arr_22 [i_7]) && var_8)))));

        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_36 = 5028;
            var_37 = ((8427638348716473423 ? (((arr_21 [i_7] [i_7]) ? var_6 : (arr_21 [i_7] [1]))) : ((min(44, (arr_22 [i_8]))))));
        }
        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            var_38 = (((((arr_25 [i_7] [i_9 + 4]) + ((var_2 ? (arr_24 [i_7] [i_9]) : var_13)))) <= (((var_11 ? var_8 : (arr_24 [i_9] [i_9 + 4]))))));
            var_39 *= ((((((arr_27 [i_7] [i_9] [8]) ? (arr_24 [i_9] [i_7]) : -114))) & (((((((!(arr_27 [i_7] [i_7] [9]))))) <= (~var_6))))));
        }
        var_40 = var_5;
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_41 = (min(((min((arr_29 [i_10]), var_11))), (((var_13 ? (arr_22 [i_10]) : var_15)))));
        var_42 = min((min((min((arr_21 [8] [8]), 9223372036854775807)), ((((arr_28 [i_10] [i_10]) && var_4))))), ((3985249202381672118 ? (((arr_26 [i_10]) ? var_2 : 8705435093486074851)) : var_1)));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                {
                    var_43 *= (arr_21 [i_11] [i_10]);
                    var_44 = var_12;

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_45 = ((((var_15 + 9223372036854775807) << (((-8427638348716473423 + 8427638348716473478) - 54)))));
                        var_46 = (((arr_27 [7] [i_11] [i_11]) ? (arr_25 [i_12 - 1] [i_12 - 1]) : ((var_2 ^ (arr_26 [i_10])))));
                        arr_37 [i_13] [7] [i_12] [i_12] [i_11] [i_10] = (((var_4 & var_5) <= 1));
                        var_47 = (((arr_25 [i_10] [i_11]) == (arr_36 [i_10] [i_12] [i_12 - 1] [i_12 - 1] [11])));
                    }
                    for (int i_14 = 2; i_14 < 15;i_14 += 1)
                    {
                        var_48 = (arr_34 [i_10] [i_11] [i_10]);
                        var_49 = (min(var_49, (((((var_8 && (arr_30 [i_12]))))))));
                        var_50 &= ((var_5 ? (((-(arr_28 [i_10] [i_14])))) : (min((arr_34 [i_12 - 1] [i_14 + 1] [i_14 - 1]), (arr_39 [i_14 - 2] [i_14 + 1])))));
                    }
                    var_51 = (arr_30 [i_10]);
                    var_52 = (min(var_52, (((~(min((arr_25 [i_10] [i_12 - 1]), var_4)))))));
                }
            }
        }
        var_53 = ((((arr_21 [i_10] [15]) % (((arr_38 [1] [i_10] [i_10] [1]) ? (arr_38 [i_10] [i_10] [i_10] [i_10]) : 3985249202381672118)))));
    }
    #pragma endscop
}
