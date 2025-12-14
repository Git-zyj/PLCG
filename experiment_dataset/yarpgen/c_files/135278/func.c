/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135278
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
    var_15 |= ((/* implicit */signed char) max((var_0), (((/* implicit */int) (signed char)3))));
    var_16 = ((/* implicit */short) max((max((((/* implicit */long long int) ((((/* implicit */int) (short)7647)) >> (((4294967289U) - (4294967284U)))))), (min((((/* implicit */long long int) (signed char)-47)), (-4209196682814931233LL))))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) | (((long long int) (short)-7631))))));
    var_17 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_1)), (var_5)));
}
