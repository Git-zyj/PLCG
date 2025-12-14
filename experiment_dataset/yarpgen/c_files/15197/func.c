/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15197
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) min((3010405917U), (((/* implicit */unsigned int) (_Bool)1)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) -978354532)) ? (((/* implicit */int) (unsigned short)23024)) : (((/* implicit */int) (_Bool)0)))))));
                        var_15 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_1 - 1]))));
                        arr_10 [(signed char)0] [(signed char)0] &= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)194)) && ((_Bool)0))) ? (((arr_8 [(_Bool)1] [i_2] [(unsigned short)0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17319))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) 1562635810239431533LL))))))));
                        arr_11 [(_Bool)1] [i_1] [(_Bool)1] &= ((/* implicit */unsigned short) arr_1 [i_0] [i_1 - 1]);
                        var_16 ^= ((/* implicit */unsigned char) (((_Bool)1) ? (arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 1]) : (((/* implicit */long long int) var_6))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        arr_14 [(unsigned short)2] [(unsigned short)2] [i_1] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max(((short)115), (((/* implicit */short) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_4 [(short)6] [i_1] [i_2]))) + (((/* implicit */int) ((var_6) <= (((/* implicit */int) (_Bool)0)))))))) : (min((((unsigned long long int) (short)-116)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)31094)) : (((/* implicit */int) (unsigned short)8192)))))))));
                        arr_15 [i_0] [i_0] [i_1 + 2] [i_2] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1284561383U)) ? (((((/* implicit */int) (signed char)22)) * (((/* implicit */int) (unsigned char)59)))) : (((/* implicit */int) arr_5 [i_4] [i_1 + 1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) min((var_6), (((/* implicit */int) (unsigned char)59))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned char)7])) : (((/* implicit */int) (_Bool)1)))) : (max((arr_0 [i_4]), (((/* implicit */int) (unsigned short)56848)))))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 2] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1] [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1] [i_1 - 1] [i_1 + 1]))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 2; i_5 < 9; i_5 += 2) 
                        {
                            arr_18 [i_2] = ((((/* implicit */_Bool) ((signed char) min((((/* implicit */short) arr_16 [i_0] [i_0] [(unsigned char)4] [i_2] [i_4] [(unsigned char)6])), (arr_5 [(short)3] [i_1] [i_2]))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_17 [i_1 + 1] [i_1 + 1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) 1648247645U)));
                            arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)30253)) << (((906451853U) - (906451851U)))));
                        }
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_17 ^= ((/* implicit */int) arr_4 [i_0] [i_6] [i_2]);
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)61)))));
                            var_19 *= ((/* implicit */short) min((((((/* implicit */int) (unsigned short)35283)) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) 3453640642U)))))));
                            var_20 = ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) 433527819))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)11)))) : (((/* implicit */int) (unsigned short)8678)));
                        }
                        var_21 = ((/* implicit */long long int) (-((+(max((arr_7 [i_0] [i_1] [i_2] [i_2]), (arr_7 [i_0] [i_0] [i_0] [i_2])))))));
                    }
                    var_22 -= ((/* implicit */unsigned short) (short)32766);
                    arr_23 [i_0] [9LL] [i_2] = ((/* implicit */short) min((((/* implicit */int) ((signed char) arr_20 [i_1 - 1] [i_1 - 1] [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 2]))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) (unsigned char)194))))));
                }
                var_23 -= ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) (signed char)-1)) ? (arr_4 [i_0] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
            }
        } 
    } 
}
