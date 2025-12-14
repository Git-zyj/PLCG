/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135552
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
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)37474)), (((var_8) ^ (((/* implicit */unsigned long long int) -2147483644))))));
    var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned char) var_12)), (min((var_0), (((/* implicit */unsigned char) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_5)))))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483644)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_6))))) ? ((-(min((var_10), (((/* implicit */unsigned long long int) (unsigned short)65535)))))) : (((var_8) >> (((((unsigned int) 133693440)) - (133693422U)))))));
}
