/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141056
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)36596)) : (((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned long long int) 2109543799)) : (((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_4)))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) ((((1561972593) < (((/* implicit */int) arr_0 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_12 [i_0 + 1] [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 + 3] [i_1 - 1])) / (((/* implicit */int) arr_6 [i_0 + 3] [i_1 - 1]))))) ? (((/* implicit */int) ((short) arr_6 [i_0 + 1] [i_1 - 4]))) : (((/* implicit */int) arr_6 [i_0 + 3] [i_1 + 1]))));
                    arr_13 [i_0] [i_1 + 1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (signed char)102))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_15))) ? ((~(var_0))) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_1 + 1])) | (((/* implicit */int) arr_6 [i_0 + 3] [i_1 + 1]))))) : (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (((((/* implicit */unsigned long long int) arr_2 [i_0])) ^ (arr_1 [i_2]))))))))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_0 + 1] [i_0 + 2]))) ? (((((/* implicit */_Bool) 1561972584)) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1])))) : (((/* implicit */int) ((unsigned short) arr_6 [i_0 + 3] [i_0 + 2])))));
        arr_15 [i_0] [(signed char)2] |= ((/* implicit */long long int) max((((short) arr_11 [i_0 + 3] [i_0 + 3] [i_0 - 1] [10ULL])), (((/* implicit */short) ((((/* implicit */unsigned long long int) -1561972583)) <= (min((arr_11 [i_0 + 1] [i_0] [i_0] [(short)4]), (((/* implicit */unsigned long long int) (short)255)))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) % (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (unsigned char)233))))) ? (((/* implicit */int) ((unsigned char) (signed char)127))) : (var_9)))));
}
