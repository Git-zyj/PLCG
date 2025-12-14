/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154696
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
    var_18 = var_17;
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_0 [i_0]))));
        var_20 -= ((/* implicit */unsigned int) (unsigned char)243);
        var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 800763468U)) ? (800763468U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 7297124974385856214LL))))))))));
    }
    var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_12))));
}
