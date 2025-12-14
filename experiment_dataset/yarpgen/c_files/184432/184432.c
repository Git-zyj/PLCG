/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((((((var_5 < (arr_1 [i_0]))))) >= (max((arr_1 [i_0]), var_9))));
                var_15 = var_6;
            }
        }
    }
    var_16 += ((((127 ? var_13 : var_5))));
    #pragma endscop
}
