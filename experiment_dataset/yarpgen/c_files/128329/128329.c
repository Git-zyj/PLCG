/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((var_11 && var_1), var_0));
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = ((-((~((min(-44, var_6)))))));
                var_16 = 17484520739196974369;
                var_17 = (min((arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]), 17484520739196974370));
            }
        }
    }
    #pragma endscop
}
