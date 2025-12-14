/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (((+(min((arr_6 [i_1] [i_0 + 1] [i_0 - 3] [i_0 + 1]), -1995640050)))))));
                                arr_10 [i_0 - 3] [i_1] [i_0 - 3] [i_0] = -1904454282;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                var_15 += -1904454272;
                                var_16 = var_10;
                                arr_17 [i_0] [6] [i_2] [i_1] [i_0] = (arr_15 [i_6 + 1] [i_2 - 1] [7] [i_0 - 2] [i_1 - 3]);
                                arr_18 [i_0] [4] [i_1] [i_2] [i_0] [6] [i_6] = (!-28);
                            }
                        }
                    }
                    arr_19 [i_0] = 7700;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_17 = (min(var_17, ((((~1904454298) ? ((var_11 ? ((-(arr_32 [i_10]))) : (arr_25 [14]))) : ((min(var_7, (arr_27 [i_9 + 3] [i_9 - 3] [i_9] [i_9 + 2])))))))));
                            arr_33 [i_8] [i_8] [12] = (min((max(((var_4 ? var_1 : 1904454271)), -1995640038)), (arr_27 [i_9 - 2] [i_9 + 3] [i_9 + 3] [i_9 - 1])));
                            arr_34 [i_8] [i_8] [i_8] = (arr_23 [i_10]);
                            var_18 &= -1995640033;
                            arr_35 [i_8] [i_8] [i_9 - 3] [i_10] [i_8] [i_7] = 4294967295;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_42 [i_11] [i_8] [i_8] [i_12] [i_13 - 2] [i_13] = 1995640049;
                                var_19 = ((max(((!(arr_37 [i_8] [i_8] [i_11]))), (((arr_37 [i_7] [i_12] [i_13]) && 45203)))) ? ((12659558550301519788 ? 0 : (((max((arr_31 [9] [i_11]), (arr_31 [i_13] [i_8]))))))) : 1904454298);
                                var_20 = 1995640057;
                                arr_43 [i_7] [i_8] = var_5;
                                arr_44 [9] [i_7] [i_8] [1] [i_12] [i_13] = (max((arr_38 [i_7] [i_8] [i_11] [i_12] [17]), (12659558550301519807 > 1904454271)));
                            }
                        }
                    }
                }
                arr_45 [i_8] [i_8] [i_8] = (max((((arr_37 [i_7] [i_7] [i_7]) ? 1 : (45178 + var_7))), 20369));
                var_21 = (min(var_21, 47));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        {
                            arr_52 [i_14] &= (var_12 + 20333);
                            arr_53 [i_8] = var_12;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
