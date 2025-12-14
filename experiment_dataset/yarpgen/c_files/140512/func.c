/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140512
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) (signed char)-47)) % (((/* implicit */int) (unsigned short)1851)))), (((((/* implicit */_Bool) (unsigned short)5762)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)59771)) >= (((/* implicit */int) var_0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
        var_15 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) min(((unsigned char)238), (arr_2 [i_0] [i_0])))))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 8; i_1 += 4) 
    {
        arr_6 [(short)3] [i_1 + 2] = ((/* implicit */unsigned char) ((unsigned int) min((((131071ULL) >> (((((/* implicit */int) var_13)) + (35))))), (((/* implicit */unsigned long long int) max((arr_4 [i_1] [i_1]), (var_4)))))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */int) (unsigned short)49277)) != (((/* implicit */int) (_Bool)1)))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) var_10))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_1] [i_1]))))))) ? (((/* implicit */int) arr_0 [19LL] [(unsigned char)12])) : (((/* implicit */int) arr_0 [i_1] [i_1 - 1]))));
    }
    for (short i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) (signed char)126))))) ? (((((/* implicit */_Bool) ((((var_7) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_8 [i_2])) - (150)))))) ? (((/* implicit */int) max((arr_1 [i_2] [i_2]), (((/* implicit */unsigned char) var_6))))) : (((/* implicit */int) arr_8 [i_2 - 1])))) : (((((/* implicit */int) max((var_8), (((/* implicit */short) arr_9 [i_2]))))) % (((/* implicit */int) min((((/* implicit */short) var_4)), (arr_0 [7LL] [i_2])))))));
        var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_13)), (arr_9 [i_2])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_13)), (arr_9 [i_2])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (826496746)))))));
        arr_11 [i_2] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_11) ? (9223372036854775788LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-44)))))) ? (((/* implicit */int) ((unsigned short) (signed char)-122))) : (((/* implicit */int) (unsigned short)4973))));
    }
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))))))))));
}
