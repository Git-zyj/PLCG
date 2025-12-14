/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165380
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
    var_16 |= ((/* implicit */short) var_9);
    var_17 = max((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) ((var_14) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31609)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (304382279)))) : (((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_14))))));
    var_18 = var_12;
    var_19 = ((/* implicit */signed char) var_8);
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) : (((int) var_8)))))));
}
