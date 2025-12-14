/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124827
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
    var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) var_9)), (var_19)));
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_8)), (var_1)));
    var_22 = ((/* implicit */unsigned short) var_0);
    var_23 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_19))) <= (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)74), (((/* implicit */unsigned char) (_Bool)1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((var_19), (((/* implicit */long long int) var_15)))) >= (((/* implicit */long long int) (~(((/* implicit */int) (short)-668))))))))) : (var_10)));
}
