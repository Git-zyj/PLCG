/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110495
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
    var_20 = ((/* implicit */unsigned int) max((((unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_8))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15)))))));
    var_21 = ((/* implicit */long long int) max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_16)))), (((/* implicit */int) var_5))));
    var_22 = ((/* implicit */short) var_6);
    var_23 = var_12;
    var_24 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) (-(var_10)))) ? (min((((/* implicit */long long int) var_9)), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
}
