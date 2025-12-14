/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102813
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
    var_17 = ((/* implicit */int) var_15);
    var_18 = ((/* implicit */unsigned long long int) var_7);
    var_19 += (!(((/* implicit */_Bool) var_2)));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) 8388352))))), (max((var_1), ((short)16383)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */int) (short)0)), (-8388377))) : (((/* implicit */int) ((signed char) var_14))))))));
    var_21 = ((/* implicit */long long int) ((short) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1022))) != (var_14)))), (min((var_14), (((/* implicit */unsigned int) (short)16381)))))));
}
