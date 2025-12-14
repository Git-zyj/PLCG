/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162466
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_0))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_14) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) << (((((/* implicit */int) var_8)) - (7797))))))))) ? (((((_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (var_14))))))) : (((/* implicit */unsigned long long int) ((var_6) ^ (max((var_6), (var_6))))))));
    var_21 = ((/* implicit */unsigned long long int) var_9);
    var_22 |= min((((/* implicit */unsigned long long int) var_7)), (var_0));
}
