/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174702
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
    var_11 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))))) : ((-(max((((/* implicit */long long int) var_0)), (var_9)))))));
    var_12 &= ((/* implicit */short) max((((((/* implicit */_Bool) 1543142502)) ? (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)29)))) : (((int) (unsigned short)65535)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    var_13 ^= ((/* implicit */unsigned int) min((((var_9) | (var_6))), (((/* implicit */long long int) min(((unsigned short)46821), (((/* implicit */unsigned short) (short)-6900)))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_10)) != (var_9))))) : (var_2)));
}
