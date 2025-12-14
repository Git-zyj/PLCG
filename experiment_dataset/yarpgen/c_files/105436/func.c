/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105436
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
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_20 ^= ((/* implicit */int) var_19);
        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (short)6607)) / (-1476151569)));
        arr_4 [i_0 - 1] = ((((((/* implicit */_Bool) var_4)) ? (1476151568) : (((/* implicit */int) arr_0 [i_0 + 1] [(signed char)2])))) & (((/* implicit */int) var_6)));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-1)) > (-1143405545))) ? (((/* implicit */int) var_3)) : (1476151583)))) ? (((/* implicit */unsigned int) 1934084951)) : ((-(((((/* implicit */_Bool) -1476151553)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_10)))))));
}
