/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = -2147483647;
                arr_5 [11] [1] [7] = (max(var_8, ((min(-14, -826230288)))));
            }
        }
    }
    var_17 = (max((152 ^ -1935022835), ((((var_2 % var_9) == (!-30344))))));
    #pragma endscop
}
