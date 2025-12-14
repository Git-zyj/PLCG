/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187629
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_12 = min((((unsigned int) (~(var_4)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((4163512662U) >> (((arr_0 [i_0]) - (3266914443U))))) : (min((var_3), (arr_1 [i_0]))))));
        var_13 = 561307356U;
    }
    var_14 = (+(((unsigned int) var_8)));
    var_15 = var_4;
    var_16 = var_8;
}
