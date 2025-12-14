/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107491
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
    var_13 = ((/* implicit */unsigned short) ((short) ((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_1)))))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((1048575U), (var_2)))) & ((~(var_6))))))));
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 0U))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32758)))))));
    var_16 ^= ((/* implicit */unsigned int) (signed char)-110);
    var_17 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (1073741824))), ((~(((/* implicit */int) var_8)))))) << ((((~(((long long int) var_8)))) + (15LL)))));
}
