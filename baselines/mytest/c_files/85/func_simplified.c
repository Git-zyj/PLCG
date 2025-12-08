/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/85
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((-11342 ? 0 : 0));
    var_16 = (min(var_8, (((22U) ? 11587 : 0))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2)
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2)
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [13U] [i_0] = min((!11587), (((var_8 <= var_0) ? (((var_4 ? var_10 : 11606))) : (arr_2 [i_0 + 2] [i_0 - 1]))));
                    var_17 = ((-(!11459)));
                    arr_9 [i_2] [i_1] [i_2] = (((+(((arr_1 [i_2]) ? var_4 : -11468)))));
                }
            }
        }
    }
    #pragma endscop
}
