/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130546
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
    var_12 = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((((var_8) + (2147483647))) >> (((/* implicit */int) var_7)))) : (var_8))) & (((((/* implicit */_Bool) ((((/* implicit */int) (short)-29510)) / (var_6)))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (var_8)))));
    var_14 = ((/* implicit */int) var_9);
    var_15 = ((/* implicit */unsigned int) (_Bool)1);
    var_16 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) + (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? ((-(((/* implicit */int) (short)32767)))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_5))))))), (((((/* implicit */_Bool) var_10)) ? (min((var_2), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))))));
}
