/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149812
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_17 -= ((/* implicit */short) arr_0 [i_0 + 1]);
        arr_2 [i_0] = ((/* implicit */short) ((arr_1 [i_0 + 1]) ? (((arr_0 [i_0 - 1]) ^ (arr_0 [i_0 + 1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)246)) % (((/* implicit */int) var_5)))))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0])) >= (var_4))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_16)))) : (((arr_1 [i_0]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-7291)))))))));
    }
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_16))))) : (((((/* implicit */_Bool) var_7)) ? (-380863827) : (((/* implicit */int) var_14)))))))))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) 3494897431U))));
}
