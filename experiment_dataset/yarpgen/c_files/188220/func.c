/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188220
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
    var_13 = ((/* implicit */short) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (var_11)))) ? (((((/* implicit */_Bool) (short)-14223)) ? (-200741584) : (-1567978787))) : (((/* implicit */int) ((((/* implicit */int) (short)32526)) < (((/* implicit */int) (signed char)99)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)1)) / (((/* implicit */int) (signed char)93))))) * (arr_6 [i_1] [i_1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [3LL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))) & (arr_4 [i_1])));
        var_16 = ((/* implicit */unsigned long long int) ((signed char) ((var_4) < (var_4))));
    }
    for (int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_17 = ((((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (var_11) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 15080884397261603427ULL))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (signed char)67))) - (((((/* implicit */int) arr_5 [(short)3] [(unsigned short)4])) + (((/* implicit */int) var_1))))));
    }
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6)))))));
    var_21 = ((/* implicit */long long int) ((unsigned int) var_11));
}
