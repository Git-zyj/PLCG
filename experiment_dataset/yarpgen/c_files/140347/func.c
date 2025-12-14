/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140347
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_16 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (arr_1 [8])));
        var_17 |= ((/* implicit */unsigned int) var_8);
    }
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
    var_19 ^= ((/* implicit */unsigned int) ((var_0) ? (((((var_11) != (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) 287948901175001088ULL)) ? (var_4) : (((/* implicit */int) var_3)))))) : (min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) var_8))))));
}
