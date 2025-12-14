/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185996
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
    var_16 = min((((/* implicit */unsigned char) var_9)), (var_2));
    var_17 ^= ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1983032368U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) | (var_1))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 2311934928U)) && (var_0)))), (max((var_2), (((/* implicit */unsigned char) var_0)))))))));
}
