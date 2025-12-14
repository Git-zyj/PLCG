/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147825
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(var_2)))) ? (33546240U) : (((((/* implicit */_Bool) var_4)) ? (3654980645U) : (((/* implicit */unsigned int) arr_3 [i_1] [(unsigned char)3] [i_1]))))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 2; i_2 < 7; i_2 += 1) 
                {
                    arr_10 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? ((+(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16795872176926080492ULL)) ? (((/* implicit */int) var_3)) : (arr_3 [2LL] [2LL] [2LL])))) ? (((((/* implicit */int) var_0)) * (((/* implicit */int) arr_1 [i_0] [i_2])))) : (((arr_3 [i_0] [i_0] [i_0]) / (var_9)))))));
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 25ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) var_17)))) : ((-(((/* implicit */int) (unsigned char)37)))))))));
                }
                for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (long long int i_5 = 1; i_5 < 8; i_5 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_1 - 1] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) arr_14 [i_4] [i_0] [i_1 + 1] [(unsigned short)10]);
                                var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_0] [i_5] [i_5 + 3] [i_5 - 1])) ? (((/* implicit */int) arr_15 [i_1 + 1] [i_0] [i_4] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) arr_15 [i_1 - 1] [i_0] [i_4] [i_5 + 1] [i_5 - 1])))) != (((/* implicit */int) ((451827183891889319LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34389))))))));
                                var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~((-2147483647 - 1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_4] [i_5]))))) ? ((+(18446744073709551612ULL))) : (((/* implicit */unsigned long long int) ((((-1551356487) + (2147483647))) << (((((-1913140419) + (1913140433))) - (13)))))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184)))))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (+(arr_13 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) var_18)) < (((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_1] [i_3]))))) : (min((((/* implicit */int) arr_14 [i_1] [i_0] [i_1] [i_0])), (arr_2 [i_0] [i_1] [i_0]))))));
                    var_21 -= ((/* implicit */short) 352445821);
                }
                for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    var_22 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)18)) <= (arr_0 [i_0] [i_1])))) % (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0]))));
                    arr_24 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)20510)))) << (((arr_0 [i_1] [i_0]) - (533248523)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_17))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-13)) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_0])) - (6493))))))))) : (min((((/* implicit */int) (signed char)10)), (arr_3 [i_6] [i_1 - 1] [i_0])))));
                    arr_25 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)2775)) : (arr_12 [i_6]))) >> (((((/* implicit */int) arr_23 [i_0])) + (62)))))) ? (((((/* implicit */int) (unsigned short)1)) * (((/* implicit */int) (signed char)-116)))) : (((((/* implicit */int) var_16)) + (((/* implicit */int) arr_19 [i_0] [i_0] [i_6] [i_6] [i_1 + 1]))))));
                    arr_26 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_0] [i_1 - 1])) ? (arr_22 [i_1] [i_1]) : (((/* implicit */int) (unsigned short)4))))));
                }
                arr_27 [3U] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_12 [i_0]);
                var_23 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-25536)) ? (((/* implicit */int) arr_8 [(short)4] [i_1 + 1] [i_0] [i_1 - 1])) : (((/* implicit */int) arr_8 [i_1] [i_1 + 1] [i_0] [i_1 - 1])))), (((((((/* implicit */int) (unsigned short)50360)) & (((/* implicit */int) var_15)))) - ((+(((/* implicit */int) (unsigned short)4095))))))));
                arr_28 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)59225)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned short)65534))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 4; i_7 < 16; i_7 += 3) 
    {
        for (unsigned short i_8 = 3; i_8 < 15; i_8 += 1) 
        {
            {
                arr_34 [i_7] [i_7] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-77)), (2011305865)));
                arr_35 [i_7] [i_8] [i_8] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 3174537430U)) ? (1120429894U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (1152921504606846975LL))))))), (((/* implicit */unsigned int) max((arr_33 [i_8 - 2] [i_8 - 2] [(signed char)9]), (((/* implicit */short) (signed char)7)))))));
            }
        } 
    } 
}
