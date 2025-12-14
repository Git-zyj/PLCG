/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146203
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_11 = (+(((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) 17592185913344ULL)) ? (((/* implicit */int) var_10)) : (var_7))) : (max((var_1), (1760892019))))));
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 15199475241841809893ULL)))))));
        var_13 = (+(min((var_6), (var_7))));
        var_14 -= ((/* implicit */_Bool) var_9);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 -= ((/* implicit */unsigned char) ((-901489402) + (((/* implicit */int) (short)-1))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (var_2)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (var_9))) : (var_9)));
    }
    var_17 = ((((((/* implicit */_Bool) ((var_0) ? (var_2) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (var_7)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) - (26580))));
    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 1760892019)) : (min((((7303411244373443979ULL) % (((/* implicit */unsigned long long int) 567792131)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))))));
}
