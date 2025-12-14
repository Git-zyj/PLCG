/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117977
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_12 = ((((((/* implicit */unsigned int) arr_6 [i_2 + 3] [i_2 - 1] [i_2 + 3] [i_1])) - (17U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_1])) ? (arr_6 [i_2 - 1] [i_2 + 3] [i_2 - 1] [i_1]) : (524934617)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        arr_10 [i_1] [i_1] [i_1] = ((((/* implicit */int) ((((/* implicit */_Bool) (short)23741)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 649468453U)) : (11387057611346494156ULL))))))) / ((-(((/* implicit */int) var_3)))));
                        var_13 ^= arr_3 [12LL] [i_0] [i_0];
                    }
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_1] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_12 [(short)11] [i_1] [i_0] [i_2] [i_2 + 2] [i_2 + 2]), (arr_12 [i_0] [i_1] [i_0] [i_1] [i_2 + 2] [i_2 + 2])))) && (((/* implicit */_Bool) -524934623))));
                        arr_14 [i_0] [i_1] [i_0] [i_2] [i_4] = ((/* implicit */unsigned long long int) (((!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 12778641088131660103ULL)))))) || ((((!(((/* implicit */_Bool) arr_5 [i_2])))) || (((/* implicit */_Bool) max((arr_12 [i_0] [i_1] [i_2 - 1] [i_1] [7ULL] [i_4]), (((/* implicit */unsigned int) arr_1 [i_0])))))))));
                        arr_15 [(short)1] [i_1] [i_2 - 1] [i_1] [1ULL] [i_4] = ((/* implicit */long long int) ((((4294967291U) | (((/* implicit */unsigned int) arr_8 [i_1] [1LL] [13] [i_2 + 1])))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)6325)) : (-524934626))))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            for (unsigned int i_7 = 4; i_7 < 18; i_7 += 2) 
            {
                {
                    var_14 -= ((/* implicit */short) ((((((/* implicit */_Bool) -288230376151711744LL)) ? (1933434507066486780ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25502))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 35184372088831ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_7)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)143))) ^ (arr_24 [i_7 - 1] [i_6] [i_7 - 2]))))))));
                    arr_28 [i_5] [i_5] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_5])) && (((/* implicit */_Bool) arr_22 [i_5])))))) <= (max((((/* implicit */unsigned int) -407510341)), (4294967279U))));
                    /* LoopSeq 3 */
                    for (signed char i_8 = 1; i_8 < 18; i_8 += 4) 
                    {
                        arr_31 [i_5] [i_7] = ((/* implicit */unsigned char) var_9);
                        arr_32 [i_7 - 3] [i_7 - 3] [i_5] [i_7] = ((/* implicit */long long int) (-(((unsigned int) max((((/* implicit */unsigned long long int) arr_19 [i_5 + 1])), (var_9))))));
                        var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_10) || ((!(arr_27 [i_7 + 2] [i_7 - 4] [i_7 - 3]))))))) & (((arr_22 [i_7]) * (arr_22 [i_6])))));
                        arr_33 [i_7] [i_7] [i_5] [i_7 - 1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_5] [17ULL] [i_5 + 3])) ? (9208985284198921143ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((4294967272U) | (var_5))) : (((/* implicit */unsigned int) arr_17 [i_5])))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) > (((int) 18153544733658938858ULL)))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_16 *= ((/* implicit */unsigned int) ((max((((9237758789510630473ULL) << (((/* implicit */int) arr_25 [i_7] [i_7 + 1] [i_7] [(unsigned short)5])))), (((/* implicit */unsigned long long int) arr_20 [i_5])))) >> (((max((((/* implicit */unsigned int) arr_16 [i_7])), (var_7))) - (1408872464U)))));
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
                        {
                            arr_41 [3ULL] [i_5] [i_9] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) arr_16 [i_5])))))));
                            arr_42 [i_5] [i_7] [i_10] [4ULL] = ((/* implicit */unsigned long long int) ((short) (!(((((/* implicit */_Bool) arr_35 [i_9])) || (((/* implicit */_Bool) arr_26 [i_10] [i_6] [i_5 + 3])))))));
                            arr_43 [i_5] [i_6] [i_7] [16ULL] [i_7] &= ((/* implicit */unsigned long long int) ((long long int) var_5));
                        }
                        for (short i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-(var_0))))));
                            arr_46 [i_5] [i_6] [i_7] [i_9] [i_5] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >= (arr_21 [i_6] [i_9])))), (((arr_40 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [0U] [i_6] [i_6] [i_6]))) : (var_0)))))));
                        }
                        for (int i_12 = 0; i_12 < 20; i_12 += 2) 
                        {
                            var_18 ^= ((/* implicit */unsigned int) arr_16 [i_12]);
                            arr_49 [i_9] [i_9] [i_9] [i_5] [16ULL] = ((/* implicit */short) ((((((/* implicit */int) arr_18 [i_7 + 1])) & (((/* implicit */int) arr_18 [i_7 - 1])))) > ((~(((/* implicit */int) ((arr_47 [i_5] [(unsigned char)18] [i_5] [i_9] [i_12]) < (((/* implicit */unsigned long long int) arr_22 [i_5])))))))));
                            arr_50 [i_6] [i_7] [i_9] [i_5] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_36 [i_5] [(short)12] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5))), (((/* implicit */unsigned int) (short)30497)))) + (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_4))))))));
                            var_19 *= ((/* implicit */unsigned long long int) (short)-8041);
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_20 += ((/* implicit */int) 18446744073709551615ULL);
                            arr_53 [i_5 + 1] [i_5 + 1] [i_5 + 3] [i_5] [i_5] = ((/* implicit */unsigned char) (~((~(288230238712758272ULL)))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (+(var_0)))))) >= (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)0)), (arr_20 [i_5 - 1])))) ? (arr_24 [i_5] [i_5] [5LL]) : (2382678249U)))));
                            arr_54 [i_5] [(unsigned char)12] [i_5 + 3] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_13] [i_6] [i_5] [i_6] [i_5])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_5])) ? (((unsigned long long int) 2885154936U)) : (min((arr_47 [(_Bool)1] [i_6] [i_5] [i_5] [17ULL]), (((/* implicit */unsigned long long int) arr_51 [i_5] [i_5] [i_5] [(unsigned char)19] [i_13])))))))));
                            arr_55 [i_5 + 3] [i_5] [i_5 - 1] [i_5] [i_5 + 3] [i_5] [i_5 + 3] = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) (-(7058904041655661311LL)))), (arr_34 [i_5] [i_5 - 1] [i_7] [i_7 + 2])))));
                        }
                        for (int i_14 = 1; i_14 < 17; i_14 += 4) 
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (arr_57 [i_5] [i_6] [i_7] [i_9] [i_14])));
                            arr_59 [i_5] [i_6] [i_5] [i_9] [i_5] = ((/* implicit */unsigned long long int) (signed char)11);
                        }
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        arr_64 [i_5 + 3] [i_5] [i_7] [i_15] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_45 [i_5 + 1] [i_5 + 1] [i_7] [i_5])), (((var_10) ? (arr_26 [i_5] [i_5] [13ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_63 [i_7 - 3] [i_5 + 1] [i_7 - 2] [(_Bool)1] [i_15]))))));
                        arr_65 [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_5] [i_7 - 4] [i_7] [i_6] [i_5])) ? (((((/* implicit */int) arr_52 [i_15] [i_7 + 2] [i_6] [i_5] [i_5])) * (((/* implicit */int) arr_18 [i_7 + 2])))) : (((/* implicit */int) var_6))))), (var_8)));
                    }
                    arr_66 [i_5] = (i_5 % 2 == zero) ? (((/* implicit */unsigned int) max((min((1933434507066486780ULL), (((/* implicit */unsigned long long int) (short)-1725)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_7 + 2] [i_7 + 2] [i_7 - 1] [i_7 - 3] [i_5])) << (((((/* implicit */int) arr_30 [i_7 - 2] [i_7 - 3] [i_7 - 2] [i_7 - 1] [i_5])) - (27799))))))))) : (((/* implicit */unsigned int) max((min((1933434507066486780ULL), (((/* implicit */unsigned long long int) (short)-1725)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_7 + 2] [i_7 + 2] [i_7 - 1] [i_7 - 3] [i_5])) << (((((((/* implicit */int) arr_30 [i_7 - 2] [i_7 - 3] [i_7 - 2] [i_7 - 1] [i_5])) - (27799))) - (4877)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 3) 
    {
        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [(signed char)2] [14ULL] [(short)14] [i_16] [6ULL])) || (((/* implicit */_Bool) arr_21 [i_16] [i_16])))))))) || (((/* implicit */_Bool) ((var_11) ? (arr_38 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_16] [i_16] [i_16] [i_16] [i_16]))))))));
        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_11))))) ? (arr_60 [i_16] [10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? ((+((((-9223372036854775807LL - 1LL)) + (4310056860073640787LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)101)))))));
        arr_70 [i_16] [(unsigned char)2] = (unsigned char)7;
    }
    /* LoopNest 3 */
    for (unsigned short i_17 = 1; i_17 < 9; i_17 += 3) 
    {
        for (int i_18 = 2; i_18 < 8; i_18 += 3) 
        {
            for (short i_19 = 1; i_19 < 7; i_19 += 3) 
            {
                {
                    var_25 ^= ((/* implicit */int) ((((((((/* implicit */_Bool) arr_39 [(short)18] [16LL] [i_19])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_17] [i_18] [i_19] [i_19] [i_18 - 2]))))) / (arr_75 [i_17 + 1] [i_19 + 1] [i_18 + 2]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) arr_52 [i_17] [(short)8] [i_19] [16ULL] [i_19 + 2])))) >= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-82)) && (((/* implicit */_Bool) arr_0 [i_17 + 1])))))))))));
                    arr_80 [2U] [i_19 - 1] [i_17] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_4 [i_19 + 2] [i_17] [i_17] [i_17 - 1])) && (((/* implicit */_Bool) var_4))))));
                    arr_81 [(_Bool)0] [i_18 - 1] [i_18] [i_17] = min((((/* implicit */unsigned long long int) -7058904041655661311LL)), (18158513834996793371ULL));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_78 [i_20] [i_17 - 1] [i_19 + 2])) ? (((/* implicit */int) (short)-1725)) : (((/* implicit */int) ((var_10) || (((/* implicit */_Bool) var_1))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [16ULL] [i_19] [i_17]))))))))));
                        arr_85 [i_17] [i_18] [i_19] [i_17] = min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1260172571672959765ULL)) ? (((/* implicit */int) (short)1528)) : (arr_17 [i_17])))), (17U)))), (((((((/* implicit */_Bool) arr_5 [i_18])) ? (18158513834996793328ULL) : (((/* implicit */unsigned long long int) var_5)))) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (arr_61 [i_17 - 1] [i_18] [i_19] [(unsigned char)0] [i_20])))))));
                    }
                }
            } 
        } 
    } 
    var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((var_1), (((/* implicit */unsigned long long int) var_11))))))) ? (max((max((var_9), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (var_5)))))) : (((((/* implicit */_Bool) max((-1054939293), (1054939286)))) ? (((18158513834996793344ULL) & (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))))));
}
