/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106526
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_7))))) ? (((var_1) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >> ((((((_Bool)1) ? (10041068188678211513ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (10041068188678211482ULL))))))));
        var_15 *= ((/* implicit */short) ((_Bool) 4294967295U));
    }
    var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned int) var_4)), (var_10))) > (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))))))) / (((((/* implicit */_Bool) ((var_14) << (((((-6148299624931147567LL) + (6148299624931147573LL))) - (6LL)))))) ? (((/* implicit */long long int) max((var_14), (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-1908770121650052560LL)))))));
}
