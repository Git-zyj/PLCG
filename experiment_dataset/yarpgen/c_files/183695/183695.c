/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((var_9 ? var_11 : ((-(85 + var_13))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_16 = (arr_1 [i_0]);
        var_17 = (min(var_17, (arr_1 [i_0])));
        var_18 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_19 &= 7790012700751846735;
            var_20 -= (var_1 ? (arr_6 [i_1] [i_2 + 1] [i_2 + 1]) : (arr_7 [i_2 - 1] [i_2 + 1]));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                {
                    var_21 = (max(var_21, (((((arr_5 [10] [i_3]) & (arr_10 [16] [22] [i_3] [i_1])))))));
                    var_22 = (((((var_8 ? var_2 : 85))) ? 558511208 : (arr_11 [i_4 - 1] [i_4] [i_4 + 1])));

                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        arr_15 [i_4] [i_3] [i_1] [i_5] = (arr_6 [i_4] [i_4 + 1] [i_5 + 3]);
                        var_23 = ((~((var_8 ? (arr_14 [3] [i_4] [i_4] [i_3] [i_4] [i_1]) : (arr_3 [i_4])))));

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_24 += (arr_17 [i_4 + 1] [i_4 - 1] [i_1]);
                            arr_18 [i_1] [i_5] [i_4] [i_5] [i_6] [i_4] [i_6] = ((0 && (((248 ? 134201344 : 171)))));
                            arr_19 [i_4] = (((arr_16 [i_4] [i_4] [i_4 + 1] [i_4 - 1] [i_5 - 2]) ? (arr_16 [i_1] [i_3] [i_4 + 1] [i_4 - 1] [i_5 - 2]) : (arr_16 [19] [i_4] [i_4 + 1] [i_4 - 1] [i_5 - 2])));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_25 = (max(var_25, (var_9 + var_8)));
                            var_26 = (max(var_26, (arr_14 [i_7] [i_7] [i_3] [i_3] [i_7] [i_1])));
                            var_27 |= (((((8 != (arr_9 [i_5]))))) & ((-558511208 ? (arr_3 [20]) : 4398046511103)));
                        }
                    }
                    var_28 = (var_8 - var_11);
                    var_29 -= 0;
                }
            }
        }
    }
    var_30 = ((((max((((var_9 ? var_10 : var_7))), var_8))) ? 1907149503 : var_5));

    /* vectorizable */
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {
        var_31 -= ((var_9 ? (arr_17 [10] [i_8] [8]) : (arr_21 [8] [i_8] [i_8] [i_8])));
        var_32 = (max(var_32, (arr_16 [i_8] [i_8] [i_8] [i_8] [i_8])));

        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            arr_30 [i_9] &= (var_7 - var_6);
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 13;i_11 += 1)
                {
                    {
                        var_33 = ((~(arr_21 [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1])));

                        for (int i_12 = 3; i_12 < 12;i_12 += 1)
                        {
                            var_34 = (((288225978105200640 * -1646101136533699132) <= (arr_16 [i_11 + 2] [i_11 - 1] [i_11] [i_12 - 2] [i_11])));
                            var_35 = ((((!(arr_6 [i_8] [19] [11]))) && (!var_7)));
                            var_36 = (((arr_14 [i_10] [i_8] [i_10] [17] [i_10] [i_10]) >= var_8));
                            var_37 |= ((248 | (arr_10 [i_9] [i_11 - 2] [i_9] [i_9])));
                        }
                        var_38 = var_12;
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
    {
        var_39 = (min((arr_27 [i_13] [i_13] [i_13]), (((var_1 ? -993481346 : 49152)))));
        var_40 = (max(var_40, (((!(((((max((arr_25 [i_13] [i_13]), 85))) ? (-2147483647 - 1) : (min((-9223372036854775807 - 1), -1907149529))))))))));

        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            var_41 = (min(var_41, (max((min(-15298352480411838503, var_13)), (((var_5 >= (var_13 == var_13))))))));
            arr_44 [4] |= (min((max(((((-2147483647 - 1) | (arr_41 [12] [12])))), ((var_8 ? 3197522985 : (arr_11 [i_13] [20] [22]))))), (arr_4 [i_13])));
        }
    }
    #pragma endscop
}
