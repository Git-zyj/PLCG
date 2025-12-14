/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111999
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
    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
    var_15 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_8)), (var_13))))) & (min((((/* implicit */unsigned int) var_2)), (var_0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) max((var_1), (((/* implicit */short) (unsigned char)55))))) : (((((/* implicit */int) (short)13607)) ^ (((/* implicit */int) var_11)))))))));
}
