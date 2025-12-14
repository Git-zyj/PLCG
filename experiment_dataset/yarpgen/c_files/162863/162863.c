/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 ^= var_17;
        arr_4 [i_0] = var_16;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_1] [i_1 + 1] = (arr_5 [i_2] [i_0]);
                    var_23 = var_0;
                    arr_12 [i_0] = var_13;
                }
            }
        }
        arr_13 [i_0] [i_0] = (arr_7 [i_0] [i_0]);
    }
    var_24 = (min(var_24, ((((~var_8) >> (var_4 - 477181999))))));
    var_25 = var_15;
    #pragma endscop
}
