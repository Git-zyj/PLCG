/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max(var_10, var_3)));

    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (((((arr_0 [i_0]) >= (((arr_1 [i_0]) / var_12))))))));
        var_17 = (max(var_17, (arr_0 [i_0])));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((((!(((17804581113386532194 ? var_10 : 1))))) ? 103 : (((arr_2 [i_1 - 3]) ? ((((arr_1 [i_1]) ? (arr_2 [i_1 + 1]) : (arr_3 [i_1 + 1])))) : 17355536708779126548))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_18 = (-127 - 1);
                        arr_13 [i_1] [i_2] [i_3] [i_4] [i_4] [10] = 1;
                        arr_14 [i_1] [i_1] = 27672;
                    }
                    var_19 = (min(var_19, (arr_12 [i_1] [i_2] [i_2] [i_1 - 3])));
                    arr_15 [i_1] [i_1] [i_1] [i_1] = (arr_2 [i_1 - 2]);

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_18 [i_1] [7] [i_2] [13] [i_5] = min(3926316980487004758, (arr_16 [i_2]));
                        arr_19 [i_1] [i_2] [i_3] [i_1] = (arr_12 [i_1 - 3] [i_1] [i_1] [i_1 - 3]);
                        arr_20 [i_1] [i_1] [i_2] [i_5] = (~-4635998742406583051);
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 24;i_6 += 1)
                    {
                        var_20 = (arr_6 [i_1 - 2] [i_6 - 2] [i_1]);
                        arr_23 [i_1] = (((arr_8 [i_1]) ? (arr_1 [i_1 - 3]) : (arr_8 [i_1])));
                    }
                    arr_24 [21] [i_2] [i_2] [i_1] = ((!(arr_21 [i_1 - 3] [i_2] [i_2] [i_3] [i_1])));
                }
            }
        }
        var_21 = (arr_3 [i_1]);
        var_22 *= ((((max(-104, 1))) ? (arr_4 [i_1 - 3] [i_1]) : ((max((arr_11 [i_1] [i_1 - 1] [i_1]), (arr_16 [i_1]))))));
        var_23 = (max(var_23, 1));
    }
    for (int i_7 = 3; i_7 < 23;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] [i_7] = (((((arr_0 [i_7]) ? (arr_6 [i_7] [i_7 + 2] [6]) : (arr_3 [i_7])))) ? (((arr_12 [i_7] [8] [24] [i_7]) ? 16312 : 444274883)) : (arr_26 [i_7]));

        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
        {
            arr_30 [i_7 - 2] = ((~(arr_7 [i_8] [i_7 - 1] [i_8])));
            var_24 = (max(((((37862 ? -16313 : var_4)))), (((~(arr_2 [11]))))));
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
        {
            var_25 *= 20854;
            var_26 = (((-(arr_25 [i_7 + 1]))));
            arr_33 [i_7] [i_9] [i_7 - 1] = 1;
        }
        for (int i_10 = 0; i_10 < 0;i_10 += 1)
        {
            arr_37 [i_7] = 6473529419137084051;
            arr_38 [i_10] [i_7] [i_7] = (5407 ? 65535 : (max(((1 ? 27653 : -2015084642982431078)), 37846)));
        }
        var_27 = 58996;
        arr_39 [i_7 - 1] = var_8;
        var_28 = (((max((((arr_21 [i_7 + 1] [18] [i_7] [i_7] [6]) ? var_7 : var_6)), var_6))) ? (arr_32 [i_7] [i_7]) : (max((arr_32 [i_7 - 3] [i_7 - 3]), (arr_32 [i_7 - 1] [i_7 - 3]))));
    }
    for (int i_11 = 3; i_11 < 23;i_11 += 1) /* same iter space */
    {
        arr_43 [i_11] = (max((-9223372036854775807 - 1), (arr_10 [8] [6] [i_11 + 2])));
        arr_44 [i_11] = (arr_12 [i_11 - 2] [i_11 + 2] [1] [i_11]);

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            arr_49 [i_12] = (arr_35 [i_11] [i_11]);
            arr_50 [i_12] [i_12] = (((arr_35 [i_11 - 1] [i_11 - 2]) ? ((((((arr_41 [i_11]) ? var_8 : (arr_1 [i_11])))) ? (arr_21 [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 1] [i_12]) : var_6)) : (arr_48 [i_12])));
            arr_51 [2] [i_12] = ((((max((~723634396), ((0 >> (-123 + 138)))))) ? (((arr_11 [i_11 - 3] [i_11 + 1] [i_11 + 2]) ? (arr_46 [i_11 - 2] [i_11 - 2] [i_11 - 3]) : (arr_46 [i_11 + 1] [i_11 + 2] [i_11 - 2]))) : 65535));
        }
        for (int i_13 = 1; i_13 < 22;i_13 += 1)
        {
            arr_55 [i_11 - 2] [i_13] [i_11 - 2] = var_11;
            arr_56 [i_13] = ((+(max((arr_12 [i_11] [1] [i_13] [i_13]), 1))));
            arr_57 [i_11 + 2] [i_13] = ((~((((arr_6 [i_13] [i_11] [i_13]) || (arr_35 [i_11 - 1] [i_13 - 1]))))));
            arr_58 [i_13] [i_13] [i_13] = (arr_34 [i_11]);
            var_29 = ((((-(arr_41 [i_11 - 3]))) != (arr_35 [i_11 + 2] [i_13])));
        }
        arr_59 [i_11] = ((~((((min((arr_2 [10]), (arr_36 [5])))) ? (arr_40 [i_11 - 3]) : (arr_26 [1])))));
    }
    var_30 = (~var_10);
    #pragma endscop
}
