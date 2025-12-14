/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16382
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)-2593)) ? (((/* implicit */int) arr_1 [i_1])) : (arr_2 [8ULL] [8ULL])))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) var_18);
            arr_6 [i_0] = ((/* implicit */unsigned long long int) (-(18U)));
        }
        arr_7 [i_0] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned int) (short)-2611)), (4294967291U)))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_21 ^= ((/* implicit */unsigned short) arr_11 [i_2] [1] [(short)7]);
            var_22 = ((/* implicit */unsigned short) max((22U), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)2601))) >= (8904949430314477190LL)))))))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((long long int) min((((/* implicit */short) arr_10 [i_3])), ((short)19008)))))));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            arr_15 [7ULL] [7ULL] [15] = (-(((/* implicit */int) (short)2610)));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_2] [i_4] [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_2])))))));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        {
                            arr_24 [i_2] [i_2] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_7]))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) arr_23 [i_2] [i_4] [i_4] [i_6] [i_7])) : (((/* implicit */int) arr_23 [i_2] [i_4] [i_4] [i_6] [i_4]))));
                            arr_25 [i_6] [i_6] [i_5] [i_6] [12] |= ((/* implicit */unsigned long long int) arr_1 [(signed char)5]);
                            arr_26 [0] [0] [i_5] [i_6] [(_Bool)0] [0] |= ((/* implicit */int) (!(((/* implicit */_Bool) 4889086589182542253LL))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19008)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
        {
            arr_31 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_11 [i_2] [(_Bool)1] [i_2])), ((+(((/* implicit */int) (unsigned char)176))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)9690))))) : (((unsigned int) min((((/* implicit */int) arr_0 [i_8])), (arr_28 [i_8] [(signed char)15]))))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (long long int i_10 = 1; i_10 < 15; i_10 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            arr_39 [i_10] = ((/* implicit */long long int) min((845717439U), (((/* implicit */unsigned int) (unsigned short)55846))));
                            arr_40 [i_10] = ((/* implicit */unsigned int) max(((~(var_13))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_10 + 1] [i_10 - 1] [i_11] [i_10 + 1] [i_10 + 1])) ? (-607143429) : (((/* implicit */int) (short)-19011)))))));
                            var_27 += max((17U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (short)2610))))));
                            arr_43 [i_8] [i_10] [i_8] [i_8] [i_10] [i_8] [(unsigned short)0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-2609))));
                            var_29 |= ((/* implicit */unsigned char) var_15);
                            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) var_15))));
                            arr_44 [i_10] [i_8] [i_8] [i_8] [(unsigned short)10] [i_8] [i_8] = ((/* implicit */unsigned long long int) min(((unsigned short)65508), ((unsigned short)9683)));
                        }
                        var_31 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) (short)2625)) : (((/* implicit */int) (unsigned short)3)))) - (2596)))));
                        arr_45 [i_2] [i_8] [i_10] [i_10 - 1] = ((/* implicit */_Bool) max(((-(var_4))), (((/* implicit */unsigned long long int) max((arr_42 [i_9] [i_10 - 1] [i_9] [i_10] [i_10]), (((/* implicit */short) arr_16 [(signed char)2] [i_10 - 1] [i_10 - 1] [i_10])))))));
                        /* LoopSeq 1 */
                        for (int i_13 = 0; i_13 < 16; i_13 += 4) 
                        {
                            arr_50 [i_10] [i_10] [i_9] [i_10] [i_13] = ((/* implicit */signed char) 16383LL);
                            var_32 |= ((/* implicit */long long int) arr_8 [(unsigned char)4]);
                        }
                        arr_51 [i_2] [(signed char)15] [i_10] [(unsigned short)11] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_42 [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_9] [i_8])) : (((/* implicit */int) arr_23 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10]))))), (((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) arr_21 [i_2] [i_2] [i_9] [i_10]))))) ? (var_11) : (((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned int) arr_36 [i_2] [i_2] [i_9] [i_10] [i_10])))))))));
                    }
                } 
            } 
        }
        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
        {
            arr_54 [i_2] = ((/* implicit */long long int) var_12);
            /* LoopNest 2 */
            for (short i_15 = 0; i_15 < 16; i_15 += 2) 
            {
                for (unsigned char i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    {
                        arr_61 [i_15] [i_15] [i_15] [i_15] = (~((~((-(((/* implicit */int) var_1)))))));
                        var_33 = ((/* implicit */long long int) arr_38 [i_16] [i_16]);
                    }
                } 
            } 
        }
        arr_62 [9ULL] [i_2] = max(((-(max((var_14), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) var_0)));
    }
    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_8))))), (var_13)))) || (var_17))))));
    /* LoopSeq 1 */
    for (signed char i_17 = 0; i_17 < 12; i_17 += 4) 
    {
        arr_65 [i_17] = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_17]))))), (((unsigned int) (_Bool)1)));
        /* LoopSeq 4 */
        for (int i_18 = 3; i_18 < 8; i_18 += 2) 
        {
            var_35 += ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) == ((-(arr_47 [i_17] [i_17] [6LL] [13U] [i_18 + 2]))));
            var_36 += ((/* implicit */int) arr_42 [i_18] [i_18] [i_18 + 2] [i_18 - 2] [i_18 + 2]);
        }
        for (short i_19 = 0; i_19 < 12; i_19 += 2) /* same iter space */
        {
            arr_70 [i_17] &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_36 [i_17] [i_19] [i_19] [i_17] [i_17]), (((/* implicit */unsigned short) var_1))))) ? ((~(var_16))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) var_6)))))));
            arr_71 [i_17] [i_17] [7U] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (arr_38 [i_17] [i_19]) : (arr_38 [i_19] [i_19]))), (((/* implicit */unsigned long long int) ((long long int) arr_38 [i_19] [i_19])))));
            arr_72 [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65508))))) ? (((/* implicit */int) min(((unsigned short)17), ((unsigned short)15)))) : ((((+(((/* implicit */int) var_6)))) + (((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) arr_37 [i_17] [i_17] [i_17] [i_17] [i_19] [i_17] [i_19])))))))));
            arr_73 [i_17] [i_19] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) (short)-2609)) : (((/* implicit */int) (short)-2626)))), (((/* implicit */int) var_15))));
        }
        for (short i_20 = 0; i_20 < 12; i_20 += 2) /* same iter space */
        {
            arr_76 [i_17] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) ((16383LL) >= (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
            var_37 &= ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) (unsigned short)17)))));
        }
        for (short i_21 = 0; i_21 < 12; i_21 += 2) /* same iter space */
        {
            arr_79 [5U] = ((/* implicit */int) (_Bool)1);
            /* LoopSeq 2 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (_Bool)1))));
                var_39 = ((/* implicit */short) var_5);
            }
            for (unsigned char i_23 = 1; i_23 < 11; i_23 += 1) 
            {
                var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) arr_33 [i_17] [i_17] [i_17] [i_21]))))) ? (((/* implicit */int) ((var_16) < (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_17] [i_21] [i_23] [i_23])))))) : ((-(((/* implicit */int) var_1))))));
                var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_6))))) ? ((+(var_3))) : (((/* implicit */int) (!(((/* implicit */_Bool) 35U)))))))) ? (((/* implicit */unsigned long long int) var_3)) : (18446744073709551615ULL))))));
                arr_86 [i_17] [i_21] [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8386560U)) ? (((/* implicit */int) (short)-2611)) : (-2147483641)));
                var_42 = ((/* implicit */int) var_4);
            }
            /* LoopNest 2 */
            for (short i_24 = 0; i_24 < 12; i_24 += 4) 
            {
                for (signed char i_25 = 1; i_25 < 11; i_25 += 3) 
                {
                    {
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_17] [i_17] [i_17])))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_26 = 1; i_26 < 10; i_26 += 1) 
                        {
                            var_44 = ((/* implicit */int) var_12);
                            var_45 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-441801770560609900LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_17]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_21])) && (((/* implicit */_Bool) arr_0 [i_17])))))));
                        }
                        for (signed char i_27 = 1; i_27 < 9; i_27 += 2) 
                        {
                            arr_99 [i_27] = ((/* implicit */_Bool) arr_75 [i_17]);
                            arr_100 [i_17] [i_21] [i_27] [i_25] [i_27] [i_27] = ((/* implicit */unsigned int) var_4);
                        }
                        arr_101 [i_17] [i_25] [i_25] [i_25 + 1] = ((/* implicit */unsigned int) (-((+(((((/* implicit */_Bool) 2933420735U)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                        arr_102 [i_25 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned int i_28 = 3; i_28 < 9; i_28 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_29 = 2; i_29 < 10; i_29 += 1) 
                {
                    var_46 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-124)) ? (4U) : (42U)))));
                    arr_109 [i_17] [i_21] [3LL] [i_29] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_93 [i_29 - 1] [i_29 - 2] [i_28 + 3] [i_28 - 2]), (arr_93 [i_29 - 1] [i_29 - 2] [i_28 - 2] [i_28 - 2]))))));
                    arr_110 [(unsigned char)10] [i_21] [(unsigned short)6] [i_29] [i_28] [i_21] &= ((/* implicit */int) (!((!((!(((/* implicit */_Bool) arr_85 [i_17] [i_29] [i_17] [i_29]))))))));
                    var_47 = ((/* implicit */signed char) (((-(69789989))) >= (((/* implicit */int) ((var_17) && (((/* implicit */_Bool) arr_108 [i_28 + 1] [i_28 - 1] [i_29 + 2] [i_29 + 1])))))));
                }
                arr_111 [i_17] [i_21] [i_28 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((arr_98 [i_17] [(unsigned short)4] [i_21] [i_21] [i_28 + 2] [(unsigned short)4]) ? (arr_49 [i_17] [i_21] [i_21] [i_28 - 3] [i_28] [i_28]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_30 [i_17] [(unsigned char)14]), (((/* implicit */long long int) (unsigned char)244))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))) : ((-(4294967264U)))));
                var_48 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 18275977U))))), (14998302U)))) ? ((-(1272039615))) : (((arr_98 [i_21] [i_21] [i_28 - 2] [i_28] [i_28 + 2] [i_28]) ? (((/* implicit */int) arr_98 [i_17] [i_21] [i_28 - 3] [i_28] [i_28 + 1] [i_28])) : (((/* implicit */int) arr_34 [i_28 + 1] [i_28 - 2] [i_28 + 3] [i_21] [i_28 - 3]))))));
            }
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                arr_114 [i_17] [i_21] [i_21] = ((/* implicit */int) min((max((var_15), (var_1))), ((!(((/* implicit */_Bool) ((unsigned char) var_2)))))));
                arr_115 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */signed char) (!((_Bool)1)));
                /* LoopSeq 1 */
                for (unsigned char i_31 = 0; i_31 < 12; i_31 += 2) 
                {
                    arr_120 [i_17] [i_21] |= ((/* implicit */short) arr_52 [i_31]);
                    arr_121 [i_30] [i_17] = ((/* implicit */short) (-((-(-2875405672181694905LL)))));
                }
            }
            for (unsigned char i_32 = 0; i_32 < 12; i_32 += 4) 
            {
                var_49 = ((/* implicit */signed char) (-(((/* implicit */int) arr_66 [i_17] [i_32] [i_32]))));
                arr_124 [i_32] [0U] [i_17] [i_17] = ((/* implicit */short) min((min((min((arr_91 [i_17] [i_17] [(_Bool)1] [i_17] [i_21] [i_17]), (((/* implicit */unsigned long long int) (unsigned char)0)))), (((/* implicit */unsigned long long int) (unsigned char)252)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_56 [i_17] [2LL]))) ? ((-(-2875405672181694922LL))) : (((/* implicit */long long int) var_16)))))));
                var_50 *= ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)59))))));
            }
            for (unsigned int i_33 = 0; i_33 < 12; i_33 += 4) 
            {
                var_51 = ((/* implicit */_Bool) max((var_51), ((!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-22)))))))));
                /* LoopNest 2 */
                for (long long int i_34 = 0; i_34 < 12; i_34 += 4) 
                {
                    for (int i_35 = 0; i_35 < 12; i_35 += 4) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_15))))));
                            var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_18)))))));
                            var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_93 [i_21] [i_33] [i_34] [2]))))), (arr_82 [i_33] [i_34] [i_33] [i_17])))), ((((+(18446744073709551587ULL))) & (var_14))))))));
                            var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) ((_Bool) max((arr_11 [i_17] [i_21] [i_35]), (arr_11 [i_17] [i_21] [i_35])))))));
                        }
                    } 
                } 
            }
        }
    }
}
