/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129133
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_8))));
    var_13 = ((/* implicit */long long int) max((var_8), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)20623)) >> (((((/* implicit */int) (short)20605)) - (20586)))))), (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    var_14 *= ((/* implicit */unsigned long long int) max((((unsigned char) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */int) var_3))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7)))))));
    var_15 = ((/* implicit */short) ((unsigned short) max((((/* implicit */int) var_1)), (((int) var_3)))));
}
