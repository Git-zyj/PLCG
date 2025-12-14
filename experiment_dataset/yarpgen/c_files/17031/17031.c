/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((var_12 ? (min((var_0 && 78), (-1837 / var_3))) : ((((var_9 ? -2036160950394992011 : 1836))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (arr_1 [i_0] [i_0]);
        var_15 = (max(var_15, 1837));
    }

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_16 = ((~(((!1836) ? var_7 : (min(var_6, var_1))))));
                                arr_19 [i_4] [i_2] [16] [21] [i_2] = var_4;
                                var_17 = (min((arr_12 [i_4] [i_2] [i_3 + 1]), (arr_12 [i_1] [i_2] [i_3 + 1])));
                                arr_20 [0] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (min(((((max((arr_16 [i_1] [i_2] [i_3] [i_1] [i_2] [4]), var_4))) ? 3528229810 : (arr_16 [i_3 + 1] [i_2] [i_2] [i_3 + 1] [i_2] [i_1]))), ((max(1839, ((~(arr_9 [4]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_26 [i_1] [18] [i_2] [i_6] [i_7] = ((((((arr_23 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? (arr_23 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) : var_7))) & ((0 ? (((arr_12 [i_1] [i_2] [i_3]) ? var_11 : (arr_16 [i_1] [i_1] [i_1] [i_1] [i_2] [19]))) : -1839))));
                                arr_27 [13] [i_1] [i_2] [i_2] [13] [i_6] [i_2] = ((((max((arr_16 [i_3 + 1] [i_6] [i_6] [5] [i_2] [i_6]), 115))) ? (((arr_8 [i_3 + 1] [i_3 + 1] [i_3]) ? (arr_8 [i_3 + 1] [i_3 + 1] [i_3]) : -1612477340)) : 0));
                                var_18 = (((~1836) ? (arr_22 [i_1] [i_1] [i_1] [i_6] [i_6] [i_6]) : (((((arr_12 [i_3 + 1] [17] [i_3 + 1]) || 1))))));
                                var_19 = 58049;
                            }
                        }
                    }
                    var_20 = (((((((var_6 ? (arr_10 [i_1]) : var_5))) ? (((~(arr_5 [i_3] [i_2])))) : (arr_21 [i_1] [3] [i_2]))) * (((((arr_24 [i_2]) && 58049))))));

                    for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        var_21 = (((arr_25 [i_3 + 1] [i_8 + 2] [i_8 - 1]) <= ((-(arr_25 [i_3 + 1] [i_8 + 2] [i_8 - 1])))));
                        arr_30 [i_2] [12] [i_3] [i_8] = ((var_10 ? (max((((30081 != (arr_8 [i_1] [i_1] [i_1])))), (max(var_8, 17597941463504814771)))) : 24));
                    }
                    for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_2] = ((var_5 % (arr_8 [i_1] [i_3] [i_9 - 1])));
                        var_22 = 560272293;
                        var_23 = (min(var_23, (((!(((arr_10 [i_9 - 2]) && 0)))))));
                        arr_35 [i_1] [i_2] [i_3] [i_9] [i_1] [i_2] |= (min((((arr_33 [i_1] [i_1] [i_1]) ? ((((arr_10 [i_3]) ? 66 : -1838))) : (~-2546987398096055808))), 9223372036854775807));
                    }
                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_2] [i_1] |= (((((var_12 ? 1831 : 15873968386794955276))) ? (arr_17 [i_1] [i_1] [i_1] [i_2] [i_2] [i_3] [i_10]) : ((8190977817285534170 ? (arr_5 [i_10] [i_3]) : var_0))));
                        var_24 += (!(arr_22 [20] [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 1]));
                    }
                }
            }
        }
        arr_39 [i_1] = (((~(arr_1 [i_1] [i_1]))));
        var_25 = (arr_1 [i_1] [i_1]);
    }
    #pragma endscop
}
