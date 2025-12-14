/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((var_11 && ((max(45586, 45587))))))))));
    var_15 = ((--1) ? var_7 : (1 << var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((88 ? (((-1374728138 && 1) ? 5 : (arr_5 [i_0] [i_1] [i_2] [i_2]))) : 39)))));
                    arr_6 [i_0] [i_1] [i_0] &= ((var_0 ? (((min(var_11, (arr_4 [i_1] [i_1] [4]))))) : -var_1));
                    arr_7 [i_0] = (max(8589934591, 127));
                    var_17 = (((-(arr_3 [i_0] [i_1] [i_2 + 1]))));
                }
            }
        }
    }
    #pragma endscop
}
