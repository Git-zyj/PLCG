/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125081
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
    var_15 = ((/* implicit */short) min((var_6), (((((/* implicit */_Bool) (((_Bool)1) ? (7991842955447074624ULL) : (((/* implicit */unsigned long long int) 1340528363U))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-2055))))) : (max((var_10), (((/* implicit */unsigned long long int) (unsigned char)93))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 2])));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_3] [i_3] [i_4] [i_1] [i_4] = min((((/* implicit */unsigned long long int) var_11)), (min((var_10), (((/* implicit */unsigned long long int) arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4])))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_8)), (var_10))))) ? (min((((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24839))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) arr_0 [i_1 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                                var_18 = ((/* implicit */_Bool) ((unsigned int) var_7));
                                arr_15 [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_4 [i_1 + 1] [i_2 + 1] [i_4])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1 - 1] [i_2 - 2]))))) : (((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_8)))) : (arr_9 [i_0] [i_0] [i_0] [i_3] [i_3] [10LL])))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        arr_19 [i_0] [(unsigned char)13] [i_2 - 1] [i_0] = ((/* implicit */long long int) arr_18 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_2 - 2] [i_2 - 2] [i_5]);
                        arr_20 [i_5] = ((/* implicit */unsigned short) min((-5643672654951311444LL), (((/* implicit */long long int) ((((/* implicit */int) min((arr_7 [i_0] [i_1] [i_0] [i_5]), (((/* implicit */signed char) var_0))))) != (((/* implicit */int) var_2)))))));
                    }
                    for (short i_6 = 2; i_6 < 16; i_6 += 1) 
                    {
                        arr_24 [i_2] [i_2] [i_2 - 1] [i_2] = (+(max(((-(var_8))), (((/* implicit */unsigned int) arr_0 [i_1 - 2])))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6 - 2] = ((/* implicit */unsigned char) max((var_12), (((/* implicit */long long int) ((unsigned char) arr_4 [i_1 - 2] [i_2 - 2] [i_6 + 1])))));
                        arr_26 [i_0] [i_1 + 1] [i_2 + 1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [i_6 - 2] [i_6 + 1] [i_6 - 1] [i_6] [i_6])) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_1 - 1])) : (arr_8 [i_0] [i_2])))) ? (((long long int) max((arr_18 [i_6] [i_6] [i_1] [i_0] [i_1] [i_1]), (((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) var_14)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)1409)) && (((/* implicit */_Bool) -1268378243)))))))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        arr_30 [i_7] [i_7] [0ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-32))))) * ((~(arr_16 [i_2 - 1] [i_7] [(short)1])))));
                        arr_31 [i_0] [i_2] [i_0] |= ((/* implicit */_Bool) arr_12 [i_1] [i_2]);
                        var_19 -= ((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)53))));
                        arr_32 [i_0] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (-(arr_12 [i_7] [i_7])));
                    }
                }
            } 
        } 
    } 
    var_20 = (~(var_10));
}
