/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167844
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
    var_19 |= ((/* implicit */_Bool) var_2);
    var_20 = ((/* implicit */unsigned char) var_4);
    var_21 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (var_14)))) ? (((/* implicit */unsigned int) var_11)) : (var_16)))));
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_14)))) ? (((((_Bool) var_6)) ? (min((((/* implicit */long long int) var_18)), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60282))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60282))))))));
}
