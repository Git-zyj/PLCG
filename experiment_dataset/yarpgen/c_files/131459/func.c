/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131459
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (max((((/* implicit */unsigned int) (short)15378)), (var_13)))));
    var_19 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((var_16) == (((/* implicit */unsigned int) var_10))))) : (((/* implicit */int) ((short) var_14))))))));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_11))))))))) != (((((/* implicit */_Bool) min((var_5), ((short)-15392)))) ? (max((var_13), (((/* implicit */unsigned int) var_11)))) : (((((/* implicit */_Bool) var_17)) ? (var_13) : (4294967295U))))))))));
}
