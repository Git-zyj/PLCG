/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((arr_4 [i_0] [i_0] [i_0]) ? ((-(arr_3 [i_0] [i_0]))) : ((((arr_2 [i_0]) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] &= (((((((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_0] [i_2] [i_0]) : (arr_9 [i_0] [i_1] [i_1] [i_3])))) ? -var_3 : (~var_8)))) ? (((~(arr_1 [i_0])))) : (arr_10 [i_3] [i_3] [i_2 + 1] [i_1])));
                            var_11 *= (((arr_4 [i_0] [12] [i_0]) - var_0));
                            arr_12 [i_1] [i_1] [i_3] [i_1] [i_1] = (arr_4 [i_0] [i_1] [2]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_12 *= ((((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_5] [i_6] [i_6]) ? (((!(arr_20 [i_6] [i_0] [i_0] [i_0])))) : (arr_22 [i_0] [i_6] [i_6] [i_5] [i_4] [i_0] [i_0])))) ? (arr_20 [i_0] [i_1] [i_0] [i_6]) : ((((var_7 * (arr_22 [i_0] [i_1] [i_4] [i_6] [i_6] [i_4] [i_4]))) / (arr_18 [6] [i_1] [i_1] [i_5])))));
                                var_13 = (~-var_3);
                                var_14 = arr_14 [i_0];
                                arr_25 [i_0] [i_5] = ((+(((((((arr_14 [i_0]) / var_0))) && (14772966803367942216 - 18446744073709551615))))));
                                var_15 = ((((((-(arr_6 [i_0] [i_1] [i_0] [i_6]))) / ((-(arr_2 [i_0])))))));
                            }
                        }
                    }
                }
                var_16 *= (arr_10 [3] [i_0] [i_1] [i_1]);
                var_17 = (arr_6 [i_1] [i_1] [i_1] [i_0]);
            }
        }
    }
    var_18 = (((!var_7) ? (min(((var_3 ? var_8 : var_2)), (~53))) : (!var_6)));

    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_19 = ((!(arr_27 [i_7])));

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_20 = (min(var_20, (((((((arr_29 [i_7]) * (arr_28 [i_8])))) ? ((((arr_28 [11]) < (arr_30 [i_8])))) : ((8073143824379628733 ? (arr_29 [i_7]) : 1)))))));

            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                var_21 = var_5;
                var_22 = (arr_30 [i_9]);
            }
        }
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            var_23 = (((!var_3) >> ((((var_0 ? var_2 : (arr_26 [i_7]))) - 52))));
            var_24 = (min(var_24, (arr_30 [i_7])));
        }
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        var_25 = (max(var_25, (((!(arr_27 [i_11]))))));
        arr_39 [10] [i_11] = arr_36 [i_11] [i_11] [i_11];
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    arr_44 [i_13] [i_12] [i_13] = ((((((((arr_36 [i_11] [i_11] [i_11]) ? var_3 : var_2)) * (((((arr_29 [i_11]) >= (arr_36 [i_13] [i_11] [i_11])))))))) ? var_7 : ((-(arr_28 [i_13])))));
                    var_26 = arr_37 [1];
                    arr_45 [i_13] = ((-(arr_43 [i_11] [1] [i_11] [i_11])));
                }
            }
        }
        arr_46 [i_11] = (arr_30 [i_11]);
        var_27 -= (((~var_1) ? ((~((max((arr_43 [i_11] [i_11] [i_11] [i_11]), (arr_27 [i_11])))))) : ((((~(arr_43 [i_11] [i_11] [i_11] [1])))))));
    }
    #pragma endscop
}
