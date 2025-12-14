/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = var_7;
                arr_5 [12] [i_1 + 1] [i_1 + 1] &= 27679;
                var_15 = (!128);
            }
        }
    }
    var_16 = (max(27679, 2918788154));
    var_17 = (+(max((var_9 | var_5), (max(var_11, var_6)))));
    #pragma endscop
}
