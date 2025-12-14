/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171343
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_6))));
    var_13 = ((/* implicit */int) ((((/* implicit */int) var_2)) < (var_8)));
    var_14 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) var_1)) != (var_9)))) <= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))));
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)38))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (var_8))))) : (min((((/* implicit */unsigned long long int) (_Bool)0)), (var_5)))))) ? (max((min((((/* implicit */unsigned int) (short)31139)), (var_0))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)61)) >= (((/* implicit */int) (short)-31140))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) (short)31139)))) < ((+(((/* implicit */int) var_2)))))))));
}
