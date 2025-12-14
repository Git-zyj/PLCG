/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188128
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
    var_11 += ((/* implicit */unsigned long long int) var_7);
    var_12 &= ((/* implicit */unsigned short) min((((/* implicit */short) (!(((/* implicit */_Bool) var_5))))), (var_7)));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (max((((/* implicit */long long int) ((var_8) <= (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (var_2)))));
    var_14 = ((/* implicit */unsigned char) var_10);
    var_15 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_1))))))) : (var_8)));
}
