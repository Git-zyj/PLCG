/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172610
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23863))) : ((~(var_12)))));
        var_15 *= ((/* implicit */_Bool) ((long long int) var_9));
        var_16 ^= ((/* implicit */unsigned long long int) (!(arr_0 [(_Bool)1] [i_0])));
        var_17 = ((/* implicit */_Bool) ((unsigned int) var_7));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
}
