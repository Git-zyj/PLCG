/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_12 = (arr_1 [i_0] [i_0]);
        var_13 |= ((-(((arr_0 [i_0 + 1]) / var_9))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            {
                var_14 ^= 14509832262828169078;
                var_15 ^= ((+(min((arr_8 [i_1] [i_1]), (arr_8 [i_1] [i_2])))));
            }
        }
    }
    #pragma endscop
}
