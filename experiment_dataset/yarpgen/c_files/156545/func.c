/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156545
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
    var_17 = ((/* implicit */short) (+((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_2)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) == (((3843581544637644864ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || (((/* implicit */_Bool) arr_0 [i_0])))))));
                var_19 -= ((/* implicit */signed char) ((unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48550))) + (var_2))), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [(_Bool)1] [12LL] [(_Bool)1])) >> (((((/* implicit */int) (short)6556)) - (6532)))))))));
            }
        } 
    } 
}
