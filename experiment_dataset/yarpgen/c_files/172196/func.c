/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172196
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) var_13)) : (var_11))))));
    var_20 = ((/* implicit */short) ((((var_16) + (9223372036854775807LL))) << (((((((/* implicit */int) var_4)) + (150))) - (58)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) - ((+(((/* implicit */int) arr_2 [i_0]))))));
        var_21 = (+(8796093022207ULL));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-32766))))))) % (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_0 [i_0])))))))));
        arr_5 [i_0] &= ((max((((/* implicit */unsigned int) ((unsigned char) arr_0 [i_0]))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (var_3))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_23 ^= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)14458)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32766))) : (1379984218U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9))))))), (((2465896750979248024LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)96)))))));
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (short)32765))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14458)))))))) : (((((/* implicit */_Bool) ((arr_6 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 + 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 1]))) : (min((8796093022190ULL), (((/* implicit */unsigned long long int) var_17))))))));
        arr_10 [i_1] = (!((!(arr_8 [i_1 + 1]))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_7 [i_1])))))) >> (((((/* implicit */int) arr_7 [(short)5])) - (168)))));
    }
}
