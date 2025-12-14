/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = ((!((((((arr_4 [i_0]) ? (arr_0 [i_1]) : var_13))) && (arr_2 [i_1])))));
                var_16 = (max(var_5, ((((arr_0 [i_0]) <= var_6)))));
            }
        }
    }
    var_17 = (min(var_17, ((max(-9161981733962237825, var_0)))));
    var_18 = ((-1885514848 ^ ((((((127 ? 46 : -16829))) && var_11)))));
    #pragma endscop
}
