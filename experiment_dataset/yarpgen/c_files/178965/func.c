/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178965
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
    var_13 = ((/* implicit */_Bool) max((2553422742U), (((/* implicit */unsigned int) (short)11915))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(var_0)))) : (((/* implicit */int) ((unsigned short) var_4)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (!(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) >= (var_1))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_2 [i_1])))))) ? (var_1) : (((/* implicit */long long int) (((~(2521601943U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61160)))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned char) 4211764551U);
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) ((var_12) > (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2] [i_3] [i_2]))))))))))));
                                arr_12 [i_1] = ((/* implicit */unsigned char) var_6);
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_0])))))) / ((-(((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_19 -= ((/* implicit */unsigned int) (~(((long long int) (unsigned short)4376))));
            arr_17 [i_0] [i_0] [i_5] = ((/* implicit */_Bool) var_6);
            arr_18 [i_0] [i_5] [i_0] = ((/* implicit */long long int) var_2);
        }
        arr_19 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_14 [i_0] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) arr_9 [i_0]))) + ((+(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_0))));
    }
    for (long long int i_6 = 1; i_6 < 13; i_6 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                {
                    arr_28 [i_8] [i_6] [i_6] = ((/* implicit */short) (((!(((/* implicit */_Bool) max(((short)-32761), (((/* implicit */short) (signed char)46))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_6] [i_7] [i_8] [i_8]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (((arr_20 [i_6]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2267)))))))));
                    /* LoopSeq 4 */
                    for (signed char i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            arr_35 [i_6] = ((((/* implicit */_Bool) arr_30 [i_6] [i_8] [i_6] [i_10])) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((2262967415846927189LL) - (2262967415846927180LL)))))) ? (((((/* implicit */_Bool) -5229437314195831170LL)) ? (((/* implicit */int) (short)27150)) : (((/* implicit */int) (unsigned short)37095)))) : ((~(((/* implicit */int) arr_23 [i_6] [i_7])))))) : ((~(((/* implicit */int) (unsigned short)61169)))));
                            var_21 = arr_23 [i_6] [i_7];
                            arr_36 [i_6] [i_8] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                        }
                        var_22 = ((((/* implicit */_Bool) (unsigned short)65535)) ? (min((arr_24 [i_6 - 1] [i_6 + 2]), (((/* implicit */long long int) (+(((/* implicit */int) (short)22411))))))) : (var_12));
                    }
                    for (long long int i_11 = 1; i_11 < 14; i_11 += 4) 
                    {
                        arr_39 [i_6] [i_7] [i_7] [i_7] = ((/* implicit */short) (signed char)-1);
                        arr_40 [i_7] [i_7] [i_6] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_37 [i_6] [i_7] [i_7] [i_11 - 1])) ? (((((/* implicit */_Bool) arr_24 [i_8] [i_8])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned char) 5229437314195831170LL))))) != (((/* implicit */int) var_0))));
                    }
                    for (long long int i_12 = 4; i_12 < 14; i_12 += 4) 
                    {
                        arr_43 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12299)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40900))))) : (((/* implicit */int) (unsigned short)62575))))) ^ (((var_0) ? (((/* implicit */long long int) 1447484664U)) : (arr_31 [i_6] [i_7] [i_8] [i_12])))));
                        arr_44 [i_6] [i_6] [i_6] [(short)4] = ((/* implicit */int) ((long long int) arr_26 [i_6 + 2] [i_6 - 1]));
                        arr_45 [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
                        var_23 = ((/* implicit */short) min((var_23), ((short)-30144)));
                        arr_46 [i_6] = ((/* implicit */unsigned int) (unsigned short)63255);
                    }
                    for (int i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        arr_49 [i_6] = ((/* implicit */signed char) var_2);
                        var_24 -= ((/* implicit */unsigned int) (unsigned char)182);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
                        {
                            arr_52 [i_6 + 1] [i_6] [i_6 + 1] [i_13] [i_13] = ((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */int) arr_22 [i_6])) : (((/* implicit */int) arr_22 [i_6])));
                            var_25 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_21 [i_7])))));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_6 + 2] [i_7] [i_8] [i_13] [i_14])) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) arr_23 [i_7] [i_14])))))));
                            var_27 ^= ((/* implicit */long long int) arr_51 [i_6 - 1] [i_6 - 1] [i_7] [i_7]);
                        }
                        for (short i_15 = 0; i_15 < 15; i_15 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (short)0))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6]))) : (2664011629U)))))));
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((var_9), (arr_48 [i_7] [i_7] [i_8] [i_13] [i_15])))) ? (((/* implicit */int) (unsigned char)151)) : ((+(((/* implicit */int) (unsigned char)204)))))) >> ((((+(((/* implicit */int) arr_32 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1])))) - (61938))))))));
                            var_30 = ((/* implicit */long long int) min((min((arr_47 [i_6] [i_6 + 2] [i_6] [i_6]), (arr_47 [i_6] [i_7] [i_6] [i_13]))), (max((arr_47 [i_15] [i_6] [i_6] [i_6 + 2]), (arr_47 [i_13] [i_7] [i_6] [i_13])))));
                        }
                        for (unsigned short i_16 = 3; i_16 < 12; i_16 += 2) 
                        {
                            arr_57 [i_16] [i_16 - 3] [i_6] [i_6] [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((((~(67108352))) + (2147483647))) << (((((-1556709731) + (1556709758))) - (27)))))) || (((/* implicit */_Bool) arr_37 [13LL] [i_7] [i_8] [i_13]))));
                            arr_58 [i_6] [i_7] [i_8] [i_13] [i_6] = ((/* implicit */short) min((((/* implicit */int) (_Bool)0)), ((+(577730999)))));
                        }
                        for (unsigned short i_17 = 0; i_17 < 15; i_17 += 4) 
                        {
                            var_31 = ((/* implicit */long long int) max((var_31), (max((((/* implicit */long long int) (((-(((/* implicit */int) arr_60 [i_17] [i_17] [i_8] [i_7] [i_17] [i_6 - 1])))) + (((/* implicit */int) var_9))))), ((+(((-6172365888996782312LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4376)))))))))));
                            var_32 = ((/* implicit */signed char) ((-1556709731) + (((((/* implicit */_Bool) -5126422036353190005LL)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) (unsigned short)4367))))));
                            var_33 = ((/* implicit */long long int) var_0);
                        }
                        /* LoopSeq 2 */
                        for (long long int i_18 = 0; i_18 < 15; i_18 += 1) /* same iter space */
                        {
                            arr_63 [i_7] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7212)) ? (arr_31 [i_18] [i_13] [i_8] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (short)-11920)))))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_6))))) : (max((-1556709731), (((/* implicit */int) (_Bool)1))))))), (var_12)));
                            arr_64 [i_18] [i_8] [i_8] [i_6] [i_13] [i_13] [i_6] = ((/* implicit */unsigned int) arr_27 [i_6] [i_6] [i_6] [i_13]);
                        }
                        for (long long int i_19 = 0; i_19 < 15; i_19 += 1) /* same iter space */
                        {
                            var_34 = (-(((((/* implicit */_Bool) arr_26 [i_6 + 1] [i_7])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0))))));
                            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_6 + 2] [i_6 + 2] [(short)12] [i_6 + 1] [i_7] [i_8]))) : (((((/* implicit */_Bool) var_6)) ? (-7717309783051585922LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65243))))))))))));
                            arr_67 [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_61 [i_13] [i_13] [i_8] [i_7] [i_6 + 1]))));
                            arr_68 [i_6] [i_6] [i_8] [i_6] [i_8] [(unsigned char)2] = ((/* implicit */long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-61))))), (arr_62 [i_6 + 1] [i_7] [i_6] [i_6] [i_6])));
                        }
                    }
                }
            } 
        } 
        arr_69 [i_6] = ((/* implicit */unsigned int) var_5);
        /* LoopNest 2 */
        for (long long int i_20 = 0; i_20 < 15; i_20 += 3) 
        {
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                {
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) arr_29 [i_6] [(short)6] [i_20] [i_21]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 0; i_22 < 15; i_22 += 4) 
                    {
                        arr_80 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */unsigned long long int) -4993148112907174062LL)) : (5630896860227212053ULL)))) ? (((/* implicit */int) arr_79 [i_6] [i_6] [i_6 + 2] [i_6 + 2])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_60 [i_22] [i_22] [i_22] [i_22] [i_6] [i_22])))))), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) - (arr_31 [i_6] [i_20] [i_21] [i_22]))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)-114)))))))));
                        var_37 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_48 [i_22] [i_22] [i_21] [i_22] [i_6])) ? (-365995180578507017LL) : (5229437314195831170LL))) | (max((((/* implicit */long long int) (signed char)-1)), (arr_31 [i_6] [i_6] [i_6 + 2] [i_6])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)168)) ? (((((/* implicit */int) arr_70 [i_6 + 1] [i_20])) ^ (((/* implicit */int) (signed char)-16)))) : (((((/* implicit */_Bool) (unsigned short)43728)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (short)-18256))))))) : ((~(4920098681853188378LL)))));
                    }
                    arr_81 [i_6 - 1] [i_6] [i_21] = ((/* implicit */short) max((((/* implicit */long long int) arr_73 [i_6])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_76 [i_6] [i_6 + 2] [i_6 - 1] [i_6 - 1] [i_21]))) : (max((((/* implicit */long long int) arr_20 [i_6])), (arr_24 [i_6] [i_20])))))));
                }
            } 
        } 
        arr_82 [i_6] [i_6] = var_7;
    }
    for (long long int i_23 = 1; i_23 < 13; i_23 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_24 = 0; i_24 < 15; i_24 += 4) 
        {
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                {
                    arr_91 [i_23] [i_24] [i_24] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_9))))) ? (((/* implicit */int) (signed char)127)) : (max((577730992), (((/* implicit */int) (short)8192))))));
                    /* LoopSeq 2 */
                    for (short i_26 = 0; i_26 < 15; i_26 += 4) 
                    {
                        arr_94 [i_23] [i_24] [i_23] [i_26] = (~(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_41 [i_23] [i_24] [i_25] [i_26])))) : (((((/* implicit */_Bool) arr_37 [i_25] [i_25] [i_24] [i_23])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_23]))) : (var_8))))));
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((var_2), (((((/* implicit */int) var_11)) % (((/* implicit */int) var_6)))))) : (((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 577730999)))) ? (((/* implicit */int) arr_55 [i_23 + 2] [i_23 + 1] [i_23 + 1] [i_23])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_27 = 0; i_27 < 15; i_27 += 4) 
                        {
                            var_39 ^= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) (+(-4397355256802868361LL))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_72 [i_24] [i_27]))))) ? ((+(577730996))) : (max((((/* implicit */int) arr_50 [i_23])), (var_2)))))));
                            arr_99 [i_23] [i_25] [i_26] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_93 [i_27] [i_27] [i_24] [i_23 + 1]), (arr_93 [i_25] [i_25] [i_24] [i_23 + 1])))) ? (((/* implicit */int) ((unsigned short) arr_74 [i_23] [i_23 + 1]))) : (((/* implicit */int) var_6))));
                            var_40 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) 9613808955887954086ULL)) ? (5169963915594696779LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-28556))))));
                        }
                        for (long long int i_28 = 3; i_28 < 13; i_28 += 2) 
                        {
                            arr_104 [i_23] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_101 [i_23] [i_24] [i_24] [i_25] [i_25] [i_26] [i_28 - 2])))));
                            var_41 -= ((/* implicit */signed char) min(((unsigned short)43), (((/* implicit */unsigned short) (signed char)48))));
                            var_42 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)35149))))) ? (((((/* implicit */_Bool) arr_97 [i_23] [i_26] [i_25])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (5216329288029105826LL))) : (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_23 - 1]))) : (arr_61 [i_23] [i_23] [i_23] [i_23] [i_23])))))));
                            var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) (+(((/* implicit */int) (short)-27619)))))));
                            arr_105 [i_28 - 2] [i_24] [i_25] [i_25] [i_24] [i_23] |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)-64)))) ? (((/* implicit */int) arr_37 [i_28] [i_28] [i_28] [i_28])) : (((((/* implicit */_Bool) (unsigned short)9762)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (unsigned short)32767))))));
                        }
                    }
                    for (unsigned char i_29 = 0; i_29 < 15; i_29 += 3) 
                    {
                        arr_109 [i_23] [i_23] [i_24] [i_25] [i_23] = ((((/* implicit */int) var_7)) % ((~(((/* implicit */int) arr_59 [i_23] [i_29] [i_23] [i_29] [i_29] [i_25])))));
                        arr_110 [i_23] [i_24] [i_23] [i_29] = ((/* implicit */signed char) min(((unsigned short)35992), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (var_12))))));
                        arr_111 [i_23] [i_23] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) && (((((/* implicit */int) arr_22 [i_23])) > (((/* implicit */int) arr_22 [i_23]))))));
                    }
                    arr_112 [i_23] [i_23] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))));
                }
            } 
        } 
        arr_113 [(unsigned short)12] |= ((/* implicit */long long int) (~(((/* implicit */int) (short)32755))));
    }
}
