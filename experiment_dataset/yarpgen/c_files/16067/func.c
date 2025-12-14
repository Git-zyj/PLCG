/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16067
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
    var_16 += max((((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_9))), (var_14));
    var_17 = ((/* implicit */signed char) min((min((var_5), (((/* implicit */unsigned long long int) ((var_2) >> (((var_11) - (10807181909620885204ULL)))))))), (((var_14) % (((/* implicit */unsigned long long int) var_7))))));
}
