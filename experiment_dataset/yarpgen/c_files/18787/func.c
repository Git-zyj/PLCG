/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18787
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
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned char) 2132235369U))), (((2162731927U) | (2162731926U)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_21 = ((/* implicit */long long int) max((var_8), (((/* implicit */unsigned char) var_6))));
        var_22 |= ((signed char) var_19);
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_15)), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) / (((/* implicit */int) var_19))))), (min((((/* implicit */unsigned long long int) var_8)), (var_9)))))));
        var_24 = ((/* implicit */unsigned long long int) ((signed char) 2132235369U));
    }
}
