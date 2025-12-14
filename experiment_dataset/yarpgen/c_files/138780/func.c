/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138780
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_2))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_15 += ((/* implicit */_Bool) (short)-30286);
        var_16 = ((/* implicit */unsigned long long int) var_3);
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -1319867305)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (min((var_9), (((/* implicit */unsigned int) var_12)))))))))));
        var_18 -= ((((/* implicit */_Bool) 1319867305)) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_3)))) : (((/* implicit */int) (signed char)73)));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_19 -= var_9;
        var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)225)) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-1LL) : (((/* implicit */long long int) var_1))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (short)4016)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)63)))))))));
    }
}
