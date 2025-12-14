/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = var_11;
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = (max((+-56671), var_8));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_11 [i_1] [i_1] [i_2] = (min(((((arr_4 [i_1] [i_1]) - (arr_4 [i_1] [i_1])))), (arr_4 [i_1] [i_1])));
            var_14 = (((((187260946 ? -17690 : 4082232445894953489))) ? ((((((arr_1 [i_1]) + var_10)) & (((arr_9 [i_1] [i_1]) ? (arr_8 [i_1] [i_1] [i_1]) : var_10))))) : (((528482304 ? 4294967295 : 1812752426)))));
            arr_12 [i_1] [3] = (arr_10 [10] [i_1]);
            var_15 = ((((!(var_8 >= 2482214870))) ? var_4 : var_10));
            var_16 = min(((-((-(arr_2 [i_1]))))), (arr_5 [i_1]));
        }
        var_17 = ((-696376295 ? 9223372036854775807 : -4082232445894953481));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                arr_18 [i_1] [i_1] = arr_17 [i_1] [i_3] [i_3] [i_1];
                var_18 = (arr_15 [i_4 + 1]);
            }

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_19 = (max(var_19, var_2));

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    arr_24 [i_6] [i_5] [i_1] [6] [i_1] = ((min(114, 2482214894)));
                    var_20 = (min((((((var_6 ? var_1 : (arr_2 [i_6])))) ? (((arr_22 [i_1] [i_5] [i_5] [i_1]) ? (arr_17 [i_1] [i_3] [i_5] [i_6]) : (arr_14 [i_5]))) : (arr_2 [i_3]))), (arr_5 [i_6])));

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_21 = min(-2779, (arr_19 [i_1] [i_5] [i_6]));
                        arr_29 [i_1] [i_1] [9] [i_1] [i_7] = (((-((32768 ? 65535 : -99)))));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_32 [1] [i_3] [i_3] [i_1] [i_8] = (arr_23 [i_1] [i_1]);
                        var_22 = (arr_9 [i_5] [11]);
                        arr_33 [i_3] [i_3] [i_1] = (arr_15 [i_1]);
                    }
                    for (int i_9 = 2; i_9 < 8;i_9 += 1)
                    {
                        var_23 = (((min((arr_0 [i_9 + 2] [i_9 + 1]), (arr_30 [i_3] [i_9 + 3] [i_9] [i_9] [i_9 - 1] [i_9 + 4])))) ? ((-(arr_30 [i_3] [i_9 + 4] [i_9 + 4] [i_9] [i_9 + 2] [i_9 + 4]))) : (-696376276 >= 32768));
                        arr_36 [i_1] [i_1] [i_1] = (arr_26 [i_6] [i_3] [i_3] [i_3] [1] [i_6] [i_5]);
                    }
                    arr_37 [i_1] [i_1] [i_1] [i_6] = 0;
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    arr_42 [i_5] [8] [i_5] [i_1] = (max((-99 + 52451), (((var_11 ? var_2 : (arr_26 [i_10] [i_5] [i_3] [8] [i_3] [i_1] [i_1]))))));
                    var_24 = (arr_26 [i_1] [7] [i_10] [7] [i_3] [i_3] [i_10]);
                    var_25 = ((~((((max((arr_41 [i_1] [i_1] [i_1] [i_1]), (arr_20 [i_10] [i_1] [i_1] [i_1])))) ? (arr_30 [i_1] [4] [i_5] [i_1] [i_1] [i_1]) : (arr_19 [i_3] [i_5] [7])))));
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        arr_48 [i_1] [1] [1] [i_3] [i_1] = (((arr_14 [i_1]) ? var_11 : var_0));
                        var_26 += (max((((!(((var_3 ? var_4 : 1817)))))), (((max(var_8, 9224)) / 99))));
                        var_27 = max((arr_35 [6] [i_11] [i_1] [6] [i_12] [i_3] [6]), ((min(var_0, (arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                        var_28 = (arr_15 [i_3]);
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        var_29 |= (arr_28 [i_1] [i_1] [i_3] [i_3] [i_3] [i_11] [i_13]);
                        var_30 = (max(9224, 1812752426));
                        var_31 = 1;
                        arr_53 [i_1] [i_3] [i_5] [2] [2] [i_3] [i_1] = (arr_8 [i_1] [i_3] [i_5]);
                    }
                    var_32 = ((3300 ? -114 : 96));
                    var_33 = 15735753492013174320;
                    var_34 = (max(var_34, (arr_43 [10] [10])));
                }
                var_35 = (max(var_35, (((((min((arr_27 [i_1] [11] [i_1] [i_1] [9] [9]), -14010))) ? 114 : (arr_52 [i_5] [i_3] [0] [i_5] [i_3] [i_1] [i_5]))))));
            }
            arr_54 [i_1] [i_3] [i_3] = 16099;
            var_36 = ((((((var_2 && var_2) ? ((((arr_19 [i_1] [i_3] [i_1]) && var_10))) : (arr_5 [i_1])))) ? ((0 ? 58 : 36733)) : ((min(0, var_10)))));
        }
    }
    var_37 = var_11;
    #pragma endscop
}
