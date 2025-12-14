/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124992
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
    var_11 &= ((/* implicit */unsigned short) ((((var_0) << (((((7U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14312))))) - (14319U))))) | ((-(max((var_2), (((/* implicit */long long int) 4294967271U))))))));
    var_12 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)15))))), (10U));
    var_13 = ((/* implicit */unsigned int) var_7);
    var_14 = ((min((-3889010928529485384LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (3946971179U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) < (var_8))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (((~(((/* implicit */int) arr_1 [i_0] [i_0])))) & ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))))) * ((-(10U)))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (short)4)) || (((/* implicit */_Bool) var_9)))))))) + (((long long int) (short)-5401)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_5 [i_1] [(unsigned short)11] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
            arr_6 [i_0] [6LL] |= ((/* implicit */long long int) ((((/* implicit */int) arr_1 [6LL] [i_1])) ^ (((/* implicit */int) arr_1 [i_0] [i_1]))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                arr_9 [i_0] [2LL] [i_1] [i_2] = arr_1 [i_0] [6LL];
                var_16 |= ((/* implicit */unsigned short) -5920402928653260760LL);
            }
            var_17 ^= ((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_0]);
        }
    }
    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20141)) ? (((/* implicit */long long int) ((2076008752U) | (3589549101U)))) : (((((/* implicit */_Bool) 25U)) ? (((/* implicit */long long int) 4294967271U)) : (arr_12 [i_3] [i_3]))))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), ((((-(1479208243U))) * (((/* implicit */unsigned int) ((/* implicit */int) min(((short)20), ((short)-36)))))))));
    }
}
