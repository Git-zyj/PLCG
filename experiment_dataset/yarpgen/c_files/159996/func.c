/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159996
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
    var_18 = ((/* implicit */unsigned char) ((515705119U) ^ (min((((((/* implicit */_Bool) 515705119U)) ? (3779262175U) : (3779262169U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (4294967295U))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
        var_20 ^= ((/* implicit */unsigned int) var_5);
        var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((var_12) << (((((/* implicit */int) var_5)) - (56377))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
    }
}
