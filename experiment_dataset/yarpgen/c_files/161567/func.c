/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161567
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
    var_13 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) var_6))))) ? (((int) (unsigned short)3)) : (((/* implicit */int) ((var_8) < (((/* implicit */int) var_7))))))));
    var_14 = ((/* implicit */long long int) max((((int) ((signed char) var_2))), (((/* implicit */int) var_2))));
    var_15 += ((/* implicit */short) max((((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (min((6702309420617346653ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_0) : (var_8)))))), (((/* implicit */unsigned long long int) var_5))));
}
