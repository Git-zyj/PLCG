/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, var_12));

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                arr_13 [i_0] [i_1 - 2] [i_3] [i_3] [i_3] [i_4] [i_4] = ((((max((arr_9 [i_0 + 1] [3] [i_1 + 1] [i_2]), (arr_9 [i_0 - 2] [6] [i_1 + 2] [i_4])))) ? (arr_6 [i_0 + 1] [i_1 + 2] [i_3 + 2]) : ((((arr_9 [i_0 - 1] [i_1] [i_1 - 2] [i_2]) ? var_7 : -1141961600)))));
                                arr_14 [i_0] [i_0] [i_0] [1] [i_3] [i_3] [1] = (max(127, (((arr_3 [i_3 - 1]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1])))));
                                var_15 += var_3;
                            }
                        }
                    }
                }
                var_16 = ((var_12 ? ((max((((arr_7 [i_0] [i_0] [i_0 - 2] [i_1]) ? var_4 : (arr_0 [i_0 - 1]))), (((!(arr_2 [i_0] [i_1 - 3]))))))) : (arr_7 [i_1 - 3] [i_0 - 2] [i_1] [i_1 - 3])));
            }
        }
    }
    var_17 = (max(var_17, var_5));
    var_18 = var_12;
    #pragma endscop
}
