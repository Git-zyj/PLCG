/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112272
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
    var_15 += ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_14))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) || (((/* implicit */_Bool) ((int) ((var_3) + (((/* implicit */int) var_4))))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_14) > (((/* implicit */long long int) var_9))))) ^ (((((/* implicit */_Bool) (+(var_2)))) ? (var_3) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (var_8)))))));
    var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */long long int) var_3)) & (min((((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (var_14)))))));
}
