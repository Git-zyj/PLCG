/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 -= var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, var_4));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_15 = var_1;
                        var_16 = var_6;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_17 = ((((((23232 ? (arr_0 [11]) : -7372332148881078223)) + (arr_5 [6] [i_0]))) & 536608768));
                        var_18 = (((var_7 ? var_4 : (arr_9 [i_2 - 2] [8] [i_2 - 3] [i_2]))) + var_9);
                        var_19 ^= (!var_9);
                        var_20 = ((((253 ? 41 : 1889227490))));
                        var_21 = (min(-7372332148881078222, var_3));
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_22 += (max((max(var_8, (min(var_4, var_2)))), (((((var_2 ? var_9 : var_1)) >= var_8)))));

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_23 = (arr_2 [i_0]);
                            arr_14 [i_0] [0] [i_2] [i_5] [i_6] = (((max(var_6, var_3))));
                            var_24 ^= var_5;
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_25 = var_8;
                            arr_17 [i_0] [9] [i_2] [i_0] [1] = (((-(arr_7 [i_1] [i_2 - 3] [i_2 + 1] [i_7]))));
                            var_26 = (max(var_26, var_5));
                            var_27 += (((arr_10 [i_7] [i_5] [i_2] [1]) ? (((~0) ? (min((arr_1 [i_0] [i_1]), 0)) : ((max((arr_0 [i_1]), (arr_6 [i_7])))))) : var_4));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_28 = (((arr_15 [7] [i_0] [i_1] [i_2] [i_5] [i_8]) ? 15532512713768077156 : (arr_13 [i_0] [i_1] [i_2] [i_5] [9])));
                            var_29 = var_10;
                            var_30 ^= ((((var_4 ? var_11 : (arr_7 [i_8] [0] [i_0] [i_0]))) * ((((arr_10 [i_2] [i_2] [i_2] [i_2]) ? (arr_16 [i_8]) : (arr_20 [i_0] [i_0] [i_1] [i_2] [i_1] [i_5] [1]))))));
                        }
                        for (int i_9 = 2; i_9 < 10;i_9 += 1)
                        {
                            var_31 |= (((((18278465000654262964 ? ((max((arr_0 [i_1]), (arr_21 [9] [6] [i_5])))) : (arr_19 [i_0] [5] [5] [i_0] [5])))) ? (((min(var_2, -7372332148881078211)))) : (min(-7372332148881078233, -46))));
                            var_32 ^= ((!(((((max((arr_9 [i_1] [i_2] [i_5] [i_9]), var_7))) ? (arr_6 [5]) : var_0)))));
                        }
                        var_33 ^= var_11;
                    }
                    arr_24 [i_0] [2] [10] = ((-(max((arr_16 [i_0]), ((var_8 - (arr_9 [i_0] [i_0] [i_2] [i_1])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            {

                for (int i_12 = 1; i_12 < 8;i_12 += 1)
                {
                    arr_35 [i_10] [i_12] [i_12] = var_5;
                    var_34 = (min(var_34, (-248192046 - 603048691)));
                }
                for (int i_13 = 1; i_13 < 11;i_13 += 1)
                {
                    var_35 -= (((((6431406702331664105 ? (arr_7 [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13]) : var_7))) ? (((0 && (arr_7 [i_13 + 1] [i_13 + 1] [i_13] [4])))) : ((((arr_7 [i_13 + 1] [i_13 - 1] [5] [10]) > var_1)))));
                    var_36 = (((~1) - (min((arr_9 [i_10] [i_10] [5] [i_10]), var_8))));
                    var_37 = ((((((arr_7 [i_13] [i_13] [i_13 + 1] [i_13]) ? 7372332148881078233 : (arr_4 [8])))) ? ((-(arr_4 [1]))) : ((max((arr_4 [8]), 0)))));
                }
                arr_39 [i_10] = (arr_12 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
                var_38 = (max(var_38, var_10));
            }
        }
    }
    #pragma endscop
}
