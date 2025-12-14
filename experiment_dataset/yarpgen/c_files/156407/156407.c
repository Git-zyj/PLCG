/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = ((~(arr_2 [i_0] [i_1] [i_0])));
                arr_4 [i_1] = var_9;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_8 [17] [i_2] = (((arr_7 [i_2]) ? var_3 : (arr_6 [i_2])));
        var_15 = arr_7 [i_2];
    }
    #pragma endscop
}
