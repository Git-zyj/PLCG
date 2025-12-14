/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_10 = max(((((max((arr_7 [14] [14] [i_2] [16]), (arr_11 [i_0] [i_1])))) ? var_1 : (((arr_4 [16]) ? (arr_11 [i_1] [i_1]) : (arr_6 [10] [10] [12]))))), (max((arr_8 [i_2 - 1] [9] [i_2 - 1] [i_3 - 2]), (arr_9 [i_1] [i_2 + 2] [i_2 + 1] [i_3 - 3] [i_3 + 2]))));
                            var_11 = (((arr_9 [i_2 - 3] [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 2]) <= ((var_8 & (var_4 | var_9)))));
                            var_12 += ((((((min((arr_10 [12]), (arr_5 [i_0] [i_1] [i_2] [i_3]))) / (var_4 / var_2)))) ? ((var_5 / (min(var_0, var_9)))) : (max((arr_5 [i_0] [i_1] [4] [i_3]), (max(var_5, var_0))))));
                        }
                    }
                }
                var_13 = ((max((arr_10 [18]), var_9)) & (((((arr_5 [i_0] [i_0] [i_0] [i_1]) + 9223372036854775807)) << (((arr_10 [8]) - 811885195)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] [i_7 - 1] [12] [i_5] [i_4] = (arr_22 [8] [i_5] [i_5 - 2]);
                                var_14 = (~-8653860398368873650);
                                var_15 = (max((((((arr_17 [i_5 - 3] [i_5 - 3]) < var_0)))), (max((arr_10 [12]), (arr_6 [i_4 - 4] [16] [i_5 - 1])))));
                            }
                        }
                    }
                }
                var_16 = ((var_8 / var_5) ? (arr_2 [i_5 - 1] [i_5]) : ((max((arr_22 [i_5 - 1] [i_5] [i_5]), (arr_7 [i_4] [i_5] [i_4] [i_4])))));
                arr_28 [i_4] = arr_1 [i_4 - 2];
                arr_29 [i_4 + 1] [i_4] = arr_11 [i_5] [10];
            }
        }
    }
    #pragma endscop
}
