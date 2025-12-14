/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117529
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
    var_16 = ((/* implicit */int) min((var_16), (var_6)));
    var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_0)) ? (var_7) : (var_8))) : (var_7))), (min((max((((/* implicit */int) var_14)), (var_8))), (((/* implicit */int) var_15))))));
    var_18 = var_6;
    var_19 &= ((/* implicit */unsigned short) min((((max((((/* implicit */int) var_15)), (var_7))) >> (((((((/* implicit */int) var_12)) | (var_8))) + (414))))), (min((((/* implicit */int) ((var_2) != (((/* implicit */long long int) var_3))))), (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */int) var_11))))))));
}
