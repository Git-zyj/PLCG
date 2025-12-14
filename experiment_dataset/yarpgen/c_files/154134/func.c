/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154134
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) ((((/* implicit */int) var_13)) < (var_1)))) >> (((/* implicit */int) ((var_1) < (var_8)))))) : (((((((/* implicit */unsigned long long int) var_2)) < (var_5))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((var_7) >= (var_7))))))));
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_13))));
    var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_2))) >= (((/* implicit */long long int) var_1))))), ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_9)) : (var_6)))))));
    var_17 += ((/* implicit */unsigned char) (~((((-(var_3))) + (((var_3) + (var_1)))))));
}
