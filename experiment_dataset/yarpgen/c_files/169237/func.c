/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169237
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_11)))))))) : (var_1)));
    var_13 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14659172522411545971ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 7019805181298462410LL)))))))));
    var_14 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_8)), (var_3))), (((/* implicit */unsigned long long int) var_4))));
}
