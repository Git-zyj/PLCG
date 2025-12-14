/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161470
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
    for (int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (arr_0 [i_0 - 1])));
        var_15 += ((/* implicit */long long int) ((int) (_Bool)0));
        var_16 = ((/* implicit */unsigned int) var_9);
    }
    var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (1152851135862669312ULL) : (((/* implicit */unsigned long long int) var_6))))) ? ((-(((/* implicit */int) (short)0)))) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-22)) : (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (var_5))))) : (((((/* implicit */unsigned int) var_6)) + (var_12))))) : (((min((var_12), (((/* implicit */unsigned int) (signed char)(-127 - 1))))) | (var_2)))));
    var_18 = ((/* implicit */int) var_9);
}
