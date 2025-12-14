/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_1 && var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((((((arr_2 [19]) ^ (((arr_2 [i_0]) ? var_10 : 2))))) ? ((var_4 ? (min(var_13, 38917)) : var_7)) : var_4));
                arr_4 [i_1] = (min((((15591209541708260503 ? 643166145 : 48409))), (arr_1 [i_0] [i_1])));
                var_17 = (((((max(-1, var_3)))) ? ((((max(var_11, var_11))))) : (((arr_2 [i_0]) ? var_9 : (arr_2 [i_0])))));
            }
        }
    }
    var_18 = (var_5 - 4294967295);
    var_19 = var_13;
    var_20 = var_6;
    #pragma endscop
}
