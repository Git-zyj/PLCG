/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102086
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
    var_11 = ((/* implicit */unsigned int) var_8);
    var_12 = ((/* implicit */unsigned long long int) ((((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)-25359)))))) / (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_1))));
    var_14 = ((/* implicit */short) min((((/* implicit */unsigned char) var_1)), (min((((/* implicit */unsigned char) min((var_8), (((/* implicit */signed char) (_Bool)0))))), (((unsigned char) 0ULL))))));
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((_Bool) ((unsigned long long int) var_6))))));
}
