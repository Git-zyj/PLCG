/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = ((var_8 ? var_9 : (max((1 + 28), 1998001076))));
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 |= min((((2127799134 ? (arr_5 [2] [2]) : 16384))), (min((arr_3 [4] [i_0 + 1]), (arr_3 [2] [i_0 - 3]))));
                var_16 = (arr_5 [i_1] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (max(4294967295, (((arr_10 [i_2 + 1] [i_4]) & (arr_10 [i_2 - 1] [i_4])))))));
                                var_18 = (arr_0 [i_1]);
                                arr_13 [i_0] [i_4] [i_1] [i_0] [i_3] = ((((max((arr_5 [i_0] [i_1]), (min(17987589201749764847, 28))))) ? (((((arr_1 [i_2]) ? (arr_9 [i_0] [i_1] [i_2] [i_3 - 1] [i_0] [i_4 + 2]) : (arr_12 [i_1] [i_1]))) - (arr_5 [i_2 - 1] [i_1]))) : (31 - 13)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, var_2));
    #pragma endscop
}
