/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130152
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
    var_11 = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))))));
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((int) var_2)))));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_1))))), (max((var_0), (((/* implicit */long long int) var_3)))))) : (((/* implicit */long long int) (+(((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_5))))))))));
}
