/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136384
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
    var_19 = ((/* implicit */long long int) var_15);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_18)) ? (3551381212U) : (3208738650U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */int) arr_1 [i_0])))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 2552405902U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-22913)))))) ? (((int) ((var_1) & (((/* implicit */int) var_16))))) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_22 = ((/* implicit */_Bool) var_3);
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)22912))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 14752728558056896679ULL)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (signed char)120)))), (((/* implicit */int) arr_3 [i_1]))))) : (((((/* implicit */_Bool) max((5531277070498326631ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned int) var_11)) : (var_7)))));
    }
    for (unsigned int i_2 = 3; i_2 < 22; i_2 += 2) 
    {
        var_23 -= ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_2] [i_2]))));
        arr_8 [14ULL] [i_2] &= ((/* implicit */unsigned short) var_18);
    }
    /* vectorizable */
    for (signed char i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        arr_12 [i_3 + 4] [i_3] = ((/* implicit */signed char) (unsigned char)0);
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            var_24 += ((/* implicit */unsigned char) (signed char)-26);
            arr_16 [i_3 + 1] = ((var_10) / (((/* implicit */unsigned long long int) var_12)));
        }
        var_25 = ((/* implicit */signed char) max((var_25), (((signed char) arr_14 [(unsigned short)14] [i_3 - 2]))));
    }
    var_26 = ((/* implicit */_Bool) var_0);
}
