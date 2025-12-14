/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143548
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                var_20 |= ((/* implicit */_Bool) var_5);
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (1723149487U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1 + 1])), (var_14)))));
            }
        } 
    } 
    var_22 = var_11;
}
