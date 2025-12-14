/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [8] = (-4677 ? ((529296269 * (arr_2 [i_1] [i_1]))) : (((max((arr_1 [i_1]), var_13)))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_14 = (((((arr_4 [i_0] [i_1] [0]) ? ((110 ? var_6 : var_1)) : (arr_8 [i_2] [i_1] [i_1] [i_0]))) / var_3));
                    arr_10 [i_1] = (110 % var_0);
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] |= (((((-13970 ? ((max((arr_9 [i_0]), (arr_3 [i_0] [i_1])))) : var_10))) ? ((var_8 ? (((arr_4 [10] [i_0] [i_3]) ? 13970 : var_5)) : ((~(arr_1 [i_0]))))) : (min((1 - var_9), var_13))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_20 [i_5] [i_4] [i_5] [i_0] [i_5] [i_0] [i_0] &= arr_3 [i_0] [0];
                                var_15 = 13969;
                            }
                        }
                    }
                    arr_21 [i_1] = (((arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]) - ((20457 ? var_9 : (arr_16 [7] [i_3] [i_1] [i_1] [i_0] [i_0])))));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_25 [i_1] [i_1] = (((arr_1 [i_0]) ? var_4 : (((arr_19 [i_0] [i_0] [i_0] [i_1] [i_0]) / (max((arr_17 [i_0] [i_1] [i_0] [i_0] [i_0]), var_13))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_32 [i_1] [i_1] [i_6] [i_1] [i_8] [i_6] = ((((((((arr_18 [9] [i_1] [i_1] [i_1] [9]) - -475836652714066463)) - var_5))) ? ((((-(arr_18 [5] [i_0] [i_0] [i_1] [i_0]))))) : var_6));
                                arr_33 [i_1] [i_1] [5] = (((arr_2 [i_0] [i_1]) & (arr_19 [i_0] [i_1] [i_6] [i_1] [i_0])));
                                var_16 = (~-13978);
                                arr_34 [i_0] [i_0] [i_6] [i_1] [i_8] = (~((63 * (!var_1))));
                            }
                        }
                    }
                    arr_35 [i_0] [i_0] [i_1] = ((!((((arr_27 [i_0] [i_0] [i_1] [i_6]) ? (arr_28 [1] [i_1] [i_0]) : (arr_28 [i_0] [i_1] [i_0]))))));
                    arr_36 [i_0] [i_6] [i_6] [i_1] = ((((((arr_3 [i_1] [i_1]) ? (((arr_17 [i_0] [i_1] [i_1] [i_0] [i_0]) ? -13983 : (arr_19 [13] [i_1] [i_6] [i_1] [i_0]))) : (arr_13 [i_0] [i_1] [i_6] [i_6])))) ? (1582261785 != 4034) : (((((arr_17 [i_0] [i_1] [i_1] [i_1] [6]) / 475836652714066462)) + (arr_31 [i_0] [i_0] [i_0] [i_1] [i_0])))));
                }
                var_17 = (((((var_3 - -13972) > var_2)) && ((var_4 > (var_6 / var_6)))));
                arr_37 [i_1] = (arr_30 [i_1] [1]);
                var_18 = (min(var_18, var_11));
            }
        }
    }
    var_19 = ((((((var_6 ? var_3 : var_7))) & (var_8 ^ var_11))));
    var_20 = (max(((((var_5 & var_7) ? (var_13 + var_3) : -29353))), var_1));
    #pragma endscop
}
