/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171111
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
    var_14 = ((/* implicit */signed char) var_8);
    var_15 = (+(min((((var_11) + (((/* implicit */int) var_3)))), (((/* implicit */int) var_5)))));
    var_16 = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) var_2)))) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_1)), (var_5)))))));
}
