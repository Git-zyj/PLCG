/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16229
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
    var_10 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 658609829)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21768))))) != (((/* implicit */long long int) arr_3 [i_0] [(signed char)7] [i_0]))));
            var_11 = ((/* implicit */unsigned long long int) ((short) var_2));
        }
        for (signed char i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            arr_9 [i_0] [0LL] [i_0] = ((/* implicit */unsigned int) arr_8 [i_2] [i_2] [i_2]);
            arr_10 [i_0] [i_2] = (~(arr_6 [i_0]));
            var_12 = ((/* implicit */signed char) arr_7 [i_0] [i_2]);
        }
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [(short)3])))))) : (((1923273919U) | (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))))));
        arr_11 [12ULL] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) arr_2 [i_0])))));
        arr_12 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) arr_0 [i_0])))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) max((max((((/* implicit */int) (signed char)74)), (arr_15 [i_3]))), (((/* implicit */int) (unsigned short)8016))))), (-3425983908330223729LL)));
        var_14 = ((/* implicit */short) min(((-(((/* implicit */int) var_0)))), ((+(((/* implicit */int) arr_14 [i_3] [i_3]))))));
    }
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))))), (var_2)))), (min(((+(var_8))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) var_8)))))))));
    var_16 = ((/* implicit */unsigned short) var_1);
}
