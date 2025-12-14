/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178882
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (unsigned char)6)) - (var_8))) != (var_8))))) | (var_9)));
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_3))) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_5))))) : (min((((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), (var_4)))), (var_3))))))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) * (max((var_8), (((((var_8) + (2147483647))) >> (((var_3) + (8251290356286187785LL)))))))));
    var_13 = ((/* implicit */long long int) (~(var_6)));
}
