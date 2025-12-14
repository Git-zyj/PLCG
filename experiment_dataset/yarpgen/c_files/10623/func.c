/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10623
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
    var_13 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) min((var_3), (var_2)))))) & (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (var_12)))), ((~(var_8)))))));
    var_14 = ((/* implicit */_Bool) var_7);
    var_15 = ((/* implicit */short) var_12);
}
