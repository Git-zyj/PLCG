/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150354
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
    var_16 = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((min((((/* implicit */int) var_3)), (-706342936))) == (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (var_1)))))) : (((/* implicit */int) ((short) max((var_3), (((/* implicit */short) (signed char)40)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_14)))), (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_0] [i_0])))) ? (-706342936) : ((+(((/* implicit */int) (signed char)40))))))) : (max((((((/* implicit */_Bool) var_14)) ? (-3500099492419201809LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) arr_0 [i_0])))));
        arr_3 [(unsigned short)10] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (signed char)-1)))) - (((/* implicit */int) ((((/* implicit */int) (signed char)-41)) <= ((+(((/* implicit */int) var_8)))))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (signed char)127))));
    }
}
