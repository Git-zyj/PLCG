/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108545
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
    var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min(((((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) var_7)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) / (var_8))))) : (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_3))))))))));
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 18446744073709551615ULL)))))), (min((((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))));
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_13)), (var_8)));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((short) (~(var_13)))))));
}
