/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101377
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
    var_13 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (~(var_12)))) >= (((12674373537553310906ULL) << (((1711462433U) - (1711462372U))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_3]))) | (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : ((-(var_1))))))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                            {
                                var_14 = ((((/* implicit */_Bool) (((~(1711462450U))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */int) (unsigned char)181)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)24665))))) : (((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))) : (var_1))));
                                var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? ((+(1711462444U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))))) / (((/* implicit */unsigned int) (+((-(var_12))))))));
                                var_16 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9509))) * (arr_7 [i_0] [i_0] [i_0] [i_3]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1711462433U)))))))))) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) : (arr_7 [i_0] [i_1] [i_1 - 1] [i_3])))));
                            }
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((arr_2 [i_3]) ? (-771934120) : (((/* implicit */int) var_0))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24665))) * (arr_1 [i_0]))))) >> ((((-(((1472074365U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))))))) - (2233618675U)))));
                        }
                    } 
                } 
                var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_1])) % (((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) 4888275337348986913LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_1 + 1])))) : (((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_13 [i_1] [i_1 + 4])) + (48)))))));
                var_18 += ((/* implicit */unsigned long long int) (+((((~(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((((/* implicit */int) arr_2 [(_Bool)1])) <= (((/* implicit */int) (short)-1297)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) 1711462450U)) ? (171397135618111075ULL) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1 + 2]))));
                    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)24684))));
                    var_21 ^= ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (unsigned char)177)))));
                }
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    arr_21 [i_0] [(_Bool)0] [i_0] |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) ((short) (short)21024))))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            {
                                var_22 = ((short) ((((/* implicit */_Bool) -1LL)) ? (((((((/* implicit */int) arr_5 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) var_0)) - (8805))))) : (((((/* implicit */int) var_0)) >> (((var_8) + (137808118)))))));
                                var_23 ^= ((/* implicit */int) ((((unsigned int) (signed char)122)) >> (((((unsigned int) (unsigned short)52459)) - (52437U)))));
                                var_24 = ((/* implicit */short) (((~(((((/* implicit */int) var_7)) | (((/* implicit */int) (short)-9096)))))) + (((/* implicit */int) ((((/* implicit */int) ((1711462444U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) == ((~(((/* implicit */int) (unsigned char)191)))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((long long int) (_Bool)1)))));
                }
            }
        } 
    } 
}
