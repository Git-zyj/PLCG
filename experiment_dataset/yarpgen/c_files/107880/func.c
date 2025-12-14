/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107880
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
    var_13 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)245)), ((unsigned short)4553)))))) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (((unsigned int) var_7)))))));
    var_14 |= ((/* implicit */unsigned short) (signed char)-15);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)11)) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) >= (max((((/* implicit */unsigned int) (signed char)-15)), (var_12))))))));
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_11)) ? (var_8) : (max((((/* implicit */long long int) var_4)), (var_11))))))))));
}
