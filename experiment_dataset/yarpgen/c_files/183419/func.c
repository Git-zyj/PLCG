/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183419
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
    var_11 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))), (max((((var_9) >> (((((/* implicit */int) var_7)) - (4))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) == (var_6))))))));
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_10))));
}
