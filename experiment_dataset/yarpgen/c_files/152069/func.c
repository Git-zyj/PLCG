/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152069
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((((/* implicit */_Bool) max((var_4), (((/* implicit */short) var_1))))) ? (((/* implicit */int) max((var_11), (((/* implicit */short) var_10))))) : ((-(((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))));
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((((/* implicit */int) var_3)) + (2147483647))) << (((unsigned int) max(((_Bool)0), (var_10)))))))));
}
