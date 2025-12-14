/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107930
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */int) max((((/* implicit */short) ((8511887503796233059ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))), (var_7)))) : (((/* implicit */int) var_0))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) min((var_6), (((((/* implicit */int) var_11)) | (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) (signed char)15)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8192)))))));
    var_14 = max(((~(((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) var_1)));
}
