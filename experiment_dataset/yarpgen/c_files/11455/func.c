/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11455
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
    var_10 = ((/* implicit */short) min((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))) : (min((((/* implicit */unsigned int) var_5)), (var_2)))))));
    var_11 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max(((short)32767), ((short)32597)))) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_5)) ? (min((var_2), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_2))))))))));
}
