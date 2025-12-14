/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129915
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
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (var_4)))), (((unsigned int) var_14)))))));
    var_18 &= ((var_4) | (max(((-(((/* implicit */int) var_16)))), (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)1)))))));
    var_19 |= ((/* implicit */int) var_12);
    var_20 = ((/* implicit */_Bool) min(((short)-4895), ((short)29447)));
    var_21 = ((/* implicit */unsigned long long int) min((((((((/* implicit */int) (short)-29444)) + (2147483647))) >> (((((/* implicit */int) (short)29458)) - (29443))))), (((/* implicit */int) var_14))));
}
