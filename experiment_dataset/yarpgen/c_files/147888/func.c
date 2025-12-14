/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147888
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
    var_16 += ((/* implicit */unsigned char) ((var_12) <= (((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (var_7)))) ? (-3LL) : (12LL)))));
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (var_5) : (-3LL))))), (var_12)));
    var_18 *= var_13;
    var_19 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((var_0), (var_0)))), (min((min((var_2), (var_2))), (16640021444938986702ULL)))));
}
