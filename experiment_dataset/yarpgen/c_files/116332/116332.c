/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_1] = -109;
                var_19 = ((~(max((~0), (~var_5)))));
                var_20 = (max(var_20, ((max((244 - 237), -3601375851628925112)))));
            }
        }
    }
    var_21 = var_2;
    var_22 = min(var_8, var_16);
    #pragma endscop
}
