/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (arr_1 [i_0]);
                    arr_7 [i_0] = (arr_4 [i_0] [i_1 - 3] [i_1 - 3]);
                }
            }
        }
    }
    var_13 = ((max((var_3 == var_5), ((var_7 ? var_6 : var_2)))));
    #pragma endscop
}
