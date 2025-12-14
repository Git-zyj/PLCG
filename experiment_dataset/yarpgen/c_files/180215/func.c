/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180215
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_11))));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (signed char)50)))), (((/* implicit */int) var_1))))) ? (((((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))) ^ (max((((/* implicit */unsigned long long int) var_9)), (var_12))))) : (((/* implicit */unsigned long long int) var_11)))))));
}
