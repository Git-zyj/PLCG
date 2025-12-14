/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173343
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
    var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
    var_21 = ((/* implicit */_Bool) min((((/* implicit */int) var_2)), ((-(((/* implicit */int) (!((_Bool)1))))))));
    var_22 &= ((/* implicit */unsigned int) ((min((((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_15))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_19)), ((signed char)127)))))) & (((/* implicit */unsigned long long int) var_18))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (var_18)))) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 65535U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)49109))))) ? (((8378560574380120165LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)57))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
}
