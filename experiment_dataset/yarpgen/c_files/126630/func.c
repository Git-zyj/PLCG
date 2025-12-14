/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126630
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
    var_19 = ((/* implicit */_Bool) var_17);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) 14148779720199117150ULL))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */unsigned long long int) var_17)), (4297964353510434442ULL))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    arr_11 [i_0] [i_1] [11ULL] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 13633602424099740738ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15642))) : (arr_4 [i_0] [i_1]))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1)))))))))));
                    arr_12 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (+(max((-4406194523907661677LL), (((/* implicit */long long int) (signed char)127))))));
                    arr_13 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((14148779720199117177ULL), (4297964353510434448ULL))))));
                }
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned char)10)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (1036929432U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32743)))))) ? (max((((/* implicit */unsigned int) arr_3 [i_0])), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))))));
                        arr_19 [(_Bool)1] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned long long int) (unsigned char)175)), (14148779720199117173ULL))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1]))) >= (14148779720199117173ULL))), (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_11)))))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_12)) != (((/* implicit */int) arr_6 [10LL] [i_1]))));
                        var_24 = ((/* implicit */int) max((var_24), (((((((/* implicit */int) ((short) (_Bool)1))) >> (((arr_0 [i_4]) - (511803772))))) % (((/* implicit */int) var_17))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                    {
                        arr_23 [i_1] [(unsigned short)9] [8U] [i_5] = ((/* implicit */unsigned short) min((max(((short)32761), (((/* implicit */short) ((_Bool) var_18))))), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (short)-4185))))))))));
                        var_25 = ((/* implicit */_Bool) (signed char)122);
                        var_26 = ((/* implicit */unsigned char) arr_5 [i_3] [i_5]);
                        var_27 = (+(min((((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) : (4297964353510434466ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)1))))))));
                        arr_24 [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            arr_29 [i_1] [(signed char)1] [i_1] [(unsigned short)1] [i_1] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) (short)405)) ? (14148779720199117173ULL) : (14148779720199117156ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_7] [i_1] [i_1]))))));
                            arr_30 [i_0] [i_1] [12ULL] [(unsigned short)4] [0LL] [i_1] = ((/* implicit */_Bool) (-((((_Bool)1) ? (9223372036854775807LL) : (9223372036854775799LL)))));
                        }
                        var_28 = ((/* implicit */unsigned long long int) ((((int) (short)-1)) | (((/* implicit */int) var_7))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */_Bool) 14148779720199117133ULL)) ? (4813141649609810892ULL) : (9114233201466055500ULL)))) >> (((((((/* implicit */_Bool) 4297964353510434466ULL)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (short)27698)))) - (231)))));
                        arr_33 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [(unsigned short)13] [i_1] [(unsigned short)13])) < (((((((/* implicit */int) var_8)) != (((/* implicit */int) var_1)))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) arr_10 [i_3] [i_8]))))));
                        var_30 = ((/* implicit */_Bool) 4297964353510434459ULL);
                    }
                    var_31 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_16)) ? (arr_27 [i_0] [i_0] [i_3] [i_0] [i_3] [(unsigned char)5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))))) == (max((((/* implicit */long long int) arr_17 [(unsigned short)13] [i_1] [9])), (arr_16 [i_0] [i_0] [i_1] [i_0]))))) ? (((arr_32 [i_1]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)99))))) : (((/* implicit */long long int) ((((/* implicit */int) (short)-419)) + (((/* implicit */int) (unsigned short)16384)))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 2; i_10 < 14; i_10 += 4) 
                        {
                            {
                                arr_40 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) var_11);
                                arr_41 [i_1] = ((((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (unsigned short)22508)))) * (((((/* implicit */_Bool) 4297964353510434476ULL)) ? (((/* implicit */int) arr_28 [i_0] [i_1] [i_10 + 1] [i_10 + 1] [i_1])) : (((/* implicit */int) var_12)))));
                                var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_1] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_1])) - (((/* implicit */int) (unsigned char)168))))) < (((((/* implicit */_Bool) (~(var_3)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0]))) % (var_15))) : (((/* implicit */unsigned int) (((_Bool)1) ? (2122886188) : (arr_8 [i_0] [12]))))))));
                                var_33 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_22 [(unsigned char)2] [(unsigned short)2] [i_10 - 1] [i_10 + 1])) ? (((/* implicit */int) arr_5 [i_10] [i_10 - 1])) : (((/* implicit */int) arr_5 [i_10] [i_10 + 1])))), (((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */_Bool) 14148779720199117132ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13389381952389320977ULL))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        var_35 = ((/* implicit */_Bool) min((var_35), ((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)6793)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) arr_28 [(signed char)4] [i_0] [i_1] [10] [i_11]))));
                        arr_45 [i_1] = ((/* implicit */_Bool) var_18);
                        arr_46 [i_0] [i_0] [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) ((14148779720199117139ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(short)13] [(short)13] [i_3] [i_3])))))))));
                    }
                }
                arr_47 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_26 [(_Bool)1]);
            }
        } 
    } 
}
