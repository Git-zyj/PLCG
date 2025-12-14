/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((var_15 ? (arr_1 [i_0]) : (arr_0 [i_0 + 2] [i_0 + 2]))))) ? (max((~var_0), (max((arr_1 [i_0]), (arr_1 [i_0]))))) : (arr_1 [i_0])));
        arr_3 [i_0] = ((arr_0 [i_0 - 1] [i_0 - 1]) ? var_0 : (arr_0 [1] [i_0]));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_17 -= (min(var_5, ((max((arr_6 [i_1 + 3] [i_1 - 2]), var_16)))));

        for (int i_2 = 4; i_2 < 20;i_2 += 1)
        {
            var_18 = ((69 ? 1914 : -8));
            arr_11 [i_1] [i_1] [i_1] = ((min((arr_4 [21] [i_2 - 2]), ((var_2 ? var_8 : (arr_0 [i_1 + 2] [i_2]))))));

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_14 [6] [19] [i_3] [i_2] = ((var_10 ? var_2 : var_13));
                arr_15 [i_3] [i_2 - 4] &= (~var_12);
                var_19 -= -var_5;
            }
        }
    }

    for (int i_4 = 3; i_4 < 9;i_4 += 1)
    {
        var_20 += var_4;
        arr_20 [9] [7] = var_8;
        arr_21 [i_4 - 3] = (arr_12 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1]);
    }
    var_21 ^= ((((max(var_14, (max(2340557471230455657, 65530))))) ? (((!var_7) ? var_14 : ((var_4 ? var_15 : var_0)))) : (max(var_14, var_14))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                var_22 = (max(var_22, (((((!(arr_1 [i_6]))) ? (max(var_2, (((arr_24 [i_6] [9]) ? (arr_0 [i_5] [17]) : (arr_13 [i_5] [i_5]))))) : (min(((~(arr_0 [17] [i_6]))), var_12)))))));
                var_23 = (max(var_23, (arr_4 [i_6] [i_6])));
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_24 = ((-1590848592 ? (max(((var_5 ? (arr_7 [i_5] [i_5]) : var_14)), (min((arr_25 [4] [i_5] [10]), (arr_4 [21] [i_8]))))) : (max(((var_6 ? var_15 : (arr_31 [i_8] [i_5] [i_5] [i_5] [i_5]))), ((max((arr_23 [i_5]), var_16)))))));

                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 15;i_9 += 1)
                            {
                                arr_36 [i_5] [i_5] [10] [i_5] [10] = (((arr_28 [i_5] [i_6] [2] [i_6]) ? var_8 : 30));
                                var_25 = (!var_16);
                                arr_37 [i_6] [i_6] [i_5] [i_6] [i_6] = (((arr_9 [i_5]) ? (arr_23 [i_8]) : var_4));
                            }
                            var_26 = ((-(arr_0 [i_5] [13])));
                        }
                    }
                }

                for (int i_10 = 4; i_10 < 12;i_10 += 1)
                {

                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        var_27 = (min(var_27, (arr_32 [i_6] [i_6] [i_6] [9])));
                        var_28 = var_14;

                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_29 = (arr_45 [14] [i_11 + 3] [14] [2]);
                            var_30 *= var_7;
                            var_31 = var_0;
                            var_32 = (arr_45 [1] [14] [i_10] [12]);
                        }
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        var_33 &= var_10;
                        var_34 -= ((!(((var_13 ? var_8 : var_12)))));
                    }
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 14;i_14 += 1)
                    {
                        var_35 = (min(var_35, ((var_11 ? ((var_12 ? var_9 : (arr_5 [i_10] [4]))) : (arr_9 [i_10 + 3])))));
                        var_36 = (arr_25 [3] [i_5] [13]);
                    }
                    var_37 = var_12;
                }
            }
        }
    }
    #pragma endscop
}
