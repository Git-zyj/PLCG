/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188451
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
    for (int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_17 *= ((/* implicit */unsigned int) ((int) (+(arr_1 [i_0 + 2] [i_1 + 1]))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (min((min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2]))), (((/* implicit */unsigned char) ((signed char) arr_0 [i_0 + 2])))))));
                var_19 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_5 [i_1 + 2])))));
                var_20 = arr_7 [i_1];
            }
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)255)), (min((min((var_4), (((/* implicit */long long int) arr_0 [i_0])))), (var_6))))))));
            var_22 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_16), (arr_6 [i_0 - 2] [i_0] [i_1 + 2])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_12))))) : (((long long int) (short)2048))))), (((((/* implicit */_Bool) ((var_9) << (((-6731590728367772181LL) + (6731590728367772221LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9)))));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_23 *= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)33861))));
                            arr_15 [i_0] [i_0] [i_0] [8] [i_3] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_0 - 2])) : (((/* implicit */int) arr_5 [i_1 - 2]))))), (((unsigned long long int) (short)2077)));
                        }
                    } 
                } 
            } 
        }
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4435416U)) ? (170428839498537917LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-16032)))))) : (min((((/* implicit */unsigned long long int) arr_5 [i_0])), (arr_1 [i_0 + 2] [i_0 + 1])))));
    }
    var_25 = ((/* implicit */int) (+(var_8)));
    /* LoopSeq 1 */
    for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        arr_18 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_16 [i_6])) ? (arr_16 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))) : (arr_16 [7ULL])))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_16), (((/* implicit */unsigned short) (unsigned char)51)))))) : (min((((/* implicit */long long int) var_11)), (arr_16 [i_6]))))) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_1))));
            /* LoopSeq 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8 - 1] [i_8 - 1] [i_8 - 1])) ? (arr_24 [i_8 - 1] [i_8 - 1] [i_8 - 1]) : (((/* implicit */int) var_5)))))));
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_10 = 4; i_10 < 12; i_10 += 4) 
                    {
                        var_28 *= ((/* implicit */long long int) arr_20 [i_7] [i_7]);
                        arr_30 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((min(((-(arr_28 [11] [i_7] [i_8] [i_9] [i_10]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_9] [i_8])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_6] [i_6] [(_Bool)1] [i_6] [(_Bool)1] [i_6])) ? (((/* implicit */int) arr_20 [i_6] [i_7])) : (((/* implicit */int) var_12))))) : (min((var_8), (((/* implicit */long long int) arr_25 [i_7] [i_7] [i_7] [i_7] [14LL] [i_7])))))))));
                    }
                    arr_31 [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (min((((((/* implicit */_Bool) (short)-22736)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31661))) : (var_4))), (((/* implicit */long long int) (unsigned short)46323)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_26 [i_7] [i_7] [(_Bool)1] [i_9] [i_7]))))));
                    var_29 -= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */short) arr_26 [i_6] [i_9] [i_8] [i_9] [i_8]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_25 [i_6] [i_6] [(unsigned char)10] [i_6] [(unsigned char)10] [i_9])) : (((/* implicit */int) (unsigned char)240))))) : (((unsigned long long int) var_6)))));
                }
                for (unsigned char i_11 = 1; i_11 < 11; i_11 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_32 [i_6] [i_8] [i_8 - 1] [i_11 + 1]), (var_2)))) ? (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_23 [i_6] [i_6] [(unsigned short)4])) : (((/* implicit */int) arr_29 [i_12] [i_11 - 1] [i_7] [i_7] [i_6])))), (((((/* implicit */_Bool) arr_25 [i_6] [i_11] [i_8] [i_11] [i_12] [i_12])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-32759)))))) : ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)39555)))))))))));
                        arr_36 [i_11] [i_7] [i_11] [i_7] [(unsigned short)7] [i_8 - 1] [i_12] = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) var_14))), (((((/* implicit */_Bool) arr_21 [i_6] [i_6])) ? (((/* implicit */int) arr_21 [i_7] [i_11 + 1])) : (((/* implicit */int) arr_21 [i_11] [i_8 - 1]))))));
                    }
                    for (short i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        var_31 *= ((/* implicit */long long int) (_Bool)1);
                        arr_40 [i_6] [i_6] [i_11] [i_6] [i_6] = ((((/* implicit */int) ((unsigned char) arr_17 [i_6] [i_7]))) >> (((((((/* implicit */_Bool) arr_35 [i_13] [i_11 + 4] [i_7] [i_6])) ? (min((var_9), (((/* implicit */unsigned long long int) arr_19 [i_6] [i_6] [i_11 + 4])))) : (((/* implicit */unsigned long long int) arr_24 [i_6] [i_7] [i_11 + 2])))) - (13020ULL))));
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) arr_29 [i_6] [i_7] [i_8 - 1] [i_6] [i_13])))) : (((/* implicit */int) var_13))))))));
                    }
                    var_33 = ((/* implicit */long long int) arr_23 [i_8 - 1] [i_11 + 2] [i_6]);
                    arr_41 [i_11] [i_8] [i_11] = ((/* implicit */long long int) var_16);
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) arr_32 [i_6] [i_7] [i_8 - 1] [i_6]))))) ? (((((/* implicit */_Bool) arr_21 [i_7] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_11] [i_11] [i_11 + 3]))) : (var_9))) : (((((/* implicit */_Bool) arr_17 [i_6] [(unsigned char)10])) ? (arr_17 [i_6] [i_6]) : (arr_28 [i_6] [i_7] [i_7] [i_7] [i_11 + 3]))))))));
                }
                arr_42 [i_6] [i_7] [i_8 - 1] = ((/* implicit */long long int) min((min((arr_32 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1]), ((unsigned short)22))), (((unsigned short) var_10))));
            }
            for (long long int i_14 = 2; i_14 < 11; i_14 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_15 = 2; i_15 < 13; i_15 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_16 = 0; i_16 < 15; i_16 += 3) 
                    {
                        arr_53 [i_6] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (arr_49 [i_6] [i_6] [i_7] [i_7] [i_6] [i_16] [i_16]))), (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) var_15)) ? (arr_17 [i_15 - 1] [i_14 - 2]) : (arr_17 [i_15 - 1] [i_14 - 2])))));
                        arr_54 [i_7] [i_7] [i_14] [i_14] [i_16] [i_16] [i_7] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_15] [i_14] [i_15] [i_14] [i_7] [i_6]))) : (arr_28 [i_6] [i_6] [i_14 - 2] [i_15 - 1] [i_16])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)16031))))) : (((((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6] [i_14 + 3] [i_6] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_6] [i_14] [i_16] [i_14] [i_16]))) : (var_4))))), (((/* implicit */long long int) var_3))));
                    }
                    var_35 = ((/* implicit */unsigned short) var_13);
                    /* LoopSeq 3 */
                    for (signed char i_17 = 3; i_17 < 14; i_17 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */int) arr_25 [i_17 - 3] [i_15 - 2] [i_7] [i_7] [i_7] [i_6]))))) ? (((/* implicit */int) arr_27 [i_7] [i_14] [i_15])) : (((/* implicit */int) arr_19 [i_6] [i_6] [i_6]))))) ? (arr_58 [i_7] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)114)), (arr_48 [i_7] [i_14 - 2] [i_15 - 2] [i_17 - 2] [i_17 - 1] [i_17 - 2])))))));
                        var_37 &= ((/* implicit */short) min((arr_28 [i_17 - 3] [i_17 + 1] [i_17 + 1] [i_17] [i_17 - 1]), (((/* implicit */unsigned long long int) min((arr_51 [i_17] [i_17 + 1] [i_17] [i_17 + 1] [i_17 + 1]), (arr_51 [i_17 - 2] [i_17 - 2] [i_17] [i_17] [i_17 - 3]))))));
                        arr_59 [i_6] [i_6] [i_14] [i_14] [i_14] [(_Bool)1] [(short)9] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_24 [i_7] [i_7] [i_7]), (1195126379))))))), (((arr_29 [i_6] [i_15] [i_14 - 2] [i_15 - 2] [i_17 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6] [i_6] [i_6] [i_6] [i_6]))) : (((((/* implicit */_Bool) var_4)) ? (arr_28 [i_6] [i_6] [i_6] [12ULL] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31773)))))))));
                    }
                    for (signed char i_18 = 3; i_18 < 14; i_18 += 2) /* same iter space */
                    {
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_51 [i_15 + 1] [i_15] [i_18 + 1] [i_18 + 1] [i_18])) : (((/* implicit */int) arr_51 [i_15 + 1] [i_18] [(unsigned short)3] [i_18 - 2] [i_18 - 2]))))) ? (((((/* implicit */_Bool) 525382249)) ? (((/* implicit */int) arr_51 [i_15 - 2] [i_15 - 2] [i_18] [i_18 - 3] [i_18 - 3])) : (((/* implicit */int) arr_51 [i_15 - 1] [i_15 - 1] [i_15] [i_18 - 1] [i_15 - 1])))) : (((/* implicit */int) min((arr_51 [i_15 - 1] [i_15 - 2] [14LL] [i_18 - 3] [i_18]), (arr_51 [i_15 - 1] [i_15] [i_18 - 2] [i_18 - 3] [i_15]))))));
                        var_39 = ((/* implicit */unsigned short) var_4);
                        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((arr_50 [i_6] [i_7] [14] [i_6] [i_14] [i_6] [i_18 + 1]) ? (min((((unsigned long long int) arr_17 [i_6] [i_15 - 2])), (((/* implicit */unsigned long long int) arr_24 [i_6] [i_15 - 1] [i_18])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) var_11)), (var_3))), (((/* implicit */unsigned short) arr_48 [i_6] [i_6] [i_14] [i_6] [i_18 - 2] [i_6])))))))))));
                        arr_62 [i_15] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_26 [i_18 - 1] [i_18 - 3] [i_15 + 1] [i_14 - 2] [i_7])), (((((/* implicit */_Bool) arr_26 [i_18 + 1] [i_18 + 1] [i_15 - 1] [i_14 + 3] [i_14 - 2])) ? (((/* implicit */int) arr_26 [i_14 - 1] [i_18 - 2] [i_15 - 2] [i_14 - 1] [i_7])) : (((/* implicit */int) arr_26 [(_Bool)1] [i_18 - 3] [i_15 - 1] [i_14 - 1] [i_7]))))));
                    }
                    /* vectorizable */
                    for (signed char i_19 = 3; i_19 < 14; i_19 += 2) /* same iter space */
                    {
                        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-9069139713198784014LL)));
                        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) var_12))));
                        var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_14 - 1] [i_15] [i_15 + 2] [i_19 - 2])) ? (var_6) : (((/* implicit */long long int) arr_47 [i_6] [i_15 - 1] [i_19 - 1] [i_15 + 1] [i_14 + 4] [i_14])))))));
                    }
                    var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_14] [i_14 + 2] [i_14] [i_14] [i_14 + 2] [i_14])) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)224))))), (var_8))) : (((/* implicit */long long int) max((((/* implicit */int) arr_19 [i_6] [i_6] [i_14 + 4])), (((arr_50 [i_6] [i_7] [i_7] [i_15] [i_7] [(_Bool)0] [i_6]) ? (((/* implicit */int) arr_52 [2ULL] [i_6] [i_14] [i_14] [(short)4])) : (((/* implicit */int) arr_50 [i_6] [i_6] [(unsigned char)10] [i_14] [i_6] [i_6] [(unsigned short)8])))))))));
                    arr_65 [i_15] [i_15] [i_15] [(short)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3605194870U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24046))) : (9069139713198784013LL)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)6474)))) : ((-(((/* implicit */int) (short)-22486))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_15 - 2])) ? (arr_63 [i_15 - 1]) : (arr_63 [i_15 + 2])))) : (min((((/* implicit */long long int) var_2)), (arr_57 [i_14 + 4] [i_14 + 4] [i_14 + 4] [i_15] [i_15 + 2] [(short)10] [i_15])))));
                }
                /* LoopSeq 1 */
                for (short i_20 = 2; i_20 < 14; i_20 += 3) 
                {
                    var_45 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1181460170U)) ? (7491770750105967906LL) : (((/* implicit */long long int) -525382249))))) ? (((/* implicit */int) arr_29 [i_14] [i_14] [i_14 + 2] [i_14] [(short)5])) : (((/* implicit */int) min((arr_68 [i_20] [i_7] [i_6]), (((/* implicit */short) var_1))))))) & (((/* implicit */int) ((short) var_0)))));
                    arr_69 [i_6] [i_7] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5229057577269458009LL)) ? (((/* implicit */unsigned long long int) (+(9223372036854775807LL)))) : (max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) arr_19 [i_6] [i_6] [i_20]))))));
                }
            }
        }
        /* vectorizable */
        for (unsigned char i_21 = 0; i_21 < 15; i_21 += 2) /* same iter space */
        {
            arr_72 [i_6] [i_21] [0LL] = ((/* implicit */signed char) ((arr_50 [i_6] [i_6] [i_21] [i_21] [i_21] [i_21] [i_21]) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_70 [i_6]))));
            /* LoopNest 2 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        var_46 *= ((/* implicit */unsigned int) arr_45 [i_6] [i_6] [i_6]);
                        /* LoopSeq 1 */
                        for (unsigned char i_24 = 2; i_24 < 12; i_24 += 3) 
                        {
                            var_47 = ((/* implicit */int) arr_45 [i_6] [i_6] [i_6]);
                            var_48 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_24 + 3] [i_24 + 3] [i_24 + 2] [i_24] [i_24])) && (((/* implicit */_Bool) var_3))));
                        }
                    }
                } 
            } 
            arr_81 [i_6] [(unsigned char)3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6]))));
        }
    }
    var_49 = ((/* implicit */_Bool) 12422113454794070219ULL);
    var_50 &= ((/* implicit */_Bool) var_1);
}
