/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163642
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
    var_12 = ((/* implicit */signed char) var_0);
    var_13 = var_0;
    var_14 |= ((/* implicit */unsigned int) min(((-(var_3))), ((~(var_3)))));
    var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65532)) ? (5814075755138424387ULL) : (13846808607380050653ULL)))) ? (min((((/* implicit */unsigned long long int) var_0)), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_11))))))))));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_11))));
}
