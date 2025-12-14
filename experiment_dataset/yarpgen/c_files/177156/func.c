/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177156
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_17 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_1 [i_0] [11U])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))));
        var_18 ^= var_14;
    }
    var_19 = ((/* implicit */unsigned short) var_0);
}
