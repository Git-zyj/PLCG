/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149112
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)53244))) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-46)))))));
        var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-47)) ? (((((/* implicit */_Bool) (signed char)-25)) ? (131068) : (131068))) : (((/* implicit */int) var_3))));
        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) -131096)) == (2663857167U))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)29079))));
    }
    var_17 = var_5;
    var_18 = ((/* implicit */unsigned short) (~(min((131082), (131096)))));
    var_19 = ((/* implicit */signed char) (short)0);
}
