/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118294
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
    var_15 = var_11;
    var_16 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : ((((!(((/* implicit */_Bool) (short)17924)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((~(var_7))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (-9039383439241619407LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-14788))))) + (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((short) ((unsigned short) arr_0 [i_0])));
    }
    var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))) << (((((/* implicit */int) var_11)) - (209)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))));
}
