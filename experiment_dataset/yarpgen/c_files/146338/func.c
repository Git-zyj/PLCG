/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146338
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            var_10 *= ((/* implicit */unsigned long long int) ((arr_0 [i_0]) >= (max((((/* implicit */unsigned int) arr_4 [i_0] [(short)7] [i_0])), (((268434432U) / (arr_3 [i_0])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        {
                            arr_12 [i_4] [i_3] [2] [(unsigned char)4] [2] = ((/* implicit */int) var_1);
                            var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_2] [5ULL]))) * (arr_7 [i_4] [i_3] [i_1] [i_0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44641)))));
                            var_12 = ((/* implicit */unsigned int) (signed char)-97);
                        }
                    } 
                } 
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_5))));
                var_14 -= ((/* implicit */unsigned long long int) arr_11 [i_0]);
            }
        }
        for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            arr_17 [i_0 - 1] [i_0 - 1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) min((var_2), (((/* implicit */short) arr_16 [i_0 - 1] [i_5] [i_5]))))) % (((/* implicit */int) (unsigned short)55750))));
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    for (short i_8 = 3; i_8 < 9; i_8 += 2) 
                    {
                        {
                            arr_25 [i_0] [i_6] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)44641)) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))), (((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0 - 1])))));
                            arr_26 [i_0] [11] [i_6] [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_9 [i_8] [(unsigned short)3] [3U] [3U] [3U])))) && (((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_6] [i_7])) && (((/* implicit */_Bool) var_9)))))))) >= (max((arr_24 [i_0 + 1] [i_0 + 1] [i_0] [i_8 - 3] [i_8 + 3]), (((/* implicit */long long int) (unsigned short)54377))))));
                            var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)20909))))) ? (((((/* implicit */_Bool) (short)26546)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_5] [i_6] [i_6]))) : (var_8))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))))));
                            var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned short)20897)) / (((/* implicit */int) (short)-4267))))))), (arr_6 [i_6] [i_5] [i_0])));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 - 1])) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_8 + 1]))))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_9 = 3; i_9 < 11; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    for (unsigned int i_11 = 1; i_11 < 10; i_11 += 3) 
                    {
                        {
                            var_18 += ((/* implicit */unsigned short) ((unsigned char) arr_33 [i_0 - 1] [i_11 + 2] [i_11 + 2]));
                            var_19 = ((/* implicit */short) max((var_19), ((short)26536)));
                        }
                    } 
                } 
                arr_35 [i_9] [i_5] [i_5] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)168)) / (((/* implicit */int) arr_32 [i_9 - 3] [i_9 + 1] [i_9]))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) arr_20 [i_0] [i_5] [i_0])) : (-717336684)))) ? (arr_19 [(signed char)7] [i_5] [i_0 + 1] [i_0]) : (((((/* implicit */_Bool) arr_11 [i_9])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [0U])))))));
            }
            /* vectorizable */
            for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                var_21 *= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_0] [i_5] [i_0]))))) >> (((((/* implicit */int) arr_13 [i_0])) - (21729))));
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) 
                {
                    var_22 = ((/* implicit */unsigned int) var_7);
                    arr_42 [i_0 - 1] [i_5] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) 13407190378082312407ULL);
                    arr_43 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) -1);
                }
            }
            /* LoopNest 2 */
            for (short i_14 = 1; i_14 < 10; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 2; i_15 < 11; i_15 += 1) 
                {
                    {
                        arr_49 [i_15] [i_15] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_10 [i_14] [i_14] [i_14] [i_14 - 1] [i_14] [i_14 + 2])) ? (((/* implicit */int) arr_10 [i_14 + 1] [i_14] [i_14] [i_14 + 1] [i_14] [i_14])) : (((/* implicit */int) var_4)))), (((/* implicit */int) min((arr_10 [i_14] [i_14] [i_14] [i_14 - 1] [i_14] [i_14]), (arr_10 [i_14 + 1] [i_14] [i_14] [i_14 + 1] [10U] [i_14]))))));
                        arr_50 [4ULL] [i_5] [i_14] [i_14] &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_4 [i_5] [i_5] [i_14 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [0] [i_0] [i_14 - 1])) || (((/* implicit */_Bool) arr_6 [7ULL] [7ULL] [i_14 + 1])))))) : (max((var_5), (arr_6 [i_5] [(signed char)0] [i_14 + 1])))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned char i_16 = 3; i_16 < 8; i_16 += 1) 
        {
            for (signed char i_17 = 0; i_17 < 12; i_17 += 2) 
            {
                {
                    arr_57 [i_0 + 1] [i_16 + 1] [i_17] [i_17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1))));
                    arr_58 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) -432154538)) | (var_8))) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    var_23 &= ((/* implicit */_Bool) var_9);
                }
            } 
        } 
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0])) && (((/* implicit */_Bool) var_5))))))))));
        var_25 = ((/* implicit */long long int) (unsigned short)44631);
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_18 = 3; i_18 < 9; i_18 += 3) 
    {
        arr_63 [i_18] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_5)))));
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (!(((((/* implicit */unsigned int) (-2147483647 - 1))) > (arr_37 [i_18] [i_18] [i_18] [i_18]))))))));
        /* LoopNest 2 */
        for (long long int i_19 = 1; i_19 < 9; i_19 += 2) 
        {
            for (long long int i_20 = 1; i_20 < 9; i_20 += 2) 
            {
                {
                    arr_71 [6U] [(unsigned char)2] [i_18] [i_20] = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_2))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_21 = 1; i_21 < 9; i_21 += 3) 
                    {
                        var_27 = ((/* implicit */int) (-(arr_53 [i_20] [i_19 + 1] [i_18 - 1])));
                        arr_75 [i_18] [i_19] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_0 [i_18 - 1]))));
                        var_28 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (short)127))))));
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 3) /* same iter space */
                    {
                        var_29 += ((/* implicit */short) ((arr_59 [i_18] [i_20]) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_11 [i_18 - 3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_20] [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_19] [i_19])))));
                        var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)99)) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)197)))))));
                        arr_79 [i_18] [9LL] [i_20 + 1] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) arr_22 [i_22] [0U] [(unsigned short)10] [i_18]))));
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 10; i_23 += 3) /* same iter space */
                    {
                        var_31 -= (unsigned char)2;
                        var_32 = ((((((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (short)-7484)) : (((/* implicit */int) var_3)))) + (2147483647))) << (((arr_11 [i_20 + 1]) - (1156471481401636597LL))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_24 = 2; i_24 < 7; i_24 += 3) 
        {
            for (unsigned short i_25 = 1; i_25 < 9; i_25 += 1) 
            {
                for (unsigned char i_26 = 1; i_26 < 8; i_26 += 1) 
                {
                    {
                        arr_89 [i_18] [i_24] [i_18] [i_26] = ((/* implicit */short) ((((/* implicit */int) (short)-29172)) % (((/* implicit */int) ((unsigned short) -341607369314838829LL)))));
                        var_33 = ((/* implicit */unsigned char) arr_76 [i_18] [i_18] [i_18] [i_18]);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
    {
        arr_92 [i_27] [i_27] = ((/* implicit */unsigned char) arr_91 [i_27]);
        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) arr_91 [i_27]))));
        arr_93 [i_27] [i_27] = ((unsigned char) var_3);
        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) var_8))));
    }
    /* vectorizable */
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
    {
        arr_96 [i_28] [i_28] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0))));
        var_36 -= ((/* implicit */signed char) (unsigned char)3);
        /* LoopNest 2 */
        for (unsigned char i_29 = 0; i_29 < 14; i_29 += 2) 
        {
            for (short i_30 = 0; i_30 < 14; i_30 += 1) 
            {
                {
                    arr_104 [i_28] [i_29] [i_30] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7484)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_102 [i_28] [i_29] [i_28]))))) : (((/* implicit */int) arr_101 [i_28] [i_28]))));
                    arr_105 [4LL] [i_29] [i_30] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
                    /* LoopSeq 1 */
                    for (unsigned int i_31 = 0; i_31 < 14; i_31 += 1) 
                    {
                        var_37 -= ((/* implicit */int) ((((((/* implicit */_Bool) arr_97 [i_29] [i_31])) && (((/* implicit */_Bool) arr_100 [(short)1])))) && (((((/* implicit */_Bool) arr_107 [i_29])) || (((/* implicit */_Bool) 49544423))))));
                        var_38 -= ((/* implicit */unsigned long long int) 31U);
                        arr_108 [i_28] [i_28] [i_30] [i_31] [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_102 [i_28] [(signed char)2] [i_30]))));
                    }
                }
            } 
        } 
    }
    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) /* same iter space */
    {
        arr_112 [i_32] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((((/* implicit */int) var_2)) % (((/* implicit */int) (unsigned short)11171)))), (((/* implicit */int) arr_101 [i_32] [i_32]))))), (((((/* implicit */_Bool) 794453318U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_107 [i_32]), (var_0))))) : (arr_90 [13U] [i_32])))));
        var_39 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_97 [i_32] [i_32])) ? (((unsigned int) (short)7496)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_109 [i_32]))))) % (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_8))))), (min((var_2), (var_2)))))))));
        arr_113 [(short)3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_99 [i_32] [i_32])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (16U)))))) * (min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)11159))))), (arr_100 [i_32])))));
        var_40 += ((/* implicit */_Bool) var_4);
    }
}
