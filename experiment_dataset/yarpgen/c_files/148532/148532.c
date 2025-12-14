/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_4));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = 46;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = ((~(((arr_7 [i_4] [i_0]) ? (max((arr_11 [10]), var_7)) : (arr_7 [i_0] [i_3])))));
                                arr_12 [2] [i_1 + 3] [i_1] [i_3] [2] [i_4] = 16690058528575781239;
                                var_15 = (max(((((min(var_7, var_2)) >= ((((arr_4 [i_0] [i_0] [i_0]) >> (((arr_6 [i_0] [i_2] [i_3] [i_4]) - 4925)))))))), ((~((var_4 ? 4167040439 : 0))))));
                            }
                        }
                    }
                    var_16 = (arr_9 [i_0] [i_1 - 1] [i_1] [i_2] [i_2 + 1]);
                    var_17 &= (var_1 ? (((arr_9 [i_0] [i_1 + 2] [i_0] [i_2] [i_2]) ? (var_7 * 0) : (125 + var_3))) : ((max((((!(arr_8 [i_0])))), ((124 >> (var_6 - 15885)))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        arr_21 [i_6] [i_5] [i_5] [i_7] = (max(124, (((arr_17 [18] [i_6 - 1] [i_6] [18]) ? (arr_17 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (arr_17 [i_6 - 1] [i_6 - 1] [i_6] [i_6])))));
                        var_18 = (min(var_18, (((((!(arr_14 [i_0] [i_6 + 1] [i_0]))) ? (((((min(var_1, -98)) <= ((123 ? 120 : -1)))))) : (~3125824845))))));
                        var_19 = 4109293926;
                        arr_22 [i_0] [i_0] [i_0] [i_5] [21] [i_0] = (arr_7 [i_6 - 1] [7]);
                        var_20 -= ((254 ? -8219092771342834538 : 65522));
                    }
                }
            }
        }
        arr_23 [i_0] = (arr_1 [i_0]);
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_27 [i_8] = ((~var_8) >= (((!(arr_7 [i_8] [i_8])))));
        var_21 = (((((var_9 >> (((arr_26 [8]) - 202))))) ? ((-((min(var_3, -9))))) : ((~(arr_6 [i_8] [17] [i_8] [i_8])))));
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_22 = (arr_6 [i_12] [i_11] [i_10] [i_9]);
                                arr_46 [i_9] [i_10] [i_9] [i_9] = ((!(((15952 ? (arr_26 [i_12]) : var_0)))));
                                arr_47 [i_9] [i_10] [i_11] [i_12] [i_13] = ((((arr_25 [i_11] [i_12]) ? (arr_25 [8] [8]) : (arr_25 [i_9] [i_10]))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        arr_51 [i_11] [i_11] [9] [i_14] [i_10] = var_3;
                        var_23 = (59247 == 1627280711);
                        var_24 -= (arr_41 [0] [i_10] [i_11] [i_11]);
                        arr_52 [i_10] = ((((27857 ? (arr_48 [i_9] [i_10] [i_11] [i_10]) : var_9)) + var_9));
                        var_25 ^= var_5;
                    }

                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        var_26 = (min((!2442914869), var_4));
                        var_27 = ((((((arr_30 [i_15] [i_11]) ? var_6 : (arr_30 [i_9] [i_9])))) ? (((arr_30 [i_9] [i_10]) ? (arr_49 [i_9] [i_9] [6] [i_10]) : (arr_30 [i_9] [i_10]))) : 1203266263));
                    }
                }
            }
        }
    }
    var_28 = var_1;
    #pragma endscop
}
