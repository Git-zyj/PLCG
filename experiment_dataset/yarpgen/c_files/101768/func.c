/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101768
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
    var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)7)) % (((((/* implicit */_Bool) (short)4372)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (unsigned char)255)))))) <= (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_3)))))));
    var_14 &= ((/* implicit */unsigned char) var_3);
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned long long int) (short)19227)))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (min((((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) (signed char)-44)))), (((/* implicit */int) var_8)))) : (max((-1073806019), (((/* implicit */int) (short)-19230))))));
}
