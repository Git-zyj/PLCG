/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108143
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
    var_14 = ((/* implicit */signed char) (+(max((max((((/* implicit */unsigned int) (_Bool)1)), (var_4))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))))));
    var_15 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_10))))), (min((2097148ULL), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) ((var_4) | (((/* implicit */unsigned int) (+((-2147483647 - 1))))))))));
    var_16 ^= (unsigned short)65535;
    var_17 *= ((/* implicit */unsigned long long int) min((var_2), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) & (var_9)))) ? (var_4) : (min((var_9), (((/* implicit */unsigned int) (_Bool)0))))))));
}
