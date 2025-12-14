/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182409
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
    var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned short) var_9)), (var_8)));
    var_13 = ((/* implicit */signed char) var_8);
    var_14 = ((/* implicit */unsigned int) min((var_4), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1))))))))));
    var_15 -= ((/* implicit */unsigned int) var_5);
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((var_2) | (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12286))) : (var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) var_5)))))))))));
}
