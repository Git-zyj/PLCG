/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 += (max((max(var_6, (min((arr_3 [i_1]), var_2)))), ((((((min(var_11, 57632)))) > (((arr_3 [i_0 + 1]) ^ (arr_1 [i_0 - 1] [4]))))))));
                var_15 = (min(var_15, var_6));
                arr_6 [i_0 - 1] [i_1] [i_1] = (((((arr_0 [i_0 - 1] [i_0 + 1]) ? (arr_0 [i_0 - 1] [i_0 + 1]) : (arr_0 [i_0 - 1] [i_0 + 1]))) ^ ((-(arr_0 [i_0 - 1] [i_0 + 1])))));
                arr_7 [i_0 - 1] = arr_4 [i_0];
            }
        }
    }
    var_16 = (max(var_16, ((min(1, (min((min(var_8, var_0)), var_0)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_2] [i_2] [i_2] [i_3] = arr_3 [i_2];
                    arr_19 [i_2] [i_3 - 1] [i_3] = ((65520 ? (((arr_14 [i_2] [i_3] [i_4 - 2]) | (arr_15 [i_2] [i_3] [i_4 + 1]))) : -var_12));
                    arr_20 [i_2] [i_3] [i_4] = ((225 ? ((8128 ? (arr_10 [i_2] [i_4 + 1]) : 1)) : 1));
                    var_17 *= ((arr_16 [i_4 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) <= (~130));
                }
                for (int i_5 = 2; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_30 [i_3] [i_3] [i_5] [i_3] [i_3] = (((arr_26 [i_2] [i_5] [i_2] [i_7]) ? (((var_4 < (((arr_24 [i_2] [i_3 - 1] [8] [i_7]) ? var_12 : (arr_9 [i_3] [1])))))) : (arr_8 [i_2] [i_2])));
                                arr_31 [i_2] [i_2] [i_3] [i_6] [i_6 - 2] [i_7] = (max(((225 / (arr_15 [i_6] [i_6 + 1] [7]))), 1));
                            }
                        }
                    }
                    arr_32 [i_3] [i_3] [i_3] = (min((min((min(0, (arr_12 [i_2] [i_3] [4]))), (arr_0 [i_2] [i_3]))), ((min(var_5, (arr_26 [i_3 - 1] [i_5 + 1] [i_5 + 1] [i_5]))))));
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_40 [i_2] [i_2] [i_2] [i_8] [i_2] &= (min(((var_11 ? (arr_36 [i_3 - 1] [i_9]) : (arr_36 [i_3 - 1] [i_8]))), (~0)));
                            arr_41 [i_2] [i_3] [i_8] [0] [i_2] = ((~(arr_36 [i_9] [i_8])));
                            var_18 |= (min((!225), (((arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1]) - (arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                            var_19 = (max(var_19, -var_8));
                            arr_42 [i_2] [i_2] [i_2] [i_3] [i_8] [i_2] = (((arr_21 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]) | (arr_21 [5] [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                        }
                    }
                }
                arr_43 [i_3] = var_1;
            }
        }
    }
    var_20 = var_8;

    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_21 &= (((0 <= 2678898931659238616) ? (((!(((1 >> (80 - 60))))))) : (((44370 >= (arr_2 [i_10]))))));
        var_22 = (min((min(1, 44376)), (arr_36 [i_10] [i_10])));
    }
    #pragma endscop
}
