/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_11, (((~(1 && var_11))))));
    var_15 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [5] [i_1] [i_2] = var_5;
                    var_16 = (((arr_7 [i_0]) + ((((1 ? 8746 : 8757)) ^ 1))));
                }
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
