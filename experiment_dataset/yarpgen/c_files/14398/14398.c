/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_9 + (((max(var_15, var_8)) & ((max(var_2, var_15)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (arr_2 [i_1]);
                var_19 = (max(var_19, (arr_3 [i_0] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
