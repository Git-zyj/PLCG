/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 |= ((-(arr_3 [12])));
                var_20 = 197;
                var_21 = var_11;
            }
        }
    }
    var_22 = var_17;
    var_23 += ((((~(~236))) >> (var_15 - 111)));
    #pragma endscop
}
