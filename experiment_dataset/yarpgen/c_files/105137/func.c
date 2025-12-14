/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105137
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
    var_11 -= ((/* implicit */_Bool) var_9);
    var_12 &= ((/* implicit */short) min((((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) & (((/* implicit */int) var_9)))), (((/* implicit */int) var_7))));
    var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((var_0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((var_0) && (((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (short)-25164))))) != (((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) var_6)) - (4012)))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))));
    var_14 = ((/* implicit */unsigned long long int) min(((((-(var_2))) - (((/* implicit */int) var_3)))), (var_2)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1 - 4] [i_1] = ((/* implicit */short) (-(((/* implicit */int) min(((unsigned short)61803), (min((((/* implicit */unsigned short) var_0)), (arr_6 [i_0 + 1] [i_0] [i_0] [i_0 + 2]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_4] [(unsigned char)1] [i_4] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) var_7))))) ? (((long long int) (unsigned short)61803)) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) (+(((((/* implicit */int) var_1)) << (((((/* implicit */int) var_1)) - (115))))))))));
                                arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 15; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */int) (signed char)-95)) - (((/* implicit */int) (_Bool)0))));
                        /* LoopSeq 1 */
                        for (short i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            arr_23 [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (short)0)))))));
                            var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_0] [i_1 - 4] [i_2] [i_6])) : (((/* implicit */int) var_3))));
                            var_17 = ((/* implicit */_Bool) ((var_8) / (((/* implicit */int) arr_1 [i_5 + 2]))));
                            var_18 ^= ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_20 [8] [i_1] [8])) : (arr_4 [(_Bool)1]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [(signed char)8] [i_2] [12U])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_21 [i_0] [(signed char)11] [i_2] [13] [i_6] [i_2])))))));
                            arr_24 [i_2] [i_1] [(unsigned short)2] [i_5] [i_0] [i_5] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15)) - (((/* implicit */int) (unsigned char)247))))) ? (17933104346713085397ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        }
                    }
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_30 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (short)-17217);
                            var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (arr_19 [(unsigned char)6] [i_1 - 4] [i_1 + 3]) : (arr_19 [10] [i_1 - 4] [i_1 + 3])));
                        }
                        arr_31 [2ULL] [i_0] [i_2] [i_2] [(unsigned char)1] = ((/* implicit */signed char) var_5);
                    }
                    for (int i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        arr_34 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (var_4)));
                        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (7U)));
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 1; i_10 < 17; i_10 += 1) 
                        {
                            arr_37 [i_2] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (var_4)));
                            arr_38 [i_0] [i_9] [i_2] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */long long int) 1221579148U)) != (((((/* implicit */_Bool) var_4)) ? (arr_12 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_0])))))))), (min((((((/* implicit */int) (signed char)-95)) - (((/* implicit */int) (unsigned char)200)))), (((/* implicit */int) var_5))))));
                            var_21 = ((/* implicit */unsigned char) var_1);
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) min(((short)31637), ((short)1023)));
                            arr_41 [i_0] = var_5;
                        }
                        for (unsigned int i_12 = 3; i_12 < 18; i_12 += 1) 
                        {
                            arr_44 [i_0] [i_0] [i_0] [i_0] [(unsigned char)15] [i_0] [i_0] = ((/* implicit */long long int) (-(2147483628)));
                            arr_45 [i_0] [i_0] [6] [i_0] [(short)11] [(short)11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_0)))) & (((var_8) | (((/* implicit */int) (short)-13988))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) | (-4334408308896135135LL)))));
                        }
                    }
                }
            } 
        } 
    } 
}
