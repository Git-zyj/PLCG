/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161425
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
    var_11 = (((+(((/* implicit */int) var_3)))) <= (((/* implicit */int) (_Bool)1)));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)255)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-64)))))))));
    var_13 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_2))))) : (((/* implicit */int) var_8))));
}
