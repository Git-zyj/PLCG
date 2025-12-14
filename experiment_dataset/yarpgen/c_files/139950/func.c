/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139950
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */int) var_11)) << (((((/* implicit */int) var_6)) - (219))))))));
    var_16 -= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152))) : (((((var_0) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) 14596465940204643478ULL)) ? (7705191698540373317ULL) : (((/* implicit */unsigned long long int) -1232874444019335315LL)))) - (7705191698540373317ULL))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 &= ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_4)) + (95)))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_18 *= ((min((arr_4 [i_0] [i_0] [i_1 + 1]), (((/* implicit */long long int) var_14)))) - (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_1 - 1])) ? (arr_4 [i_0] [i_1 - 1] [i_1 + 1]) : (arr_4 [i_0] [i_0] [i_1 - 2]))));
                        var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(17514778480265454000ULL)))) ? (((/* implicit */int) min((((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_0])), (var_1)))) : (((/* implicit */int) (unsigned char)25))))), (max((((unsigned int) 7705191698540373328ULL)), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_10 [i_3] [i_2] [i_1] [i_0])), ((unsigned short)65535))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_20 = var_9;
                            var_21 = ((/* implicit */unsigned int) (-(var_0)));
                        }
                        for (unsigned char i_5 = 1; i_5 < 12; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (-(min((max((3677833222286311822LL), (((/* implicit */long long int) (signed char)(-127 - 1))))), (((/* implicit */long long int) max((((/* implicit */short) arr_9 [1U] [i_3] [i_2] [i_1] [i_0] [i_0])), (arr_14 [i_0] [i_1] [i_2] [i_0] [i_5 - 1])))))))))));
                            var_23 = ((/* implicit */long long int) arr_15 [(signed char)6] [i_5] [i_5] [i_5] [i_5 - 1]);
                            var_24 |= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9180876697014763497LL)) ? (7705191698540373297ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) min((10741552375169178286ULL), (((/* implicit */unsigned long long int) var_6)))))))), (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_12 [i_0] [9U])) : (var_9))), (((/* implicit */long long int) ((unsigned short) 1976643017U)))))));
                        }
                        var_25 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_9 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 2] [i_1 - 1] [i_1 + 1])), (8611693422662526059LL))) | (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_2]))) : (max((((/* implicit */long long int) arr_3 [(_Bool)1] [i_1])), (var_9)))))));
                    }
                    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((long long int) min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) var_6)))));
                            var_27 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_14)), (arr_0 [i_0] [i_0]))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-11)), (arr_14 [i_0] [i_1] [i_1] [i_1] [i_7])))))))) ? (min((((/* implicit */int) (signed char)100)), (((((/* implicit */int) (unsigned short)511)) << (((/* implicit */int) var_5)))))) : ((-(((/* implicit */int) var_7))))));
                        }
                        for (unsigned char i_8 = 3; i_8 < 11; i_8 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3997852699U)) ? (((/* implicit */int) (unsigned short)54649)) : (((/* implicit */int) (unsigned char)137))));
                            var_29 -= ((/* implicit */signed char) min((arr_21 [i_0] [i_0] [i_2] [i_6] [i_8]), (((/* implicit */unsigned short) var_8))));
                        }
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned char) (~(-3677833222286311848LL)));
                            var_31 *= ((/* implicit */unsigned short) (short)2464);
                        }
                        for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (min((((/* implicit */unsigned long long int) arr_18 [i_0] [(unsigned char)6] [i_0])), (931965593444097598ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
                            var_33 *= ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) (unsigned char)0)) ? (297114596U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (signed char)127))))));
                            var_34 = ((/* implicit */long long int) max((min((4194303ULL), (((/* implicit */unsigned long long int) arr_4 [i_1 + 2] [i_6 + 1] [i_6 - 1])))), (((/* implicit */unsigned long long int) ((unsigned char) arr_18 [i_1 + 2] [i_6 + 1] [i_6])))));
                            var_35 = ((/* implicit */long long int) ((unsigned short) ((var_5) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)61))))));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_31 [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6])) : (((/* implicit */int) (unsigned char)200))))) ? (min((((/* implicit */long long int) arr_31 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6] [i_6])), (var_0))) : (((/* implicit */long long int) arr_27 [i_6 - 1] [i_6 + 1] [i_6] [i_6] [i_6 - 1]))));
                        }
                        var_37 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)78));
                    }
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_11] [i_2] [i_1 - 2])))), (((((/* implicit */_Bool) arr_9 [0ULL] [i_1 - 2] [7LL] [i_0] [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_11] [i_0] [i_2] [i_11] [i_0] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_11] [i_1 + 2]))))));
                        var_39 += ((((arr_33 [i_11] [i_1] [i_1 - 1] [i_11]) << (((arr_33 [i_0] [i_0] [i_1 + 1] [i_11]) - (163352779U))))) | (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (arr_33 [i_11] [i_1] [i_1 + 1] [i_11]))));
                    }
                }
            } 
        } 
    } 
}
