/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126721
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((signed char) max((((long long int) var_10)), (((/* implicit */long long int) var_7))))))));
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (-(((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) << (((/* implicit */int) var_4))))) & (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))))));
    var_15 ^= ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) ((var_5) << (((((/* implicit */int) var_6)) - (79)))))), (((var_4) ? (((/* implicit */unsigned long long int) var_8)) : (var_3)))))));
}
