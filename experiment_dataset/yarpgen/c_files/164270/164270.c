/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= 112;
    var_11 = (((~-3266814629) ? ((~(var_5 - var_9))) : var_0));
    var_12 -= ((-((0 ? (92 / 89) : -1647802106))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = ((~(min(((max(77, var_5))), var_7))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_11 [i_1] [3] &= var_3;
                    arr_12 [i_3] [i_3] [i_3] = 1;
                }
            }
        }
        var_13 = var_7;
    }
    #pragma endscop
}
