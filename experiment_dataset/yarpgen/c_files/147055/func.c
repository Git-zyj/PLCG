/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147055
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (var_9)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_4)) >= (var_10)))) % (((/* implicit */int) (unsigned char)255))));
                var_16 = ((/* implicit */int) max((((/* implicit */long long int) (+((~(((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (-7485691471630083167LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) (signed char)-7)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? ((~(var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_2) : (arr_1 [i_0])))) ? (((long long int) var_5)) : ((+(arr_0 [i_0] [(unsigned char)18]))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */int) (+((+(arr_0 [i_2 + 1] [i_2])))));
        var_18 += ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2 - 1])) ? (((/* implicit */int) arr_4 [i_2] [i_2 + 2] [i_2])) : (((/* implicit */int) arr_4 [i_2 - 1] [i_2 + 2] [i_2]))))) == (((unsigned int) arr_7 [i_2 + 2] [i_2 - 1])));
    }
    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_13))));
        var_20 ^= ((/* implicit */int) ((unsigned long long int) min((min((32641311366357646LL), (32641311366357668LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-16)), (4294967295U)))))));
        var_21 = ((/* implicit */signed char) arr_10 [i_3]);
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4])) && (((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4])))) ? ((~(min((((/* implicit */unsigned int) var_6)), (4270588926U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4])))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7485691471630083167LL)) ? (((/* implicit */int) ((signed char) arr_13 [i_4]))) : (((/* implicit */int) var_9))));
    }
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        var_24 = ((/* implicit */int) var_9);
        var_25 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-1)) ? (arr_0 [i_5] [(short)12]) : (((/* implicit */long long int) ((/* implicit */int) (short)63))))) > (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5])))))), (max((var_12), (((/* implicit */long long int) (unsigned char)124))))));
        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))))) >= (((((/* implicit */_Bool) (+(6406122036729034526LL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_5] [i_5])), (arr_4 [i_5] [i_5] [i_5])))) : (((/* implicit */int) arr_5 [i_5]))))));
        var_27 = ((/* implicit */int) arr_7 [i_5] [i_5]);
    }
    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) var_0))));
}
