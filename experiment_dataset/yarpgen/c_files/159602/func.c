/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159602
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
    for (int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])))))));
        arr_3 [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26185))) : (var_14)))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) ((short) (signed char)36)))));
    }
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((var_2) != (var_13))))));
}
