/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188285
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
    var_19 |= var_15;
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (min(((-9223372036854775807LL - 1LL)), (9223372036854775807LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (var_18)))))))));
    var_21 = ((/* implicit */unsigned int) max((((((var_16) < (((/* implicit */long long int) var_17)))) ? (((/* implicit */int) ((var_3) || (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (unsigned short)65535))))))), (((/* implicit */int) min((((/* implicit */unsigned short) ((17LL) < (((/* implicit */long long int) 0U))))), (min((var_8), (var_9))))))));
}
