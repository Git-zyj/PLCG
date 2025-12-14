/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_1] [i_0] = (arr_4 [i_1]);
                        var_11 ^= (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_12 ^= 1119973638;
                    }
                }
            }
        }
        var_13 += (arr_2 [i_0 - 3] [i_0 + 1] [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_21 [i_7] [i_7] = (!0);
                                arr_22 [i_7] [i_5] [i_6] [i_6] [i_8] = (((arr_18 [i_7] [i_7 + 1] [i_6 + 1] [i_4] [i_7]) ? ((-8919212409422436369 ? (arr_7 [i_4] [i_4] [i_6] [i_6] [i_4] [i_4]) : (arr_0 [i_6]))) : (-8919212409422436369 ^ 13954698394533096085)));
                                var_14 = -8919212409422436374;
                            }
                        }
                    }
                    var_15 *= (((arr_19 [i_6] [i_4]) || (arr_19 [i_5] [i_5])));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_16 = (max(var_16, (((!(arr_17 [i_6] [i_6 + 1] [i_5] [i_6 + 3]))))));
                                var_17 = 12968237264392694881;
                            }
                        }
                    }
                }
            }
        }
        var_18 = ((arr_4 [i_4]) ? (arr_4 [i_4]) : (arr_12 [i_4] [i_4] [i_4]));
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                {
                    var_19 = (max(var_19, (((((~(arr_5 [i_13] [i_12]))) <= (arr_33 [i_11] [i_12] [i_13]))))));
                    arr_35 [i_11] [i_11] [i_11] [i_11] = (arr_31 [i_12] [i_12] [i_12]);
                }
            }
        }

        /* vectorizable */
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            var_20 = ((var_7 ? -1119973638 : (arr_6 [i_11] [i_11] [i_11] [i_11] [i_11])));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 11;i_16 += 1)
                {
                    for (int i_17 = 4; i_17 < 13;i_17 += 1)
                    {
                        {
                            arr_49 [i_11] [i_11] [i_11] [i_11] [i_11] [i_17] [i_14] = (arr_42 [i_15] [i_11] [i_15] [i_11]);
                            var_21 = (max(var_21, ((((arr_23 [i_14] [i_17 + 1] [i_17 + 1] [i_14] [i_17 + 1]) <= (arr_23 [i_11] [i_17 - 2] [i_11] [i_11] [i_17]))))));
                        }
                    }
                }
            }
            var_22 -= -8919212409422436369;
            var_23 ^= ((((((arr_10 [i_11] [i_11]) ? 8064 : (arr_17 [i_14] [i_14] [i_11] [i_11])))) ? 1119973638 : ((768 ? var_10 : 16499002941463479486))));
        }
        arr_50 [i_11] = (((((0 ^ 16499002941463479493) ? (((1835008 ? 9058852845760632038 : 29068))) : ((0 ? 0 : var_7)))) ^ (arr_24 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])));
    }
    var_24 &= (((((23 ? -5525640268692868366 : -var_3))) || (var_10 == var_9)));
    #pragma endscop
}
