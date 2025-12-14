/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((~(min(var_4, 1963978412042678123))))) ? (((-(var_14 + var_6)))) : ((-3379486394091605016 ? 1741013537 : 14762398080401655636))));
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = ((((-15261043067947962815 >> (((min(-3379486394091605009, var_0)) + 3379486394091605071)))) + 1741013553));
                var_19 = (max(var_19, (((-((1885116193 ? 3379486394091605015 : 8670070781236145302)))))));
                var_20 = (min(var_20, ((min((min(var_7, (-2147483647 - 1))), var_15)))));
                var_21 = (max(var_21, 0));
            }
        }
    }
    #pragma endscop
}
