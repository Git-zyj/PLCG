/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123895
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
    var_10 = ((/* implicit */unsigned long long int) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (min((min((var_1), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) var_6)))))))));
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (_Bool)1))));
    var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) min(((short)-512), (((/* implicit */short) var_4)))))));
}
