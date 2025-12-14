/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126589
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
    var_17 = ((/* implicit */unsigned short) min((var_17), ((unsigned short)8)));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_11)))) ? ((~((~(((/* implicit */int) (unsigned short)0)))))) : (((/* implicit */int) (unsigned char)173))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((unsigned int) var_4)) << (((((/* implicit */int) ((signed char) 12147287139746842414ULL))) - (41)))))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (var_4)))), (((unsigned long long int) var_13)))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) : (18446744073709551599ULL)))));
}
