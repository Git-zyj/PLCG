/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134484
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_8))));
    var_17 = (!(((/* implicit */_Bool) max((((((/* implicit */int) var_14)) - (((/* implicit */int) var_7)))), (((/* implicit */int) max(((_Bool)0), ((_Bool)1))))))));
    var_18 += ((/* implicit */unsigned char) var_15);
    var_19 = ((/* implicit */short) ((max((((((((/* implicit */int) var_8)) + (2147483647))) << (((((/* implicit */int) var_11)) - (139))))), (((/* implicit */int) var_15)))) >> (((((/* implicit */int) var_15)) - (45784)))));
}
