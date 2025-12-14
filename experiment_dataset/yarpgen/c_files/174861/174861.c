/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] &= arr_2 [i_0] [i_1];
                arr_6 [i_0] [i_0] = max((max((min((arr_4 [7] [i_1]), var_3)), ((min(var_2, var_1))))), ((((arr_2 [i_1] [1]) ? (arr_4 [i_1] [i_0]) : var_4))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                        arr_12 [i_0] [i_0] [i_2] [i_1] &= (max(((max(((127 ? -54 : var_7)), -127))), 4294967295));
                        arr_13 [i_0] [6] [i_1] [i_3] [i_3] [i_0] = ((((var_1 ^ (((arr_1 [i_0] [i_3]) ? var_3 : (arr_0 [i_0] [0]))))) ^ ((((min((arr_2 [1] [i_1]), var_5)))))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_18 [5] [5] [i_4] [5] [5] = max(12031, 215585202);
                        arr_19 [i_0] [i_0] [i_4] [i_2] [i_0] [i_1] = (max(var_8, ((max(var_1, var_8)))));
                        arr_20 [i_0] [i_0] [i_2] [i_4] = (min(((var_4 ? var_1 : (((max((arr_4 [i_0] [i_0]), var_0)))))), ((((min(var_5, (arr_2 [i_2] [i_4])))) ? (((max((arr_8 [i_0] [i_1] [i_2]), var_2)))) : var_4))));
                        arr_21 [i_0] [i_0] [i_0] [i_1] [i_0] = ((((arr_4 [i_0] [i_0]) ? ((((arr_15 [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_1] [i_0]) : (arr_14 [i_4] [i_1] [i_1] [i_1] [i_0] [i_0])))) : ((var_5 ? (arr_0 [i_1] [i_1]) : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        arr_24 [i_5] [i_0] [i_0] [i_0] [i_5] = (arr_17 [i_0] [i_1] [i_2] [i_0]);
                        arr_25 [i_5] = ((var_4 ? ((var_6 % (arr_7 [i_0] [i_0] [i_0] [i_0]))) : (127 >= 1909630846)));
                        arr_26 [i_0] [i_1] [i_2] [i_1] = var_9;
                        arr_27 [i_5] = (arr_22 [i_5]);
                    }
                    arr_28 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? ((min((arr_22 [i_0]), var_5))) : ((((min((arr_2 [i_1] [i_2]), var_1))) ? (((arr_1 [i_1] [i_2]) ? var_8 : var_2)) : (arr_22 [i_1])))));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_35 [i_1] [i_7] [i_1] [i_1] [i_1] = ((((var_3 ? (arr_16 [i_8] [i_0] [i_1] [i_0]) : (min(var_5, (arr_3 [i_7] [i_7]))))) == (((max((arr_15 [i_7 + 1] [i_1] [i_7 + 1] [i_7]), (arr_17 [i_7 - 2] [i_6] [i_6] [i_6])))))));
                                arr_36 [i_0] [i_0] [i_6] [i_7] [i_7] = (max((((arr_17 [i_7] [i_7 - 2] [i_7] [i_7 + 1]) ? 18 : 11)), ((min(var_8, (arr_17 [i_7] [i_7 - 3] [i_7] [i_7 - 2]))))));
                                arr_37 [i_0] [i_1] [i_1] [i_7] [i_8] [i_8] = (max((arr_31 [i_0] [i_0] [i_6] [i_7] [i_6]), (arr_14 [i_0] [i_0] [3] [3] [i_7] [i_0])));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        arr_40 [i_0] = (min((arr_10 [i_0] [i_1] [i_6] [i_9]), (min((min((arr_8 [i_0] [i_1] [i_0]), (arr_23 [i_0] [i_1] [i_0] [i_6] [i_1] [i_9]))), var_6))));
                        arr_41 [2] [i_1] [i_1] [i_6] [i_9] [i_9] = ((var_5 ? var_1 : (((arr_0 [i_0] [i_1]) - (arr_0 [i_9] [i_9])))));
                        arr_42 [i_0] [i_9] [i_9] [i_0] [i_0] [i_9] = (max((((((max((arr_32 [i_6]), var_6)))) & var_3)), (((var_9 ? (min(var_7, (arr_17 [i_9] [i_1] [i_6] [i_6]))) : (((arr_31 [i_0] [i_0] [i_9] [i_9] [i_9]) ? var_8 : (arr_30 [i_0] [i_0] [i_0]))))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 4; i_10 < 7;i_10 += 1)
                    {
                        arr_45 [i_0] [i_10] = (arr_17 [i_0] [i_1] [i_1] [i_0]);
                        arr_46 [i_10] [i_10] = (arr_15 [i_0] [i_0] [i_0] [i_10]);
                    }
                    arr_47 [i_0] [i_0] [i_6] = (arr_8 [i_0] [i_0] [i_6]);
                }
            }
        }
    }
    var_10 = (var_7 && var_9);
    var_11 &= var_3;
    #pragma endscop
}
