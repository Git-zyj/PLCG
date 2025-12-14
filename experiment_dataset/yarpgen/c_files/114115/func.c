/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114115
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
    var_18 = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (27) : (-43))) : (max(((~(((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_16)) : (var_17))))));
    var_19 = ((/* implicit */short) var_17);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)90)) ? (-51) : (((/* implicit */int) (signed char)94))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (51) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (-242156122)))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) -5944449406173153861LL)) && (((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) arr_0 [7U])) ? (((/* implicit */long long int) 43)) : (arr_1 [i_0])))))));
        arr_4 [i_0] [(short)5] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_0]), ((unsigned char)34)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (-51) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)-28))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (_Bool)1))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((int) ((short) var_14)));
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-28))));
                    arr_14 [i_1] [i_2 + 3] [i_3] [i_2 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)46102)) ? (((/* implicit */int) (unsigned short)38652)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_14)))) ? (((((/* implicit */_Bool) var_17)) ? (var_14) : (((/* implicit */unsigned long long int) max((3851006054U), (((/* implicit */unsigned int) 476558755))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_15)), (var_9)))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) var_8)))))));
}
