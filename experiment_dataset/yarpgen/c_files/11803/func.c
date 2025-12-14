/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11803
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) << (((-942302925) + (942302929))))) ^ (942302925)))) ? (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_10)) - (35484))))))) : (var_1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) arr_0 [i_0]);
        var_17 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (-942302925)))) != (((/* implicit */int) ((short) var_13)))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 942302925)) ? (((/* implicit */long long int) 942302925)) : (2424344340198954085LL)));
        var_19 = ((/* implicit */unsigned char) var_13);
    }
}
