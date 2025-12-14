/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176188
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
    var_19 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) * (((/* implicit */int) var_6)));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_0))));
    var_21 &= ((/* implicit */signed char) ((unsigned char) max((((/* implicit */unsigned int) var_11)), (((unsigned int) (unsigned char)75)))));
    var_22 = ((/* implicit */int) min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) min(((unsigned char)152), ((unsigned char)77)))) ? (((((/* implicit */_Bool) var_16)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
}
