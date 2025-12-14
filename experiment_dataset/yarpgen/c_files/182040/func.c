/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182040
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
    var_19 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) var_18)), (var_11))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((unsigned short) var_5))))))));
    var_20 &= ((/* implicit */unsigned char) min((var_8), (((/* implicit */int) ((signed char) min((var_3), (((/* implicit */unsigned long long int) var_14))))))));
}
