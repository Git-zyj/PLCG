/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122572
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (min((((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (unsigned char)30)))), (((/* implicit */int) var_8)))) : ((-(((((/* implicit */int) var_3)) * (((/* implicit */int) var_6))))))));
    var_13 -= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) var_4))), (((unsigned short) (unsigned char)238))))) * (((/* implicit */int) (((+(((/* implicit */int) var_8)))) > (((/* implicit */int) max(((unsigned short)16320), ((unsigned short)65535)))))))));
    var_14 -= ((/* implicit */unsigned char) min((((/* implicit */int) var_3)), (min((((/* implicit */int) (unsigned char)223)), (((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_7)) - (23634)))))))));
}
