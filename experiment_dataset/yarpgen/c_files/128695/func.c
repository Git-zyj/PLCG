/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128695
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
    var_16 = ((/* implicit */signed char) max((((((/* implicit */int) ((signed char) var_2))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) -1))))))), (((((/* implicit */int) var_9)) / (((/* implicit */int) var_11))))));
    var_17 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */signed char) var_10)), ((signed char)80)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) (signed char)47)) & (((/* implicit */int) (signed char)7)))))), (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (signed char)102)) : (-1894116090)))));
}
