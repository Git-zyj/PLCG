/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [12] [i_0]);
        var_21 = (arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_22 = -252;
                        var_23 = var_5;
                    }
                }
            }
        }
        var_24 = (arr_12 [i_1]);
    }
    var_25 = var_3;
    #pragma endscop
}
