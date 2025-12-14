/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113597
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
    var_16 = ((/* implicit */short) (~((+(var_15)))));
    var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_13)))) : (min((((/* implicit */unsigned long long int) var_9)), (var_3)))))) ? (max((((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))));
    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_13) : ((-(var_7)))));
}
