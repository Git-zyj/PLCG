/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159879
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
    var_12 = ((/* implicit */unsigned long long int) var_3);
    var_13 = ((/* implicit */_Bool) min((((var_8) / (((((/* implicit */_Bool) var_7)) ? (var_6) : (var_5))))), (max((min((((/* implicit */unsigned long long int) var_1)), (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))))))));
    var_14 -= ((/* implicit */unsigned int) ((unsigned short) max((((unsigned long long int) var_4)), (var_7))));
}
