/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129125
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
    var_20 = min((((/* implicit */unsigned char) var_10)), (var_7));
    var_21 = ((/* implicit */unsigned int) 2147483647);
    var_22 = ((/* implicit */_Bool) min(((unsigned short)53367), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_19)) / (2147483640)))))))));
    var_23 -= ((/* implicit */short) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_11))))), (((unsigned int) var_12)))) >> ((((~(var_5))) - (6191367976098953554ULL)))));
}
