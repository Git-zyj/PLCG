/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176575
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
    var_17 = ((/* implicit */signed char) var_8);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) arr_1 [i_0 - 2] [(unsigned short)11]);
        var_19 = ((/* implicit */_Bool) max((var_19), ((_Bool)1)));
        var_20 += ((/* implicit */int) (-(((unsigned int) (unsigned short)24034))));
        arr_2 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22446)) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (unsigned char)229))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_21 -= ((/* implicit */short) (+((-(((/* implicit */int) var_9))))));
        var_22 = ((/* implicit */unsigned short) (-(arr_3 [i_1])));
        var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) * (3364017733U));
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((((/* implicit */unsigned int) arr_5 [i_1] [i_1])) ^ (887088167U))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (((_Bool)0) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)251)) & (((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (unsigned char)2)))));
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)164)) * (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_9 [i_2])) : ((+(((/* implicit */int) var_1))))))) ? (min((((/* implicit */long long int) var_5)), (arr_1 [i_2] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (arr_3 [(unsigned char)11])))) ? (((int) var_4)) : (((var_15) ? (((/* implicit */int) arr_7 [i_2] [(unsigned char)3])) : (((/* implicit */int) (_Bool)0))))))))))));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 13; i_3 += 1) 
    {
        var_27 |= ((/* implicit */int) ((_Bool) arr_1 [i_3 - 4] [i_3 - 3]));
        var_28 = ((/* implicit */unsigned char) var_3);
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(_Bool)1])) ? (((/* implicit */int) (short)-28764)) : (((/* implicit */int) var_13))))) ? (316527514) : (arr_4 [i_3]))))));
    }
}
