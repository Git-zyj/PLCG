/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144460
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
    var_11 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((short) max((arr_1 [i_0 + 1]), (var_0))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned char) max(((short)11), (((/* implicit */short) (unsigned char)28)))))), (((((arr_1 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2])) / (arr_3 [i_1] [i_1]))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1357858457)))) ? (max((var_1), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1])))))) ? (max((((/* implicit */int) var_3)), ((-(((/* implicit */int) arr_5 [i_0])))))) : ((-((+(((/* implicit */int) var_3))))))));
                        var_13 = ((/* implicit */short) (+(((/* implicit */int) (signed char)81))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_14 ^= ((/* implicit */short) (((+(arr_1 [i_1 - 3]))) == (((/* implicit */unsigned long long int) var_1))));
                            arr_15 [0U] [i_2] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((((/* implicit */int) (short)11)), (arr_3 [i_1] [i_2]))) | (((((/* implicit */_Bool) (unsigned char)228)) ? (-1110351715) : (((/* implicit */int) (signed char)90))))))) ? (((((/* implicit */int) var_5)) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2] [i_1]))))))) : (((/* implicit */int) (short)32748))));
                        }
                        for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            arr_18 [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0 + 2]))) ? ((-((+(((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_3] [i_5] [i_3] [i_0])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_0] [5U])) || (((/* implicit */_Bool) var_3)))))));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (+(min(((+(((/* implicit */int) (signed char)-90)))), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)124)), (arr_14 [(unsigned short)14] [0U])))))))))));
                            arr_19 [i_1] [i_5] [i_2] [i_3] [i_5] = ((/* implicit */unsigned short) max((min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_16 [i_1])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_2] [i_2] [i_3] [i_0] [i_5]))))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-91)))) ? (((/* implicit */int) arr_14 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)99)))))));
                        }
                        for (short i_6 = 1; i_6 < 12; i_6 += 3) 
                        {
                            arr_22 [i_0] [(signed char)2] |= ((/* implicit */unsigned int) (+(min((((/* implicit */int) var_10)), (arr_11 [i_0 - 1] [(short)14] [i_0 - 1] [i_1 - 1] [i_6 + 1] [i_0 - 1])))));
                            arr_23 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0])), (102460129U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [12])) : (((/* implicit */int) (signed char)-13))))))));
                            var_16 -= ((/* implicit */short) ((max((((/* implicit */int) max((((/* implicit */short) var_5)), (var_10)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))) * (min(((-(((/* implicit */int) (signed char)-83)))), (((((/* implicit */int) var_8)) * (((/* implicit */int) var_3))))))));
                            var_17 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_4 [i_0 - 1])))) >> ((((~(((/* implicit */int) max((((/* implicit */short) (unsigned char)167)), (arr_6 [i_0 - 1])))))) + (186)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            {
                                arr_29 [i_2] [i_1] [i_2] [i_7] [i_1] = ((/* implicit */short) (signed char)81);
                                var_18 *= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) -2021580373)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5)))) != (min((((/* implicit */int) var_10)), (arr_3 [i_7] [i_1 + 1]))))) ? (max((((/* implicit */long long int) (unsigned char)99)), (((var_1) ^ (var_1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (unsigned char)94))))))))));
                                var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) (short)32748)), (((((/* implicit */_Bool) max((arr_12 [i_1] [i_1] [i_1] [i_7] [i_8] [i_8] [i_2]), (((/* implicit */unsigned int) (short)-17674))))) ? (max((arr_24 [i_8] [i_2] [3LL] [i_2] [i_1 - 1] [i_0]), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) >= (var_4)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 2; i_9 < 13; i_9 += 3) 
                    {
                        var_20 = ((/* implicit */signed char) max(((+(((/* implicit */int) var_6)))), (arr_26 [i_0] [i_0 + 1] [i_1 - 3] [i_1] [i_9 - 2])));
                        arr_32 [i_0 + 1] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [(unsigned short)9] [i_0] [i_9] [i_9 - 2])) || (((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0]))))) & (((/* implicit */int) min((var_10), (((/* implicit */short) var_8)))))))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) == (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) || (((/* implicit */_Bool) ((arr_0 [(signed char)10]) >> (((var_4) + (1354575539))))))))));
                        arr_33 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) min((min((arr_0 [i_1]), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) max((arr_9 [(_Bool)1] [i_1] [(_Bool)1] [i_2] [i_2] [(_Bool)1]), (((/* implicit */unsigned int) arr_6 [13U]))))))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        arr_37 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) max(((-(min((((/* implicit */unsigned long long int) var_4)), (var_0))))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_5)))) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)11824)) : (((/* implicit */int) var_9)))))))));
                        arr_38 [(unsigned char)8] [i_10] |= ((/* implicit */unsigned short) ((((max(((~(((/* implicit */int) var_2)))), (arr_28 [i_1 - 2] [14LL]))) + (2147483647))) >> (((((/* implicit */int) max(((short)-32748), (((/* implicit */short) (signed char)-101))))) + (105)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            arr_42 [i_0 + 3] [i_0 + 3] [i_11] [i_11] [i_0 + 3] [i_11] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)8184))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (short)-32748))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : ((~(max((((/* implicit */unsigned int) arr_6 [i_0 + 3])), (390923417U)))))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((unsigned char) var_10)))));
                            var_23 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) var_4))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_12 = 3; i_12 < 12; i_12 += 2) 
                        {
                            arr_46 [(short)10] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)167)))) * (((((/* implicit */int) arr_31 [i_0] [i_1] [i_0] [i_1] [i_12])) / (((/* implicit */int) (signed char)95))))));
                            var_24 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (signed char)97))))));
                            var_25 = ((/* implicit */short) var_9);
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) ? (arr_9 [i_0] [i_1] [i_2] [i_10] [i_10] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        }
                        for (short i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            var_27 *= ((/* implicit */_Bool) max(((signed char)90), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */int) var_9)))) == (((/* implicit */int) ((unsigned char) var_7))))))));
                            var_28 = ((/* implicit */int) var_0);
                        }
                        var_29 |= ((/* implicit */unsigned char) var_6);
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((((/* implicit */int) (signed char)100)) | (((/* implicit */int) (signed char)81))))))) ? (((/* implicit */int) (((+(390923414U))) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : ((+(((/* implicit */int) max((((/* implicit */short) (signed char)-90)), (var_2))))))));
                    }
                    for (unsigned char i_14 = 2; i_14 < 11; i_14 += 2) 
                    {
                        arr_53 [i_2] [i_2] [i_2] [i_14] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_35 [i_0 + 1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_35 [i_0 + 3] [i_1 + 1]))))))));
                        arr_54 [9] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [(short)4]))));
                    }
                }
            } 
        } 
        var_31 ^= ((/* implicit */int) var_5);
        arr_55 [i_0] [i_0] = ((/* implicit */short) arr_51 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 4) 
    {
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_1)) == (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_15] [i_15] [(unsigned short)5])))))));
        var_33 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_15] [13U] [i_15] [i_15])))))));
        var_34 ^= ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_30 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))))));
        var_35 = ((/* implicit */short) ((signed char) var_4));
    }
}
