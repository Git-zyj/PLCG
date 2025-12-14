/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111810
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
    var_18 = ((/* implicit */signed char) max((((((var_17) < (var_13))) ? (((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) (~(var_7)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)15444))))) : (var_17))))));
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)30160)) ? (((/* implicit */long long int) var_16)) : (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)104))) : (var_7)))))))));
    var_20 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)15444)) + (((/* implicit */int) var_14))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (min((var_13), (((/* implicit */unsigned int) (unsigned short)15444))))))));
}
