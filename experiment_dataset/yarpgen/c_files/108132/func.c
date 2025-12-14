/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108132
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((arr_1 [i_0] [i_1]) | (arr_1 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))));
                    arr_9 [i_0] [i_1] [i_2] [(unsigned short)11] = ((/* implicit */_Bool) (signed char)50);
                    var_19 |= ((/* implicit */int) (-((+(1592945967U)))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) var_8);
                        var_21 = max((((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_3]))) : (-2324182712706448796LL)))) : (((arr_6 [i_0] [i_0] [i_3]) - (arr_6 [i_1] [i_1] [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_3])) / (((/* implicit */int) arr_8 [i_1] [i_2]))))));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-2324182712706448778LL)))) ? (15823941789524912401ULL) : (((/* implicit */unsigned long long int) (-(2262834565U)))))))));
                            var_23 ^= arr_5 [i_2] [i_1] [i_0];
                            var_24 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14972))))), ((+(((/* implicit */int) arr_12 [15LL] [i_1] [i_1] [i_1] [i_1]))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */int) (~(arr_2 [i_0] [i_0])));
                            var_26 = ((/* implicit */_Bool) max((((5730665009913545354ULL) << (((((((-7511853071089301555LL) + (9223372036854775807LL))) << (((((((-9223372036854775794LL) - (-9223372036854775782LL))) + (40LL))) - (26LL))))) - (6846075863061896997LL))))), (((/* implicit */unsigned long long int) ((short) arr_11 [i_0] [i_1] [i_2] [i_0] [i_5])))));
                            arr_17 [i_0] [i_0] [i_2] [i_5] [i_5] = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_14 [i_2] [i_1] [i_0])) : ((-(((/* implicit */int) arr_12 [i_3] [i_1] [i_2] [i_3] [i_5])))))), (((/* implicit */int) arr_7 [i_5] [i_3] [i_2] [i_1]))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) arr_4 [i_0])), (arr_2 [i_6] [i_0]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_3])), (arr_15 [i_6] [i_1] [i_2] [i_3] [i_1] [i_3] [6U]))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [(unsigned short)12] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))));
                            var_28 = ((/* implicit */long long int) min((max((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_6]))), (arr_7 [i_6] [i_3] [i_2] [i_0])));
                            var_29 &= ((/* implicit */unsigned char) max((5730665009913545354ULL), (((/* implicit */unsigned long long int) ((long long int) arr_6 [i_0] [i_1] [i_2])))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                        {
                            arr_26 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) (+(min((((/* implicit */int) min((var_6), (((/* implicit */short) (signed char)50))))), (arr_11 [i_0] [i_0] [i_2] [i_3] [i_7])))));
                            var_30 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [11U] [i_3] [i_7] [i_1] [i_0])) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_3] [i_3])) : (((/* implicit */int) arr_0 [i_2])))))) ? (((/* implicit */int) ((((var_15) == (((/* implicit */unsigned long long int) -1LL)))) && (((/* implicit */_Bool) arr_8 [i_2] [i_7]))))) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]))));
                            var_31 |= ((/* implicit */short) min((((/* implicit */int) arr_8 [i_7] [i_7])), ((~((+(var_0)))))));
                            arr_27 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_2] [i_3] [(unsigned short)2]);
                        }
                        var_32 = ((((/* implicit */int) (_Bool)1)) << (((arr_10 [i_3] [9ULL]) - (3788385610412781483LL))));
                        var_33 = ((/* implicit */unsigned long long int) min((min((arr_20 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3]), (arr_20 [i_3] [i_0] [i_1] [i_1] [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [15ULL] [i_3] [i_2] [i_2] [i_0] [i_0])) && (((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3])))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 3) 
                        {
                            arr_35 [i_0] [i_1] [i_2] [i_0] [i_9] = ((/* implicit */short) ((((/* implicit */long long int) ((int) (unsigned short)14972))) ^ (((((/* implicit */_Bool) arr_14 [i_8] [i_1] [i_0])) ? (((/* implicit */long long int) arr_34 [i_9] [i_8] [i_0] [i_1] [i_0])) : (var_1)))));
                            var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_31 [i_0] [i_1] [i_2] [i_9 - 1] [(unsigned short)0])) : (((/* implicit */int) arr_24 [i_8] [i_9 + 1] [i_9 - 1] [i_9 - 1]))));
                        }
                        var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_8] [i_8])) ? (arr_29 [i_0] [i_1] [(unsigned short)14] [i_8] [i_1] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (short)-20212))))))));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            var_36 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                            var_37 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) arr_29 [i_0] [i_0] [i_2] [i_0] [i_8] [11])))));
                            var_38 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) (unsigned short)14505)), (5730665009913545358ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)240)))))));
                        }
                    }
                    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        var_39 &= ((/* implicit */unsigned long long int) (~(arr_38 [i_0] [i_1] [i_0] [i_11])));
                        var_40 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (arr_10 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (2622802284184639235ULL)));
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)0)), (2622802284184639215ULL)))) ? (((/* implicit */int) ((12716079063796006251ULL) != (((/* implicit */unsigned long long int) 3017395056U))))) : (((/* implicit */int) arr_31 [i_0] [(unsigned char)7] [i_0] [i_0] [i_11]))))) ? (((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((~(2324182712706448788LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) (-((-(var_11))))))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 4; i_12 < 18; i_12 += 1) 
                    {
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [(signed char)5])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_1] [i_12] [i_2] [i_12 + 1])) : (((/* implicit */int) var_17))));
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_12 - 1] [i_12 - 4] [i_12 - 1] [i_12 - 4] [i_12 - 2])) ? (((/* implicit */int) arr_32 [i_0] [i_1] [i_1] [i_2] [i_12] [i_1] [i_13])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                            var_44 = ((/* implicit */signed char) arr_0 [i_1]);
                            arr_48 [i_12] [i_1] [i_1] [i_2] [i_1] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_2)) ^ (3226477382U)));
                        }
                        for (long long int i_14 = 1; i_14 < 17; i_14 += 2) 
                        {
                            arr_51 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_15)) ? (1068489914U) : (((/* implicit */unsigned int) arr_30 [i_0] [i_1] [i_2])))) < (((/* implicit */unsigned int) ((int) arr_28 [i_0] [i_0] [i_2] [i_12 - 2])))));
                            arr_52 [i_0] [i_1] [i_2] [i_12] [i_14] = ((/* implicit */int) ((unsigned char) arr_50 [i_0] [i_14 + 2] [i_2] [i_12] [i_12] [11LL]));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        for (long long int i_16 = 4; i_16 < 18; i_16 += 2) 
                        {
                            {
                                var_45 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_42 [i_16 - 1] [i_16 - 3] [i_16 + 2] [i_16 - 1]) / (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_1] [i_15] [i_16 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 9223372036854775793LL)))) : (2324182712706448793LL)));
                                var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) max((min((9223372036854775782LL), (((/* implicit */long long int) (unsigned char)6)))), (((/* implicit */long long int) ((unsigned int) -2324182712706448779LL))))))));
                                var_47 += ((/* implicit */_Bool) 134217727);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_48 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
}
