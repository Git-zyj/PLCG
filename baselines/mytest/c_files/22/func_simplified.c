/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/22
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_14));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] [i_0] = (((arr_0 [i_0]) << (arr_0 [i_0])));
        var_21 = (((-(-6273019710530876319LL))));
        var_22 -= (arr_2 [10U]);
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4)
    {
        for (int i_2 = 0; i_2 < 20; i_2 += 2)
        {
            {
                arr_10 [i_1] [10ULL] = (((995194808 > 0) ? -995194806 : ((((max(-995194834, (4285885207U)))) ? (((+(arr_9 [i_2] [i_1])))) : (var_16 | -995194824)))));
                arr_11 [i_1] [i_1] [i_1] = ((min((9ULL), (449798907U))));
            }
        }
    }
    #pragma endscop
}
