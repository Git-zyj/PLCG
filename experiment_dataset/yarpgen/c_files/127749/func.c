/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127749
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
    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */int) (short)30850)) <= (((/* implicit */int) (short)-23538))))), (min((((/* implicit */signed char) (_Bool)1)), (var_4)))))) ? (((/* implicit */int) ((_Bool) max(((unsigned short)36936), (((/* implicit */unsigned short) var_12)))))) : (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) var_10)), ((unsigned short)16326)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0 + 1])) / (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 4]))));
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))));
    }
    for (short i_1 = 4; i_1 < 16; i_1 += 3) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((((~(((/* implicit */int) (unsigned short)49209)))) + (2147483647))) << (((((/* implicit */int) (unsigned short)13240)) - (13240)))))) && (((/* implicit */_Bool) max(((+(((/* implicit */int) (short)30525)))), (((/* implicit */int) var_14)))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) max((arr_0 [i_1] [i_1]), (((/* implicit */short) (_Bool)0))))))) : (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) (short)19512)))))))));
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)837))))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) arr_3 [i_1] [i_1]))))))) ? (((((/* implicit */int) max((arr_1 [i_1]), (((/* implicit */short) (signed char)125))))) << (((((((/* implicit */int) arr_3 [i_1 - 4] [i_1 - 1])) + (5335))) - (18))))) : ((~(((/* implicit */int) (signed char)-117))))));
    }
    for (signed char i_2 = 3; i_2 < 23; i_2 += 3) 
    {
        var_21 -= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-85))));
        arr_8 [i_2] [i_2] = ((/* implicit */signed char) (_Bool)1);
        var_22 = ((/* implicit */short) ((((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) arr_5 [i_2 - 2])))) == (((/* implicit */int) var_0)))) ? (max((((/* implicit */int) ((short) arr_5 [i_2]))), ((-(((/* implicit */int) arr_7 [i_2] [i_2])))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (max((((/* implicit */unsigned short) (signed char)-122)), (arr_6 [i_2]))))))));
        var_23 = ((/* implicit */_Bool) var_12);
    }
    var_24 = ((/* implicit */_Bool) var_14);
}
