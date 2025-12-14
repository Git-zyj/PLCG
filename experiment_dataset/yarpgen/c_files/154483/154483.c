/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (-460 && var_2)));
    var_15 = (max(var_1, ((min((~var_5), (4405259765824331114 != var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 -= min((((var_7 ? var_5 : ((((arr_0 [i_1]) > 32569)))))), (min(1, (min(1, 18446744073709551610)))));
                var_17 |= ((((max(var_6, var_12))) && var_4));
            }
        }
    }
    #pragma endscop
}
