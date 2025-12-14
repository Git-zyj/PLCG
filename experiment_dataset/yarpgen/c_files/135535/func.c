/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135535
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
    var_14 *= ((/* implicit */short) var_11);
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (var_10)));
    var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) min((var_9), (((/* implicit */int) var_4))))) ? (((unsigned long long int) (_Bool)1)) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) var_8)) : (var_10)))))));
    var_17 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */int) var_11)), (536870911)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
}
