/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112790
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
    var_15 = ((/* implicit */_Bool) var_11);
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((var_11) << (((/* implicit */int) (_Bool)1)))))));
    var_17 = ((/* implicit */unsigned long long int) var_1);
    var_18 += ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned int) var_5))));
}
