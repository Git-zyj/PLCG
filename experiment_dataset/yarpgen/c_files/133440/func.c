/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133440
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
    var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((int) var_1))) : (min((((var_10) - (((/* implicit */long long int) var_1)))), (((var_6) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)39)))))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2)))) & (((unsigned int) min((((/* implicit */int) var_9)), (var_7))))));
    var_15 = ((/* implicit */unsigned char) max((var_15), (var_9)));
}
