/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178132
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
    var_17 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) var_12)))), (((/* implicit */int) var_8)))))));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_8))))), (var_12)))), (max(((~(var_6))), (((/* implicit */int) ((signed char) var_0))))))))));
    var_19 = ((/* implicit */unsigned char) var_10);
}
