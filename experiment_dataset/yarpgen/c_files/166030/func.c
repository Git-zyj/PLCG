/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166030
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */short) var_9))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) var_9))))) : (var_5)));
    var_13 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) != (var_11))))) : (var_2)))));
    var_14 = max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)55600))))) : ((~(var_11))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (1726239027U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (min((var_0), (var_10))))));
}
