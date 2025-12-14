/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_6 ^ var_6) & ((var_4 ? var_4 : -38))))) ? ((43 ? 149 : 37)) : var_0));
    var_11 = var_3;
    var_12 = ((~(16725873571499059869 * var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = ((47 ? (var_3 % var_1) : (1 | 58738)));
                var_14 = (min(var_14, ((min(((((arr_3 [0]) ? (26503 + 0) : -26504))), (-1549757115 & 1549757110))))));
            }
        }
    }
    var_15 = var_3;
    #pragma endscop
}
