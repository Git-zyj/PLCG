/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((max(7112611258314228643, (var_11 && var_11))) > (var_1 >> var_4)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = ((-var_5 ? (((max((arr_3 [i_0 - 1]), (arr_3 [i_0 - 1]))))) : (((arr_3 [i_0 + 1]) + 405679682))));
                var_15 = ((max(var_3, ((var_12 ? var_10 : 0)))));
                var_16 = (((!(((0 ? var_8 : var_9))))));
            }
        }
    }
    #pragma endscop
}
