/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161148
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
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
    var_17 = ((/* implicit */int) min((var_8), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) (unsigned short)50448);
        var_19 = ((int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_13)))) : ((+(0)))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [2LL])))))));
        var_20 = ((((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0 + 2] [i_0 - 1]), (arr_1 [i_0 + 2]))))) < (min((((/* implicit */long long int) (unsigned char)158)), (9223372036854775807LL))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_12 [i_2] [i_2] [i_1] [i_1] [i_2] [i_1] = ((long long int) (+(((unsigned int) arr_5 [i_0]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            arr_17 [i_0] [0LL] [i_2] = ((/* implicit */unsigned long long int) ((((long long int) max((var_11), (var_1)))) == (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                            var_21 -= ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)193))))), (min((((/* implicit */unsigned short) var_2)), (arr_7 [i_1 - 1] [i_3] [i_2] [i_4 + 1])))));
                            arr_18 [i_2] [i_1] [i_2] [i_2] [i_2] [i_4] [i_4] = max((min((((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775799LL)) ? (((/* implicit */int) arr_2 [i_0] [i_4])) : (((/* implicit */int) arr_2 [5] [(short)0]))))), (((((/* implicit */_Bool) arr_15 [i_4] [i_4] [9ULL] [i_1] [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35772))) : ((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_4 + 1] [i_1] [i_2] [i_0 + 1] [i_1 + 2] [i_1 + 1]))))), (((((/* implicit */_Bool) var_14)) ? ((~(-7554039879168876133LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))))))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                        {
                            arr_21 [(unsigned char)20] [(unsigned char)20] [(signed char)22] [i_0] [i_2] = ((/* implicit */short) (-(max((var_9), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [(signed char)11] [(signed char)11])))))))));
                            arr_22 [i_2] [i_2] [i_2] [i_3] [(unsigned short)0] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_12)))), ((~(((arr_14 [i_2] [i_1] [i_2] [i_2] [(unsigned char)12] [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))))));
                            arr_23 [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                            var_23 &= ((/* implicit */long long int) arr_6 [i_2]);
                            var_24 ^= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (((((/* implicit */_Bool) (unsigned char)182)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5] [i_5]))))))) / (((/* implicit */unsigned long long int) (+(arr_10 [i_0 - 1] [i_1] [(unsigned char)20] [i_3] [(_Bool)1]))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                        {
                            var_25 -= ((/* implicit */unsigned short) var_14);
                            arr_26 [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32122)) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_3])))) : ((+(((/* implicit */int) var_2)))))))));
                            arr_27 [i_0] [i_2] [(unsigned char)10] = ((/* implicit */unsigned short) arr_6 [i_2]);
                            var_26 |= ((/* implicit */unsigned short) var_2);
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */int) max((min((var_0), (((/* implicit */short) var_4)))), (arr_1 [i_0 + 2])))) - (((/* implicit */int) arr_24 [(short)22]))));
                        }
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [15ULL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_0 [i_1 + 1] [i_2]))))) : (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551612ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (arr_10 [i_0] [i_1] [i_2] [i_2] [i_3]))))))));
                    }
                } 
            } 
        } 
    }
}
