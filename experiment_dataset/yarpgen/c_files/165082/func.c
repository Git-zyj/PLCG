/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165082
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (signed char)-8)), (1U))) + (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_1))))))))) ? (min((max((((/* implicit */unsigned int) (_Bool)1)), (0U))), (min((524287U), (((/* implicit */unsigned int) (_Bool)1)))))) : (max((((/* implicit */unsigned int) var_5)), (min((((/* implicit */unsigned int) var_12)), (var_6)))))))));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_4)), ((unsigned char)63))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (4294967295U)))));
}
