/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((var_4 / var_1), var_4));
    var_14 = ((var_7 & (max(var_7, var_8))));
    var_15 = var_7;
    var_16 -= 8601;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] = (max(var_9, var_5));
                                arr_15 [i_0] [i_1] = var_4;
                                var_17 = var_3;
                            }
                        }
                    }
                }
                var_18 = (min(var_7, (max(var_9, -11301))));
                var_19 = (min(var_19, (~var_12)));
            }
        }
    }
    #pragma endscop
}
