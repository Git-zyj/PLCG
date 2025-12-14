/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119981
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
    var_12 = ((((/* implicit */_Bool) (+(((((/* implicit */int) var_1)) - (((/* implicit */int) var_9))))))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_11))))))));
    var_13 = (+(((((/* implicit */_Bool) ((var_5) + (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_5))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (var_6)))))));
    var_14 = min((var_3), (((((/* implicit */int) var_1)) & (((/* implicit */int) (signed char)48)))));
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) 1721372729U)) ? (var_3) : (((/* implicit */int) var_2)))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128)))))));
}
