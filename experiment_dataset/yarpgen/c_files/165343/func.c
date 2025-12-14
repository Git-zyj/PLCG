/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165343
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
    var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) <= ((-(((/* implicit */int) var_5))))))), (min((((/* implicit */unsigned long long int) ((var_4) == (((/* implicit */int) var_0))))), (var_8)))));
    var_13 = ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_11)) : (var_3))), (((/* implicit */unsigned long long int) var_11))))));
}
