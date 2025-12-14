/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (max(var_0, var_4));
    var_11 = (((~1) ? ((((min(var_7, var_0))) ? (var_0 && var_9) : ((max(var_6, var_8))))) : -6128));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [10] [i_0] [i_0] = ((((((6123 & 9007199254739968) ^ (~var_7)))) ? (1893192459 || 1) : (arr_1 [11] [i_1])));
                var_12 = var_5;
                var_13 = ((6148 ? 2631141729 : 39732));
            }
        }
    }
    #pragma endscop
}
