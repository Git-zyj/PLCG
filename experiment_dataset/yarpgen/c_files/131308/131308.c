/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_2 + (((var_6 <= (((max(77, var_12))))))))))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_18 = 9223372036854775807;
        var_19 = (min(((((-81 && -77) && 6651272556659630301))), (max((min(var_3, (arr_0 [i_0 - 2]))), 77))));
        var_20 = (min(((max((arr_3 [i_0 - 2] [i_0 + 2]), (((var_13 >= (arr_2 [i_0 + 2]))))))), (((var_13 & 1386078476) | (arr_2 [i_0 - 2])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = (((((-77 * (((!(arr_3 [i_1] [21]))))))) <= (!var_14)));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_22 = (min(var_22, ((((arr_1 [i_4] [i_4]) ^ (~var_14))))));
                            arr_17 [i_1] [i_5] [i_1] [i_4] [i_5] = ((-((var_12 ? 23986 : var_3))));
                            arr_18 [i_1] [i_2 + 2] [i_2 + 2] [i_4] [i_1] = (((((var_5 ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : 77))) / var_3));
                            var_23 ^= ((((((arr_8 [i_3] [i_3]) & 134))) ? (arr_2 [i_1]) : ((var_15 ? var_3 : var_0))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            arr_23 [i_3] [4] [i_3] [i_4] [i_6 + 1] &= (((var_9 == 9223372036854775787) - var_2));
                            var_24 &= (((arr_6 [i_6 + 1]) || var_11));
                        }
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            arr_26 [i_3] [i_3] [i_3 - 2] [i_3 - 1] [i_3] [i_1] = var_5;
                            arr_27 [i_1] [i_2] [i_1] = (((((var_11 ? (arr_14 [1] [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1]) : 63))) ? 12 : 1));
                            var_25 = (max(var_25, (((-(arr_6 [i_1]))))));
                            arr_28 [i_1] [i_1] [0] [i_1] [1] [i_4] [i_7] = (!((max(23986, (7202054016723591193 | var_8)))));
                        }
                        var_26 = (((!1) << ((((min(23753, ((max((arr_15 [i_1] [i_2 + 1] [i_3 + 2] [i_4] [i_2]), (arr_5 [i_4]))))))) - 207))));
                        var_27 *= (((arr_11 [i_1] [i_3] [i_3 - 4] [i_2]) >> (arr_11 [i_3] [i_3] [i_3 + 2] [i_4])));
                    }
                }
            }
        }

        for (int i_8 = 3; i_8 < 8;i_8 += 1)
        {
            var_28 = (var_6 > (((((max(var_15, 0))) | var_7))));
            var_29 *= ((((max((10249420669598760793 || var_1), (min(var_7, 1))))) & var_8));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_33 [i_1] [i_1] [i_9] = ((((var_9 ? (var_10 & var_13) : var_7)) != (((arr_15 [i_1] [i_1] [i_1] [i_9] [i_1]) ? (min(var_5, var_10)) : ((((arr_32 [i_9]) ? 41549 : (arr_24 [i_1] [i_9] [i_1] [i_1] [i_1] [1]))))))));

            for (int i_10 = 3; i_10 < 9;i_10 += 1)
            {
                arr_37 [i_1] = var_2;
                var_30 = (min(var_30, ((((((1 ? (arr_11 [i_10 - 2] [8] [8] [i_1]) : (arr_13 [i_10 + 1] [i_10] [i_10 - 3] [i_1])))) ? (arr_11 [i_10 - 3] [1] [1] [i_9]) : (((max((arr_25 [8] [i_10 - 2] [i_10]), (arr_25 [i_10 - 3] [i_10 - 2] [i_1]))))))))));
            }
            /* vectorizable */
            for (int i_11 = 4; i_11 < 8;i_11 += 1)
            {
                arr_42 [7] [i_1] [i_11 - 3] = ((((arr_13 [i_1] [5] [i_1] [i_1]) ? 1103625965 : (arr_0 [i_1]))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_31 = (((arr_12 [i_1] [i_1] [i_1] [i_1]) || (arr_30 [i_1])));
                            arr_49 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((var_1 ? var_3 : (arr_36 [i_9] [i_9] [i_11]))) >= var_9));
                            var_32 = (max(var_32, ((((arr_39 [i_11 - 2] [i_11 - 1] [i_13] [i_11 - 1]) ? (!var_16) : (arr_29 [i_11 - 1]))))));
                        }
                    }
                }
            }
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                var_33 ^= (((min(var_6, 8637996536555942176))));
                var_34 = (min(var_34, ((((arr_24 [i_1] [i_1] [i_1] [i_14] [i_1] [i_1]) ? (min((((18446744073709551608 ? 49 : (arr_25 [i_1] [i_9] [i_9])))), (((arr_40 [i_1]) + 9808747537153609447)))) : ((((((0 == (arr_15 [i_1] [i_9] [1] [i_14] [i_14]))) || (((var_8 >> (((arr_4 [i_1] [i_1]) - 10722804809234562894))))))))))))));

                for (int i_15 = 3; i_15 < 8;i_15 += 1)
                {
                    arr_56 [i_1] [i_1] = (arr_11 [3] [i_1] [i_15] [i_15 + 2]);
                    var_35 = (min(var_35, ((!(((var_4 <= (arr_3 [3] [i_14]))))))));
                }
            }
            var_36 = (max(1, (((max((arr_32 [i_1]), var_15))))));
        }
    }
    #pragma endscop
}
