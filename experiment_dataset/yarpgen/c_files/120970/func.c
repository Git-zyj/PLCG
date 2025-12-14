/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120970
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
    var_13 *= ((/* implicit */unsigned char) ((_Bool) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)7941)) : (((/* implicit */int) (short)-7941)))), (((/* implicit */int) ((_Bool) var_1))))));
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_7))));
    var_15 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_5)))) ? (((((/* implicit */int) var_9)) ^ (var_12))) : (max((var_0), (((/* implicit */int) var_8)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_16 &= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */int) var_8)))));
        arr_4 [i_0 - 2] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (var_12))));
        arr_5 [i_0 - 2] &= ((/* implicit */unsigned short) ((_Bool) var_0));
        arr_6 [i_0 - 2] [i_0] = ((/* implicit */unsigned int) ((_Bool) var_12));
    }
}
