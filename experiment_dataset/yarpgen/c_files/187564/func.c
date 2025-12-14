/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187564
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_13))))) == (var_4)));
    var_17 ^= ((/* implicit */short) var_15);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_18 += ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((/* implicit */_Bool) arr_4 [i_0] [11]))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(short)20] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)64124))));
        }
        for (short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_8 [(unsigned short)18] |= ((/* implicit */_Bool) 2145002628U);
            arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [(short)14] [i_2])) : (((/* implicit */int) var_7))));
        }
    }
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [(unsigned short)20])) || (((/* implicit */_Bool) arr_1 [20])))), (((((/* implicit */_Bool) (unsigned short)36118)) || (((/* implicit */_Bool) arr_1 [22U]))))));
        arr_13 [i_3] [i_3] = min((((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_11 [i_3])))), (((((/* implicit */int) arr_11 [i_3])) + (((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        var_20 = ((/* implicit */_Bool) arr_1 [i_4]);
        arr_16 [i_4] = ((/* implicit */short) (((+(((/* implicit */int) arr_7 [i_4] [19U] [(unsigned char)18])))) * (((/* implicit */int) arr_7 [i_4] [i_4] [i_4]))));
        arr_17 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) arr_2 [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4]))) : (max((3246976509U), (var_11)))));
    }
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_8)) ? (8372224) : (((/* implicit */int) (unsigned char)199)))) : (var_8))))));
}
