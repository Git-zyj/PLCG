/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161661
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
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_5)), (var_15)));
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-32761)) ? (140703128616960LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) > (((/* implicit */long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned char) var_14))))))));
    var_22 = ((/* implicit */short) var_9);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((short)-23025), (((/* implicit */short) var_18))))) || (((((/* implicit */int) (unsigned short)28615)) >= (((/* implicit */int) (unsigned short)28615))))));
        var_24 = ((/* implicit */unsigned char) 7255780236707620684ULL);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_14)), (var_17))) * (max((((/* implicit */unsigned long long int) (unsigned char)234)), (13523341141183594117ULL)))))) ? (((/* implicit */long long int) 9U)) : (max((((/* implicit */long long int) (unsigned char)1)), ((-9223372036854775807LL - 1LL))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_25 = ((9223372036854775807LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) -3)) : (0ULL))), (((/* implicit */unsigned long long int) ((var_17) != (((/* implicit */unsigned long long int) -3)))))))) ? (((((/* implicit */_Bool) 755009079645349972LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (755009079645349972LL))) : (((/* implicit */long long int) ((((/* implicit */int) (short)19966)) << (((3393896440U) - (3393896433U))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_2 - 1] [i_0] [i_4] = (short)-19967;
                                var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_28 ^= ((/* implicit */_Bool) var_15);
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_16))));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)12))));
                            var_31 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) == (var_6)));
                        }
                        for (unsigned char i_7 = 2; i_7 < 11; i_7 += 2) /* same iter space */
                        {
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-16176)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (4329455434419346395LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133)))))) : (var_6)));
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) (signed char)-13))));
                            arr_21 [(short)0] [i_0] [i_0] [i_2] [i_5] [i_7] [i_7] = ((/* implicit */short) 2662796667U);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) * (((/* implicit */int) (unsigned char)1))));
                            arr_26 [i_0] [i_8] [i_2 + 1] [i_0] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) & (((/* implicit */int) (_Bool)1))));
                            var_35 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) + (9261166754358871637ULL));
                        }
                        arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)-114)))) << (((((/* implicit */int) var_2)) - (14923)))));
                    }
                }
            } 
        } 
        arr_28 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? (737014681) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)33)) && (((/* implicit */_Bool) var_8))))))), (((/* implicit */int) var_18))));
    }
    var_36 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */long long int) 2711934876U)) : (874637639416268544LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (1583032417U))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)1), (var_18))))) == (var_15))))));
}
