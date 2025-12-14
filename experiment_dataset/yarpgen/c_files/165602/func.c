/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165602
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
    var_18 = ((/* implicit */short) ((((/* implicit */int) var_7)) << (((((/* implicit */int) var_17)) - (65146)))));
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) var_1)))))));
    var_20 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((~(((((/* implicit */int) var_10)) >> (((arr_1 [i_0] [i_0]) - (3017865702564492700ULL))))))) > (((/* implicit */int) ((short) var_7))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41752)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90))) : (4881873256226791658ULL)))) ? (((((((((/* implicit */int) arr_0 [12U])) + (2147483647))) >> (((((/* implicit */int) var_15)) + (73))))) >> (((((/* implicit */int) arr_0 [i_0])) + (2497))))) : ((~(((/* implicit */int) ((((/* implicit */int) (signed char)73)) > (((/* implicit */int) var_15)))))))));
        arr_4 [(short)10] &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0 + 2] [i_0 + 2]) : (((/* implicit */unsigned long long int) 4217454800U))))));
        arr_5 [5U] = ((/* implicit */signed char) min(((~(((/* implicit */int) (signed char)64)))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 3])) > (((/* implicit */int) var_1)))))));
    }
}
