/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115218
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)6355))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) + (2250840492U)));
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_0 [i_0]) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (((((/* implicit */_Bool) 155303503)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) - (((/* implicit */unsigned int) 1575279791))));
    }
    var_14 = ((/* implicit */long long int) max((((((/* implicit */int) var_2)) + (((var_11) << (((((/* implicit */int) (_Bool)1)) - (1))))))), (var_12)));
    var_15 = ((/* implicit */unsigned int) var_2);
}
