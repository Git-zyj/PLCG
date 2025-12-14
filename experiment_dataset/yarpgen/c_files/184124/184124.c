/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_13));
    var_15 = (min(var_15, (!var_4)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (1 && 1);
                var_17 &= -2147483647;
            }
        }
    }
    #pragma endscop
}
