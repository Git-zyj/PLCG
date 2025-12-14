/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18588
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
    var_10 = ((/* implicit */signed char) var_4);
    var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (((((/* implicit */_Bool) var_9)) ? (var_2) : (12ULL)))))));
    var_12 = ((/* implicit */signed char) var_9);
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) var_8)), (var_4))), (((long long int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_3)));
}
