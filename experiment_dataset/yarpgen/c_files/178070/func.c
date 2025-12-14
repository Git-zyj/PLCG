/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178070
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((unsigned short) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (var_4)))))))));
    var_15 = ((/* implicit */unsigned char) var_4);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_11)) * (((/* implicit */int) var_3)))), (((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)128)) == (((/* implicit */int) (unsigned short)0)))) ? ((+(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))))) : (max((((/* implicit */long long int) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) (unsigned short)0))))), (min((((/* implicit */long long int) var_6)), (var_2)))))));
    var_17 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((short) (unsigned short)65531))), (1381926103U))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
}
