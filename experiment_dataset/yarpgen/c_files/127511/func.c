/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127511
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
    var_15 &= ((/* implicit */signed char) ((max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((var_0), (((/* implicit */unsigned int) var_2)))))))));
    var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
}
