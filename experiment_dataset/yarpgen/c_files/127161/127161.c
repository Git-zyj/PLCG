/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_2)) - (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_4 [i_0] [i_0] = (max((arr_1 [i_0]), (((((arr_1 [i_0]) == var_9)) ? ((((arr_1 [i_0]) ? (arr_2 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0] [i_0 - 1])))) : ((var_6 ? var_7 : var_1))))));
        arr_5 [i_0] = var_7;
        arr_6 [i_0] = ((((max((((arr_1 [i_0]) ? var_1 : var_0)), (arr_0 [i_0] [i_0 - 1])))) ? (((!((max(var_7, 17055095340284082155)))))) : (arr_1 [i_0])));
    }

    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_10 = 36546;
            arr_13 [i_1] [i_1] = (max(var_3, (arr_2 [i_1] [i_2])));
        }
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            arr_17 [i_1] [i_3 + 4] [i_1] = (arr_2 [i_3] [i_3 - 1]);

            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                arr_20 [i_1] = ((var_2 / ((+(((arr_1 [i_1]) / (arr_7 [i_4] [i_3])))))));
                var_11 = (min(var_11, ((max((~-1909556917751376942), ((min(var_3, var_1))))))));
            }
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                arr_24 [i_1] = (((((~(((arr_18 [i_5] [i_1] [i_1] [i_1 - 1]) ? var_7 : var_2))))) <= var_0));
                var_12 = (max((((arr_15 [i_1] [i_1]) ? (arr_15 [i_1] [i_1]) : (arr_15 [i_1] [i_1]))), (((!(arr_0 [i_1] [i_5 - 1]))))));
            }
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        var_13 = (max(1, 2286));
                        var_14 = (min(var_14, (((((arr_25 [i_7] [i_7 - 1]) ? ((var_5 ? (arr_22 [2] [i_6] [i_1 - 1] [2]) : var_9)) : var_7))))));
                        arr_29 [i_1] [i_1] [i_1 - 1] [i_1] = (max(0, ((max(1, 0)))));
                    }
                }
            }
        }
        var_15 += (((arr_25 [i_1 - 1] [i_1 - 1]) ? var_3 : (min(var_7, (min(var_0, (arr_18 [i_1] [12] [i_1 + 2] [12])))))));

        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {

            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {
                arr_36 [i_1] [i_1] [i_1] = ((((var_0 & (arr_8 [i_1]))) | ((((!((((arr_23 [i_1] [i_8] [i_1]) & (arr_12 [i_1] [i_1] [i_9]))))))))));
                arr_37 [i_1] = (arr_10 [i_1] [i_1]);
                var_16 = var_5;
            }
            var_17 = (((arr_16 [i_1] [i_8] [i_8 - 1]) != (((arr_32 [i_1 - 1] [i_1]) ? (arr_32 [i_1 + 2] [i_1]) : var_8))));
            arr_38 [i_1] [i_1] = var_7;
            var_18 = (max((247 || 63275), var_9));
            var_19 += var_6;
        }
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            var_20 = (((var_3 || (~var_8))));
            var_21 = (max((arr_28 [i_1 - 1] [i_10 + 1] [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_1]), ((max((arr_28 [i_1 + 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 2] [i_1]), var_3)))));
        }
        arr_42 [i_1] = (min((~var_9), (arr_23 [i_1] [i_1 - 1] [i_1])));
    }
    for (int i_11 = 3; i_11 < 14;i_11 += 1)
    {
        arr_45 [i_11] = ((~(max(169, (((var_3 + 2147483647) << (var_7 - 2777549081641269258)))))));
        arr_46 [i_11] = (((arr_44 [i_11]) + (((min((arr_0 [10] [i_11 - 3]), var_3))))));
        arr_47 [i_11 - 3] [i_11] = ((((((!var_5) ? var_6 : (((arr_43 [i_11 - 2] [i_11 - 2]) ? var_3 : var_1))))) ? (arr_0 [6] [6]) : (((arr_2 [i_11] [i_11 + 1]) ? (((max(var_4, var_8)))) : ((var_8 & (arr_44 [i_11])))))));
        arr_48 [i_11] [i_11] = (((max((max(var_5, 1)), ((max(var_4, (arr_0 [22] [22]))))))) ? ((-(((arr_1 [18]) ? (arr_43 [i_11] [i_11]) : (arr_43 [i_11] [i_11]))))) : (((6036264319621728758 - 1) - (((-(arr_0 [6] [i_11])))))));
    }
    #pragma endscop
}
