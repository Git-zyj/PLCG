/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150570
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
    var_15 |= ((/* implicit */long long int) var_13);
    var_16 = ((/* implicit */unsigned char) var_10);
    var_17 = ((/* implicit */short) max((5000370513803344574ULL), (var_9)));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (min((((/* implicit */unsigned int) var_12)), ((~(var_5)))))));
    var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max((var_11), (var_10)))))) : (var_5)));
}
