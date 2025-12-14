/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115825
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_5))))) : (var_17))))))));
    var_20 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)0)), (var_17)))), (min((((/* implicit */unsigned long long int) (unsigned short)4094)), (18446744073709551615ULL)))))));
    var_21 = ((/* implicit */unsigned short) ((max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (5049866477402409128LL))), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_18)));
}
