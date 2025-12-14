/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (min(12860376774538586238, 2084056493));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = 12860376774538586238;
                var_13 += -1544026496;
                var_14 = 5586367299170965396;
                var_15 = (arr_2 [i_0 - 1]);
                var_16 = (min(var_16, -64954693));
            }
        }
    }
    #pragma endscop
}
