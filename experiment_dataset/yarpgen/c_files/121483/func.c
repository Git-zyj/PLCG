/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121483
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
    var_11 = ((/* implicit */unsigned int) ((_Bool) var_9));
    var_12 = ((/* implicit */signed char) (!((_Bool)1)));
    var_13 = var_6;
    var_14 = ((/* implicit */signed char) 16383U);
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) % (1165517240U))), (((unsigned int) (~(var_8)))))))));
}
