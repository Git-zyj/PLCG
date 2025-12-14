/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143278
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((long long int) (unsigned char)124))) ? (var_4) : (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))))) <= (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)124), ((unsigned char)56)))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_11 [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) var_6);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) (unsigned char)200)) + (((/* implicit */int) (unsigned char)131))))))));
                                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) 7898510268875071871LL)), (267911168ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (arr_8 [i_0])))))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        var_12 |= ((/* implicit */long long int) 2147483647);
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                        {
                            var_13 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) / (arr_16 [i_6] [i_5] [i_1 + 3] [i_0] [i_5] [i_0])));
                            var_14 = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((arr_8 [i_1]) - (10465474950662965276ULL))))))))) : (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((arr_8 [i_1]) - (10465474950662965276ULL))) - (3150457695825898053ULL)))))))));
                            var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) != (11919313107023320701ULL)));
                        }
                        for (int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21266)) ? (((/* implicit */int) (unsigned char)132)) : (2147483647)))) ? (((/* implicit */int) (unsigned short)37405)) : (((/* implicit */int) arr_20 [i_1 + 2] [i_0] [i_0] [i_1 - 1]))));
                            var_17 = ((/* implicit */signed char) var_6);
                            var_18 = ((/* implicit */int) max((var_18), (((var_1) >> (((((/* implicit */int) arr_19 [i_1 - 1] [i_1 + 3] [i_1 + 1] [i_1 + 3] [i_1 + 1] [i_1 - 1])) - (103)))))));
                            var_19 = ((/* implicit */unsigned long long int) (((-(1004749544U))) != (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            arr_25 [i_7] [i_7] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [(_Bool)0] [i_0] [i_0] [i_0]))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_2)))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 1; i_8 < 15; i_8 += 4) 
                        {
                            arr_29 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) != (((/* implicit */int) (signed char)124))));
                            var_20 += ((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_0] [i_1 + 2] [i_2] [i_2] [8LL] [(unsigned short)15] [i_8 + 1])) + (((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_2] [i_8 - 1] [i_1 - 1] [i_1]))));
                        }
                        for (int i_9 = 1; i_9 < 12; i_9 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89))) + (arr_9 [i_0] [i_0] [i_0] [i_0])));
                            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58891))));
                        }
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-(((/* implicit */int) arr_30 [i_0] [i_0])))))));
                        arr_34 [i_0] [i_1] [i_1] [(short)8] = ((/* implicit */int) arr_16 [i_10] [i_1] [i_2] [i_1 - 1] [i_1] [i_0]);
                    }
                    for (int i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 16; i_12 += 4) 
                        {
                            var_24 -= ((/* implicit */int) ((unsigned char) -368950810025346164LL));
                            arr_39 [i_0] [i_0] [i_0] [i_1] [i_0] [12] [i_0] = ((/* implicit */int) ((signed char) arr_32 [i_1] [i_1 + 1] [(short)6] [i_11]));
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) 1479493911113435177ULL))));
                            arr_44 [i_0] [i_1] [i_1] [i_11] [i_13 - 1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)65535)))) ? ((((!(((/* implicit */_Bool) arr_43 [i_1] [i_11] [i_2] [i_0] [i_1])))) ? (((/* implicit */int) arr_27 [i_13 - 1] [i_2] [i_1 + 3] [10LL])) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_1] [i_11] [i_13] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) 17)) && (((/* implicit */_Bool) (unsigned short)20274)))))));
                        }
                        arr_45 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)50506)) >> (((((/* implicit */int) var_7)) - (182)))));
                        arr_46 [i_0] [i_0] [(short)3] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) min((var_0), (((/* implicit */int) max((((unsigned char) var_8)), (arr_6 [i_0]))))));
                    }
                }
            } 
        } 
    }
    var_26 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -7898510268875071872LL)), (16944941522407420099ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */long long int) ((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2)))))), (var_4))));
    var_27 = max(((unsigned char)132), (((/* implicit */unsigned char) ((((/* implicit */int) var_7)) != (((/* implicit */int) ((unsigned char) var_2)))))));
}
