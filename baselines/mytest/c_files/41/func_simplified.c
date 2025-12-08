/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/41
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2)
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 4)
        {
            {
                arr_6 [i_0] = (((~var_2) - ((var_2 ? 2047 : (((arr_4 [i_0] [8]) ? (-9223372036854775807LL - 1LL) : var_3))))));
                var_14 = (min(var_14, (((-(min((1488355570U), var_3)))))));
            }
        }
    }
    var_15 *= var_0;
    #pragma endscop
}
