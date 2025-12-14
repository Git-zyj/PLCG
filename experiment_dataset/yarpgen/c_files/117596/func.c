/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117596
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))), (min((var_1), (((/* implicit */unsigned int) (unsigned short)65535)))))) : (var_16)));
    var_19 = ((/* implicit */unsigned int) min((var_19), (3631622813U)));
}
