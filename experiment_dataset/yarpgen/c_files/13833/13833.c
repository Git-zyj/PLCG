/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = var_6;
                    var_17 ^= (((arr_0 [i_0 - 1]) & (arr_0 [i_0 + 1])));
                    var_18 *= (((arr_3 [i_0] [2] [2]) - (arr_0 [i_0 - 1])));
                    var_19 = (((arr_7 [3] [i_0] [3] [i_0]) | var_4));
                    var_20 = -4037560585733204072;
                }
            }
        }
        var_21 = var_2;
        var_22 = (arr_4 [0] [i_0] [0]);
        var_23 = (max(var_23, (arr_6 [i_0 + 1] [18])));
    }
    var_24 = var_6;
    #pragma endscop
}
