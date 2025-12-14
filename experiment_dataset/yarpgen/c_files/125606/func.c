/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125606
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3706128773U)));
        var_18 = ((((/* implicit */_Bool) (((+(9223372036854775807LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))) ? (((/* implicit */int) ((6219220138444457214ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4)))))) : ((~(((/* implicit */int) (_Bool)0)))));
        var_19 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-872)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_2 - 1] [i_1 - 3]), (arr_0 [i_2 + 1] [i_1 - 2]))))) : (((((/* implicit */_Bool) (unsigned short)2)) ? (arr_3 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2)))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 7; i_3 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_6 [i_0]))));
                        var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_0 [i_1] [i_2])))) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (unsigned short)2285))))), (max((max((((/* implicit */unsigned long long int) var_10)), (arr_3 [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [i_1] [i_2] [5])), (arr_1 [i_0]))))))));
                    }
                    for (signed char i_4 = 2; i_4 < 7; i_4 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_8 [6ULL]))))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) max((arr_12 [i_0] [(unsigned char)2] [(unsigned char)0] [10ULL]), (((/* implicit */unsigned char) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (arr_6 [0U]))))))));
                        var_24 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_4] [i_2] [i_1] [i_0])) ? (arr_9 [8ULL] [8ULL] [i_2 + 1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned short)6]))))) == (((/* implicit */long long int) (~(arr_6 [(unsigned short)0]))))));
                        /* LoopSeq 3 */
                        for (int i_5 = 2; i_5 < 9; i_5 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned short) arr_6 [i_2]);
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), ((-(((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)45))) : (arr_3 [i_0]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))))))))));
                        }
                        for (int i_6 = 2; i_6 < 9; i_6 += 2) /* same iter space */
                        {
                            arr_19 [8LL] [i_0] [i_4 + 4] [i_0] = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (unsigned char)252)), (((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (unsigned short)59025)) : (((/* implicit */int) arr_16 [7] [i_0] [i_1] [i_2] [i_4] [i_6])))))), (((/* implicit */int) arr_0 [i_0] [i_4]))));
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_0] [i_6] [i_2] [i_6])), (arr_9 [i_2] [i_4 + 3] [i_4] [(unsigned short)5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)111)) && (((/* implicit */_Bool) 1231715483))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_17) : (((/* implicit */unsigned long long int) -9223372036854775785LL))))) ? (((/* implicit */int) arr_10 [i_1] [i_2 + 1] [i_4] [i_6 + 1])) : (((/* implicit */int) arr_5 [i_6] [0ULL] [i_0 + 1])))))))));
                        }
                        for (int i_7 = 2; i_7 < 9; i_7 += 2) /* same iter space */
                        {
                            arr_23 [i_2] [i_2] [i_2 - 1] [i_0] [i_7] [i_2] = ((/* implicit */signed char) (-(max((((/* implicit */int) (signed char)-122)), (arr_17 [i_7 - 2] [i_4 + 3] [(signed char)5] [i_0 - 1] [i_7] [i_0] [i_4])))));
                            var_28 ^= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (arr_11 [i_0] [i_2] [0LL] [(short)1])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_7]))) : (min((var_8), (((/* implicit */unsigned long long int) (signed char)-119)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_0] [i_7] [i_7 + 2] [i_2 - 1]))))));
                        }
                    }
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) (~(arr_6 [i_0]))))))))))));
                    var_30 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_16 [i_2 + 1] [i_0] [i_2] [i_0 - 1] [(unsigned short)8] [i_2 - 1])), (((((/* implicit */_Bool) arr_16 [i_2 + 1] [i_0] [i_2] [i_2] [i_2] [i_1])) ? (((/* implicit */int) arr_16 [i_2 + 1] [i_0] [i_2] [4] [i_0] [i_2])) : (((/* implicit */int) var_12))))));
                    arr_24 [i_0] [i_0] [10] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-32)) ? (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned long long int) 1577670801)) : (5532849061318040903ULL))) : (((/* implicit */unsigned long long int) -1393098103))));
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 3) /* same iter space */
    {
        var_31 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8] [8ULL] [(short)2] [6ULL]))) == (var_15))))));
        var_32 = ((((/* implicit */_Bool) min((5594278777238912688ULL), (var_15)))) ? (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_11 [i_8] [i_8] [i_8] [i_8]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_8] [i_8] [i_8] [i_8] [i_8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        arr_27 [i_8] [i_8] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-1664)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)220)) - (199)))))), (arr_20 [(short)6] [i_8] [i_8])));
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [(unsigned char)0] [2LL] [i_8 - 1] [(unsigned char)10] [i_8] [i_8])) < (((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_21 [i_8] [i_8] [i_8] [i_8] [i_8 - 1] [i_8] [i_8])))) == (((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_8] [(short)4] [i_8] [i_8])), ((unsigned char)163)))))))));
    }
    var_34 = (((((-(((/* implicit */int) var_2)))) != (var_6))) ? ((((!((_Bool)1))) ? (((/* implicit */int) (signed char)-46)) : ((~(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_11)));
    var_35 = ((/* implicit */int) var_5);
}
