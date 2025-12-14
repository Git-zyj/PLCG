/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_0] = (max((((arr_8 [i_1]) ? (((((arr_0 [i_0 - 1] [i_2]) > -4648686709975507797)))) : ((var_5 ^ (arr_6 [i_1]))))), (((~((var_11 ? var_4 : var_6)))))));
                    arr_10 [i_0] [i_1] [i_0] = (((arr_0 [i_0] [i_1]) >> ((((var_4 ? var_2 : var_12)) - 38))));
                }
            }
        }
    }
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_15 -= (((((((arr_6 [i_3]) == var_8)) || (((103 ? var_2 : var_3))))) ? var_12 : (max(var_1, (((arr_7 [i_4] [i_4] [i_4] [i_4]) + (arr_3 [i_3] [i_3])))))));
                var_16 = ((((!(arr_17 [i_3] [i_3] [i_3]))) ? (((arr_17 [6] [i_3] [i_3]) ? (arr_17 [i_4] [i_4] [10]) : var_4)) : 69));
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_28 [i_3] [i_3] [i_7] [i_3] [i_3] [i_3] [i_3] = (((arr_3 [i_5 - 2] [i_5 + 2]) ? (((((arr_19 [i_5] [i_5 - 2]) < var_2)))) : (min(var_9, (arr_8 [i_6])))));
                                var_17 = (((max((arr_7 [i_5 + 1] [i_4] [i_5] [i_5]), (arr_7 [i_5 - 2] [12] [13] [i_5 - 2]))) ? (((arr_7 [i_5 + 1] [i_7] [i_5 - 1] [i_7]) ? (arr_7 [i_5 - 1] [i_5 - 1] [i_5] [i_5]) : 13759769710615322756)) : (arr_7 [i_5 - 2] [16] [i_4] [i_6])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
