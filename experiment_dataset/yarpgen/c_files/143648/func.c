/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143648
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (((((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (var_13)))) % (min((((/* implicit */long long int) var_16)), (var_2)))))));
    var_19 *= ((/* implicit */unsigned char) (+(max((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (_Bool)1))))), (min((((/* implicit */int) var_10)), (var_0)))))));
    var_20 = ((/* implicit */int) (signed char)16);
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_14))) ? (min((var_16), (((/* implicit */int) var_17)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) ? (((/* implicit */unsigned long long int) (~(min((var_6), (var_0)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 3844051645U)) : (var_2)))), (max((7289636447567927413ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
}
