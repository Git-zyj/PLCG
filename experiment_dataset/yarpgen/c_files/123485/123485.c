/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = 255;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = ((!(arr_6 [i_0] [i_0] [i_1 - 1] [9])));
                    var_16 = var_4;
                }
            }
        }
    }
    #pragma endscop
}
