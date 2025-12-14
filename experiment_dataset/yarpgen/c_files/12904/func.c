/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12904
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) var_8);
                var_18 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_15)), (((((((/* implicit */long long int) var_1)) / (var_12))) ^ (max((((/* implicit */long long int) var_16)), (var_9)))))));
}
