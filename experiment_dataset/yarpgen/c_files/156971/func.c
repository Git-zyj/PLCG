/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156971
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
    var_15 = min((((((/* implicit */_Bool) ((var_4) & (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((int) var_8)) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((short) ((int) var_7)))));
    var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (unsigned char)127))) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) var_1))))), (((var_6) ? (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_1))))))))));
    var_17 = (~(((((/* implicit */_Bool) min((2147483647), (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)185)) || (var_10)))) : (((/* implicit */int) ((signed char) var_4))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        var_19 = ((/* implicit */int) ((var_8) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
}
