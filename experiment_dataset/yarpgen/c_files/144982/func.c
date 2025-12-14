/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144982
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
    var_16 -= ((/* implicit */unsigned int) var_2);
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((18446744073709551601ULL), (9223372036854775808ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (var_1))))))) : (5288728583375353826LL)));
    var_18 = ((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (-2147483645)))))) - (min((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) ((/* implicit */int) var_5))) % (-9223372036854775800LL))))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (unsigned char)234)), (((9223372036854775801ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) % (((/* implicit */unsigned long long int) 505025366)))))));
}
