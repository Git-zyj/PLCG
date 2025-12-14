/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106387
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
    var_20 = ((/* implicit */unsigned short) ((((max((var_17), (((/* implicit */unsigned int) var_3)))) % (((unsigned int) var_11)))) + (min((((/* implicit */unsigned int) ((unsigned char) var_1))), (var_11)))));
    var_21 -= ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_4))))), ((+(1585175286U))))), (var_11)));
}
