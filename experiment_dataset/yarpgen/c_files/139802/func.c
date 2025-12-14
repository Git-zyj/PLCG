/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139802
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((signed char) var_4)))) ? (((/* implicit */int) min((((/* implicit */short) var_6)), (var_13)))) : (((/* implicit */int) var_4))));
    var_21 = ((/* implicit */unsigned long long int) var_18);
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (~(var_17))))));
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_16)), ((~(((((/* implicit */_Bool) (short)8192)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_0))))))))));
}
