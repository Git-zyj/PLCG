/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18893
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
    var_13 = ((/* implicit */unsigned int) min((var_2), (((/* implicit */long long int) (!(var_6))))));
    var_14 = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)44769)) / (((/* implicit */int) (_Bool)1))))), (max((var_10), (((/* implicit */long long int) var_12)))))));
    var_15 &= ((/* implicit */long long int) min(((+(min((((/* implicit */unsigned long long int) var_12)), (var_9))))), (((/* implicit */unsigned long long int) var_8))));
    var_16 ^= ((/* implicit */unsigned char) var_8);
}
