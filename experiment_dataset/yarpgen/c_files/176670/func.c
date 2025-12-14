/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176670
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
    var_13 = var_4;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [(short)4] [i_1] [(signed char)6] [9U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) * (var_0)))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_2] [i_1]))) / (arr_0 [i_0] [9U]))), (((/* implicit */unsigned long long int) 16)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [4LL] [i_2]) / (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */long long int) ((int) (unsigned char)66))) : (arr_1 [i_0] [i_0]))))));
                        var_14 = ((unsigned char) ((((/* implicit */_Bool) ((short) var_2))) && (((/* implicit */_Bool) 131071))));
                        var_15 = ((/* implicit */short) ((unsigned int) var_6));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) : (max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((signed char) var_2)))))));
    }
    /* vectorizable */
    for (long long int i_4 = 3; i_4 < 14; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (short i_5 = 2; i_5 < 15; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                {
                    var_16 = var_3;
                    var_17 = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) var_9)))));
                    var_18 ^= ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((((var_5) <= (((/* implicit */int) arr_15 [i_4] [(_Bool)1] [i_6])))) ? (786289914U) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) arr_12 [i_4] [i_4])) : (var_8)))))));
                }
            } 
        } 
        arr_19 [i_4 - 1] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) var_5)));
        arr_20 [i_4 + 1] [14ULL] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_14 [i_4])))));
        var_20 = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_4 + 1])) - (((/* implicit */int) arr_16 [i_4 - 2]))));
    }
    /* vectorizable */
    for (short i_7 = 2; i_7 < 22; i_7 += 1) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_2))) && (((((/* implicit */_Bool) arr_21 [i_7])) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))));
        var_21 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_11)))));
    }
}
