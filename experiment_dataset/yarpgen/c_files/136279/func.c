/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136279
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
    var_12 = ((/* implicit */_Bool) (((_Bool)1) ? ((-(((((/* implicit */int) (signed char)63)) - (1825081906))))) : (((/* implicit */int) (_Bool)0))));
    var_13 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) : (min((var_8), (((/* implicit */long long int) var_5)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned long long int) min(((unsigned short)13), (((/* implicit */unsigned short) (_Bool)0))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_14 &= ((/* implicit */signed char) (-(((unsigned long long int) arr_15 [i_4] [i_3] [i_2]))));
                            var_15 = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned short)13)) - (((/* implicit */int) (short)1037)))), (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_8 [i_1] [i_1]))))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)13))))) >= (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_4)))));
            arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)192))))) >= (((/* implicit */int) min(((unsigned short)31049), (((/* implicit */unsigned short) (_Bool)0)))))));
        }
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            arr_20 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)1044)), (arr_7 [i_0] [i_0])))) | (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1267793763U)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)6230)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_5])) ? (2989976380U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [8U] [(signed char)19] [(signed char)19])) - (((/* implicit */int) arr_12 [i_0] [i_5] [i_6]))))))))));
                var_18 += ((/* implicit */unsigned char) (unsigned short)6934);
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        {
                            var_19 &= ((/* implicit */signed char) ((unsigned int) max((arr_10 [i_0] [i_0] [(signed char)6] [i_0] [i_0] [i_0]), (arr_10 [i_8] [8] [(unsigned short)16] [i_8] [i_8] [i_8]))));
                            var_20 = ((/* implicit */unsigned long long int) var_7);
                            var_21 = (~(max((((/* implicit */int) arr_6 [i_0] [i_5] [i_0] [i_8])), (arr_4 [i_0] [(unsigned short)11] [i_6]))));
                            arr_31 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [8U] [i_0] [i_6])) % (((/* implicit */int) (short)6230))))) ? (((/* implicit */int) ((((/* implicit */int) min(((signed char)127), (((/* implicit */signed char) arr_23 [i_7]))))) >= (((((/* implicit */int) (signed char)127)) & (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))))));
                            var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_15 [i_0] [i_0] [i_0]), (arr_24 [i_8] [i_0] [i_5] [i_0])))) ? (((((arr_29 [7LL] [i_7] [i_6] [i_5] [i_0] [i_0]) + (9223372036854775807LL))) << (((arr_19 [i_6] [i_7] [i_8]) - (3148314960257774945LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))), ((-(max((14ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
                        }
                    } 
                } 
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((unsigned long long int) arr_17 [i_0])), (((/* implicit */unsigned long long int) ((arr_11 [i_5] [i_0]) - (((/* implicit */long long int) arr_17 [i_0])))))));
                var_23 = ((/* implicit */unsigned long long int) max((min((max((arr_27 [i_9] [i_5] [i_5] [i_0]), (((/* implicit */unsigned int) arr_15 [i_0] [i_5] [i_0])))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)58602)) / (((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_25 [i_0] [i_9] [2LL])))))))));
            }
        }
        var_24 += ((/* implicit */unsigned long long int) (((+(((unsigned long long int) var_1)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [6U])))))))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) min(((+((-(arr_28 [6] [i_0] [i_0] [i_0] [i_0] [14U] [i_0]))))), (((/* implicit */unsigned int) ((signed char) var_0))))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
    {
        var_26 = ((/* implicit */short) (unsigned short)65523);
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 19; i_11 += 4) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_11 + 1] [i_11 + 1]))));
                    var_28 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [(short)6] [i_12] [i_12] [i_11])) - ((+(arr_4 [i_11] [i_11] [i_12])))))), ((-(((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [(signed char)6] [i_11 + 1] [i_10] [i_10]))) : (var_1)))))));
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        for (long long int i_14 = 1; i_14 < 16; i_14 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) (-(min((1189043123U), (590696318U)))));
                                arr_46 [i_12] &= ((((arr_45 [i_14 + 2] [i_14] [i_14] [i_14 + 2] [i_14 + 4] [i_13] [i_13]) & (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_7))))))) | (((/* implicit */long long int) ((unsigned int) ((unsigned short) var_5)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_47 [i_10] [i_10] = ((/* implicit */unsigned short) ((long long int) max((arr_43 [i_10] [i_10] [i_10]), (((/* implicit */unsigned long long int) arr_7 [i_10] [i_10])))));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            for (unsigned short i_16 = 2; i_16 < 17; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    {
                        var_30 += ((/* implicit */long long int) (unsigned short)34486);
                        var_31 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55643)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (unsigned short)19))))) || (((/* implicit */_Bool) (unsigned short)6277))));
                        var_32 = ((/* implicit */long long int) max((879640275U), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6924))) == (6917529027641081856ULL)))) << (((((/* implicit */int) max((((/* implicit */short) (signed char)127)), (var_3)))) - (32371))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_18 = 0; i_18 < 16; i_18 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_19 = 3; i_19 < 14; i_19 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_20 = 0; i_20 < 16; i_20 += 3) 
            {
                for (signed char i_21 = 0; i_21 < 16; i_21 += 1) 
                {
                    {
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6933)) || (((/* implicit */_Bool) ((var_4) >> (((arr_61 [(_Bool)1] [i_19]) + (633235753281465428LL))))))))), (((int) arr_6 [i_18] [i_18] [(_Bool)0] [(signed char)2])))))));
                        arr_68 [i_21] [i_19] [(unsigned short)13] [i_20] [i_19] [i_18] = ((/* implicit */unsigned long long int) ((int) ((_Bool) ((arr_54 [i_18] [i_19]) / (((/* implicit */int) var_7))))));
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) min((((/* implicit */long long int) max((arr_36 [i_18] [i_18]), (arr_36 [i_18] [i_18])))), ((+(var_9))))))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned int i_22 = 0; i_22 < 16; i_22 += 1) 
            {
                var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned int) arr_67 [(short)11] [i_19] [i_22] [i_22]))) ? (((var_10) / (((/* implicit */unsigned long long int) arr_29 [i_22] [i_19] [i_18] [i_18] [i_18] [i_18])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_18])) ? (((/* implicit */int) arr_63 [i_18] [i_19] [i_22])) : (((/* implicit */int) arr_33 [i_18] [i_19] [(short)12] [(_Bool)1]))))))), (((/* implicit */unsigned long long int) ((short) var_11))))))));
                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (+(min((-6872621097138594540LL), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)31056))))))))))));
            }
            for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
            {
                var_37 = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_18] [i_19] [i_19] [i_19]))) : (var_10))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)26777)) && (((/* implicit */_Bool) var_7))))))))));
                var_38 += ((/* implicit */short) ((((/* implicit */_Bool) 16252928)) ? (6917529027641081856ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))));
                /* LoopNest 2 */
                for (long long int i_24 = 0; i_24 < 16; i_24 += 3) 
                {
                    for (signed char i_25 = 2; i_25 < 14; i_25 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65523))))) >= (((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_19]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_66 [i_18] [i_18] [i_19] [i_18] [i_18] [i_19])))));
                            var_40 = ((/* implicit */long long int) ((int) min((((/* implicit */int) arr_36 [i_25 + 2] [i_25])), ((-(((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)58602)) > (((/* implicit */int) arr_21 [8] [(short)6] [i_23 + 1]))))))))));
            }
            for (short i_26 = 0; i_26 < 16; i_26 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_27 = 1; i_27 < 13; i_27 += 1) 
                {
                    for (long long int i_28 = 0; i_28 < 16; i_28 += 3) 
                    {
                        {
                            var_42 += ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)0)))) < (var_5)))), (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_3 [(unsigned short)3] [i_28])) & (arr_29 [i_18] [i_19 - 3] [i_26] [18U] [i_27] [i_28])))) ? (((((/* implicit */_Bool) 6917529027641081856ULL)) ? (2752447205U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_18] [i_19 + 2] [i_27] [i_28]))))))))));
                            var_43 &= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_26 [i_18] [i_19 - 1] [i_27 + 3] [i_26])) ? (((((/* implicit */unsigned long long int) 4294967273U)) - (2623167089635984972ULL))) : (((/* implicit */unsigned long long int) max((arr_54 [i_26] [i_26]), (((/* implicit */int) (_Bool)1))))))));
                            var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1628871886)) ? (((((/* implicit */_Bool) ((arr_13 [i_18] [i_18]) + (arr_50 [i_18] [i_19] [i_26])))) ? (((/* implicit */unsigned int) -1637448144)) : (4294967295U))) : (((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_62 [i_18] [i_19] [0ULL] [i_18])))), (((/* implicit */int) ((12U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_19] [i_27] [i_19])))))))))));
                        }
                    } 
                } 
                var_45 = ((/* implicit */unsigned long long int) max((var_45), ((+(min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) (short)-26801))))), (((((/* implicit */_Bool) 17195868854966127277ULL)) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6223)))))))))));
                var_46 += ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_71 [(unsigned char)2] [i_19] [i_26])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_30 [i_26] [i_26] [i_18] [(_Bool)1] [i_26] [i_18])))) + (((((/* implicit */unsigned long long int) arr_2 [i_26] [i_19] [i_26])) + (var_4))))) << (((min((((/* implicit */unsigned long long int) (short)6198)), (((unsigned long long int) arr_36 [i_18] [i_19])))) - (157ULL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_29 = 0; i_29 < 16; i_29 += 3) 
                {
                    var_47 = ((((((/* implicit */int) arr_39 [i_18] [i_19 + 2])) + (2147483647))) << (((1798234419440575079ULL) - (1798234419440575079ULL))));
                    var_48 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_18] [i_19 - 3]))) | (((((/* implicit */_Bool) arr_15 [i_18] [i_18] [6])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)6230)))))));
                }
                arr_88 [i_19] = ((/* implicit */_Bool) (((((+(var_1))) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_28 [i_19] [13] [19] [i_18] [i_18] [i_18] [i_18])), (6139548563584524548LL)))))) / (((/* implicit */unsigned long long int) ((arr_27 [i_18] [i_19 + 1] [i_19 + 1] [i_26]) / (arr_27 [i_19] [i_19 - 1] [i_19 - 1] [i_26]))))));
            }
            for (short i_30 = 0; i_30 < 16; i_30 += 4) /* same iter space */
            {
                var_49 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_45 [i_19 - 2] [i_19] [(signed char)19] [i_19 - 3] [i_19] [i_19] [i_19 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)))) == (((((/* implicit */_Bool) arr_2 [i_30] [i_19] [i_30])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_63 [i_18] [i_18] [i_18])))))))) : (arr_45 [i_19] [i_18] [i_30] [(signed char)6] [i_18] [i_19 + 2] [i_30])));
                var_50 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_41 [i_19 + 2] [i_19 + 1] [i_19 - 2])) && (((/* implicit */_Bool) var_7))))));
                var_51 = ((/* implicit */long long int) (-(((unsigned int) min((arr_40 [i_18] [i_18] [i_18] [i_18]), ((unsigned short)25134))))));
                arr_93 [i_19] = ((/* implicit */short) (~(((((/* implicit */int) ((((/* implicit */int) arr_90 [i_19] [i_19] [1LL])) <= (arr_4 [i_19] [i_19] [i_30])))) << (((/* implicit */int) (_Bool)1))))));
            }
            var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-6230)) ? (min((((/* implicit */unsigned long long int) ((short) arr_11 [0] [0]))), (arr_92 [i_19 - 1] [i_19 - 1] [i_18] [i_18]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (arr_3 [i_18] [i_19 - 2])))) : (((((/* implicit */_Bool) arr_51 [i_19] [i_18] [i_18] [i_18])) ? (-6741324654497491142LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37380)))))))))))));
            var_53 = arr_3 [i_18] [i_19];
            var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((-139649402), (((/* implicit */int) arr_55 [i_19] [i_19] [i_19 + 1] [i_19 - 3] [i_19]))))))))));
        }
        for (signed char i_31 = 3; i_31 < 14; i_31 += 3) /* same iter space */
        {
            var_55 = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-6199))))) ? (((/* implicit */long long int) arr_4 [16] [i_31 - 2] [16])) : (max((var_9), (((/* implicit */long long int) var_5)))))) : (((/* implicit */long long int) (-((~(((/* implicit */int) (_Bool)0)))))))));
            /* LoopSeq 1 */
            for (int i_32 = 0; i_32 < 16; i_32 += 3) 
            {
                var_56 = ((/* implicit */short) min((((unsigned long long int) 3648534060U)), (((/* implicit */unsigned long long int) arr_29 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))));
                var_57 = max((((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) (unsigned short)8192)) ^ (((/* implicit */int) (unsigned short)28140)))))), (((/* implicit */int) arr_80 [14LL])));
                var_58 = min((((/* implicit */long long int) (~(((/* implicit */int) arr_63 [3U] [i_31 + 2] [i_32]))))), (min((5807697810349082916LL), ((-9223372036854775807LL - 1LL)))));
            }
            var_59 += ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_13 [i_31] [i_31 + 1])) ? (var_10) : (((/* implicit */unsigned long long int) arr_28 [(unsigned short)6] [(unsigned short)6] [i_18] [i_31 - 2] [(unsigned short)6] [i_31 - 3] [i_31 + 1])))), (6372814996877295360ULL)));
        }
        var_60 = ((/* implicit */_Bool) var_1);
    }
    var_61 = ((/* implicit */unsigned long long int) min((var_61), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((18446744073709551614ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) << ((((+(var_5))) - (1188127247)))))) ? (((((((/* implicit */int) var_2)) + (((/* implicit */int) var_11)))) | (((((/* implicit */int) var_0)) + (((/* implicit */int) var_11)))))) : (((/* implicit */int) (short)-26279)))))));
}
