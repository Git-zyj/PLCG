/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_14;
    var_18 = (max(var_18, (((var_10 & (4023265413 || var_12))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_0] [i_0] [i_0] = var_14;
                    var_19 = ((0 | (((1 / var_9) | var_5))));
                }
            }
        }
    }
    #pragma endscop
}
