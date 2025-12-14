/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170175
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
    var_14 &= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))))))));
    var_15 |= ((/* implicit */_Bool) ((max((((/* implicit */int) ((_Bool) var_7))), (var_1))) - (min((((/* implicit */int) min(((_Bool)0), (var_5)))), (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_11))))))));
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((signed char) ((var_8) ? (((var_8) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))) : (((((/* implicit */int) var_12)) * (((/* implicit */int) var_6))))))))));
}
