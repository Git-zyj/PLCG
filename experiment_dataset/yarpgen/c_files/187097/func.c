/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187097
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_16), (((/* implicit */unsigned char) var_9)))))) : (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_0)));
    var_18 = ((/* implicit */unsigned short) 0U);
    var_19 = ((/* implicit */long long int) ((short) 4294967295U));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (-((~(var_14)))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [(unsigned char)2])) : (((/* implicit */int) arr_0 [i_0]))))) / ((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (4294967295U)))))));
    }
}
