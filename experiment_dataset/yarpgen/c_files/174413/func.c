/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174413
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) -1728562094061981231LL);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_5 [i_1] [i_1]) : (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -4802143259070507686LL))))) : ((+(((/* implicit */int) (_Bool)1))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)125)) - (((((/* implicit */int) arr_4 [6LL])) - (((/* implicit */int) (unsigned short)52006))))));
    }
    var_19 |= ((/* implicit */unsigned short) var_13);
}
