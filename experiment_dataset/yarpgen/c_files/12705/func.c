/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12705
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)32767)))))))) || (((/* implicit */_Bool) ((unsigned short) min(((short)32752), (((/* implicit */short) (unsigned char)203))))))));
    var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_12)), ((~((+(var_8)))))));
    var_16 = ((/* implicit */short) var_5);
    var_17 += ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_7))))), (max((((/* implicit */unsigned long long int) var_7)), (var_4)))))));
}
