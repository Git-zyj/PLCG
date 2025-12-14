/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176048
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
    var_15 = var_6;
    var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ ((~(((/* implicit */int) var_14))))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) max(((unsigned char)11), ((unsigned char)1)))) ? (((/* implicit */int) ((signed char) var_8))) : (((((/* implicit */int) var_5)) | (((/* implicit */int) var_2))))))));
    var_17 = ((/* implicit */signed char) min((((/* implicit */int) var_7)), ((~(((/* implicit */int) var_9))))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) var_5)) : (min(((+(((/* implicit */int) (unsigned char)243)))), (((/* implicit */int) (signed char)65))))));
    var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((/* implicit */int) (unsigned char)237)) - (237)))))) ? (((/* implicit */int) (short)28143)) : (((((/* implicit */int) var_2)) << (((((/* implicit */int) (unsigned char)219)) - (219))))))), ((((+(((/* implicit */int) (unsigned char)15)))) / ((-(((/* implicit */int) var_12))))))));
}
