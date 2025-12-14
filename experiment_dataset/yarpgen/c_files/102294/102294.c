/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((~(min(((var_0 ? 106 : var_2)), (var_10 - var_7)))));

    for (int i_0 = 4; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_7;
        var_12 = max(((~((8726304040146066820 ? 2005510029 : (arr_0 [i_0]))))), (arr_1 [1]));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, var_2));
                        var_14 = (max(((((var_3 ? (arr_11 [1] [1] [4] [i_2] [i_3]) : (arr_0 [i_3]))))), ((~(((var_1 + 2147483647) >> (var_1 + 1328933533)))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_15 = var_10;
                            var_16 = (((((var_0 ? 250 : ((2147483647 ? var_5 : 50331648))))) ? (((!(arr_12 [i_0 + 1] [i_1] [i_3] [i_4])))) : ((max(var_4, (var_7 == var_2))))));
                            var_17 = (max(((-(min(2147483647, var_4)))), (!var_8)));
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            arr_19 [1] [i_1] [i_2] [i_2] [0] = (max((((arr_17 [i_1] [i_0 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) % var_7)), (((arr_11 [5] [9] [5] [i_3] [i_5 - 1]) ? (((min(var_9, 32)))) : var_2))));
                            arr_20 [i_0] [i_1] [i_1] [i_3] [i_1] = ((!((((((arr_8 [i_0] [i_1] [i_1]) ? -3108291039051523535 : (-127 - 1))) & (arr_11 [1] [i_0 + 1] [i_0 - 3] [i_5 - 1] [1]))))));
                            arr_21 [0] [i_1] = (!(arr_10 [i_0]));
                            var_18 |= ((((!(arr_13 [7] [i_5 - 1] [i_5] [11] [i_5] [i_5]))) ? ((((!(arr_3 [5] [i_3]))) ? (arr_13 [i_0 - 3] [i_0 - 3] [i_1] [2] [i_3] [i_5]) : var_4)) : ((-577176620 ? -13390 : 511579289))));
                        }
                        var_19 = var_6;
                        var_20 = (arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3]);
                    }
                }
            }
        }
    }
    for (int i_6 = 4; i_6 < 10;i_6 += 1) /* same iter space */
    {
        var_21 -= ((~(((arr_12 [i_6] [i_6] [i_6 - 4] [i_6 - 3]) / (((-(arr_15 [1] [i_6 - 1] [i_6 - 1] [i_6] [9] [i_6]))))))));
        arr_26 [1] = (((arr_0 [i_6 - 3]) ? ((((max((arr_8 [0] [i_6] [4]), 1805089369))) ? (min(1, -627402160)) : 1)) : var_10));
    }
    #pragma endscop
}
