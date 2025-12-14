/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187265
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((0ULL) | (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_13)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) var_10))))))) : (min((((/* implicit */unsigned long long int) ((int) 0))), (((unsigned long long int) var_7))))));
    var_15 = ((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_8)))) << (((((/* implicit */int) var_7)) % (((/* implicit */int) (unsigned short)8192))))))) : (var_9)));
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))) % (((((/* implicit */_Bool) max((((/* implicit */int) var_13)), (0)))) ? (((/* implicit */unsigned long long int) -17LL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (7880163249527831084ULL)))))));
    var_17 &= ((/* implicit */short) var_2);
}
