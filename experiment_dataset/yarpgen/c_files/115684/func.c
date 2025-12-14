/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115684
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
    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (var_1)))), (var_0)));
    var_12 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((var_6), (((/* implicit */short) var_2))))) ? (var_7) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-3785))))))), ((~(var_7)))));
    var_13 = ((/* implicit */signed char) ((max((max((((/* implicit */unsigned long long int) var_8)), (var_3))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-36)) + (2147483647))) << (((((/* implicit */int) (signed char)64)) - (64)))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((((/* implicit */unsigned int) var_8)), (var_10))))))));
}
