/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1014
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) (~(var_11)));
        arr_4 [i_0] = 4266908802U;
        var_18 *= ((/* implicit */unsigned int) ((-6899903725954892306LL) | (-6899903725954892306LL)));
        var_19 = ((/* implicit */long long int) max((var_19), (((var_15) / (-6899903725954892304LL)))));
        arr_5 [i_0] = ((/* implicit */short) ((long long int) var_1));
    }
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) var_7)) ? (var_16) : (-9027393558256178755LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))))));
}
