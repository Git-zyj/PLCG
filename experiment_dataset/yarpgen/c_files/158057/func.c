/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158057
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
    var_12 = ((/* implicit */unsigned int) ((var_7) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)25234)) != (((/* implicit */int) (unsigned short)25227))))))));
    var_13 ^= ((/* implicit */int) (~((~(((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) var_0))))))));
    var_14 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) - (min((var_1), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))))));
    var_15 *= ((/* implicit */short) ((int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_7)) : (var_1))), (((/* implicit */unsigned long long int) ((long long int) var_9))))));
}
