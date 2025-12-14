/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148848
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((((/* implicit */int) var_0)), (var_7)))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_6)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_3)))))) ? (var_18) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) != (var_2)))))))));
    var_22 = ((/* implicit */_Bool) max((var_22), (((((/* implicit */unsigned int) ((/* implicit */int) var_17))) != (min((((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14)))))))))));
}
