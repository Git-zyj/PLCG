/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136827
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
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) ((((/* implicit */long long int) var_11)) - (var_3)))) ? (((/* implicit */long long int) (-(var_9)))) : (max((var_3), (((/* implicit */long long int) var_7))))))));
    var_16 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) var_10)) : (max((9223372036854775807LL), (((/* implicit */long long int) var_10)))))) >> (((var_3) + (2505448174087052439LL)))));
    var_17 &= ((/* implicit */long long int) var_8);
}
