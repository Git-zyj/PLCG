/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (arr_2 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (min((max(((((arr_2 [i_0]) / 12272))), ((var_2 ? (arr_2 [i_0]) : var_6)))), (arr_7 [i_1] [i_2 - 1] [i_2 - 1] [i_2 + 2])));
                            var_13 -= (min(((min((arr_7 [i_2] [i_2] [i_2 + 1] [i_2]), 91))), (min(var_9, 1))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
