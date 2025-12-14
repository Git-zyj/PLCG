/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1243
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
    var_15 |= max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_0) < (((/* implicit */long long int) var_11)))))))), ((-(var_14))));
    var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(524288)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (min((min((var_11), (var_8))), (524270)))));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_10))));
}
