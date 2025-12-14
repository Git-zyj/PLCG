/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142671
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((int) var_2)) ^ (((/* implicit */int) var_10))))) ? (min((var_8), (((var_0) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (unsigned char)255))))) == ((~(((/* implicit */int) var_7))))))))));
    var_14 |= ((/* implicit */long long int) max(((~(((1309162454) | (((/* implicit */int) (unsigned char)65)))))), (((/* implicit */int) var_1))));
    var_15 = ((/* implicit */unsigned int) ((unsigned long long int) (~(max((((/* implicit */long long int) var_2)), (var_4))))));
}
