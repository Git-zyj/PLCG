/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150979
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
    var_11 = ((/* implicit */signed char) (+(((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_9))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)19))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) : (max((((((/* implicit */int) var_1)) >> (((var_9) - (300769638U))))), (((/* implicit */int) (short)0))))));
    var_14 = ((/* implicit */signed char) ((unsigned int) max((var_3), (min((var_3), (((/* implicit */int) var_8)))))));
}
