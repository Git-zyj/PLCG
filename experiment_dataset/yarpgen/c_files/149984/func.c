/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149984
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(2877461362977368197ULL)))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) max(((signed char)122), ((signed char)-117))))));
                var_13 = ((/* implicit */int) arr_1 [i_0] [(short)4]);
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-93)) ? (var_9) : (var_1))) << (((/* implicit */int) (unsigned char)40))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_0]) : (((/* implicit */int) (short)7158))))) : (max((arr_3 [i_1] [(short)5] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (+(var_2)));
    /* LoopSeq 4 */
    for (signed char i_2 = 4; i_2 < 17; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            var_16 -= ((((/* implicit */_Bool) (+(-1)))) ? (((/* implicit */int) arr_8 [i_2 - 4] [i_2 + 1])) : ((+(((/* implicit */int) (unsigned char)8)))));
            arr_12 [i_2] [i_2] &= ((/* implicit */unsigned short) var_3);
        }
        var_17 += ((/* implicit */unsigned long long int) var_3);
        arr_13 [(signed char)8] = ((/* implicit */int) ((((arr_9 [i_2 - 3]) <= (((/* implicit */int) var_7)))) ? (max((1338830603473969896LL), (((/* implicit */long long int) min((((/* implicit */int) (short)-1)), (-6)))))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)243), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)203)) && (((/* implicit */_Bool) 422539692)))))))))));
        arr_14 [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((var_9) != (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [i_2])))))))));
        arr_15 [i_2 - 1] = ((max((arr_9 [i_2 - 1]), (arr_9 [i_2 - 4]))) == (max((arr_9 [i_2 - 1]), (arr_9 [i_2 - 3]))));
    }
    /* vectorizable */
    for (short i_4 = 2; i_4 < 20; i_4 += 2) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)227));
        var_18 = ((/* implicit */unsigned char) ((var_2) == (((/* implicit */long long int) ((((/* implicit */_Bool) 1056964608)) ? (var_5) : (1056964594))))));
        arr_19 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_17 [i_4])))) ? (arr_17 [i_4 - 2]) : (arr_17 [i_4 - 2])));
    }
    for (short i_5 = 1; i_5 < 15; i_5 += 4) 
    {
        arr_22 [i_5] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) max((209114666U), (((/* implicit */unsigned int) var_4))))) && (((/* implicit */_Bool) arr_17 [i_5 - 1])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            for (long long int i_7 = 4; i_7 < 13; i_7 += 2) 
            {
                {
                    arr_28 [i_5] [i_6] [i_5 + 2] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) min((((int) (short)-1)), (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_7))))))) && (((((/* implicit */int) arr_26 [i_5] [i_5] [i_7 + 2] [(unsigned short)13])) != (((/* implicit */int) arr_26 [i_5] [i_5] [i_5 + 2] [i_5]))))));
                    arr_29 [i_7] = ((/* implicit */int) ((arr_7 [i_6]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)13551)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        arr_33 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (max((arr_17 [i_6]), (arr_17 [i_8]))) : (max((0), (arr_17 [i_5 + 2])))));
                        arr_34 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] = ((/* implicit */long long int) max((((/* implicit */int) var_7)), (-1056964627)));
                        var_19 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) 13510798882111488LL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) arr_23 [16])))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_30 [(unsigned short)6] [2U] [i_7 + 2] [i_7]))))), (((unsigned char) var_7)))))));
                        var_20 = ((/* implicit */unsigned long long int) (~(min((arr_11 [i_7 - 2] [i_8] [i_8]), (arr_11 [i_7 + 1] [i_7 + 1] [9])))));
                    }
                    for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        arr_39 [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)3))))) : (min((arr_10 [6LL] [i_6]), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [5LL] [i_6]))))), (((((/* implicit */_Bool) var_8)) ? (arr_10 [i_5] [10U]) : (((/* implicit */unsigned long long int) var_5)))))) : (min((((arr_10 [i_5] [(unsigned short)6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(signed char)16]))))), (((/* implicit */unsigned long long int) var_11))))));
                        arr_40 [i_5] [i_9] [i_7] [(signed char)5] = ((/* implicit */int) ((min((((((/* implicit */_Bool) arr_30 [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) : (arr_31 [4LL] [i_6] [i_7] [(unsigned char)14]))), (((/* implicit */unsigned long long int) ((unsigned short) var_1))))) * (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (1056964644))))));
                        var_21 = ((/* implicit */unsigned short) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) (unsigned char)110)))));
                    }
                    arr_41 [11] [i_6] [i_6] [(unsigned char)14] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_5)))) ? (1257112106) : (((/* implicit */int) arr_20 [i_5 + 1] [i_5 + 2]))));
                }
            } 
        } 
        arr_42 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)13))))) - (((((/* implicit */_Bool) var_11)) ? (arr_7 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29))))))))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 2; i_10 < 16; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 134209536)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))) : (var_8))))))) - (((/* implicit */int) max((max((((/* implicit */short) (unsigned char)223)), ((short)-10253))), (((/* implicit */short) arr_8 [i_5 + 2] [i_5 + 2])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 1; i_13 < 14; i_13 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_6 [i_12]))));
                            var_24 = min((((/* implicit */int) arr_46 [i_5 - 1] [i_11] [(unsigned short)11] [i_13])), (((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [2ULL]))))) : (((/* implicit */int) (short)32751)))));
                            var_25 -= ((/* implicit */int) ((signed char) arr_23 [i_5 + 1]));
                        }
                        arr_53 [i_5] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) || (((((((/* implicit */_Bool) arr_21 [(short)4] [14U])) ? (((/* implicit */unsigned long long int) arr_9 [i_11])) : (arr_10 [i_12] [(_Bool)1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                        arr_54 [i_5] [i_5 - 1] = ((/* implicit */unsigned short) (unsigned char)205);
                        arr_55 [(short)7] [(short)7] [i_11] [i_11] [i_11] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_10 [i_5 - 1] [i_5 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_31 [(short)12] [i_10 - 2] [(short)12] [i_12]))))))))) ? ((+(((/* implicit */int) (signed char)-96)))) : ((-(((/* implicit */int) (unsigned char)30))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 1; i_15 < 14; i_15 += 2) 
                        {
                            {
                                var_26 -= (((((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_37 [i_10] [i_10 - 2] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (arr_37 [i_11] [i_11] [i_15]) : (((/* implicit */unsigned int) (+(min((arr_17 [i_5 - 1]), (((/* implicit */int) arr_25 [i_5] [i_5] [i_15]))))))));
                                arr_61 [i_14] [i_5] [i_10 - 2] [i_11] [i_14] [i_11] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) <= ((~(var_1))))))) - (((((((/* implicit */_Bool) (unsigned char)7)) || (((/* implicit */_Bool) arr_36 [i_5] [i_10 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (arr_27 [i_5] [i_5]))));
                                arr_62 [i_5] [i_14] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((int) var_8));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_15 + 2]))))) ? (min((((/* implicit */unsigned long long int) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))), (min((((/* implicit */unsigned long long int) arr_23 [i_5])), (16599285106705057468ULL))))) : (((/* implicit */unsigned long long int) var_5))));
                                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_5 + 2] [3ULL] [3ULL] [3ULL] [1U] [i_15 + 3])) && (((/* implicit */_Bool) var_3))))))))) || (((/* implicit */_Bool) arr_52 [3ULL] [i_10] [i_10] [(_Bool)1] [i_10]))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -7549837891500326757LL)) ? (2570005316U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */unsigned int) arr_17 [i_5]))))), ((~(((arr_32 [(unsigned short)6] [i_5] [i_10] [10]) << (((((/* implicit */int) (signed char)-118)) + (157)))))))));
                }
            } 
        } 
    }
    for (unsigned char i_16 = 0; i_16 < 15; i_16 += 2) 
    {
        var_30 *= ((/* implicit */short) max((((/* implicit */unsigned int) ((((unsigned int) (unsigned char)232)) <= (((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) : (384232945U)))))), (arr_21 [i_16] [i_16])));
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_56 [i_16] [i_16] [i_16] [i_16]))) ? (max((((/* implicit */int) (unsigned char)24)), (arr_17 [20]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_58 [i_16] [i_16] [i_16] [6] [6] [i_16])))))))))))));
        var_32 = ((((((/* implicit */_Bool) 879348023U)) ? (((/* implicit */unsigned int) -1874539526)) : (1381664237U))) >> ((((~(((/* implicit */int) arr_23 [12ULL])))) + (276))));
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (((+(arr_7 [i_16]))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28040)) ? (((/* implicit */int) arr_43 [i_16])) : (((/* implicit */int) (short)14392)))))))), (var_8))))));
    }
    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_2) + (9223372036854775807LL))) >> (((((/* implicit */int) var_10)) - (132)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned char)26)))))))));
}
