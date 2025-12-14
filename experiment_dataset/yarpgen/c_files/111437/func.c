/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111437
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
    var_19 = ((/* implicit */int) var_16);
    var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) (short)28)) : (((/* implicit */int) (signed char)53))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) var_13)))));
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-15))));
        arr_3 [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)37))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((unsigned long long int) (signed char)-94)));
    }
    var_22 = ((/* implicit */unsigned char) var_9);
}
