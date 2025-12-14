/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118248
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51))) : (0ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_11)) - (31677))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12557))) : (((((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) + (((/* implicit */unsigned long long int) var_6))))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((((/* implicit */unsigned long long int) ((((var_6) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) var_16))))) - (1)))))), (min((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) var_3)), (18446744073709551604ULL)))))))));
    var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((((((/* implicit */unsigned long long int) 32766)) + (var_18))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (var_7)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_8)))))));
}
