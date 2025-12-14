/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12637
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
    var_15 += ((/* implicit */long long int) (-(((/* implicit */int) var_14))));
    var_16 = ((/* implicit */unsigned long long int) var_3);
    var_17 *= ((/* implicit */unsigned short) ((unsigned char) max((((((/* implicit */_Bool) (signed char)-11)) ? (var_8) : (((/* implicit */int) var_7)))), (((((/* implicit */int) (signed char)-11)) ^ (((/* implicit */int) var_7)))))));
    var_18 |= min(((signed char)11), (((/* implicit */signed char) ((var_8) != (((/* implicit */int) var_14))))));
}
