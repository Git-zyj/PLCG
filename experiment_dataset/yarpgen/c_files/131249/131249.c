/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = (~0);
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [3] = ((((((min((arr_4 [14]), var_2))))) | (var_9 - var_0)));
                arr_7 [i_0] [i_1] [i_0] = ((((((arr_1 [i_1 + 1] [i_1 + 1]) ^ (arr_1 [i_1 - 4] [i_1 - 4])))) ? 8433813632757541547 : var_0));
                var_19 = ((var_2 ? (max((((var_1 ? var_10 : -8433813632757541548))), (min(-2572055113394241589, (arr_4 [i_1]))))) : (max((((arr_1 [i_0] [i_1]) ? 8354859034643546445 : 8433813632757541539)), 8433813632757541527))));
            }
        }
    }
    #pragma endscop
}
