/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_7 * (!var_16)));
    var_18 = (max((max(var_6, ((1 ? 230 : 84)))), (((84 + var_15) ? (var_11 + var_2) : (max(172, var_0))))));
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = var_7;
                var_20 -= var_9;
            }
        }
    }
    #pragma endscop
}
