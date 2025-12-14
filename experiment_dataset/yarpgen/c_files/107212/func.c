/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107212
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)8)) && (((/* implicit */_Bool) (short)16383))));
    var_12 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((var_10) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) (short)-3845)))) - (((((/* implicit */int) var_8)) & (((/* implicit */int) var_4))))))) : (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2460))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_6))))));
    var_13 = max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), ((~(((/* implicit */int) var_1))))))), ((+(max((var_6), (((/* implicit */unsigned long long int) var_9)))))));
    var_14 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)27)))) & (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)4311))))))));
}
