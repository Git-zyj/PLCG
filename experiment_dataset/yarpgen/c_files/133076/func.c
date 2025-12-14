/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133076
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
    var_13 &= max((min((((/* implicit */unsigned int) var_3)), (max((255U), (((/* implicit */unsigned int) var_1)))))), (((/* implicit */unsigned int) var_7)));
    var_14 = ((/* implicit */short) min((((/* implicit */unsigned int) max((((/* implicit */int) max((var_7), ((unsigned char)7)))), (min((var_9), (((/* implicit */int) var_7))))))), (var_10)));
}
