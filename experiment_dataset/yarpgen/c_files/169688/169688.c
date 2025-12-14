/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += 1;
    var_12 -= (((((1 ? var_10 : var_1))) ? var_10 : var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_2 [i_0])))) ? (arr_0 [i_0]) : (((-(arr_0 [i_0]))))));
        arr_4 [i_0] = (((((var_3 ? (arr_3 [i_0]) : (arr_0 [5])))) ? -1 : ((26 ? var_10 : var_10))));
        arr_5 [i_0] = var_0;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_14 [i_3] [i_2] [i_2] [i_2] = (((~0) ? 0 : -0));
                arr_15 [i_3] = (arr_12 [i_3] [10] [i_3]);
                arr_16 [i_1] [i_1] [i_2] [i_3] = (((((~(arr_10 [i_1] [i_1])))) ? var_5 : (arr_8 [i_3])));
                arr_17 [i_3] [15] [i_2] [4] = (arr_9 [i_2 + 1] [i_2]);
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
            {
                var_14 = ((arr_7 [i_2 - 1] [1]) > var_10);
                var_15 = (min(var_15, (arr_12 [i_4] [6] [i_1])));
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_16 += (arr_27 [i_2 - 1] [i_5] [i_6 - 1] [i_6 - 1] [i_7 - 1] [i_7]);
                            var_17 = (((arr_29 [i_1] [i_6] [8] [i_1] [i_1]) < 120));
                            arr_30 [i_1] [i_2] [i_6] = ((var_9 + (arr_11 [i_7] [6])));
                        }
                    }
                }
                var_18 *= (!(((-(arr_21 [14])))));
                arr_31 [i_2] [i_2] [7] [i_1] = ((var_6 ? 1 : (arr_25 [i_2 - 1] [i_2] [20] [1] [i_2] [i_2 + 1])));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_37 [8] [i_2] [i_5] [i_9] [4] [i_9] [i_9] = (var_6 != (arr_23 [i_2 - 1] [i_2] [i_2 - 1] [i_2]));
                            arr_38 [i_1] [i_1] [i_1] [i_9] = -11;
                        }
                    }
                }
            }
            arr_39 [i_2] = (((arr_36 [i_1] [1] [i_2] [1] [i_2] [i_1] [i_2 - 1]) ? (((arr_9 [i_1] [i_2]) + (arr_27 [i_2] [i_2] [i_1] [i_1] [i_1] [i_1]))) : -1));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        arr_45 [2] [i_10] [5] [i_2] [i_1] [i_1] = var_6;
                        arr_46 [i_1] [i_2] [i_10] [10] = (((!var_2) ? 4 : (arr_22 [i_2] [15] [i_2 + 1] [i_2])));
                        arr_47 [i_1] [i_2] [i_2] [i_10] [i_11] = (arr_44 [7]);
                    }
                }
            }
            var_19 = 1;
        }
        var_20 = (((arr_9 [i_1] [i_1]) == (arr_9 [i_1] [i_1])));
        arr_48 [11] = arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] [13];
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        var_21 -= ((arr_13 [i_12] [1] [i_12] [8]) ? (((arr_23 [10] [i_12] [19] [i_12]) - 0)) : (((~(arr_21 [i_12])))));
        var_22 = (max(var_22, (((1 ? var_7 : (((arr_7 [1] [i_12]) ? var_2 : var_0)))))));
        var_23 = (min(var_23, (arr_7 [18] [i_12])));
        var_24 = ((+(((arr_18 [i_12] [i_12] [8] [11]) ? var_3 : (arr_35 [i_12] [i_12] [6] [i_12] [i_12] [i_12] [i_12])))));
    }
    #pragma endscop
}
