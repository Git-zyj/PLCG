/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109754
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (signed char)-105))));
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) * ((~(((/* implicit */int) arr_2 [i_0]))))));
    }
    var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (var_3)))))));
    var_22 = (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32764)))))))));
}
