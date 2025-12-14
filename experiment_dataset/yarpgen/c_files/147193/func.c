/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147193
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
    var_16 &= ((/* implicit */_Bool) var_7);
    var_17 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned short) (unsigned short)65535))) ? ((~(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0)))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)110)))) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) max(((signed char)93), (((/* implicit */signed char) (_Bool)1))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))))) : (((int) arr_2 [i_0]))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) 9223372036854775807LL))));
        var_20 += ((/* implicit */_Bool) arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_5 [(_Bool)1] [(_Bool)1] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) (_Bool)1)) : (-1665450738)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (var_3) : (((/* implicit */int) arr_1 [i_1])))) : (((var_10) ? (arr_3 [(short)0]) : (((/* implicit */int) (unsigned char)206)))));
        arr_6 [i_1] = (~((+(((/* implicit */int) arr_1 [i_1])))));
        var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) ? (22U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)28223)))));
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_22 -= ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2])))));
        var_23 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) ((short) arr_7 [i_2] [i_2]))) : (((int) (_Bool)1)))));
    }
    for (int i_3 = 2; i_3 < 15; i_3 += 1) 
    {
        var_24 |= (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
        arr_11 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_3 - 1])) + (((/* implicit */int) arr_2 [i_3 + 1]))))) ? (min((1077883367), ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_3])))))) : (((/* implicit */int) ((((var_0) * (((/* implicit */int) arr_1 [i_3])))) < (((/* implicit */int) arr_2 [i_3 + 1])))))));
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_8 [i_3] [i_3]))));
    }
}
