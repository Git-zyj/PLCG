/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101594
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
    var_17 ^= ((/* implicit */unsigned long long int) var_3);
    var_18 &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)204)) < (((/* implicit */int) (signed char)-66))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min((max((((/* implicit */long long int) max((((/* implicit */unsigned short) var_0)), (var_1)))), (min((((/* implicit */long long int) var_2)), (var_12))))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) | (min((((/* implicit */long long int) var_6)), (var_12))))))))));
    var_20 ^= var_3;
}
