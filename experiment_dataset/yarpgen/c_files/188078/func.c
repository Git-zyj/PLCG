/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188078
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
    var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))))), (((/* implicit */long long int) ((unsigned int) var_10)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned short) var_8)))));
        var_17 = var_3;
        var_18 *= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
    }
    var_19 = ((/* implicit */unsigned long long int) (unsigned char)11);
    var_20 = ((/* implicit */unsigned int) min((max((min((var_2), (((/* implicit */long long int) var_0)))), (var_5))), (((((var_3) < (var_1))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
}
