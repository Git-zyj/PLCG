/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_14 += (((arr_0 [i_0 + 2] [i_0 + 2]) ? (arr_2 [i_0 - 2] [i_0 + 1]) : (arr_2 [i_0 + 2] [i_0 + 3])));
        var_15 = var_11;
    }
    var_16 = var_0;
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_17 = (max(var_17, ((max((8589934591 == var_3), (min((arr_4 [i_1 - 2]), 0)))))));
                    var_18 += ((288195191779622912 ? -7 : 127));
                }
            }
        }
    }
    #pragma endscop
}
