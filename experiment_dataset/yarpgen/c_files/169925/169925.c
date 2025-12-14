/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_3] [i_3] [i_1] [i_3] [i_3] = (arr_3 [i_0]);
                            arr_10 [i_0] [i_0] [i_0] [i_2] [i_2] &= ((((-(arr_1 [i_0]))) << (190 - 189)));
                        }
                    }
                }
                arr_11 [i_1] [i_0] = (((arr_5 [i_0]) / var_2));

                for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    var_16 = (((((arr_12 [5] [i_4] [5] [5]) ? (~var_2) : ((27062 ? var_6 : -10846)))) - -12706));
                    arr_15 [i_4] [i_1] [6] [i_4] = 127;
                    arr_16 [i_4] [i_4] = ((((var_5 >> (min(var_13, 12)))) - (((((~(arr_13 [i_1] [i_1]))) & var_4)))));
                }
                for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_22 [i_5] = var_11;
                        arr_23 [i_5] [4] [i_5] [1] [i_1] [i_5] = ((!((max((((var_7 - (arr_14 [i_0] [i_0] [i_0] [4])))), (arr_1 [i_5 - 1]))))));
                        arr_24 [1] [i_1] [i_5] [i_5] = arr_17 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1];
                        arr_25 [i_5] [1] [i_0] [5] [i_5] = ((((((-(arr_2 [i_5]))))) ? (((((arr_21 [i_6] [6] [6] [6]) / var_14)) % (arr_13 [i_5 + 1] [i_5 + 1]))) : ((-(~var_14)))));
                    }
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        arr_28 [i_0] [11] [i_5 + 1] [i_5] = (arr_12 [i_5 + 1] [i_5] [i_5] [i_5]);
                        arr_29 [i_1] [i_1] |= (1295485278585436009 % 10844);
                        arr_30 [i_1] [i_1] &= ((~((~(arr_19 [i_5 + 1] [14])))));
                        arr_31 [i_0] [1] [i_5 - 1] [i_5] [7] [3] = ((+(((arr_12 [i_7 + 1] [i_5] [i_5] [i_7 + 1]) ? (arr_12 [4] [i_5] [i_5] [i_7 + 2]) : (arr_12 [i_7 + 3] [i_5] [i_5] [i_7 + 3])))));
                    }
                    var_17 &= var_12;
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    arr_34 [i_8] [i_1] = (arr_2 [i_8 + 1]);
                    var_18 |= (arr_6 [i_8]);
                }
                arr_35 [i_0] [14] |= ((-(max(var_10, var_14))));

                /* vectorizable */
                for (int i_9 = 2; i_9 < 13;i_9 += 1)
                {
                    arr_38 [i_0] [i_1] [i_0] [i_0] = ((var_0 ? (arr_36 [i_9 + 2] [i_9 + 1] [i_9 - 1] [i_9 - 1]) : var_13));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_43 [12] [i_1] [12] [i_1] [8] |= (((~var_12) ? (((arr_7 [i_0] [i_1] [i_9 - 2] [0]) >> (((arr_1 [i_11]) - 2786229273)))) : (arr_14 [i_0] [i_0] [i_11] [i_10 + 1])));
                                var_19 = var_1;
                            }
                        }
                    }
                    var_20 = (min(var_20, (~var_0)));
                }
            }
        }
    }
    #pragma endscop
}
