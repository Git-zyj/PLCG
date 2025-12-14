/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127764
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
    var_17 = ((/* implicit */signed char) ((int) var_2));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_8)) : (var_11)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : ((+(var_2)))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_0))), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_9)))))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_11)))) : (min((((/* implicit */long long int) var_1)), (var_10)))))));
    var_19 &= ((((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) var_14))), (var_11)))) ? ((-((+(var_16))))) : (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)65530)))));
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)46)), ((unsigned short)13)));
}
