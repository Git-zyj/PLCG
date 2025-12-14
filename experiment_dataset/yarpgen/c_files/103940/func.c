/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103940
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned int) var_4);
            var_16 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */int) (short)32640)) : (((/* implicit */int) (short)32640)))), (((((/* implicit */_Bool) min((((/* implicit */short) var_4)), ((short)-32641)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)32640)) : (((/* implicit */int) arr_2 [i_0 - 1])))) : (((/* implicit */int) (_Bool)1))))));
            arr_8 [i_0] = ((/* implicit */unsigned char) var_11);
            arr_9 [10LL] [11LL] [i_0] = ((/* implicit */unsigned char) (((!(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (var_14))))) ? (((((/* implicit */int) var_4)) + (((((/* implicit */int) arr_2 [14LL])) - (((/* implicit */int) (short)32652)))))) : (((((/* implicit */int) arr_2 [i_0 + 1])) | (((var_6) ? (((/* implicit */int) (short)26583)) : (((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0 - 1]))))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32641)) ? (-1) : (((((/* implicit */int) (short)-32652)) / (((/* implicit */int) arr_0 [i_2])))))))));
            arr_12 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)45238)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 1]))) : (arr_10 [i_0 + 1])));
        }
    }
    var_18 = ((/* implicit */int) 4491422618005576116LL);
}
