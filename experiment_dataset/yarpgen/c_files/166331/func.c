/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166331
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
    var_11 &= ((/* implicit */unsigned short) min((var_9), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)103)))) & (((/* implicit */int) var_4)))))));
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (~(((int) min(((unsigned short)32055), (((/* implicit */unsigned short) var_7))))))))));
    var_13 &= ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)32055)));
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (short)-6266)))))), (((((/* implicit */_Bool) 59901260U)) ? (((/* implicit */int) ((unsigned char) (unsigned char)29))) : (((((/* implicit */int) var_0)) / (((/* implicit */int) var_2))))))));
}
