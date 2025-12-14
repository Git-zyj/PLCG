/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129295
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
    var_16 = ((/* implicit */unsigned long long int) ((short) (-(max((var_1), (var_5))))));
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_2))));
    var_18 += ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-46)), (var_10)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6355)) ? (((/* implicit */long long int) var_1)) : (2305842992033824768LL))))));
}
