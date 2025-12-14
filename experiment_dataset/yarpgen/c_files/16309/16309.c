/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((!897148568) * var_10);
                    arr_9 [i_1] = -1264002331;
                }
            }
        }
        var_15 = var_10;
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                var_16 = (((max((arr_14 [i_3] [i_3 - 3]), var_14)) * (1528039053 == -1528039079)));
                arr_17 [i_4] [i_4] = var_10;
            }
        }
    }
    var_17 = (min(var_17, (!var_4)));
    var_18 = (var_9 ? (var_4 && 1516159108) : var_3);
    #pragma endscop
}
