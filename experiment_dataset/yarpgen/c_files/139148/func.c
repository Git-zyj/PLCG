/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139148
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
    var_14 = ((/* implicit */unsigned char) ((int) var_1));
    var_15 &= ((long long int) max(((+(((/* implicit */int) (unsigned short)20630)))), (((/* implicit */int) (unsigned short)44878))));
    var_16 = var_4;
    var_17 += ((/* implicit */unsigned char) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))));
}
