/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189432
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
    for (signed char i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */unsigned char) arr_0 [i_0]);
        var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) (-(var_13)))) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) var_9))));
        var_21 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_1 [(_Bool)1] [i_0])) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (-3455168019943772487LL))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_13))), (((/* implicit */unsigned long long int) var_5)))) : ((-(var_15)))));
    var_23 = ((((/* implicit */_Bool) ((unsigned int) 11938211504000012275ULL))) ? (((((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
    var_24 = ((/* implicit */long long int) var_17);
}
