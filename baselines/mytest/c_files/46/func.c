/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/46
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
    var_10 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_6)))) ? (var_8) : (((/* implicit */int) var_5)))), (((/* implicit */int) (_Bool)1))));
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) var_2))));
}
