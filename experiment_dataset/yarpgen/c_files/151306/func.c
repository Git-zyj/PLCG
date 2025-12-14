/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151306
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (var_8))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21254)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))))))))) ? (((((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-6786553219065415677LL))) - (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned short)21254))))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0 + 1])), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)103))))))) ? (((/* implicit */int) var_10)) : (arr_2 [i_0] [i_0]))))));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_3 [i_1]))));
        var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483625)) ? (((((/* implicit */int) arr_6 [i_1] [i_1])) | (((/* implicit */int) arr_5 [i_1] [i_1])))) : (((/* implicit */int) var_3))));
        var_18 = ((/* implicit */short) ((max((((/* implicit */int) arr_5 [i_1] [i_1])), (var_1))) | (((/* implicit */int) var_0))));
    }
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        var_19 ^= ((/* implicit */signed char) (unsigned char)30);
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [(short)20])) + (((/* implicit */int) (unsigned char)230))))) ? (((((/* implicit */int) arr_8 [i_2] [(signed char)16])) | (var_1))) : (2147483625))))));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)2));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_2]))))) ? (((((((/* implicit */int) arr_7 [i_2] [i_2])) + (2147483647))) >> (((((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-83))))) - (65424))))) : (((/* implicit */int) ((signed char) max((((/* implicit */signed char) var_0)), (var_3)))))));
    }
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */signed char) ((2147483614) >= (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_16 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_11);
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_10))));
        }
    }
    var_22 = ((/* implicit */int) var_8);
}
