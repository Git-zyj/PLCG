/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111058
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
    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) (signed char)125))))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_18)), (((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) max((var_10), (var_17)))) : (((/* implicit */int) max((var_2), (var_9)))))) : (((/* implicit */int) ((signed char) var_7))))))));
}
