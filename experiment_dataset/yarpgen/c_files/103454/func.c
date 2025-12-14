/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103454
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
    var_17 &= ((/* implicit */short) ((var_11) == (((/* implicit */long long int) ((int) max((((/* implicit */short) (unsigned char)51)), ((short)-5365)))))));
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */int) (unsigned short)255)))))));
    var_19 &= ((/* implicit */int) ((((/* implicit */_Bool) -67659923)) ? (((/* implicit */long long int) max((min((((/* implicit */unsigned int) var_8)), (var_12))), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) % (2139095040))))))) : (min((((/* implicit */long long int) (signed char)127)), (((((/* implicit */long long int) var_0)) - (var_11)))))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((_Bool) min(((unsigned short)255), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))))));
    var_21 ^= ((/* implicit */short) max((var_5), (((/* implicit */unsigned int) var_8))));
}
