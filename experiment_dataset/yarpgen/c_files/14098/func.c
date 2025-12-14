/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14098
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
    var_11 = ((/* implicit */int) var_2);
    var_12 ^= ((/* implicit */long long int) max((((/* implicit */int) var_10)), (var_5)));
    var_13 = ((/* implicit */signed char) ((max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) (short)14942)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))) % (min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)16)))), ((-(((/* implicit */int) var_9))))))));
    var_14 = ((/* implicit */unsigned char) var_1);
}
