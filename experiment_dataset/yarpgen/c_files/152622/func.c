/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152622
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
    var_15 &= ((/* implicit */short) var_5);
    var_16 = ((/* implicit */int) ((signed char) var_9));
    var_17 = ((((((((/* implicit */_Bool) 2142359568)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2142359559)) ? (2142359559) : (((/* implicit */int) (short)32767))))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (min(((+(((/* implicit */int) (signed char)-51)))), (438391083))) : (((/* implicit */int) var_0)))))));
}
