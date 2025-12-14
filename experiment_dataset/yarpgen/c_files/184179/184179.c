/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((37770 ? -86 : 9223372036854775801))) ? var_5 : var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 |= (arr_0 [i_0] [i_0]);
        var_13 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = 1462348917818265524;
        var_14 += (((((924185310275169689 ? var_0 : 9223372036854775807))) ? var_7 : (arr_2 [i_0])));
        var_15 = (((((var_5 << (((arr_0 [i_0] [i_0]) - 48183))))) && (arr_1 [15])));
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_16 = 32767;
            arr_10 [6] [i_2] = 32766;
            var_17 = var_10;
            var_18 += ((-(arr_0 [i_1] [i_1])));
            var_19 += 59307;
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            arr_13 [i_1] = ((((arr_2 [i_1]) ? (arr_12 [i_3 - 1] [i_1] [i_1]) : 8)));
            var_20 = (~-4611686018427387904);
            var_21 = -7;
            var_22 |= ((-(((arr_4 [i_1]) ? var_0 : var_6))));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_23 = (min((!-var_7), (min((((var_3 && (arr_11 [i_4] [i_1])))), (((-9223372036854775807 - 1) ? var_9 : 7))))));
            var_24 = (max((((var_4 - (!124)))), (min(((-30435 ? var_8 : (arr_6 [i_1] [3] [i_1]))), -924185310275169689))));
            var_25 = -4095;

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_20 [i_1] [i_4] [3] [i_5] = (max((((var_1 > ((-6133601903388670338 ? var_5 : var_3))))), ((-((32767 ? (arr_11 [i_4] [1]) : (arr_11 [i_1] [i_5])))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_25 [i_1] [i_4] [3] = (arr_1 [i_1]);
                            var_26 = (min(((((arr_16 [i_7] [i_6] [i_5] [i_1]) != (!var_3)))), -1122815956058342611));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                arr_28 [7] [i_4] = ((var_6 > (((var_4 / ((-(arr_6 [i_4] [i_4] [i_4]))))))));
                var_27 = (--6672);
            }
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                var_28 = (min(var_28, 6228));
                arr_32 [i_4] [i_1] = (min(((1122815956058342611 ? (arr_9 [i_9]) : var_5)), (arr_9 [i_1])));
            }
            arr_33 [i_4] [i_1] = (min(((~(arr_14 [i_1]))), (!4611686018423193600)));
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            arr_36 [i_10] [i_1] [6] = (((924185310275169688 ? (arr_17 [i_1] [i_10] [i_10] [i_10]) : 59887)));
            var_29 = var_7;
            var_30 = (min(var_30, ((((((~((var_8 ? var_10 : (arr_17 [i_1] [i_1] [i_10] [i_1])))))) ? 6504105313808332418 : (((~((-30435 & (arr_30 [i_1] [8] [i_10])))))))))));
            var_31 = (max((--65535), (((arr_29 [i_1] [i_1] [i_1] [i_1]) ? var_8 : 1122815956058342611))));
        }
        var_32 = ((~((((((arr_35 [i_1]) ? (arr_4 [i_1]) : -124))) ? (arr_12 [i_1] [7] [i_1]) : 32767))));
        arr_37 [i_1] = 35286;
        arr_38 [6] = ((max((((!(arr_6 [i_1] [i_1] [i_1])))), (arr_16 [i_1] [i_1] [i_1] [9]))));
        var_33 = -var_2;
    }
    #pragma endscop
}
