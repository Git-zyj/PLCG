/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147901
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) var_5))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1610612736U)) ? (((/* implicit */int) (_Bool)1)) : (var_4)))) < (((((/* implicit */_Bool) max((var_5), (0U)))) ? (((/* implicit */unsigned long long int) var_8)) : (min((((/* implicit */unsigned long long int) 4294967295U)), (var_6)))))));
}
