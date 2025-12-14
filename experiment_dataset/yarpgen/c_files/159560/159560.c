/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((-704608542 || var_1) ? ((min(-2598626140518547336, 28))) : -var_9)))));
    var_19 = (var_14 / var_7);
    var_20 = (max(var_20, var_17));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0 + 1] [i_1] = var_11;
                    arr_7 [i_0 - 2] [i_0 - 2] [i_1] = var_6;
                    arr_8 [i_1] [i_1] [i_2] = var_11;
                }
            }
        }
    }
    #pragma endscop
}
