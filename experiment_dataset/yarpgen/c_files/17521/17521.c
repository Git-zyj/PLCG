/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, var_7));
                                var_16 = (max((arr_13 [i_3] [i_3] [i_3] [i_3] [i_3]), (((var_3 || 235) / ((var_5 ? (arr_10 [i_2]) : (arr_1 [i_4])))))));
                            }
                        }
                    }
                }
                var_17 -= (arr_1 [0]);
            }
        }
    }
    #pragma endscop
}
