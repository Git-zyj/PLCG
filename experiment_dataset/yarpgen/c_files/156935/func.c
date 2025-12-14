/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156935
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
    for (int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((unsigned int) arr_0 [i_0]));
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) & (arr_2 [i_0])));
    }
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) min((-8362530037259042351LL), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) var_1)) : (((var_6) | (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) var_9))));
}
