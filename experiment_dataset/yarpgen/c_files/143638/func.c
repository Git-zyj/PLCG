/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143638
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_11))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))))));
        var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0])), (((var_14) & (((/* implicit */int) arr_0 [(_Bool)1]))))))) ? (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) << (((7405751064213030754LL) - (7405751064213030750LL)))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) arr_0 [i_0])))))))));
    }
    for (short i_1 = 2; i_1 < 8; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (max((arr_4 [i_1]), (arr_4 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >> (((var_5) - (2010648735U))))))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((long long int) max((((/* implicit */long long int) (_Bool)1)), (arr_4 [(unsigned char)6])))))));
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) ((long long int) ((arr_5 [i_2]) ? (arr_8 [i_2] [i_2]) : (((/* implicit */int) arr_5 [i_2])))));
        arr_10 [i_2] = ((/* implicit */short) (~(((((/* implicit */int) arr_5 [i_2])) & (((/* implicit */int) arr_5 [(short)3]))))));
        var_20 = var_5;
    }
}
