/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136970
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
    var_10 = ((/* implicit */signed char) var_6);
    var_11 = ((/* implicit */int) min((((((/* implicit */_Bool) ((unsigned int) (unsigned short)9969))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4294967295U))), ((+(var_6)))));
    var_12 = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967295U))))), ((+((+(-2038612753022735111LL)))))));
    var_13 ^= ((/* implicit */long long int) var_6);
}
