/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (min(-127, (arr_4 [i_0] [i_0] [i_0])));
                var_15 ^= -var_6;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 24;i_4 += 1)
            {
                {
                    arr_13 [i_4] [i_2] [i_2] = (min(-1426708916, (arr_7 [i_2] [i_3])));
                    var_16 *= (((arr_6 [i_4 - 1] [i_4]) & (((arr_12 [i_4 - 2]) ? (arr_12 [i_4 + 1]) : 0))));
                    var_17 = (-((-(arr_8 [i_4 - 2]))));
                }
            }
        }
    }
    #pragma endscop
}
