/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154831
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
    var_11 = ((/* implicit */unsigned short) min((var_6), (((/* implicit */unsigned long long int) var_0))));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned short)65529))))) % (((unsigned int) max(((unsigned short)65529), (((/* implicit */unsigned short) var_0))))))))));
    var_13 ^= ((/* implicit */signed char) var_5);
    var_14 = ((((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) var_3))))))))) - (var_9));
    var_15 = var_0;
}
