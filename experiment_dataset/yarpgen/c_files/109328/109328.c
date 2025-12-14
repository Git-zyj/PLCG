/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (!var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_18 = ((1897850586 >= (max(-1, -1))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_19 = (((arr_11 [11] [i_1]) ? var_8 : (arr_11 [i_1] [1])));
                        arr_12 [i_0] [i_1] [i_0] [i_0] = ((((var_14 ? (arr_8 [i_0] [i_2] [i_1] [i_0]) : var_11)) / var_1));
                        var_20 = (arr_6 [i_1] [i_0]);
                        arr_13 [i_0] [i_1] [i_2] = var_1;
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        var_21 += (arr_4 [i_2] [i_0]);
                        arr_16 [i_0] [i_2] [i_1] [i_0] = (var_12 - var_8);
                        arr_17 [2] [i_0] = var_16;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_21 [i_5] [i_5] [15] [i_0] [i_0] [1] = ((12368 << (-2238924071231743233 + 2238924071231743243)));
                        var_22 = (max(var_22, ((var_16 + (arr_2 [i_0] [i_1])))));
                        var_23 = ((var_0 <= (((arr_3 [12]) ? (arr_14 [i_0] [i_1] [i_2] [i_5] [i_5] [i_5]) : (arr_18 [i_5] [6] [7] [i_0])))));
                        arr_22 [i_2] [i_2] [i_0] [11] = ((~(arr_3 [i_1])));
                    }
                }
                var_24 = (((min(var_1, (~var_2)))) ? ((1 ? -4214094336362475357 : 31)) : (arr_8 [i_0] [i_1] [13] [6]));
                arr_23 [i_1] [i_0] [i_1] = (arr_0 [i_0]);
            }
        }
    }

    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_25 = (min(var_25, (((!(var_12 + var_0))))));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
        {
            arr_29 [i_6] [i_6] [i_6] = (((arr_24 [i_7]) / (((var_0 ? var_3 : (arr_27 [i_7]))))));
            arr_30 [i_6] [i_7] [i_6] = var_11;
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
        {
            var_26 = (((44 > 81) ? (((arr_28 [i_6] [i_6]) ? (arr_28 [i_6] [i_8]) : (arr_28 [i_6] [i_6]))) : ((~(arr_28 [i_6] [i_6])))));
            arr_33 [i_6] = var_12;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
        {
            var_27 = var_10;
            var_28 = (((((var_6 ? (arr_24 [6]) : var_3))) ? (arr_28 [i_6] [i_6]) : (arr_25 [i_9])));
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
        {
            var_29 = (arr_26 [i_6]);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    {
                        var_30 -= var_7;
                        arr_43 [10] [i_6] [5] [i_11] [5] = var_5;
                    }
                }
            }
            var_31 = ((var_10 != (arr_28 [i_10] [1])));
        }
    }
    var_32 = (max(var_15, var_1));
    #pragma endscop
}
