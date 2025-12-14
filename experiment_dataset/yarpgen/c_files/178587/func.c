/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178587
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_13))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) (_Bool)0))))) >= (((unsigned long long int) min((((/* implicit */unsigned long long int) var_3)), (var_4))))));
    var_21 += ((/* implicit */short) (-(((/* implicit */int) ((signed char) var_0)))));
    var_22 = ((/* implicit */unsigned short) max((min((var_12), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))) + (((/* implicit */int) var_15)))))));
}
