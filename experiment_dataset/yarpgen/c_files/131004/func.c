/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131004
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
    var_15 &= ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))) <= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2)))) : (var_4)))));
    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned short) var_9))), (var_4)));
    var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) ((long long int) ((unsigned int) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) min((min((var_2), (var_13))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)0))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned long long int) var_6)) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (unsigned short)24)) ? (var_7) : (((/* implicit */long long int) var_4))))))))));
}
