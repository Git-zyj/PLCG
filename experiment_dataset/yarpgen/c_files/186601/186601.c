/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((~((0 ? var_0 : var_7)))) == var_10));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (0 || var_10);
            arr_6 [i_0] [i_0] &= (((!24) ? (arr_0 [i_1 + 1]) : ((((251 || ((min(var_0, (arr_1 [i_1 - 1]))))))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_12 = (min(var_12, var_7));
                var_13 = (((-112 || 4294967295) || (arr_8 [i_0] [i_1 - 1] [i_2])));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                var_14 &= ((18446744073709551603 ? var_3 : ((~(arr_13 [i_0] [i_0])))));
                arr_14 [i_0] [i_3] = var_0;
                arr_15 [i_0] [i_3] = var_6;
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_21 [i_0] [i_4] [i_4] [i_5] = (min((arr_7 [i_0]), ((((arr_13 [i_0] [i_1]) < ((var_4 ? (arr_11 [i_0] [17] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [2]))))))));

                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        var_15 |= (8861495269457360189 | 198);
                        var_16 = (min(var_16, (((183 ? -10668834946312090 : 14)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_1 - 1] [i_4] [i_1 - 1] [i_4] [i_7] = var_2;
                        arr_29 [i_0] [i_0] [i_0] = (4294967267 % 1);
                    }
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    var_17 = arr_0 [i_1 + 1];

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_18 = (min(var_18, ((((arr_36 [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1]) || var_7)))));
                        var_19 = ((arr_17 [i_1 - 1] [i_8 - 1]) ? (arr_17 [i_1 - 1] [i_8 + 1]) : var_1);
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        var_20 = (min(var_20, (arr_33 [i_0] [i_8] [i_8 - 1] [i_10])));
                        arr_40 [i_0] [13] [i_0] [i_0] [i_0] [i_0] = (arr_36 [22] [i_1] [i_4] [i_8] [10]);
                    }
                    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        var_21 += (((arr_41 [i_0] [17] [i_4] [i_8] [i_11]) ? (arr_42 [i_1 - 1] [i_1] [i_4] [i_8] [i_8 - 1]) : ((((arr_18 [i_0] [i_0] [i_0] [i_0]) || 6868)))));
                        var_22 = (((arr_30 [i_1 - 1] [i_1 + 1]) ? (arr_30 [i_1 - 1] [i_1 - 1]) : 1));
                    }
                    arr_45 [i_8 + 1] [i_8] [i_8] [i_8 - 1] [i_8] = (((arr_30 [i_1 - 1] [19]) || (arr_36 [i_1 + 1] [i_8] [i_8 - 1] [i_8] [i_8 + 1])));

                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        arr_49 [i_0] [9] [i_12] [i_0] [i_0] = (var_6 ? ((4294967273 ? var_3 : var_5)) : (arr_16 [19] [i_1 + 1]));
                        var_23 = (max(var_23, var_0));
                    }
                }
                var_24 = ((((-2147483645 ? 2 : (((arr_22 [1] [i_1 + 1] [i_1] [i_1] [i_1]) ? var_6 : var_1)))) % (arr_31 [i_1])));
                var_25 &= ((((min((arr_2 [i_1 + 1]), (arr_2 [i_1 - 1])))) == (((var_9 || (((14 ? (arr_47 [i_0] [i_0] [i_0] [i_4] [6]) : (arr_8 [i_0] [i_0] [i_0])))))))));
            }
        }
        arr_50 [i_0] [i_0] = ((((arr_43 [i_0] [i_0] [i_0] [i_0] [i_0]) || var_6)) ? (-9223372036854775807 - 1) : (arr_38 [i_0] [i_0] [i_0] [i_0] [i_0]));
    }
    #pragma endscop
}
