/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107109
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
    var_16 ^= ((/* implicit */int) ((unsigned short) ((signed char) max((var_9), (((/* implicit */unsigned int) var_5))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((4294967295U), (4294967295U)))) ? (max((min((var_6), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))))) : (max((((/* implicit */long long int) 4294967275U)), (((long long int) (signed char)101))))));
    var_18 = ((/* implicit */long long int) var_1);
}
