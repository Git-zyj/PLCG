/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (!-2554330073839955804)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 ^= (((arr_0 [i_2]) ? (arr_3 [i_4]) : (((arr_2 [i_1] [i_3]) ? -7837073342379274481 : (arr_7 [i_1] [i_1] [i_3] [i_4])))));
                                var_13 = (max((((arr_2 [i_1] [i_1]) ? (((arr_4 [i_4] [9] [i_0] [i_0]) | var_9)) : (!1))), (((!((max((arr_0 [i_0]), var_0))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_9;
    #pragma endscop
}
