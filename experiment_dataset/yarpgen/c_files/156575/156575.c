/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(1, 678978697));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (min((arr_3 [i_1]), (((arr_2 [10] [i_0 - 1]) ? (min(var_19, (arr_3 [i_0]))) : var_14))))));
                var_22 = (max(127, ((((((678978697 ? -437 : (arr_1 [i_0]))) + 2147483647)) >> (1 && var_0)))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] = (!var_9);
                    arr_9 [6] [i_0] [i_0] |= (!1);
                    arr_10 [i_1] = (((105 ? var_9 : (arr_6 [i_2] [i_2] [11] [9]))));
                }
                /* LoopNest 3 */
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_23 = ((+(((((arr_11 [i_1] [i_5]) ? (arr_6 [i_0 - 1] [i_0] [i_0] [1]) : (arr_0 [i_1])))))));
                                arr_20 [i_0] [i_0 - 1] [i_1] [i_3] [i_0] [i_1] = ((var_15 & (min((max((arr_17 [i_5 - 2] [i_5] [i_4] [11] [11] [i_0]), var_16)), ((max(var_11, (arr_11 [i_1] [i_5]))))))));
                                arr_21 [i_1] [i_4] = (min((min((arr_6 [i_5 + 1] [6] [i_3 + 1] [i_3 - 2]), (max(65535, 678978688)))), (((-(arr_14 [i_1]))))));
                                arr_22 [i_0 - 1] [i_0 - 1] [i_3 - 2] [i_3 + 1] [i_1] [i_5] [i_5 - 3] = (min((arr_18 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3]), (min((arr_4 [i_3 - 2] [i_1] [i_5 - 3]), (arr_1 [i_4 + 4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
