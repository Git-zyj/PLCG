/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167295
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
    var_12 = ((/* implicit */signed char) ((var_11) >> (((/* implicit */int) ((signed char) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_7)) + (76)))))))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (max((var_8), (((/* implicit */unsigned int) var_4))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (14U) : (var_8)))), (max((var_3), (((/* implicit */unsigned long long int) 5U)))))) : (var_0)));
}
