/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107844
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) var_10))));
    var_12 -= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (var_10)))) ? (min((((/* implicit */int) var_6)), (var_3))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (var_8)))))));
    var_13 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) >> (((var_3) + (769631179))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_5)) : (var_0))) > (min((var_0), (((/* implicit */unsigned long long int) var_9)))))))));
}
