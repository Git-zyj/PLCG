/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18098
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (max((min((var_7), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) ((((/* implicit */int) (short)-23053)) / (var_0))))))));
    var_19 = ((/* implicit */signed char) var_7);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] |= ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))));
        var_20 = max((((((/* implicit */_Bool) (unsigned short)6372)) ? (min((((/* implicit */unsigned int) arr_0 [(short)1])), (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)0)) : (var_0)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(((/* implicit */int) arr_2 [i_0] [(unsigned char)16])))) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (min((max((((/* implicit */int) var_6)), (var_2))), (((/* implicit */int) ((short) var_13))))) : (((/* implicit */int) ((min((var_4), (((/* implicit */unsigned int) var_15)))) < (((/* implicit */unsigned int) var_0))))))))));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
}
