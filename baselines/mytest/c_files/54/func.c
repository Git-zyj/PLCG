/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/54
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
    var_12 |= ((/* implicit */unsigned long long int) ((((_Bool) ((((/* implicit */_Bool) 4704989111379634881ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) && (var_5)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) arr_2 [i_0]))));
        var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(4294967295U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((var_1) ? (arr_0 [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0])))))));
        var_15 |= ((/* implicit */unsigned int) arr_2 [(_Bool)1]);
    }
    var_16 |= (-(((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) var_9))))) ? (4105556386U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)0)))))));
}
