/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147843
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
    var_10 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) arr_1 [i_0])))))))) ? (((((/* implicit */int) arr_1 [i_0])) << (((arr_0 [i_0]) - (390061005U))))) : (((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_2))))) : (((/* implicit */int) arr_1 [i_0])))))))));
        var_12 = ((/* implicit */long long int) var_8);
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) var_1))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_4 [i_1] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)244)) > (((/* implicit */int) ((unsigned char) arr_3 [(unsigned char)4] [i_1])))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 4; i_2 < 11; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)10)), (min((arr_8 [i_4] [i_3] [i_2 - 2] [i_1]), (((/* implicit */int) max((var_1), ((unsigned short)1685))))))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (unsigned short)10336)) - (10330)))));
                        arr_13 [i_1] [i_2 + 2] [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)11)) / (((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) var_0)))) : (((int) arr_8 [i_1] [i_1] [i_2 - 2] [i_2 - 2]))));
                        arr_14 [i_1] [i_1] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4])))))) * (((/* implicit */int) (unsigned short)10313))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)54721)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            for (unsigned short i_6 = 2; i_6 < 12; i_6 += 4) 
            {
                {
                    var_16 *= ((/* implicit */unsigned short) ((16383LL) + (((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (arr_5 [i_5 - 1] [i_6 - 1]))))));
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            var_17 ^= ((/* implicit */long long int) arr_17 [i_6 - 2] [i_5 + 3]);
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_6] [i_5] [i_5] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_5 + 4])) ? (((/* implicit */int) var_4)) : (559113620)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((var_6) - (((/* implicit */long long int) arr_12 [i_8] [i_5] [i_5] [i_5]))))))) : (((((/* implicit */_Bool) arr_26 [2U] [2U] [i_5] [i_6] [2U] [2U] [i_8])) ? (arr_17 [i_8] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)10809), (arr_3 [i_5] [i_6])))))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            var_19 |= ((/* implicit */unsigned short) ((2632922765242727120ULL) % (((/* implicit */unsigned long long int) 1381850271U))));
                            var_20 = (i_5 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_21 [i_5 + 3] [i_5] [i_7 + 1])) - (153)))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)54738)) : (((/* implicit */int) (unsigned char)8)))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [i_5 + 3] [i_5] [i_7 + 1])), ((unsigned short)10313))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((((/* implicit */int) arr_21 [i_5 + 3] [i_5] [i_7 + 1])) - (153))) - (33)))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)54738)) : (((/* implicit */int) (unsigned char)8)))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [i_5 + 3] [i_5] [i_7 + 1])), ((unsigned short)10313)))))));
                        }
                        for (long long int i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned int) var_3);
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) max(((short)-25857), (((/* implicit */short) arr_7 [i_1] [i_5 + 4] [i_1]))))), (((((/* implicit */int) arr_29 [i_1] [i_5 + 3] [i_6] [i_7] [i_10])) % (((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_5] [i_1])))))) ? (((((/* implicit */_Bool) arr_17 [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((_Bool) arr_27 [i_1] [12] [i_6] [i_7] [i_10])))))) : ((+(((long long int) 15824108491425893806ULL))))));
                            arr_32 [i_5] [i_5] [i_6] [i_7 + 1] [i_10] = ((/* implicit */short) (unsigned char)127);
                        }
                        var_23 = ((/* implicit */unsigned int) (!(((var_4) || (((/* implicit */_Bool) min((arr_11 [i_1] [i_1] [i_6] [i_7 + 1]), (((/* implicit */long long int) (unsigned char)15)))))))));
                        arr_33 [i_1] [i_5] [i_6] [i_7 + 1] = ((/* implicit */signed char) (unsigned char)100);
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((var_9), (((/* implicit */unsigned long long int) (signed char)-1)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_1] [i_5] [i_5] [i_7] [i_1])) >= (((/* implicit */int) arr_23 [i_1] [i_5] [i_5 + 4] [i_6] [i_7 + 1])))))))) ? ((+(arr_12 [i_5 + 3] [i_5] [i_7] [i_7 + 1]))) : ((+(((/* implicit */int) arr_15 [i_1] [i_1] [i_6 - 1]))))));
                    }
                    for (long long int i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        arr_37 [i_1] [i_5] [i_5] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) arr_31 [i_6] [i_5 - 1] [i_1])) : (((/* implicit */int) arr_19 [i_6 + 1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) (unsigned short)60214)), (var_6)))))) : (min((((/* implicit */unsigned long long int) arr_9 [i_1] [i_11] [i_11] [(short)8])), (((((/* implicit */_Bool) (short)-25857)) ? (15ULL) : (29ULL)))))));
                        var_25 -= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_3)) + (arr_28 [i_1] [i_5 - 1] [i_5 + 1] [i_6 + 1] [i_6]))));
                        var_26 *= ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) arr_20 [i_6 - 1])))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)0) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (short)-25857)))) == (((int) (unsigned char)116)))))) ^ ((+(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))) : (var_9)))))));
                    }
                    for (int i_12 = 1; i_12 < 10; i_12 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((2147483644) - (((/* implicit */int) (unsigned char)167)))))) ? (((/* implicit */int) ((unsigned short) min((arr_5 [i_5] [i_12]), (arr_27 [i_12 + 3] [i_6] [i_5 + 3] [i_1] [i_1]))))) : (max((2147483647), (((/* implicit */int) (unsigned char)10))))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_20 [i_6 + 1]))) | (((/* implicit */int) ((((/* implicit */int) (short)31288)) < (((/* implicit */int) (unsigned char)255)))))));
                    }
                    var_30 = ((/* implicit */int) ((signed char) min((((/* implicit */long long int) var_1)), (-7990590004916950333LL))));
                    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_6] [8LL] [i_6])) ? (((/* implicit */int) (unsigned char)220)) : (arr_38 [i_6 - 2])))) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) ((short) arr_11 [i_1] [i_5] [i_6 + 1] [i_6])))))))));
                }
            } 
        } 
    }
}
