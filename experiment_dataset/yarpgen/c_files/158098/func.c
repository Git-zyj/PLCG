/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158098
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
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) var_7)))) ^ (((/* implicit */int) var_18)))) ^ ((~(((var_7) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0 + 3]) ? (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_2] [i_2]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))) : ((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) + (var_15)))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */int) (((-(((/* implicit */int) min(((unsigned short)39589), (((/* implicit */unsigned short) arr_5 [i_0]))))))) > (min((((((/* implicit */_Bool) (unsigned short)16307)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_14)))), ((~(((/* implicit */int) var_12))))))));
                    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)450)) ? (var_13) : (((/* implicit */int) arr_4 [i_0] [i_1 + 2] [i_2]))))) ? (((var_15) & (((/* implicit */long long int) ((/* implicit */int) (signed char)66))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_2] [i_1] [i_0] [i_0])), (var_12)))))))), (((((var_15) == (((/* implicit */long long int) ((/* implicit */int) var_11))))) ? (arr_1 [i_0] [i_2]) : (((/* implicit */unsigned long long int) 1377229607))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) (_Bool)0);
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (92156211U)))) ? (min((((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (var_14)))), (((((/* implicit */int) var_12)) % (((/* implicit */int) arr_2 [i_3])))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) == ((~(arr_11 [i_3]))))))));
        arr_12 [i_3] = ((/* implicit */_Bool) arr_11 [i_3]);
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */_Bool) ((arr_13 [i_4] [i_4]) % (arr_13 [i_4] [i_4])));
        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            var_25 = ((/* implicit */unsigned char) arr_14 [i_4]);
            arr_19 [i_4] [i_5] [i_4] = ((/* implicit */long long int) (signed char)66);
            arr_20 [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_4]))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */_Bool) 16847006775475533689ULL)) && (((/* implicit */_Bool) (unsigned char)251)))))));
        }
    }
    for (unsigned char i_6 = 1; i_6 < 21; i_6 += 2) 
    {
        var_26 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_22 [i_6 - 1])) ? (((/* implicit */int) min((arr_22 [(unsigned char)18]), (((/* implicit */short) (_Bool)0))))) : ((~(var_16)))))));
        var_27 = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) arr_22 [i_6])) ? (arr_21 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108))))), (((((/* implicit */_Bool) arr_24 [i_6])) ? (arr_21 [i_6] [i_6]) : (arr_21 [i_6] [i_6])))))));
    }
    var_28 = ((/* implicit */unsigned short) var_7);
}
