/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181718
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9))))));
    var_15 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_6)))) ? (((((/* implicit */int) var_8)) | (((/* implicit */int) var_2)))) : (((/* implicit */int) ((_Bool) var_5))))));
    var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */_Bool) ((max((var_6), (((/* implicit */unsigned long long int) var_13)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) max((var_8), (((/* implicit */short) var_12)))))))) : (var_4)))));
}
