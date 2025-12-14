/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189319
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 = ((/* implicit */long long int) var_19);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) max((428593614), (428593616)));
                var_21 = 871028612U;
            }
        } 
    } 
}
