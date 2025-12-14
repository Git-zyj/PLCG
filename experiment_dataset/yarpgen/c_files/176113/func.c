/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176113
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 -= ((/* implicit */unsigned char) (-(var_1)));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((var_1) / (1006813524))) : (((/* implicit */int) (signed char)0))));
        var_12 = ((/* implicit */int) min((var_12), (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2956040665U))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_9)))))))));
        var_13 -= arr_1 [i_0];
    }
    var_14 = ((/* implicit */short) ((int) min((((var_8) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) var_4)))), (((/* implicit */int) min(((signed char)0), ((signed char)-20)))))));
}
