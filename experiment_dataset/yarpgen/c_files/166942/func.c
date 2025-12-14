/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166942
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (var_5) : (var_8))) == (var_8)))) / (((/* implicit */int) max((var_1), (((/* implicit */short) min(((_Bool)1), ((_Bool)0)))))))));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */long long int) var_5)), (262143LL)))));
}
