/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162910
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
    var_15 = ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1 + 1] = ((/* implicit */signed char) var_3);
                var_16 = ((/* implicit */_Bool) var_5);
            }
        } 
    } 
}
