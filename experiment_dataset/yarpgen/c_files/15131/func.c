/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15131
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
    for (short i_0 = 2; i_0 < 6; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_0 [i_0 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63)))))) ? (min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 3]))) : (((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 4])))));
        arr_4 [i_0] = ((/* implicit */short) (+(3716259449U)));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 2) /* same iter space */
        {
            arr_7 [i_0 + 4] [i_1 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2110512670758778197LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL))))) : (3438840987U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_6 [i_0] [i_0])))))) : (3716259455U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) min(((short)19394), (((/* implicit */short) (unsigned char)74))));
                        arr_13 [i_3] [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((12344715084466963088ULL) & (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) ? ((+(var_7))) : (((/* implicit */long long int) ((/* implicit */int) (short)-4911)))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            var_11 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2]))) : (var_7)))) >= (4385908086910546880ULL))));
                            var_12 = ((/* implicit */unsigned short) var_8);
                        }
                    }
                } 
            } 
            arr_17 [i_0] = ((/* implicit */unsigned long long int) ((short) min((((var_8) ? (arr_14 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) (signed char)95)))));
        }
        for (unsigned long long int i_5 = 2; i_5 < 7; i_5 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) ((short) var_3))), ((+(var_7))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-1)) ? (4958261157969427577ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) == (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) arr_2 [i_5]))))))))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            arr_27 [i_8] [i_5] [i_6] [i_7] [i_6] = ((((/* implicit */_Bool) (short)-17470)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) : (arr_24 [i_0] [i_5 + 1] [i_0] [i_7] [i_8]));
                            arr_28 [(unsigned char)9] [i_0] [i_0] [(unsigned char)9] [i_8] [i_8] = ((/* implicit */short) min(((+(arr_8 [i_0 - 2] [i_5 + 1]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14060835986799004736ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))) : (3665286771180076716LL)))) ? (max((((/* implicit */unsigned long long int) -1160891194)), (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7673)) ? (((/* implicit */int) arr_20 [i_0] [i_5] [i_7] [i_8])) : (arr_1 [i_6]))))))));
                        }
                    } 
                } 
                arr_29 [(short)7] [i_5 + 2] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_23 [i_0] [i_5] [i_6] [i_0]))));
                var_14 = ((/* implicit */unsigned short) 16777215ULL);
            }
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_11 = 2; i_11 < 9; i_11 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_14 [i_0 + 1] [i_11 - 2] [i_9] [i_10] [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((arr_35 [i_0 + 4] [i_5] [i_5] [i_5] [i_10] [i_11]) + (((/* implicit */unsigned long long int) -5)))))) & (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_16 [i_11] [(short)2] [i_11 + 1] [i_11 - 1] [i_11] [i_11 - 1])), (2961439705U))))))));
                            var_16 *= ((/* implicit */signed char) arr_31 [i_0] [(unsigned char)1] [i_0] [i_10]);
                            arr_39 [i_0] [i_0] [i_0] [i_10] [i_5 - 1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0 - 1])))) % (min((((var_2) << (((((/* implicit */int) var_4)) - (25407))))), (((((/* implicit */_Bool) arr_34 [i_0 + 4] [i_0] [i_0] [i_0])) ? (2750961289U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                            arr_40 [i_0] [(unsigned short)3] [(unsigned short)3] [i_10] &= ((/* implicit */short) (((!(((/* implicit */_Bool) ((signed char) arr_11 [i_9] [i_10] [i_9] [i_5 + 1]))))) ? (((((/* implicit */int) arr_20 [i_11 - 1] [i_0 + 1] [i_11 - 1] [i_5 + 3])) + (1506946082))) : (((/* implicit */int) ((max((var_9), (274744894))) == ((+(((/* implicit */int) (signed char)-8)))))))));
                        }
                        for (unsigned short i_12 = 2; i_12 < 9; i_12 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) arr_21 [i_0] [i_12 - 2])), (arr_8 [i_0] [i_0 - 2])))));
                            var_18 = ((/* implicit */short) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) min((arr_15 [i_0 + 1] [i_10] [i_9] [i_10] [i_12 + 1] [i_5 + 3]), (arr_15 [i_0 - 2] [i_0 - 2] [i_9] [i_9] [i_12 - 2] [i_5 - 2]))))));
                            arr_45 [i_0] [i_5] [i_9] [i_5] [i_12] [i_12 - 1] [7ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_16 [i_0] [i_5] [0U] [i_0] [i_12] [i_0])))) & (max((((((/* implicit */_Bool) 4214006134647941287ULL)) ? (arr_19 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_5] [i_9] [i_9] [i_9] [i_5]))))), (((((/* implicit */_Bool) arr_30 [i_5 - 2] [i_5 - 2])) ? (arr_42 [i_0] [i_0] [i_9] [i_9] [i_10] [i_12]) : (arr_8 [i_5 + 3] [i_9])))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_13 = 2; i_13 < 9; i_13 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned char) arr_48 [i_0] [i_10] [i_13 - 1]);
                            arr_49 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_9] [i_10] [8LL])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (arr_33 [i_0 + 4] [i_0 - 1] [i_0 - 1] [i_0])));
                        }
                        for (unsigned short i_14 = 2; i_14 < 9; i_14 += 2) /* same iter space */
                        {
                            arr_52 [i_0] [1] [i_9] [i_10] [i_9] = ((/* implicit */long long int) arr_46 [i_9] [i_5] [5ULL]);
                            arr_53 [i_0] [(signed char)7] [(signed char)7] [i_10] [i_14] = ((/* implicit */unsigned short) arr_18 [i_0] [i_5] [i_5]);
                            arr_54 [i_0] [i_0] [i_9] [i_10] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_21 [i_0] [i_14]) + (arr_21 [i_0] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) 8426149478660985347ULL))) == (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63))))))))) : (((long long int) 1646516259071174017LL))));
                            var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) var_9)) : (((long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)62))))));
                        }
                        var_21 -= ((/* implicit */unsigned int) max((min((arr_24 [i_0] [i_0 - 2] [i_9] [i_9] [i_5]), (arr_26 [i_5] [i_0 + 2] [i_9]))), (arr_24 [i_0] [i_5] [i_9] [i_10] [i_0])));
                        var_22 = ((/* implicit */long long int) ((min(((~(((/* implicit */int) (unsigned char)14)))), (((/* implicit */int) arr_15 [i_9] [i_5] [i_9] [i_5 - 1] [i_5 - 2] [i_0 + 2])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            arr_57 [i_0 + 1] [i_5] [i_9] [i_10] [i_10] [i_5] [i_15] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_8 [i_0 - 2] [i_0 + 3]) : ((((_Bool)0) ? (17353363809923040706ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_9] [i_10] [i_15])))))))));
                            arr_58 [i_0] [i_5] [i_9] [i_10] [i_15] = ((arr_0 [i_0 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)245)) == (((/* implicit */int) (signed char)63)))))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                for (unsigned int i_17 = 3; i_17 < 9; i_17 += 2) 
                {
                    for (unsigned short i_18 = 1; i_18 < 6; i_18 += 3) 
                    {
                        {
                            arr_68 [i_18] [i_16] [i_16] [i_5] [i_0] = ((/* implicit */unsigned short) arr_42 [i_0 + 2] [i_0 + 2] [i_16] [i_16] [i_18] [i_16]);
                            var_23 = ((/* implicit */unsigned short) ((min((((/* implicit */int) (_Bool)1)), (arr_25 [i_5 + 2] [i_16] [i_16] [i_18 + 1] [i_18 + 4]))) + (((/* implicit */int) (signed char)54))));
                            arr_69 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) | (var_7)))) ? (((((/* implicit */_Bool) -29)) ? (arr_44 [i_0] [i_16] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18803))))) : ((~(938397648U)))))));
                            arr_70 [i_0] [i_17] [i_0] [i_5] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)26182);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_19 = 0; i_19 < 10; i_19 += 3) 
            {
                /* LoopNest 2 */
                for (int i_20 = 3; i_20 < 6; i_20 += 1) 
                {
                    for (unsigned int i_21 = 1; i_21 < 8; i_21 += 2) 
                    {
                        {
                            arr_77 [i_0 + 3] [i_5] [i_19] [i_20 + 4] [i_0 + 3] = (-(((((/* implicit */_Bool) (unsigned short)15095)) ? (arr_75 [i_20] [i_5] [i_5] [i_20] [i_21] [i_21]) : (((/* implicit */long long int) var_3)))));
                            arr_78 [i_0 - 1] [i_5] [i_5] [i_19] [i_5] [i_20 - 2] [i_19] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_21 [i_0] [i_0 + 1])) % (arr_8 [i_0] [i_0])));
                            var_24 = ((/* implicit */_Bool) ((unsigned long long int) (short)-28335));
                        }
                    } 
                } 
                arr_79 [i_19] [i_5] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_23 [i_0 - 1] [i_0 + 4] [i_0] [i_0 + 3]))));
            }
            /* vectorizable */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                arr_82 [i_5] [i_5] [i_0] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */long long int) arr_33 [i_0] [i_0] [i_5 + 3] [i_0])) | (var_7))));
                /* LoopSeq 3 */
                for (unsigned short i_23 = 3; i_23 < 9; i_23 += 3) 
                {
                    arr_85 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) arr_30 [i_0] [i_0 - 1]));
                    arr_86 [i_0] [i_5] [i_22] [i_23] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_5 + 3])) && (((/* implicit */_Bool) 13ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [1ULL] [1ULL]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0] [i_23] [i_22] [i_23])))))));
                    arr_87 [i_0] [i_0 + 2] [i_22] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))) + (-3691762825044523227LL))) % (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)29)))))));
                }
                for (int i_24 = 0; i_24 < 10; i_24 += 3) 
                {
                    arr_90 [i_0] [i_5] [i_22] [i_24] = ((/* implicit */unsigned int) (_Bool)1);
                    arr_91 [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1333010076U)) ? (((/* implicit */unsigned long long int) -1055494076)) : (7187973364493393801ULL)));
                }
                for (int i_25 = 2; i_25 < 9; i_25 += 3) 
                {
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (((18446744073709551615ULL) % (((/* implicit */unsigned long long int) arr_11 [i_0 + 1] [i_0 + 1] [5ULL] [i_0 + 1]))))));
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)22)) : (-2147483624))))));
                    arr_94 [i_0 + 1] [i_5 + 1] [i_5 + 1] [i_25] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_0] [i_0] [i_0 + 4]))) == ((+(4294967295U)))));
                }
                /* LoopNest 2 */
                for (unsigned short i_26 = 1; i_26 < 8; i_26 += 2) 
                {
                    for (unsigned long long int i_27 = 0; i_27 < 10; i_27 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 2097151U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 10669885642911854245ULL))))) : (((/* implicit */int) (unsigned short)42540))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_95 [i_0] [i_5] [i_5] [i_22] [i_26] [i_0])) & (((((/* implicit */_Bool) var_0)) ? (arr_24 [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                        }
                    } 
                } 
            }
        }
        for (short i_28 = 0; i_28 < 10; i_28 += 3) 
        {
            arr_102 [i_0] [i_28] [6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(arr_95 [i_28] [i_0 + 3] [i_28] [i_0] [i_0] [i_0])))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_95 [i_0] [i_0 + 3] [i_0] [i_0] [9] [i_0])) : (arr_5 [i_0] [i_0 + 3])))));
            arr_103 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_0 - 1] [i_28]))))), (((((/* implicit */int) arr_36 [i_0 - 1] [i_0 - 1])) % (((/* implicit */int) (signed char)12))))));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_0] [i_0 + 3] [i_0] [i_0 + 3])) ? (((((/* implicit */_Bool) arr_74 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) arr_60 [i_0 + 1] [i_0 + 1])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (2938871197U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_66 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_28] [i_0] [i_28]))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_28] [i_28] [i_28] [i_28] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)50587)) : (((/* implicit */int) arr_2 [i_0]))))) + (((((/* implicit */_Bool) 1536263014)) ? (((/* implicit */unsigned long long int) 2147483647)) : (17617422885273290841ULL)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_29 = 0; i_29 < 10; i_29 += 2) 
            {
                for (unsigned char i_30 = 0; i_30 < 10; i_30 += 3) 
                {
                    for (unsigned short i_31 = 0; i_31 < 10; i_31 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) min(((unsigned char)249), (((/* implicit */unsigned char) var_8))))))) & (((/* implicit */int) var_4))));
                            arr_112 [i_0] [i_28] [i_28] [i_0] [i_30] = ((/* implicit */unsigned long long int) arr_92 [i_0] [i_28] [i_0] [i_30] [i_31]);
                        }
                    } 
                } 
            } 
        }
        arr_113 [i_0] = ((/* implicit */signed char) (short)-9999);
    }
    /* LoopSeq 3 */
    for (short i_32 = 3; i_32 < 22; i_32 += 2) 
    {
        /* LoopNest 2 */
        for (int i_33 = 1; i_33 < 23; i_33 += 1) 
        {
            for (long long int i_34 = 2; i_34 < 22; i_34 += 3) 
            {
                {
                    arr_122 [i_32] [i_33] [i_34] [i_34] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)10014))))));
                    var_31 = ((/* implicit */unsigned short) (signed char)81);
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned long long int) (+(arr_118 [i_32] [i_32])));
    }
    for (unsigned short i_35 = 0; i_35 < 14; i_35 += 2) 
    {
        arr_125 [i_35] [13LL] &= ((/* implicit */unsigned int) max(((_Bool)1), ((((-(((/* implicit */int) (unsigned char)249)))) >= (((/* implicit */int) arr_124 [i_35]))))));
        arr_126 [i_35] [i_35] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_124 [i_35]), (arr_124 [i_35]))))));
    }
    for (unsigned char i_36 = 1; i_36 < 13; i_36 += 3) 
    {
        arr_129 [i_36] [i_36] = ((((/* implicit */_Bool) (+((+(((/* implicit */int) (short)27665))))))) ? (((((/* implicit */int) (short)2060)) - (((/* implicit */int) (unsigned char)241)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9991))) : (arr_120 [i_36] [i_36] [i_36])))) ? (((/* implicit */int) max((((/* implicit */short) var_8)), ((short)32767)))) : (((/* implicit */int) max(((short)27054), ((short)-32762)))))));
        arr_130 [i_36] [i_36] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)106)))));
        arr_131 [i_36] = ((/* implicit */long long int) (~(min((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-105)))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) var_1))))))));
        var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_128 [i_36 + 2]), (((/* implicit */short) ((unsigned char) var_1))))))));
    }
}
