/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163822
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
    var_14 ^= ((/* implicit */int) var_13);
    var_15 |= ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
    var_16 = 9325993662681392657ULL;
    var_17 = max((var_12), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_13)))), (max((var_6), (((/* implicit */unsigned long long int) var_9)))))));
}
