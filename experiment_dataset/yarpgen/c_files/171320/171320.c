/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_11 = var_10;
                        arr_8 [0] [i_1 - 1] [0] [0] [8] = (min((max((var_7 / 1), (min((arr_0 [i_3 + 2]), var_10)))), ((var_9 ? (min(var_9, 10471391084642398850)) : (arr_0 [i_1])))));
                        var_12 = ((((min(0, var_10))) ? var_1 : 1));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_13 = (((var_7 ? ((var_0 ? (arr_7 [i_1] [14]) : (arr_6 [i_0] [9] [9] [8] [13]))) : ((((arr_3 [i_2]) ? var_3 : var_7))))));
                        var_14 = (((arr_11 [i_4] [i_1] [i_2] [i_0]) ? (arr_1 [i_2]) : (max(((var_6 ? 19 : (arr_3 [i_1]))), var_6))));
                    }

                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        var_15 = (arr_6 [i_1] [i_1] [i_2] [5] [i_1 - 2]);
                        var_16 = (max(var_16, (((((min(0, (max(var_1, (arr_0 [8])))))) ? var_4 : var_1)))));
                        var_17 = ((((((1 ? (arr_11 [i_0] [i_0] [i_2] [i_0]) : 63))) ? ((min((arr_4 [i_0] [i_1] [i_0] [i_0]), 4294967295))) : 18446744073709551615)));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_18 [i_0] [i_2] = ((arr_13 [i_0 + 1]) ? (arr_13 [i_0 - 4]) : (arr_15 [i_0 + 2] [i_0 - 3] [13] [i_0]));
                        var_18 = var_8;
                        arr_19 [i_1] = ((!(arr_11 [i_1] [i_2] [i_1] [i_1])));
                        var_19 = (arr_16 [i_1 - 1] [i_2]);
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_20 &= (!var_3);
                        var_21 = (!((((!var_6) ? var_0 : (arr_4 [i_0] [i_1] [i_2] [i_7])))));
                    }
                }
            }
        }
    }
    var_22 = ((1056964608 ? var_8 : (!var_6)));
    var_23 = (max(var_23, (1623 / var_3)));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            arr_34 [i_8] [i_8] [i_8] [i_8] [i_11] [i_11] = ((!(!var_7)));
                            var_24 = -1;
                            var_25 = ((!(((((((arr_31 [i_8] [i_8] [i_10] [i_11]) ? (arr_26 [i_10] [i_11]) : var_3))) ? (arr_23 [i_8] [i_8]) : (arr_32 [10] [i_10] [i_9] [i_9] [i_8]))))));
                        }
                    }
                }
                var_26 = (((((var_4 * (!var_6)))) ? (((((arr_33 [6] [i_8] [i_8] [i_8]) > (arr_33 [i_8] [i_8] [i_9] [i_9]))))) : (((arr_33 [i_9] [i_8] [i_8] [i_8]) ? (arr_33 [i_8] [i_8] [i_9] [i_9]) : var_9))));
            }
        }
    }
    var_27 = var_3;
    #pragma endscop
}
