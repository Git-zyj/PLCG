/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10041
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
    var_13 = ((/* implicit */short) ((max((max((var_12), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) min((var_9), (var_9)))))) % (((/* implicit */unsigned int) var_2))));
    var_14 = ((/* implicit */short) min((max((((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))), (((((/* implicit */int) var_0)) * (0))))), (((/* implicit */int) ((short) var_9)))));
}
