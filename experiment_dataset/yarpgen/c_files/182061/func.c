/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182061
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) (+(max((876529395U), (3418437900U)))));
        var_14 |= ((/* implicit */short) arr_0 [(short)0] [i_0]);
        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0 + 2] [i_0])))))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min(((~(arr_3 [4U] [4U]))), (max((var_3), (arr_3 [(short)12] [(short)12]))))))));
    }
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_7), (var_10))))))) ? (var_9) : (var_9)));
    var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_0)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_5))));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_12))));
}
