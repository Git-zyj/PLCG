/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147048
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
    var_11 += ((/* implicit */_Bool) var_10);
    var_12 = ((/* implicit */unsigned int) var_5);
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (short)-19143)))))), (((max((22ULL), (((/* implicit */unsigned long long int) var_6)))) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (var_1)))))))))));
    var_14 = ((/* implicit */int) min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-1)), (var_5)))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) var_6)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_1] [i_1] [i_0 + 1] = ((/* implicit */_Bool) max(((signed char)0), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1 + 2] [i_2]))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (var_10))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32289))) != (2005428735U)))), (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [6ULL] [i_1]))) * (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)1] [i_4]))))))))));
                                arr_15 [i_4] [9LL] [i_4] [i_4] [i_1] = ((/* implicit */_Bool) (~(((var_3) / (var_3)))));
                                var_16 = ((/* implicit */_Bool) var_8);
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)292)) || (((/* implicit */_Bool) arr_1 [i_1 + 1] [i_2 + 1])))) ? ((((-2147483647 - 1)) / (((/* implicit */int) arr_1 [i_1 + 2] [i_2 - 2])))) : ((-(((/* implicit */int) var_0)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_1] [i_0] [i_5] [(_Bool)1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) : (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                        arr_19 [i_0] [i_0] [i_2] [i_1] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_5))))));
                    }
                    for (short i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        arr_22 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) 0U);
                        arr_23 [i_1] [i_1] = ((/* implicit */unsigned int) 0ULL);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_7 = 1; i_7 < 11; i_7 += 1) 
                        {
                            var_18 += ((/* implicit */short) ((var_10) / (2898976072994377079ULL)));
                            arr_28 [i_0 + 2] [i_1] [i_2] [i_6] [i_7] = ((/* implicit */long long int) 0);
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0 + 2])) ? (arr_20 [i_0] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                            var_20 *= ((/* implicit */unsigned short) (+(((((/* implicit */int) (signed char)73)) + (((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1]))))));
                        }
                        for (unsigned char i_9 = 3; i_9 < 11; i_9 += 1) 
                        {
                            arr_34 [i_0] [i_1] [i_2 - 2] [4ULL] [i_9] [i_9] = ((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)4)))) - (((((((/* implicit */_Bool) arr_24 [i_1])) ? (((/* implicit */int) arr_5 [i_6] [i_2] [i_1 - 1])) : (((/* implicit */int) arr_31 [i_9] [i_1 - 1] [i_2] [i_0] [i_2] [i_1 - 1] [i_0])))) - (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_24 [i_1]))))))));
                            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((int) var_3)))))));
                            var_22 = ((/* implicit */signed char) min(((-(var_8))), (var_9)));
                            arr_35 [(_Bool)1] [i_6] [i_1] [i_1] [i_0 - 1] = ((/* implicit */int) (short)0);
                        }
                        for (int i_10 = 4; i_10 < 11; i_10 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1] [i_2] [i_6] [i_6] [i_10])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_10] [i_6] [i_2] [i_2] [i_1] [i_1] [i_0])))))) ? (((/* implicit */int) arr_21 [i_10 - 3] [i_10 - 3] [i_10 - 3] [i_10] [i_10 + 2])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) arr_17 [10ULL] [i_0 - 1] [i_2 - 1] [i_0 - 1] [i_10 - 2])) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) arr_25 [(signed char)2] [(signed char)2] [i_6] [10ULL] [i_6])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0 - 1] [i_0] [2LL] [(short)8] [i_0 - 1] [i_0] [i_0]))) != (var_5)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [2U] [i_1] [i_2 + 2] [i_6] [i_10 + 3])) || (((/* implicit */_Bool) ((3515122142U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_1 + 2] [i_1 + 2] [12ULL] [i_10]))))))))))))));
                            arr_39 [i_1] [(short)10] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_10] [i_6] [i_6] [i_2] [i_0 + 2] [i_0] [i_0 + 2]))) & (arr_8 [i_10] [i_6] [i_0 + 2])))))))) <= (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (var_9)))), (var_5)))));
                            var_24 = ((unsigned int) var_2);
                            var_25 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) (unsigned short)292))))) - (((((((/* implicit */_Bool) -1141440426720495418LL)) ? (((/* implicit */int) (unsigned short)65248)) : (arr_38 [i_10 - 3] [11LL] [i_6] [(unsigned char)7] [i_1] [i_0]))) + (((((/* implicit */_Bool) (unsigned char)152)) ? (arr_0 [i_6] [i_1 - 1]) : (((/* implicit */int) arr_5 [i_6] [11ULL] [9ULL]))))))));
                        }
                    }
                }
            } 
        } 
    } 
}
