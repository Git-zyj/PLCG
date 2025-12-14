/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123670
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_0] [8U] [i_0]), (((/* implicit */int) (unsigned char)164))))) ? (((/* implicit */int) var_8)) : (arr_6 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (20ULL)));
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                            {
                                var_14 *= ((/* implicit */unsigned int) arr_9 [i_0] [i_1 + 1] [8U] [i_3]);
                                var_15 |= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)53151)))))))));
                            }
                            for (short i_5 = 4; i_5 < 18; i_5 += 4) 
                            {
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((83419921), (((/* implicit */int) arr_7 [i_5 + 1] [i_1 + 1] [i_1 + 1]))))), (((((/* implicit */_Bool) 12342895112263642821ULL)) ? (((/* implicit */unsigned long long int) 4234788494U)) : (6662422590993480980ULL))))))));
                                arr_17 [i_5] [i_3] [i_2] [i_1] [9ULL] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (6163589443108256067LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))));
                                var_17 = ((/* implicit */unsigned char) arr_9 [4LL] [i_1 + 1] [i_1 + 1] [i_0]);
                            }
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) var_10);
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    arr_22 [i_6] [(unsigned char)7] [(short)6] [i_0] = max((((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_10 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 2]))), ((((_Bool)0) ? (((/* implicit */unsigned long long int) 2811230683U)) : (12342895112263642835ULL))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_11)))) ? (max((12342895112263642821ULL), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6103848961445908794ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_1 - 2])))))));
                }
                /* LoopSeq 4 */
                for (short i_7 = 1; i_7 < 18; i_7 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_1 + 1]))))), (((unsigned int) arr_4 [i_1 - 2]))));
                        var_20 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) ((int) (unsigned short)25009))), (1483736612U))), (((/* implicit */unsigned int) (-(((/* implicit */int) max(((short)16619), (((/* implicit */short) var_7))))))))));
                    }
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        arr_32 [i_0] [(signed char)5] [i_7] [i_9] [i_7] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_15 [i_1 - 1] [15] [i_7 - 1] [i_7 + 1] [i_0]) ? (11784321482716070635ULL) : (17004185800762994816ULL)))) ? (((/* implicit */int) max((arr_30 [i_1 - 1] [i_1] [i_7 - 1] [i_9]), (((/* implicit */unsigned short) arr_15 [i_1 - 1] [18] [i_7 - 1] [(_Bool)1] [i_1 - 2]))))) : (((arr_15 [i_1 - 2] [i_1] [i_7 + 1] [(signed char)0] [i_7]) ? (((/* implicit */int) arr_30 [i_1 + 1] [i_1 + 1] [i_7 - 1] [i_1 + 1])) : (((/* implicit */int) arr_30 [i_1 + 1] [i_1 + 1] [i_7 - 1] [i_7]))))));
                        var_21 *= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (short)29596)) ? (4607508773869004176LL) : (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_7 - 1] [i_9])))));
                    }
                    for (int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) (~(var_2)));
                        /* LoopSeq 3 */
                        for (long long int i_11 = 3; i_11 < 15; i_11 += 3) 
                        {
                            var_23 = ((/* implicit */short) max((((/* implicit */unsigned int) ((int) var_7))), (arr_19 [i_0])));
                            var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_14 [i_0] [(short)15] [i_7] [i_10] [(short)15])) : (((/* implicit */int) (short)29689))))))));
                            arr_39 [i_10] [i_10] [i_10] [14] [i_1 + 1] [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
                        }
                        for (long long int i_12 = 1; i_12 < 17; i_12 += 3) 
                        {
                            arr_43 [i_10] [i_1] [i_7] [i_10] [9ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 0U))) ? (11784321482716070635ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1707588609227253037LL)) ? (((/* implicit */long long int) 1483736612U)) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)30888)))))))));
                            arr_44 [i_0] [i_1] [i_1] [i_10] [i_10] [0ULL] = ((/* implicit */short) ((var_1) ? ((~(((/* implicit */int) arr_34 [i_7 - 1] [0LL] [i_7 + 1] [i_1] [0LL] [i_1 - 1])))) : (((/* implicit */int) ((signed char) arr_34 [i_12] [i_12] [i_7 + 1] [(unsigned short)4] [i_7] [i_1 + 1])))));
                            var_25 = ((/* implicit */long long int) var_7);
                        }
                        for (signed char i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            arr_48 [i_0] [i_1] [i_7] [i_10] [i_7] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) 65535ULL)))))) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) (signed char)-1))))) : (max((arr_29 [i_7 - 1] [i_1 - 1] [i_1 - 1] [i_0]), (((/* implicit */int) (short)29596))))));
                            var_26 = ((/* implicit */_Bool) ((signed char) (_Bool)1));
                            var_27 *= ((/* implicit */short) arr_36 [i_1] [i_10] [i_7 + 1] [i_1] [i_1]);
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (~(((/* implicit */int) max((var_12), (((/* implicit */unsigned char) arr_7 [(unsigned char)16] [i_7 + 1] [(signed char)9]))))))))));
                            var_29 = ((/* implicit */unsigned char) max((max((max((3052962309U), (((/* implicit */unsigned int) (short)26848)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6662422590993480980ULL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_11 [i_13] [i_1 + 1] [i_7] [i_7] [i_7] [i_7] [i_10]))))))), (((/* implicit */unsigned int) (unsigned char)74))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_26 [8LL] [i_7] [i_7] [i_0]))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max(((short)29680), (((/* implicit */short) var_4)))), (((/* implicit */short) var_1))))) ? (977344499) : (1816193902)));
                            var_32 = ((/* implicit */unsigned long long int) var_12);
                        }
                        for (short i_15 = 0; i_15 < 19; i_15 += 4) 
                        {
                            var_33 = ((/* implicit */short) max((((long long int) var_8)), (max((arr_41 [i_10] [i_1] [i_0] [i_7] [i_1] [i_0] [i_10]), (((/* implicit */long long int) 799867053))))));
                            var_34 = ((/* implicit */_Bool) arr_52 [i_1] [i_1 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1]);
                            var_35 = ((/* implicit */short) 6662422590993480981ULL);
                        }
                        arr_54 [i_0] [(_Bool)1] [i_10] [5] [i_10] = ((/* implicit */unsigned long long int) arr_31 [i_0] [17] [i_0] [i_1 + 1] [17] [i_7 - 1]);
                    }
                    var_36 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)103))))));
                }
                for (unsigned char i_16 = 4; i_16 < 18; i_16 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */long long int) ((_Bool) max((var_2), (((/* implicit */unsigned int) ((unsigned char) -1989192541225921437LL))))));
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_34 [4LL] [i_1 - 1] [i_1] [15LL] [i_1] [i_16 - 1])))))))));
                    /* LoopSeq 1 */
                    for (int i_17 = 0; i_17 < 19; i_17 += 4) 
                    {
                        var_39 = ((/* implicit */signed char) max((((/* implicit */int) var_7)), ((+(((/* implicit */int) (short)29660))))));
                        var_40 |= ((/* implicit */unsigned short) ((signed char) arr_11 [i_0] [i_0] [i_16] [i_1 - 2] [i_0] [i_16 - 1] [3]));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 19; i_18 += 2) 
                    {
                        for (int i_19 = 1; i_19 < 17; i_19 += 1) 
                        {
                            {
                                arr_64 [i_0] [(signed char)15] [i_1] [i_16 - 1] [(signed char)15] [i_16 - 1] [i_16] = ((/* implicit */unsigned short) (-(max((max((((/* implicit */unsigned int) (short)-8192)), (0U))), (((/* implicit */unsigned int) (_Bool)1))))));
                                var_41 |= ((/* implicit */short) var_9);
                                arr_65 [i_0] [i_1 - 1] [5LL] [i_18] [5LL] [(unsigned char)4] [i_16] = max((arr_58 [i_1 + 1] [i_16] [i_16] [i_16] [i_1 + 1] [i_16 + 1]), (max((arr_58 [i_1 - 1] [i_1] [i_1 - 1] [i_16] [i_16 - 1] [i_16 + 1]), (arr_58 [i_1 - 2] [i_1 + 1] [i_16 + 1] [i_16 - 3] [i_16] [i_16 - 3]))));
                                arr_66 [i_16] [i_1] [i_16] [(signed char)9] [i_19 - 1] = max((var_2), (((((/* implicit */_Bool) var_11)) ? (((var_1) ? (4250276594U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1] [i_1] [i_1]))))) : (max((((/* implicit */unsigned int) arr_61 [i_1] [i_16 - 4] [i_1])), (4250276607U))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_20 = 4; i_20 < 18; i_20 += 1) /* same iter space */
                {
                    var_42 *= ((/* implicit */signed char) arr_51 [i_0] [i_1] [i_1] [i_1] [i_0]);
                    arr_70 [(short)0] [i_1 + 1] [i_1 - 1] [i_20] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned short) 8406133371068196421ULL))), (max((((/* implicit */unsigned long long int) (short)255)), (((((/* implicit */_Bool) arr_61 [i_0] [i_1] [i_20 - 2])) ? (21ULL) : (((/* implicit */unsigned long long int) 44690689U))))))));
                    arr_71 [12] [i_1 - 1] [i_1 - 1] [14LL] = ((/* implicit */short) var_9);
                }
                for (unsigned char i_21 = 4; i_21 < 18; i_21 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_22 = 1; i_22 < 17; i_22 += 3) 
                    {
                        for (signed char i_23 = 0; i_23 < 19; i_23 += 4) 
                        {
                            {
                                var_43 *= ((/* implicit */unsigned int) arr_5 [(short)2] [(short)2] [(short)2] [i_22]);
                                var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 2] [i_1])))))));
                                var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) max((((/* implicit */unsigned int) ((_Bool) max((((/* implicit */int) var_1)), (-1463271388))))), (var_5))))));
                                var_46 = ((/* implicit */long long int) (-(0U)));
                            }
                        } 
                    } 
                    var_47 = ((/* implicit */int) (~((~(((((/* implicit */_Bool) 1483736619U)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                    arr_79 [i_1] = 2018707763;
                    var_48 = ((/* implicit */int) max(((((_Bool)1) ? (arr_10 [i_1 + 1] [i_21] [i_21] [i_21] [i_21 + 1]) : (arr_10 [i_1 - 1] [i_1 - 1] [i_21] [i_1 - 1] [i_21 - 2]))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_1 - 2] [i_21 - 3] [i_21 - 3] [i_1 - 2] [i_21 - 2])))));
                    var_49 = ((/* implicit */unsigned short) var_7);
                }
                var_50 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) 8406133371068196421ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_74 [i_0] [i_0] [i_0] [i_0])) ? (arr_59 [i_0] [i_0] [i_0]) : (-8629849572639922957LL)))) : (max((12342895112263642809ULL), (((/* implicit */unsigned long long int) var_8)))))));
            }
        } 
    } 
    var_51 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max(((unsigned short)31289), (((/* implicit */unsigned short) var_6)))))))), (1409315349391244097LL)));
    var_52 = ((/* implicit */_Bool) ((unsigned char) var_11));
}
