/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172239
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
    var_14 = ((/* implicit */signed char) (~(((var_11) - (((/* implicit */unsigned long long int) var_3))))));
    var_15 = ((/* implicit */short) (+(((/* implicit */int) var_5))));
    var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((var_8), (((/* implicit */unsigned int) var_13))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (max((((/* implicit */unsigned short) (short)-24164)), (var_5)))))) : (((/* implicit */int) min((var_13), (((/* implicit */unsigned short) var_9)))))));
}
