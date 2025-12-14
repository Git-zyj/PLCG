/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150757
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
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */unsigned int) var_14)), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) > (var_10))))))) : (var_9)));
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_14))));
    var_20 ^= ((/* implicit */signed char) ((var_4) > (((/* implicit */long long int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_14)))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned short) var_15))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))) : ((((+(((/* implicit */int) var_15)))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) <= (var_8))))))));
}
