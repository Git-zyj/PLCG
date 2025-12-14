/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109294
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) var_1))));
    var_12 = ((/* implicit */unsigned short) var_4);
    var_13 ^= ((/* implicit */_Bool) var_3);
    var_14 ^= ((((/* implicit */_Bool) min((((/* implicit */short) var_6)), ((short)17486)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (14U)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (var_3)))) : (var_2))) : (((/* implicit */unsigned long long int) max((((((((/* implicit */int) var_1)) + (2147483647))) >> (((/* implicit */int) var_5)))), (((/* implicit */int) var_0))))));
}
