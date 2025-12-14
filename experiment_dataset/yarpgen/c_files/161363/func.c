/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161363
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
    var_14 = ((/* implicit */unsigned int) var_3);
    var_15 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) (unsigned char)224)) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_5)))), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))))) + (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || ((_Bool)0))))) : (max((var_12), (((/* implicit */unsigned long long int) (unsigned short)65535))))))));
    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) var_11))))))));
}
