/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156301
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
    var_13 = ((/* implicit */long long int) min((((short) var_12)), (((/* implicit */short) ((((/* implicit */_Bool) ((short) (unsigned char)112))) && (((/* implicit */_Bool) var_10)))))));
    var_14 = ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) (unsigned char)23)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = arr_0 [i_0];
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (unsigned char)35))));
        var_15 = ((/* implicit */int) max((var_15), (((int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_1 [(short)8] [i_0]))))), (arr_2 [i_0] [i_0]))))));
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62417)))))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)147)) >= (((/* implicit */int) (unsigned char)73))))) : (((/* implicit */int) (signed char)121)))) : ((-(((/* implicit */int) var_12))))));
}
