/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/90
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10; i_0 += 2)
    {
        arr_4 [i_0 - 1] = ((45887 ? 16384 : (-92 ^ 1310262881)));
        var_16 = (arr_1 [10]);
        var_17 = var_15;
    }
    for (int i_1 = 1; i_1 < 8; i_1 += 1)
    {
        arr_7 [i_1] = (arr_3 [i_1 - 1]);
        arr_8 [i_1] = ((~(1337345642 / -112)));
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4)
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 1)
            {
                {
                    var_18 *= ((!(arr_13 [i_2 + 1] [3LL] [i_1] [i_1])));
                    var_19 = (min(var_19, (((!((((arr_3 [1]) ? var_4 : (arr_2 [i_1 + 2])))))))));
                    arr_14 [i_1 + 1] [i_1] [6U] = -18;
                    var_20 += ((var_0 ? (arr_1 [i_1]) : var_8));
                }
            }
        }
    }
    var_21 |= var_1;
    #pragma endscop
}
