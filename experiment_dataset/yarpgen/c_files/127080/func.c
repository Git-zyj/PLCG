/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127080
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
    var_15 = ((/* implicit */int) max((var_15), ((+(((/* implicit */int) var_12))))));
    var_16 = ((/* implicit */unsigned short) var_7);
    var_17 = ((((/* implicit */_Bool) ((max((var_1), (((/* implicit */unsigned long long int) 1073741824U)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1618300271U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL))))))) ? (((/* implicit */unsigned int) (((-(((/* implicit */int) var_11)))) / (min((((/* implicit */int) (signed char)-33)), (var_8)))))) : (var_13));
    var_18 = ((/* implicit */_Bool) var_9);
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (min((9223372036854775807LL), (((/* implicit */long long int) ((1007930559U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)188)))))))) : (((/* implicit */long long int) min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) var_10))))))))));
}
