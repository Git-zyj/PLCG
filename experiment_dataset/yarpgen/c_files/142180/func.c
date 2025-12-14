/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142180
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
    var_12 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) 65534LL)) ? (max((9LL), (((/* implicit */long long int) (unsigned char)252)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)50)) && (((/* implicit */_Bool) var_1)))))))), (((/* implicit */long long int) (unsigned char)248))));
    var_13 -= ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
    var_14 += ((/* implicit */unsigned int) (+(min((((/* implicit */int) var_11)), ((-(((/* implicit */int) var_11))))))));
}
