/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160161
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
    for (long long int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = max((arr_4 [(_Bool)1] [i_0]), (((/* implicit */unsigned int) (_Bool)1)));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_2] [(_Bool)0] [(_Bool)0] [i_2] = ((/* implicit */long long int) min(((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 3] [i_0 + 3] [0LL]))) > (arr_2 [i_2])))))), (((int) (~(((/* implicit */int) (unsigned char)97)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */short) var_4);
                        arr_12 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((63) | (((/* implicit */int) (unsigned short)23777))));
                        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0 - 4]))));
                        arr_13 [i_0] [i_0] [i_0] [2LL] [i_0 + 3] |= (((_Bool)1) ? (((var_10) & (((/* implicit */unsigned long long int) arr_11 [i_3] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((((-78) + (2147483647))) << (((((/* implicit */int) (unsigned char)227)) - (227)))))));
                        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1] [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) 122219801220114304LL)) : (0ULL)))) ? (-8798321928076612888LL) : (((/* implicit */long long int) ((((((/* implicit */int) (short)-29785)) + (2147483647))) >> (((78) - (74)))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            var_19 = (~((-9223372036854775807LL - 1LL)));
                            var_20 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_7 [i_4] [i_1])) ? ((~(2451774083021298449LL))) : (((/* implicit */long long int) -63)))), (((/* implicit */long long int) ((49) & (((/* implicit */int) (signed char)127)))))));
                            var_21 = ((/* implicit */short) min(((~(((/* implicit */int) (unsigned char)127)))), (-60)));
                            var_22 = ((/* implicit */_Bool) arr_2 [i_0]);
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_2] [i_0]);
                            var_24 += ((/* implicit */_Bool) (~(((/* implicit */int) ((-1621674741) >= (((/* implicit */int) (unsigned char)209)))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (short)13654)) : (((/* implicit */int) (unsigned char)224)))))));
                            var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_0 + 2])) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)227)))))) == (((/* implicit */int) (short)32749))));
                        }
                        var_27 = ((/* implicit */unsigned long long int) (~(-1)));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -412311900)) ? (-412311914) : (785312615))))));
                                var_29 = ((/* implicit */unsigned long long int) max((((int) max((var_4), (arr_24 [i_0 + 2] [i_1] [i_0 + 2] [i_8] [i_2])))), (((((/* implicit */int) arr_22 [i_9])) / (((/* implicit */int) arr_22 [i_1]))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)58561)) ? (1534914406U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105)))));
                }
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    var_31 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (arr_18 [i_0] [i_0] [i_10] [i_1] [(unsigned char)0])))) ? (((/* implicit */unsigned long long int) min((arr_27 [i_0] [i_1] [i_10] [i_0] [i_10] [i_10] [i_0]), (arr_11 [i_0] [i_0] [i_1] [i_1])))) : (max((arr_28 [i_0] [4ULL] [4ULL] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (_Bool)1))))), (min((var_4), (((/* implicit */unsigned int) arr_25 [i_0] [i_0] [i_10] [i_0 + 1])))))))));
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_0 - 4] [i_0 + 1] [i_1]))))) ? (((/* implicit */long long int) (+(((((/* implicit */int) (short)3699)) + (((/* implicit */int) (short)-25762))))))) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) 1615532236U)) : (min((((/* implicit */long long int) arr_23 [i_0 + 3] [i_1] [i_0 + 3])), (8796093020160LL)))))));
                    var_33 = ((/* implicit */signed char) 9223372036854775807LL);
                    var_34 ^= ((/* implicit */unsigned int) ((((unsigned long long int) (unsigned char)250)) <= (((/* implicit */unsigned long long int) (-(arr_2 [i_0 - 2]))))));
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((arr_27 [i_10] [i_1] [i_1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_0 [i_0])))))) && (((/* implicit */_Bool) arr_0 [i_0]))));
                }
                for (unsigned char i_11 = 2; i_11 < 13; i_11 += 3) 
                {
                    arr_35 [i_1] [1U] = min((((unsigned int) (short)32749)), (min((arr_17 [i_0 + 2] [i_1] [i_11 + 1] [i_11 - 1]), (arr_17 [i_11] [i_11] [i_11] [i_11 - 2]))));
                    var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) min((((arr_17 [i_11 - 1] [i_0 + 3] [i_0] [i_0]) >> (((arr_17 [i_11 - 2] [i_0 + 1] [i_0] [i_0]) - (396958467U))))), ((~(arr_17 [i_11 + 1] [i_0 + 2] [i_0] [i_0]))))))));
                }
            }
        } 
    } 
    var_37 = ((/* implicit */signed char) var_2);
}
