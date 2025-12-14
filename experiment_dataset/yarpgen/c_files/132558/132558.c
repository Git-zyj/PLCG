/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((!(((var_9 ? (19423 & var_17) : var_9)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = ((1113099422 >> (-1 + 18)));
        var_19 &= (((arr_1 [10]) ? (arr_1 [0]) : (arr_1 [8])));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] = ((((((1113099430 ? 17 : (arr_6 [i_1]))))) * var_1));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_20 *= ((((((arr_9 [i_1]) / (arr_8 [i_2] [i_1 + 1])))) ? -20706 : ((((var_12 << (((arr_6 [i_2]) + 13770)))) | ((((arr_6 [i_2]) == var_6)))))));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_14 [i_2] [i_1] = ((((max(2925376664, (arr_4 [i_1])))) & ((((((var_15 ? var_2 : 11))) ? ((((arr_12 [i_1]) && 58473))) : 58461)))));

                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    var_21 = (min(var_21, ((max((arr_12 [i_2]), (arr_15 [i_4 - 3] [i_3]))))));
                    var_22 = (max(var_22, (max(48, (((var_12 * var_12) & var_9))))));
                    arr_18 [i_4 - 3] [i_1] [i_1] [i_1] = ((-(var_14 % 13370)));
                }
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    arr_21 [i_1] [i_2] [i_3] [i_5] [i_1] = ((((arr_10 [i_3] [i_2] [i_1]) + 29258)) % (((1033 ? (arr_8 [i_1] [i_5 + 1]) : (arr_6 [i_1])))));

                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        var_23 = (arr_4 [i_1]);
                        var_24 = (arr_22 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]);
                        arr_24 [i_1] [i_1] [7] [i_5] [i_5] [i_5] = (max((max(-28, 4294967276)), (arr_9 [i_3])));
                        arr_25 [i_1] [i_1] [i_1] = 112;
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_25 = ((1054 ? ((((-3010 & 1113099403) ? 97 : 64482))) : 334954517));
                        var_26 = (max(var_26, (((((((arr_9 [i_1]) > var_2))) < (((!(!40)))))))));
                        var_27 *= (((~(max(var_16, var_4)))));
                    }
                    arr_28 [i_1] = ((((!(((var_6 ? var_16 : 588145786))))) ? (arr_6 [i_1]) : ((max(var_7, (arr_5 [i_5] [i_3]))))));
                }
                arr_29 [i_2] [0] [i_2] [i_3] &= (((-(!88))));
                var_28 |= ((((max((((var_10 + 2147483647) >> (var_15 - 40373))), ((var_13 >> (((arr_19 [i_3] [i_3] [6] [i_1]) - 104))))))) ? ((((((arr_13 [i_3] [i_3] [i_1]) || var_11))))) : ((((((arr_11 [i_1] [1] [i_1]) ? 44436 : (arr_5 [i_1] [i_1 - 1])))) ? (var_13 & 4294967295) : (((arr_5 [i_2] [i_3]) ? var_5 : var_4))))));
                var_29 = (min(var_29, var_9));
            }
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                var_30 |= 63;
                var_31 = (((var_2 | var_13) ? ((((arr_6 [i_1]) || var_14))) : ((13380 + (arr_6 [i_1])))));
            }
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            arr_35 [i_1] [i_9] = ((3181867873 << (2925376680 - 2925376662)));

            for (int i_10 = 1; i_10 < 10;i_10 += 1)
            {
                arr_38 [i_9] |= var_2;

                /* vectorizable */
                for (int i_11 = 2; i_11 < 13;i_11 += 1)
                {
                    var_32 = (((((arr_39 [i_1] [i_9] [i_9] [i_11]) - var_10)) % (arr_39 [i_10 - 1] [i_9] [i_11 + 1] [i_1 + 1])));
                    var_33 = (min(var_33, var_14));
                    var_34 |= (((arr_36 [i_11 + 1] [i_1 + 1] [i_1]) >= ((var_17 ? 13370 : (arr_8 [i_11] [i_9])))));
                    arr_41 [i_1] [i_1] [i_9] [i_1] |= (((arr_10 [i_9] [i_9] [i_10 + 3]) ? ((var_14 ? var_17 : 123)) : var_3));
                }
                arr_42 [i_1] = 4294967293;
            }
            for (int i_12 = 1; i_12 < 12;i_12 += 1)
            {
                arr_46 [i_12] [i_9] [i_1] |= ((var_12 > (((!(arr_5 [i_12 + 1] [i_1 - 1]))))));
                arr_47 [i_1] = var_16;
                arr_48 [i_1] [i_1] = 53979;
            }
            for (int i_13 = 1; i_13 < 11;i_13 += 1)
            {
                var_35 = (arr_8 [i_1] [i_1]);
                var_36 = var_9;
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                var_37 = 99;
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_38 = (111 / var_11);
                            var_39 = (arr_26 [i_1] [i_1 + 1] [i_1 + 1] [i_15 - 1] [i_15] [i_16]);
                        }
                    }
                }
            }
            var_40 = (min(var_40, ((max(((var_17 >= (arr_22 [i_1] [i_1 + 1] [i_9] [i_1 - 1] [i_1 + 1] [i_9] [i_9]))), ((!((((arr_20 [4] [i_9] [i_9] [i_1]) ? var_14 : (arr_56 [i_1] [i_1 - 1] [1] [1])))))))))));
        }
    }
    #pragma endscop
}
