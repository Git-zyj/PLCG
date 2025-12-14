/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] [i_0] = min((min(-732977389, 2001930201)), (((arr_2 [i_0]) ? (min(-934245336, var_7)) : (arr_1 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (((arr_10 [i_0] [i_0] [i_2] [i_3] [8] [i_4]) ? (arr_10 [i_4] [i_0] [i_2] [i_1] [i_0] [i_0]) : (arr_10 [9] [i_0] [i_3] [i_2] [i_0] [i_0])));
                                var_18 = ((!((min(var_5, var_15)))));
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_3] [i_0] [i_3] = var_3;
                                arr_15 [i_0] [i_1 + 4] [i_0] = (1805492874 ? -var_5 : (max((arr_3 [i_1 - 1]), (arr_5 [i_0] [i_1 + 3]))));
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] = (866993972 ? var_15 : (max((arr_1 [i_0]), (arr_7 [i_0] [i_2] [10]))));
                            }
                        }
                    }
                    var_19 = min(((934245332 ? -896545435 : -452152692)), (var_6 - var_2));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_20 = (((!(arr_5 [10] [i_5]))) ? (max(262143, (max(2000201249, var_13)))) : ((-(min(var_5, 2115539958)))));
        arr_20 [7] [i_5] = (((~var_15) == (((arr_6 [i_5] [12] [12] [i_5]) ? var_4 : (arr_6 [i_5] [10] [i_5] [i_5])))));
        var_21 = (((arr_17 [i_5]) <= (min((arr_3 [i_5]), (arr_10 [i_5] [8] [i_5] [i_5] [i_5] [i_5])))));
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_24 [i_6] = ((!(((var_1 ? (arr_1 [i_6]) : var_2)))));
        arr_25 [10] [10] |= arr_22 [6];
        arr_26 [i_6] [4] = var_9;

        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            arr_31 [i_6] [i_6] = (arr_22 [i_6]);
            var_22 = ((((((arr_7 [i_6] [i_6] [i_6]) & (arr_21 [i_7])))) || (((var_6 ? var_7 : -2147483642)))));
            var_23 = var_9;
        }
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_24 &= ((((((((arr_32 [i_8]) && var_13))) >> (((arr_12 [i_8] [i_8] [i_8]) - 786275330)))) >= ((((arr_6 [i_8] [8] [i_8] [i_8]) ? (arr_13 [i_8] [i_8]) : -1634228986)))));
        arr_35 [i_8] = ((max((max((arr_7 [2] [i_8] [i_8]), (arr_12 [i_8] [i_8] [2]))), (arr_9 [i_8] [i_8]))) ^ (arr_3 [i_8]));
    }
    var_25 = var_5;
    #pragma endscop
}
