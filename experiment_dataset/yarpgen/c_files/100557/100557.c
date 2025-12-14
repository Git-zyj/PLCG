/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (min(var_15, -45));
                arr_6 [i_1] = (min((arr_0 [i_0 - 1]), 13011332802239302781));
            }
        }
    }
    var_16 = (min(var_16, (((-((-(max(13011332802239302765, var_2)))))))));
    var_17 = 115;
    #pragma endscop
}
