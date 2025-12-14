/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102285
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((unsigned short) 14801066851907277579ULL));
        arr_3 [(short)14] &= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3645677221802274024ULL)) ? (((/* implicit */int) arr_0 [(_Bool)0])) : (((/* implicit */int) arr_0 [(unsigned short)6]))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) min((arr_2 [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) && (((/* implicit */_Bool) arr_1 [i_1] [i_1])))))));
        var_17 &= ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) (+(var_0)))))));
    }
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)11044))))) ? (var_11) : (min((var_4), (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3645677221802274032ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_2)) ? (var_13) : (var_13)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (14801066851907277588ULL)))) ? (min((((/* implicit */long long int) var_8)), (var_14))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) != (var_14))) ? (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))) : (min((((/* implicit */unsigned long long int) var_5)), (var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_4))))));
}
