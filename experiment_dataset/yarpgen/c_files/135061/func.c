/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135061
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) != (max((var_5), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_10)), (var_9))))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) + (var_6)));
    var_16 = ((/* implicit */unsigned long long int) var_4);
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_0), (var_8)))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_8)))) : (((/* implicit */int) var_4))))), (var_3)));
}
