/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/81
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4)
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3)
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 4)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_1] = (max((min((0LL), (arr_7 [i_0] [i_2 - 1] [i_2 - 1]))), (19868 + var_5)));
                    arr_11 [i_0] [i_0] [i_0] = (arr_4 [i_2 + 2] [i_2 - 1] [5]);
                    arr_12 [i_0] [i_0] [i_2 - 1] [i_1] = (max(((var_5 ? -1564013803 : (arr_2 [i_2 - 1] [i_1]))), (((arr_2 [i_1] [i_0]) ? (arr_2 [0] [i_1]) : -207727406))));
                }
            }
        }
    }
    var_18 = var_7;
    var_19 &= (((var_5 == (min(var_12, (-1LL))))) ? (min(var_9, (18014398509481983LL))) : ((min((~var_4), var_4))));
    #pragma endscop
}
