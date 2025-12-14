/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187289
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
    var_10 |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) (short)-5818)) : (((/* implicit */int) (short)14336))));
    var_11 = ((/* implicit */unsigned int) ((unsigned char) min((((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) (+(var_1)))))));
}
