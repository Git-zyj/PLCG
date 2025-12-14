/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187184
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((/* implicit */int) var_6))))), (((unsigned long long int) ((_Bool) (_Bool)1)))))));
    var_11 = ((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)16383)))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_5))));
}
