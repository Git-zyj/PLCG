/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_10 -= 31326;
                                var_11 = (max(var_11, (((-(arr_6 [i_4] [i_1]))))));
                                var_12 = ((((max((var_8 - 34209), ((var_3 ? var_4 : (arr_7 [i_0] [i_1] [0] [i_3] [i_3] [i_4])))))) ? (max((arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]), (arr_4 [i_2] [i_3] [i_4]))) : ((31327 ? ((var_5 ? var_5 : var_4)) : (((arr_6 [7] [i_3]) ? var_3 : 69))))));
                                arr_13 [2] [i_2] [i_2] [i_0] &= (max((~var_9), (((max(var_3, 18446744073709551612)) % (arr_8 [i_0] [i_1] [i_2] [i_3])))));
                                var_13 &= (max(-1328474716, ((58 ? (max(var_2, -15414)) : 18446744073709551612))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_14 = (((((((var_6 ? (arr_15 [i_0] [i_0] [23] [i_5 - 2] [i_6]) : 828640931))) + -3)) < 0));
                                arr_21 [i_0] [i_1] [1] [i_5 + 1] [i_2] [i_2] = ((((((31298 ? var_3 : var_2))) ? (-69 < -1552730390) : (max(19, 239)))));
                                var_15 += (arr_4 [i_0] [i_0] [i_0]);
                                var_16 *= (max(-18446744073709551612, ((((((var_1 >> (((arr_8 [i_6] [i_2] [i_1] [i_0]) - 8101))))) ? 1328474716 : (var_3 || var_7))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 3; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_17 += (((((arr_22 [i_10 - 1]) < 22)) ? (((arr_22 [i_10 + 1]) ? (arr_22 [i_10 - 1]) : (arr_22 [i_10 + 1]))) : 202497625));
                                var_18 = (max((max(((-833146556 ? 18446744073709551613 : var_9)), (var_0 & var_9))), 15));
                                var_19 = (min(var_19, ((max((((arr_8 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10]) ? (arr_8 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1]) : (arr_8 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10]))), 22792)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 11;i_14 += 1)
                        {
                            {
                                var_20 = (max(var_20, (arr_4 [23] [23] [4])));
                                arr_44 [i_12] [i_12] = var_9;
                                var_21 = (((((var_2 ? 0 : var_4))) ? (arr_41 [i_12 + 1] [i_12 - 1] [i_12] [i_12] [i_12 - 1]) : (arr_41 [i_12 + 1] [i_12 - 1] [i_12] [i_12] [i_12 - 1])));
                                var_22 = (max((max((arr_35 [i_13] [i_8] [i_12]), var_9)), (((max(var_5, var_8))))));
                                var_23 += ((arr_5 [i_7] [3]) ? ((var_8 ? (arr_36 [i_14] [i_12] [i_8] [i_7]) : var_8)) : var_7);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
