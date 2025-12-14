/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155615
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
    var_15 -= ((/* implicit */signed char) min((var_8), (var_11)));
    var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (min((var_2), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (signed char)-42))))))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (941578474)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5)))) : (var_11))))))));
}
