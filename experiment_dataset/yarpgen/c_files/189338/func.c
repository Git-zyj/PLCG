/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189338
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((-722307961), (((/* implicit */int) var_5))))) - (((var_2) + (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (min((min((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (_Bool)1))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [1LL])) >> (((var_4) - (1102955938)))))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (var_10)));
    }
}
