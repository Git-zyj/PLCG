/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111467
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
    var_15 = ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (var_7))), (((/* implicit */int) max((var_3), (var_8)))))), (((/* implicit */int) (unsigned short)0))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [(unsigned short)8] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(short)10] [(short)10])) ? (((((/* implicit */int) arr_1 [(unsigned char)0] [(unsigned char)0])) + (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) max((min((((/* implicit */short) var_12)), (var_3))), (arr_1 [(short)2] [(short)2]))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (134217727))), (((/* implicit */int) arr_8 [i_2 + 3]))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 + 3] [i_1])) && (((/* implicit */_Bool) arr_4 [i_2] [i_2]))))) == ((+(((/* implicit */int) var_13))))))) : (((((/* implicit */_Bool) arr_8 [i_2 + 2])) ? (((/* implicit */int) arr_8 [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2 + 1]))))));
                        arr_10 [i_0] [i_0] [i_2 + 3] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)65512);
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                        {
                            arr_13 [i_4] [i_4] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-3678750895017327117LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [(_Bool)1] [i_1]))))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_1] [i_1] [i_3]))) : (-3678750895017327117LL))))) < (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 + 2] [i_0])) ? (arr_6 [i_0] [i_1] [i_2 + 2] [i_0]) : (arr_6 [i_4] [i_1] [i_2 + 2] [i_0])))));
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_13))));
                        }
                        for (int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (+(((/* implicit */int) max((arr_14 [i_5] [i_2 + 1] [i_2 + 2] [i_2 + 3] [i_2 - 1] [i_5]), (var_5)))))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((2091228779U) % (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_1] [i_0] [i_3] [i_0]))))) ? (((/* implicit */int) max((max((((/* implicit */unsigned short) var_5)), (arr_17 [1ULL] [i_1] [i_1] [i_1] [7ULL] [i_1] [i_1]))), (((/* implicit */unsigned short) arr_14 [i_0] [i_3] [i_2 + 3] [i_2] [(short)7] [i_0]))))) : (((/* implicit */int) arr_8 [i_0]))));
                        }
                        arr_19 [(_Bool)1] [(_Bool)1] [i_1] [i_2] [i_0] = max((((arr_5 [i_0] [6U]) / (arr_5 [i_0] [i_3]))), (((/* implicit */long long int) ((unsigned int) (unsigned short)15872))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            for (short i_8 = 1; i_8 < 7; i_8 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-26688)), (0U)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) 1048575ULL)) || (((/* implicit */_Bool) arr_23 [i_9]))))), (min((((/* implicit */unsigned short) var_8)), ((unsigned short)49003))))))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_33 [i_7] [i_7] [i_7])) : (arr_23 [i_7]))))))))));
                        var_19 = ((/* implicit */_Bool) ((((arr_23 [i_8 + 1]) >= (arr_23 [i_8 + 2]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_8 + 4] [i_8 + 3] [i_8 + 1] [i_8 + 3])) || (((/* implicit */_Bool) arr_12 [i_9] [i_7] [i_8 - 1] [i_9] [(unsigned char)8]))))) : (((/* implicit */int) ((322794796120362666ULL) <= (((/* implicit */unsigned long long int) arr_23 [i_8 + 1])))))));
                        var_20 |= ((/* implicit */unsigned long long int) arr_17 [i_9] [(signed char)4] [i_9] [i_8 + 1] [i_8 + 4] [(signed char)4] [i_8 + 1]);
                        arr_34 [i_9] [i_7] [i_7] [i_7] [i_6] = ((/* implicit */short) min((((/* implicit */long long int) arr_27 [i_7] [i_8 + 4])), (min((((/* implicit */long long int) 0U)), (arr_32 [i_7] [(short)4] [i_7])))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-(((arr_33 [i_6] [i_8 + 1] [i_8 + 4]) - (arr_33 [i_8] [i_8 + 2] [i_8]))))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        arr_37 [i_7] [(unsigned short)1] [i_7] = ((/* implicit */signed char) ((unsigned short) (unsigned short)16532));
                        arr_38 [i_10] [i_7] [i_8 + 1] [i_7] [i_6] = ((/* implicit */short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned short) var_1))))) ? (((((/* implicit */_Bool) arr_6 [i_6] [i_6] [i_6] [i_7])) ? (2801883755U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_10]))))) : (((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6] [i_7]))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_41 [i_7] [i_10] [i_8 - 1] [i_7] [i_7] = ((/* implicit */short) arr_24 [i_8 + 4] [i_8 + 2] [i_8 + 3]);
                            arr_42 [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_11] [i_8] [i_8 + 4] [i_8 + 1] [i_8 + 1]))));
                            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_40 [i_11] [(_Bool)0] [i_11] [i_10] [i_6] [i_8 + 4]))));
                        }
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            var_23 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_39 [i_12] [i_10] [i_12 + 1] [i_10] [i_10]))));
                            arr_46 [i_6] [i_7] [i_8 + 2] [i_7] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_8 + 4])) || (((_Bool) 5001356103842874475LL))));
                            arr_47 [i_10] [i_7] [i_7] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_31 [i_7] [i_7] [i_8 + 4] [i_10])) < (((/* implicit */int) var_1)))))) / (9047869927867628584LL)));
                        }
                    }
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        var_24 |= max((min((arr_44 [i_6] [i_8]), (((/* implicit */unsigned int) arr_16 [i_6] [i_8 + 2] [i_6] [i_6])))), ((~(max((arr_45 [i_6] [i_6] [i_6] [(_Bool)1]), (((/* implicit */unsigned int) var_13)))))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_1 [i_8 + 2] [i_7]), (arr_1 [i_8 + 1] [i_7])))) == (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (-142775136696050914LL)))) || (((/* implicit */_Bool) min((1125899906842623ULL), (((/* implicit */unsigned long long int) arr_16 [i_7] [i_7] [i_7] [i_7]))))))))));
                    }
                    arr_51 [i_6] [i_8 + 2] |= ((/* implicit */unsigned short) 2801883755U);
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 3; i_14 < 7; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 3; i_15 < 10; i_15 += 3) 
                        {
                            {
                                arr_58 [5LL] [i_7] [i_8 + 2] = ((/* implicit */signed char) max((((/* implicit */int) max((arr_22 [i_8 + 2]), (arr_22 [i_8 - 1])))), (min((((/* implicit */int) ((((/* implicit */int) (unsigned char)175)) <= (((/* implicit */int) var_12))))), (min((((/* implicit */int) arr_57 [i_6] [i_7] [i_8] [i_7] [i_15])), (var_7)))))));
                                arr_59 [i_7] [i_7] [i_8] [i_8] [(short)1] [i_15 - 1] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) ((((/* implicit */int) arr_56 [i_6] [i_6] [i_6] [i_6] [i_6])) * (((/* implicit */int) var_3))))), (3678750895017327116LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)63)) - ((+(((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        var_26 *= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_16] [i_8 + 3] [i_6])) || (((/* implicit */_Bool) arr_33 [i_16] [i_8 + 3] [i_8 + 1]))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (min((4090781852076251394LL), (arr_53 [i_6] [i_8] [i_8])))))));
                        var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_8 + 3])) * (((/* implicit */int) arr_22 [i_8 + 4]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (((((/* implicit */_Bool) var_9)) ? (arr_33 [i_6] [i_6] [i_8]) : (2191821667U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175)))));
                        var_28 |= ((/* implicit */unsigned short) var_4);
                    }
                    for (long long int i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        var_29 *= ((/* implicit */short) (!(arr_30 [i_6] [5U] [i_8] [i_17])));
                        var_30 = ((/* implicit */short) max(((!(((/* implicit */_Bool) 7135367903284856097ULL)))), (arr_14 [i_6] [i_6] [i_7] [i_8] [i_17] [i_7])));
                        arr_64 [i_7] = ((/* implicit */long long int) max(((+(((unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) -4887952123122034296LL)))))))));
                    }
                    for (int i_18 = 0; i_18 < 11; i_18 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_57 [i_7] [i_8 - 1] [i_7] [i_7] [i_8 + 1])))), ((+(((/* implicit */int) max((arr_4 [i_7] [i_18]), (arr_27 [i_7] [(_Bool)1]))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_19 = 0; i_19 < 11; i_19 += 2) 
                        {
                            arr_69 [i_19] [i_7] [i_7] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_7] [i_8 + 1] [7ULL] [i_7]))));
                            var_32 = ((/* implicit */_Bool) var_13);
                            var_33 = ((/* implicit */short) ((arr_44 [i_7] [i_8 + 4]) ^ (arr_44 [i_7] [i_8 - 1])));
                            var_34 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6]))) + (arr_60 [i_6])))) ? (((/* implicit */long long int) ((var_7) / (((/* implicit */int) (_Bool)1))))) : (arr_24 [i_6] [1U] [i_8 + 2])));
                            var_35 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)1208)) % (((/* implicit */int) (signed char)-99)))) * (((((/* implicit */int) arr_16 [i_6] [i_18] [i_7] [i_6])) * (((/* implicit */int) var_9))))));
                        }
                    }
                }
            } 
        } 
    } 
}
