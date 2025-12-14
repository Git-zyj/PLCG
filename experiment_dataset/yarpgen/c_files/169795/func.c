/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169795
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
    var_20 ^= ((/* implicit */_Bool) max((((((/* implicit */int) ((unsigned char) var_4))) - (((/* implicit */int) max((((/* implicit */unsigned char) var_16)), ((unsigned char)39)))))), ((~((+(((/* implicit */int) var_0))))))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((var_5) | (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))) : (var_3))), (((/* implicit */unsigned long long int) max((var_16), (var_4))))))))));
}
