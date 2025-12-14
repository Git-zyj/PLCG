/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106771
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
    var_18 = ((/* implicit */_Bool) max((var_3), (var_3)));
    var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) var_15))))) || (((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned char) var_8))))))))) : (((var_12) >> (((((((((/* implicit */int) var_15)) + (2147483647))) >> (((/* implicit */int) var_16)))) - (1073741792)))))));
    var_20 = ((/* implicit */long long int) var_2);
    var_21 &= ((/* implicit */int) min(((unsigned char)24), (((/* implicit */unsigned char) (signed char)(-127 - 1)))));
    var_22 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (max((((/* implicit */unsigned long long int) (unsigned char)32)), (3670706933137763316ULL))))));
}
