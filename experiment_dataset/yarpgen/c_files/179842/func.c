/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179842
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))) % (((/* implicit */int) var_1))))) && (((((/* implicit */int) var_7)) != (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))))));
    var_11 |= (~(((((/* implicit */_Bool) (unsigned short)0)) ? (4002924408759399790LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17326))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((((/* implicit */_Bool) max(((unsigned short)48210), (((/* implicit */unsigned short) (_Bool)1))))) ? (max((-4002924408759399784LL), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)1241))))))) : (((/* implicit */long long int) (~((+(((/* implicit */int) var_0)))))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_6 [(unsigned short)6] [i_0] = (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))))));
            arr_7 [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_1 [i_1])))));
            arr_8 [i_0] [(signed char)8] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) -4002924408759399791LL)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) (unsigned short)0)))) : (min((arr_1 [i_1]), (((/* implicit */int) var_0)))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            var_13 &= ((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */int) var_4))));
            var_14 *= ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_0 [(unsigned short)12]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)395))))))))));
        }
        var_15 = ((/* implicit */signed char) min((max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))), (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))));
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 931689030)) ? (2041241214U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2683)))))) ? (((/* implicit */long long int) arr_9 [i_3] [i_3])) : (((long long int) (_Bool)1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (4002924408759399787LL) : (-4002924408759399787LL)))) ? (((/* implicit */long long int) arr_2 [i_3])) : (((((/* implicit */_Bool) 4002924408759399787LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4002924408759399787LL)))))));
        var_16 = ((((((((/* implicit */int) (short)-393)) + (arr_4 [i_3]))) | (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (unsigned char)39))))))) << ((((+(((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (arr_2 [(signed char)10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) - (1560146024U))));
    }
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
    {
        arr_17 [i_4] |= ((/* implicit */_Bool) arr_16 [(unsigned short)3]);
        arr_18 [i_4] = ((344509120U) >> (((2030258648U) - (2030258648U))));
        arr_19 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((arr_10 [i_4] [i_4]) ? (((/* implicit */int) arr_10 [i_4] [i_4])) : (((/* implicit */int) var_1))))) | (((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (arr_4 [(short)0])))) | (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)197))) - (-2108434091470305277LL)))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            var_17 = ((/* implicit */signed char) ((arr_22 [i_5]) != (arr_22 [i_5])));
                            arr_35 [i_5] [i_6] [i_5] [i_8] [i_9] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) arr_29 [i_7]))));
                            var_18 ^= ((/* implicit */signed char) arr_5 [i_5] [i_6]);
                        }
                        var_19 = ((/* implicit */unsigned long long int) (~(arr_28 [i_5] [i_7] [i_6])));
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 3470807595U))))) >= (((/* implicit */int) (unsigned short)65535))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    {
                        var_21 = ((/* implicit */int) arr_29 [i_5]);
                        arr_40 [i_5] [i_5] [(unsigned short)10] [i_5] = ((/* implicit */long long int) ((8975229304426413914ULL) / ((~(589486540903515500ULL)))));
                    }
                } 
            } 
            var_22 = ((/* implicit */int) max((var_22), ((~(((/* implicit */int) (unsigned short)29508))))));
        }
        for (unsigned short i_12 = 1; i_12 < 14; i_12 += 4) 
        {
            var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)54914))))) && (((/* implicit */_Bool) var_3))));
            arr_43 [11] [i_12] [i_12] |= ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) arr_25 [(signed char)0])) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) arr_42 [i_12 + 3])));
        }
        /* LoopNest 2 */
        for (unsigned short i_13 = 1; i_13 < 16; i_13 += 4) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        for (long long int i_16 = 3; i_16 < 16; i_16 += 3) 
                        {
                            {
                                var_24 *= ((/* implicit */signed char) ((((/* implicit */int) arr_33 [i_16 + 1] [i_16 + 1] [i_16] [i_16])) >= (((/* implicit */int) arr_33 [i_16 - 1] [i_16] [i_16] [(unsigned short)7]))));
                                arr_52 [i_5] [i_13] [i_13] [i_15] [i_16] [i_5] [i_14] &= ((/* implicit */long long int) (~((~(((/* implicit */int) var_8))))));
                                arr_53 [(short)0] [5LL] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_15] [i_13 + 1] [i_13 - 1] [14ULL]))) : (((((/* implicit */_Bool) arr_51 [(unsigned char)11] [i_16] [i_16] [i_15] [i_16] [i_15] [4ULL])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5] [i_14] [(_Bool)1])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_56 [i_13 - 1] [i_5] |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) var_3)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 3) 
                        {
                            arr_60 [i_5] [i_17] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8656909513355764046LL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                            arr_61 [i_5] [(unsigned char)15] [(unsigned char)15] [i_13] [i_5] [i_17] [i_5] = ((/* implicit */unsigned long long int) arr_39 [i_13 + 1] [(_Bool)1]);
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_64 [i_5] [i_13] [i_14] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_23 [i_13 - 1] [i_13 - 1]))));
                            var_25 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_19]))) > (arr_47 [i_5] [i_13]))) ? (((/* implicit */int) arr_44 [i_13 - 1] [i_13 + 1])) : (((/* implicit */int) ((unsigned char) arr_16 [i_14])))));
                            arr_65 [i_5] [i_13] [i_14] [i_13] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_33 [i_5] [6ULL] [6ULL] [(signed char)0])))) % (9223372036854775807LL)));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_20 = 0; i_20 < 17; i_20 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) arr_0 [i_5]);
                            var_27 = ((/* implicit */long long int) arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
                            var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_37 [i_13 - 1] [i_13] [16ULL] [i_13]))));
                        }
                        for (unsigned int i_21 = 2; i_21 < 16; i_21 += 4) 
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(unsigned short)2])) ? (((/* implicit */int) arr_57 [i_5] [i_13] [i_5] [i_13] [i_21])) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) arr_62 [12LL] [i_13] [i_13])) : (((/* implicit */int) (short)1023))))) : (arr_70 [9ULL] [i_13 + 1] [1LL] [i_13] [i_13 - 1] [i_13])));
                            arr_71 [(unsigned short)15] [i_13] [i_14] [i_13] [i_21] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_13 - 1] [i_21 - 1]))) == (((((/* implicit */_Bool) var_8)) ? (arr_5 [i_5] [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80)))))));
                            arr_72 [i_21] [i_5] [i_5] [i_13 + 1] [i_5] &= ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_13] [i_13] [i_13 + 1] [i_13] [(short)7])) | (((/* implicit */int) arr_32 [(unsigned short)6] [i_5] [i_13 - 1] [i_17] [i_17]))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(var_2)))) % (arr_5 [i_17] [i_21 - 1])));
                        }
                        for (unsigned int i_22 = 3; i_22 < 16; i_22 += 4) 
                        {
                            arr_76 [(unsigned short)6] [i_13] [i_13] [10ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_38 [i_5] [i_5])) ^ (4273869565433121800ULL)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)28953)))) : ((~(((/* implicit */int) var_3))))));
                            arr_77 [i_5] [i_13] [(short)3] [i_14] [i_13] [i_22] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)141)) * (((/* implicit */int) (unsigned short)58249))));
                            var_31 = ((/* implicit */long long int) ((((2147483643) / (-1))) < (((/* implicit */int) arr_31 [i_5] [i_13] [5ULL] [i_13] [10LL] [5ULL]))));
                            var_32 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_5] [i_17])))))));
                        }
                    }
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_13 + 1])) && (((/* implicit */_Bool) arr_4 [i_13 + 1])))))));
                }
            } 
        } 
        var_34 = ((/* implicit */int) ((unsigned char) (short)-430));
        arr_78 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_5])) - (((/* implicit */int) var_5))));
        arr_79 [i_5] = ((/* implicit */short) ((signed char) arr_57 [i_5] [i_5] [i_5] [i_5] [i_5]));
    }
    var_35 = ((/* implicit */_Bool) min(((-(((unsigned long long int) (unsigned short)30460)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) && (((/* implicit */_Bool) 6140121690158632779LL)))))));
}
