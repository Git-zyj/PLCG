/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106625
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
    var_10 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (min((var_9), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) (~(max((max((var_8), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) ((var_0) != (((/* implicit */int) var_7))))))))))));
    var_12 ^= max((((/* implicit */int) (unsigned char)61)), (max((var_4), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16138))) >= (var_1)))))));
}
