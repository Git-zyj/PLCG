/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16133
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) arr_1 [i_0 - 1])) >> (((((/* implicit */int) (unsigned char)182)) - (167)))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4032)) - (((/* implicit */int) (!((_Bool)1))))));
    }
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        arr_5 [i_1 - 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1] [i_1 + 1]))))) > (var_10)));
        var_12 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_1 + 1])), (var_10)))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 + 1])) != (((/* implicit */int) arr_4 [i_1] [i_1]))))) : (((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 - 1])))));
        arr_6 [i_1 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) min(((short)-27212), ((short)-17651))))));
        var_13 += ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) ((_Bool) (unsigned short)11602))), (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)15] [i_1])))))))));
    }
    for (short i_2 = 3; i_2 < 12; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) ((_Bool) (short)-23054));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_0 [i_2 + 1])), ((short)-17650)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned char)2] [i_2 + 1]))) : (min(((~(0U))), (((/* implicit */unsigned int) (short)32534))))));
    }
    var_15 = ((/* implicit */unsigned char) min((var_4), (var_4)));
}
