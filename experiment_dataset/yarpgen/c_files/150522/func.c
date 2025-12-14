/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150522
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(signed char)13] = ((/* implicit */signed char) ((unsigned long long int) arr_0 [i_0]));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((signed char) arr_1 [i_0]));
    }
    var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_13)) ? (var_4) : (3170500479U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) / (var_9)));
    var_16 = ((/* implicit */signed char) var_5);
}
