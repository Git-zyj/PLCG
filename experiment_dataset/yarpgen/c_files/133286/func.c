/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133286
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
    var_20 -= ((/* implicit */unsigned short) max((((int) ((var_7) % (((/* implicit */long long int) ((/* implicit */int) (short)8192)))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_19)) ? (var_4) : (((/* implicit */unsigned long long int) var_5))))))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (min((((var_7) | (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) -3704042047452301369LL)) ? (var_11) : (((/* implicit */int) var_8))))))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
}
