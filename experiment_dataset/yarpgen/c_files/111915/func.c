/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111915
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
    var_16 = ((((/* implicit */_Bool) max((((((/* implicit */int) var_9)) / (((/* implicit */int) var_10)))), (((/* implicit */int) max((var_10), (((/* implicit */short) var_4)))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14)));
    var_17 = ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) var_9)))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) max((var_10), (((/* implicit */short) var_0)))))))) ? (((/* implicit */unsigned int) min((((((/* implicit */int) var_8)) << (((((/* implicit */int) var_4)) - (202))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) : (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_13))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))))));
}
