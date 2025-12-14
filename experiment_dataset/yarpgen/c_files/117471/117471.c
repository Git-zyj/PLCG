/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (min(((min((arr_0 [i_0]), (arr_0 [i_0])))), (arr_1 [i_0])));
        var_13 &= ((((var_9 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((min(-1, (min(57845, 7691))))) : (((!(arr_0 [i_0])))));

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            var_14 += (((min((arr_1 [i_1 - 1]), var_7)) != (((255 ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 - 1]))))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_15 = 7691;
                        var_16 -= ((((((((arr_2 [i_3]) ? var_9 : var_3)) - (arr_2 [i_0])))) ? (((arr_7 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_2 + 1]) ? (arr_7 [21] [i_0] [i_1 - 1] [i_1] [i_1 + 1] [i_2 + 3]) : var_11)) : -20216));
                    }
                }
            }
            var_17 = (max(((~(arr_2 [7]))), 7691));
        }
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_18 = ((((((arr_6 [i_4] [6]) ? var_4 : ((max(57845, (arr_12 [i_4]))))))) ? ((-(arr_9 [i_4] [i_4] [13] [i_4]))) : (arr_12 [i_4])));
        arr_13 [8] [i_4] = (!-47);
        var_19 = (max(var_19, (((~(1 / 1))))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    {
                        var_20 &= (((arr_18 [i_7 + 1] [i_7 - 1]) <= (arr_17 [i_7 + 1] [i_6] [7])));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_21 = ((!(((arr_15 [i_5 + 2]) == (arr_7 [i_5 + 3] [4] [i_5 - 1] [i_7 + 1] [i_5 - 1] [i_7 + 1])))));
                            arr_24 [i_7] [i_7] [i_6] [i_5 - 1] [8] [i_7] = (min(((((arr_21 [i_4] [i_7] [i_7] [i_7] [i_8]) ? (var_6 * 1) : (arr_8 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 - 1])))), (((57847 / 1) ? -var_0 : (arr_15 [i_5 + 1])))));
                            var_22 = (arr_16 [i_7]);
                        }
                        var_23 += (((((var_0 + var_7) ? var_0 : var_11))) ? (((var_6 / 61538) ? (((((arr_8 [i_4] [i_4] [i_4] [i_4]) == 24799)))) : (min(var_7, (arr_23 [i_4] [i_4] [i_4] [i_4] [i_4]))))) : ((max(((var_5 ? (arr_19 [i_7] [i_6] [i_4] [i_4]) : 166)), 21))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 8;i_13 += 1)
                        {
                            {
                                var_24 ^= (arr_5 [i_13] [i_10] [i_9]);
                                var_25 |= (arr_35 [i_9] [i_10] [i_11] [i_11] [i_11] [i_11]);
                                var_26 = (arr_18 [i_13] [i_10]);
                            }
                        }
                    }
                    var_27 = (max(((var_0 & (arr_9 [i_9] [i_10] [i_11] [i_11]))), ((((arr_29 [i_11] [i_10] [10]) ? ((min((arr_34 [i_9] [i_10] [i_11]), (arr_14 [i_9])))) : (max((arr_31 [7]), (arr_26 [i_9]))))))));
                }
            }
        }
    }
    var_28 = var_0;
    var_29 = var_2;
    #pragma endscop
}
