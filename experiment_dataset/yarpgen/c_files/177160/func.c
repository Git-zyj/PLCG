/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177160
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
        arr_4 [(unsigned short)16] [i_0] &= ((/* implicit */unsigned int) ((signed char) arr_1 [i_0] [i_0]));
    }
    var_16 = ((((/* implicit */int) ((short) (short)-194))) & (((/* implicit */int) (unsigned char)255)));
    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_12)))))) ? (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_1)) ? (511057551U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (min((((/* implicit */unsigned int) var_14)), (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 15304913963797077764ULL))))));
    var_18 = (!(((/* implicit */_Bool) 15304913963797077764ULL)));
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))));
}
