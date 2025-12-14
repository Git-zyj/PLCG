/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_18 |= max(((((arr_3 [i_0] [i_1] [i_2]) ? (arr_3 [i_0] [i_1] [i_2]) : (-17810 ^ -111)))), (max((min(var_12, (arr_8 [i_0]))), 1)));
                    var_19 += (((arr_0 [i_2] [i_0]) << (((((arr_6 [i_1] [i_1] [10] [10]) ? (((589336928 ^ (arr_5 [i_0] [2])))) : (min(var_7, (arr_0 [i_1] [i_2]))))) - 3931671835))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 += ((((1 == (arr_11 [i_0] [3] [i_2] [i_3]))) ? (((arr_11 [i_1] [i_2] [i_3] [i_4]) ? (arr_11 [i_2] [i_3] [i_2] [i_2]) : (arr_11 [i_0] [i_1] [i_2] [0]))) : (((arr_11 [i_0] [i_2] [i_3] [9]) / (arr_11 [i_0] [3] [i_2] [i_4])))));
                                var_21 -= (-2028678884 && 2028678867);
                                var_22 -= (1 << (-2013070159 + 2013070166));
                                arr_15 [i_0] [i_1] = (max((((2013070158 > (arr_7 [i_3] [i_2] [i_1])))), var_15));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_6] [i_6] [i_0] = var_8;
                                var_23 = (((-2028678884 & (-2147483647 - 1))));
                            }
                        }
                    }
                }
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_24 = max((arr_13 [9] [i_1] [i_7 + 2] [i_7 + 2] [i_9] [i_9]), (3068841912 / 17591917608960));
                                arr_29 [i_8 + 4] [i_1] [i_7] = (min(1, ((((var_2 / (arr_3 [i_1] [i_8] [i_9]))) - ((1 ? -1732182409 : 15212))))));
                            }
                        }
                    }
                    var_25 += (((((56119 ? ((min((arr_21 [4] [4] [i_1] [i_0]), (arr_14 [i_0] [i_1] [i_7] [i_7] [i_7])))) : (arr_16 [i_0] [i_1] [i_1] [i_1] [i_1])))) ? (arr_13 [i_0] [i_1] [i_1] [i_7 - 1] [i_7] [i_7]) : (arr_27 [i_0] [i_1] [i_7 + 2] [i_0] [4])));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    arr_34 [i_0] [i_1] [i_10] = 44;

                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        var_26 = (max(var_26, (((2147483647 ? -661641456 : 1)))));
                        var_27 += ((var_6 * (arr_21 [i_11 - 1] [i_11 - 1] [i_0] [i_11 - 1])));
                        var_28 = (min(var_28, (arr_4 [i_0])));
                        var_29 += ((var_3 / (arr_9 [i_10])));
                        arr_38 [i_0] [i_1] [i_10] = var_12;
                    }
                    var_30 = ((arr_11 [i_0] [i_1] [i_10] [i_10]) ? (((arr_19 [i_0]) / 51501)) : var_16);
                    var_31 -= (((arr_11 [i_1] [i_1] [i_0] [i_0]) != -2013070162));
                }
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    var_32 = (min(var_32, (((((~(((var_12 && (arr_4 [8])))))) > var_2)))));
                    arr_42 [i_12] [i_0] [6] [i_0] &= ((((((arr_11 [i_0] [i_0] [i_0] [i_0]) - ((((arr_30 [i_1] [i_1]) ? (arr_6 [i_0] [i_0] [i_12] [i_0]) : -56)))))) & (max(0, ((var_4 ? var_9 : var_4))))));
                    var_33 -= ((14034 ? -2013070145 : -63));
                    var_34 -= (arr_19 [i_0]);
                    arr_43 [i_0] [i_0] = max((min(((var_16 ? (arr_13 [i_0] [i_1] [i_0] [i_1] [i_12] [i_12]) : (arr_31 [6] [5] [1] [1]))), ((min((arr_4 [i_0]), 49765))))), (!var_7));
                }
                arr_44 [i_0] [5] = (((4294967295 & -1) ^ (max(var_1, (max(1699212009926970885, (arr_7 [i_0] [i_0] [i_0])))))));
            }
        }
    }
    var_35 = -24;
    var_36 = (max((max(((var_11 ? var_12 : var_5)), var_15)), ((min((60938 || 743399878), ((var_4 ? var_7 : var_1)))))));
    #pragma endscop
}
