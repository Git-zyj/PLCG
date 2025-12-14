/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137160
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
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)90))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((unsigned int) var_3)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) min((4294967295U), (((/* implicit */unsigned int) min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))))));
        var_21 = ((((/* implicit */int) var_9)) << (((((((/* implicit */_Bool) ((short) arr_0 [i_0] [i_0]))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))) : (4294967295U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))) - (4294967165U))));
    }
    var_22 = max((min((((/* implicit */int) var_10)), ((~(((/* implicit */int) (short)-22851)))))), (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_4))))));
}
