/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160502
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
    var_10 &= ((/* implicit */unsigned short) var_5);
    var_11 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)22)) & (((/* implicit */int) var_1))))) ? ((~(((((/* implicit */_Bool) 16048019611989600549ULL)) ? (((/* implicit */unsigned long long int) 3582970844U)) : (9810174486751698412ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((/* implicit */int) (_Bool)1)))))));
    var_12 -= ((/* implicit */unsigned char) ((max((var_0), (((/* implicit */long long int) var_6)))) % (((/* implicit */long long int) var_8))));
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) 0U))));
    var_14 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (16048019611989600549ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 711996452U)) && (((/* implicit */_Bool) 140720308486144ULL)))))) : (var_0)));
}
