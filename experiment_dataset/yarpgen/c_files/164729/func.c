/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164729
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
    var_14 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 = ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) - (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0])))));
                var_16 = ((/* implicit */_Bool) ((((arr_0 [i_1]) ? (((((/* implicit */_Bool) (short)0)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)63)) ? (262143) : (((/* implicit */int) (unsigned char)63))))))) + (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
                var_17 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) | (arr_4 [i_1] [i_0])))) ? (var_10) : (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */signed char) arr_0 [i_1]))))))));
                var_18 = ((/* implicit */long long int) arr_3 [i_0] [i_0] [1LL]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
        {
            for (int i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                {
                    arr_15 [i_3] [i_2] [i_3] [i_4 - 1] = ((/* implicit */int) (short)0);
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        arr_19 [i_2] [i_3] [i_4] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) ((signed char) (signed char)-85))))) & ((~(((/* implicit */int) (short)(-32767 - 1)))))));
                        arr_20 [i_3] [i_3] [i_3] [i_3] [(signed char)14] [i_2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)0)))) ? (((/* implicit */int) max((arr_12 [i_4 - 1] [i_3] [i_3 - 1]), (arr_12 [i_4 - 1] [i_3] [i_3 - 1])))) : (((/* implicit */int) arr_9 [i_4]))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 14; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */_Bool) ((arr_13 [i_3 - 1] [i_3] [i_6] [i_6 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) min(((short)4883), (((/* implicit */short) (unsigned char)193))))))));
                        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (short)-4893))) ^ (((/* implicit */int) arr_12 [i_6] [i_3] [i_3 - 1])))))));
                    }
                    for (unsigned int i_7 = 2; i_7 < 16; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) arr_21 [(signed char)0] [i_4] [i_7 - 1]);
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            var_22 = ((arr_21 [i_4 + 1] [i_4] [i_7 - 1]) / (min((arr_21 [i_4 - 1] [i_7 - 1] [i_7 - 2]), (arr_21 [i_4 - 1] [12ULL] [i_7 + 1]))));
                            var_23 = ((/* implicit */unsigned short) arr_12 [i_2] [i_3] [i_7]);
                        }
                        for (signed char i_9 = 4; i_9 < 16; i_9 += 2) 
                        {
                            arr_32 [i_2] [i_2] [13LL] [i_4] [i_3] [3LL] = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_8 [i_4])), ((short)0)))))));
                            arr_33 [i_2] [i_3] [i_4] [i_7] [i_9] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                            arr_34 [i_3] [7] [i_3] [i_3] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (short)-4893))))) ? (arr_26 [i_3] [i_7] [i_4] [i_3] [i_3]) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-92)))))))));
                            arr_35 [i_9] [i_3] [(_Bool)1] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) + (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_7))))), (10483469355161383191ULL)))));
                        }
                        for (unsigned int i_10 = 2; i_10 < 16; i_10 += 2) 
                        {
                            var_24 = ((/* implicit */short) min((max((((/* implicit */long long int) (unsigned short)53372)), (3255037165386831394LL))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)61)))) ? (((/* implicit */int) arr_12 [i_2] [i_3] [i_2])) : (((/* implicit */int) max(((signed char)123), ((signed char)14)))))))));
                            var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((var_4), (arr_31 [i_4 + 1] [i_3] [(signed char)1] [i_3] [i_2])))), (max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (10483469355161383191ULL)))));
                            arr_38 [i_3] [i_3 - 1] [i_4 + 1] [i_3 - 1] [4U] = ((/* implicit */_Bool) var_13);
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            arr_41 [i_3] = (+(((/* implicit */int) arr_18 [i_3 + 1] [i_7 + 1] [i_4 + 1] [i_7 - 1])));
                            var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) arr_11 [(unsigned short)12] [i_7] [i_2])))));
                            arr_42 [i_3] [i_7 - 1] [i_4 - 1] [i_3 - 1] [i_3] = ((/* implicit */_Bool) ((signed char) var_2));
                            var_27 = ((/* implicit */signed char) arr_22 [i_7 - 1] [i_3 - 1]);
                            arr_43 [i_3] [i_7] = ((/* implicit */signed char) var_5);
                        }
                        /* vectorizable */
                        for (long long int i_12 = 4; i_12 < 13; i_12 += 4) 
                        {
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned char) (unsigned char)234))) : (((((/* implicit */int) (short)7364)) ^ (((/* implicit */int) arr_29 [(signed char)8] [i_3] [(signed char)8] [i_7 - 1] [i_12] [i_3] [i_3 - 1]))))));
                            var_29 = ((int) arr_13 [i_4] [i_3] [i_12 - 2] [i_12 + 4]);
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (unsigned char)63))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-4893)) | (((/* implicit */int) arr_16 [i_2] [i_2] [i_4 - 1] [i_7]))))) : (arr_22 [i_2] [i_3])));
                            var_31 = ((/* implicit */short) ((((/* implicit */int) ((var_7) == (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_2] [i_3 + 1] [i_4] [i_4] [i_7] [i_12 + 1])))))) >> (((((/* implicit */int) (unsigned short)53362)) >> (((((/* implicit */int) arr_28 [(signed char)9] [i_3] [13U] [i_3] [i_7 - 1] [i_12 - 2])) - (36449)))))));
                        }
                        arr_47 [i_7 - 1] [i_3] [i_4] [(_Bool)1] [i_3] [i_2] = ((/* implicit */unsigned long long int) var_12);
                    }
                }
            } 
        } 
    } 
}
