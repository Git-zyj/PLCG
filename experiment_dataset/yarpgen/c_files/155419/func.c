/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155419
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((int) var_1)) : (((/* implicit */int) var_18))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (79)))))) ? (((((/* implicit */int) var_17)) * (((/* implicit */int) (unsigned short)39937)))) : (((/* implicit */int) ((_Bool) var_10)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        var_22 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (short)16265)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)64)) || (((/* implicit */_Bool) 1200958885)))))))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
    }
    for (unsigned short i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        var_23 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(max((((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 1])), (var_9))))))));
        arr_4 [i_1 + 2] = arr_0 [i_1] [i_1 + 2];
    }
    var_24 = ((/* implicit */_Bool) ((((var_19) < (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ? (var_9) : (((/* implicit */int) (_Bool)1))));
    var_25 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_26 *= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-15845))));
        arr_8 [i_2] [i_2] |= ((/* implicit */unsigned long long int) var_5);
    }
}
