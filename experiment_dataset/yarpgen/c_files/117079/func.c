/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117079
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
    var_11 = ((/* implicit */unsigned long long int) var_0);
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_5))));
    var_13 += ((/* implicit */int) (_Bool)1);
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (short)-32755))) ? (((((/* implicit */int) (_Bool)1)) & (2147483644))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (var_10))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)252)), (var_7))))));
    var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((-2147483644), (((/* implicit */int) (signed char)111)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)32767))))))) ? (((/* implicit */int) (_Bool)1)) : (2147483644)));
}
