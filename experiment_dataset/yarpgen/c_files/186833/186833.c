/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (((arr_1 [i_0]) * (arr_1 [i_0])));
        var_18 = (arr_0 [i_0]);
    }
    var_19 ^= var_0;
    var_20 &= var_3;
    var_21 = var_4;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_22 |= ((arr_2 [i_1] [i_2]) * (arr_9 [i_1]));
                    var_23 = (max(var_23, (arr_2 [i_1] [i_1])));
                    var_24 = 103;
                }
            }
        }
    }
    #pragma endscop
}
