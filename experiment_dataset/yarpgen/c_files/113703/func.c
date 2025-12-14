/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113703
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_15 [i_2] = ((/* implicit */long long int) ((unsigned int) ((_Bool) arr_12 [i_4] [i_4] [i_1] [i_1] [i_2 + 1])));
                                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_8 [i_2 - 3]) : (arr_8 [i_2 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [(short)2] [i_2] [i_2 - 3] [i_2] [4])) && (((/* implicit */_Bool) arr_5 [i_1]))))))))) : (max((((/* implicit */unsigned int) ((int) var_12))), (min((((/* implicit */unsigned int) var_4)), (arr_10 [i_0] [i_0] [i_2] [i_3] [i_3] [i_2])))))));
                                arr_16 [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3]))));
                            }
                        } 
                    } 
                    var_14 -= ((/* implicit */short) max((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_2])) ? (17434972284683074694ULL) : (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_0))))))), (max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_6))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (arr_9 [(unsigned char)4]) : (((/* implicit */unsigned long long int) arr_10 [i_1] [(short)10] [(short)6] [i_1] [i_0] [i_0]))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        var_15 -= ((/* implicit */long long int) max((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [15U]))) : (arr_3 [i_0]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_2 [i_1])))))), (((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_1])), (var_8))))) : (777167060U)))));
                        var_16 = ((((/* implicit */_Bool) max((arr_11 [i_0] [i_2 + 2] [i_2] [i_5]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) var_5)) : (min((((/* implicit */unsigned long long int) ((long long int) arr_4 [i_1] [i_2 - 3]))), (var_1))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        var_17 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)-111)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_2 + 2] [i_2] [i_2 + 1] [i_2 - 3])) || (((/* implicit */_Bool) arr_17 [i_2] [i_2 + 1] [i_2 + 1]))))) : (((/* implicit */int) var_11))));
                        arr_23 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (signed char)-6))))) ? (((((/* implicit */_Bool) max((arr_5 [i_2]), (((/* implicit */signed char) var_10))))) ? (max((var_6), (((/* implicit */unsigned long long int) -4226344072071319070LL)))) : (((var_9) | (arr_22 [i_0] [i_1] [i_2] [(_Bool)1]))))) : ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (4226344072071319056LL)))) : (var_6)))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            arr_31 [2] [2] [0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7]))) : (4226344072071319058LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_24 [i_7])))))));
            arr_32 [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_5)) | (arr_19 [i_7] [i_7] [i_8] [10U])))) != (max((var_6), (((/* implicit */unsigned long long int) var_3)))))) ? (((((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_7])) ? (((/* implicit */int) arr_17 [11] [i_8] [(_Bool)1])) : (((/* implicit */int) arr_17 [i_7] [i_8] [i_7])))) : (((/* implicit */int) ((((unsigned long long int) arr_11 [i_7] [i_7] [i_7] [i_7])) > (((/* implicit */unsigned long long int) max((arr_30 [i_7] [4U] [i_7]), (((/* implicit */unsigned int) arr_12 [i_7] [i_7] [i_7] [(unsigned char)13] [i_8]))))))))));
            arr_33 [i_7] [2ULL] = ((/* implicit */unsigned char) 1376225695334244656LL);
        }
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            arr_36 [i_7] [i_9] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((arr_18 [i_7] [i_9] [i_9] [(unsigned short)8] [i_9]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_3 [i_9])))) ? (max((((/* implicit */long long int) var_5)), (arr_20 [i_7] [i_9] [i_9] [i_7]))) : (((long long int) var_1)))));
            var_18 = ((/* implicit */unsigned long long int) max((var_7), (((/* implicit */short) var_8))));
        }
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            arr_39 [i_7] [i_7] = ((/* implicit */unsigned char) max((max((var_9), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) + (2147483647))) << (((var_6) - (1618555059150250659ULL)))))))), (((/* implicit */unsigned long long int) -179416633))));
            arr_40 [6U] = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4226344072071319078LL)))) ^ (((((/* implicit */_Bool) var_7)) ? (15753198432181571401ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8769)))))))));
            var_19 -= ((/* implicit */short) arr_7 [i_7]);
        }
        arr_41 [i_7] = ((/* implicit */unsigned int) (((+(min((((/* implicit */int) var_11)), (499438649))))) <= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_7] [i_7] [i_7] [i_7] [(unsigned short)16]))))));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            for (int i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                for (int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_47 [i_11] [i_12] [i_12])) & (((/* implicit */int) arr_47 [i_13] [i_12] [i_13]))));
                        arr_52 [i_11] [5LL] [i_12] [i_13] [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                    }
                } 
            } 
        } 
        arr_53 [i_11] = ((/* implicit */signed char) -4226344072071319059LL);
        /* LoopNest 3 */
        for (unsigned short i_15 = 4; i_15 < 12; i_15 += 4) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                for (unsigned short i_17 = 0; i_17 < 16; i_17 += 3) 
                {
                    {
                        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                        var_22 = ((/* implicit */short) (-(((var_1) + (var_1)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 16; i_18 += 3) 
        {
            for (signed char i_19 = 0; i_19 < 16; i_19 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 3) 
                    {
                        for (unsigned long long int i_21 = 1; i_21 < 14; i_21 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_21 - 1] [i_20] [i_19] [i_18] [i_11])) ? (((/* implicit */unsigned int) 258191629)) : (arr_58 [i_21 + 1] [i_21 - 1] [i_21])));
                                arr_71 [i_11] [i_18] [i_18] [i_20] [6ULL] = var_9;
                                arr_72 [i_11] [i_11] [i_18] [i_11] [i_11] = ((/* implicit */long long int) arr_67 [i_11] [i_21 + 2] [i_19] [i_18] [i_21]);
                            }
                        } 
                    } 
                    arr_73 [i_18] [i_18] = ((/* implicit */long long int) ((((unsigned long long int) arr_70 [i_11] [1LL] [i_18] [i_18] [i_18] [i_18] [(unsigned short)0])) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_19])))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_11] [i_18] [6U] [i_19] [i_19])) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) arr_47 [i_19] [i_18] [i_11]))))) ? ((~(((/* implicit */int) (signed char)-92)))) : (((/* implicit */int) arr_55 [i_11] [i_18] [i_19]))));
                }
            } 
        } 
    }
    for (long long int i_22 = 0; i_22 < 24; i_22 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) (signed char)48)), (max((-4226344072071319078LL), (4226344072071319077LL)))))));
        arr_77 [i_22] [i_22] = arr_74 [i_22] [i_22];
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 24; i_23 += 1) 
        {
            for (unsigned char i_24 = 0; i_24 < 24; i_24 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_25 = 3; i_25 < 23; i_25 += 1) /* same iter space */
                    {
                        var_26 = max((max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_84 [i_22] [i_22] [i_22] [12U]))), (((/* implicit */unsigned long long int) (~(var_5)))))), (((/* implicit */unsigned long long int) var_0)));
                        arr_85 [i_25] [i_23] [i_23] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_80 [i_23])) ? (((/* implicit */unsigned long long int) arr_83 [i_23] [i_23] [i_23] [i_25])) : (var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_83 [i_23] [i_25] [i_25 - 1] [i_25 - 1])))))) : (min((max((4226344072071319078LL), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_11)))))))));
                        arr_86 [i_22] [i_22] [(unsigned char)2] [0U] |= ((/* implicit */signed char) max((var_9), (((((/* implicit */_Bool) arr_83 [18] [i_22] [i_22] [18])) ? (var_6) : (((/* implicit */unsigned long long int) arr_79 [(unsigned char)4] [i_25 - 3] [(unsigned char)4]))))));
                        var_27 = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((int) -4226344072071319078LL))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_76 [i_23])))))))) < (((((/* implicit */_Bool) arr_75 [i_25 - 3])) ? (4226344072071319051LL) : (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_25 - 3]))))));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), ((~(4226344072071319092LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_84 [i_22] [i_23] [i_24] [3U]) : (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_82 [i_25]))))) : (((int) (unsigned char)174))))) : (((((((/* implicit */_Bool) arr_74 [(signed char)9] [(signed char)9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_81 [i_22] [(short)0] [i_22]))) % (((/* implicit */unsigned long long int) max((arr_78 [(short)22]), (((/* implicit */int) var_4)))))))))));
                    }
                    for (unsigned int i_26 = 3; i_26 < 23; i_26 += 1) /* same iter space */
                    {
                        var_29 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1388)) << (((arr_87 [i_26 - 3] [i_26 - 1] [i_26 - 1] [i_26 - 3]) - (3914135530U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_84 [i_22] [i_22] [i_22] [i_26 - 3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)205), (var_3))))))))) : (((((/* implicit */unsigned long long int) -1421327809)) * (arr_84 [i_22] [i_23] [i_26 - 2] [i_22])))));
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) max((arr_87 [i_26 - 2] [i_26 - 2] [i_26] [i_26 - 2]), (var_2)))))))));
                    }
                    for (unsigned int i_27 = 3; i_27 < 23; i_27 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) min((arr_88 [i_22] [i_22] [i_23] [i_23] [i_27]), ((-(arr_83 [14U] [i_27] [i_27] [i_27]))))))));
                        var_32 = ((/* implicit */unsigned long long int) -4226344072071319048LL);
                    }
                    for (signed char i_28 = 3; i_28 < 23; i_28 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((4226344072071319069LL) ^ (((((/* implicit */_Bool) arr_81 [i_28] [18] [i_22])) ? (((((/* implicit */long long int) 1512410599U)) / (4226344072071319052LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)16))))))))));
                        var_34 = ((unsigned long long int) (short)32765);
                    }
                    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) arr_88 [(_Bool)1] [i_22] [(_Bool)1] [(signed char)7] [i_24]))));
                }
            } 
        } 
        arr_97 [(unsigned char)8] [i_22] = ((/* implicit */unsigned short) var_4);
    }
    for (unsigned long long int i_29 = 0; i_29 < 24; i_29 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_30 = 0; i_30 < 24; i_30 += 3) 
        {
            for (long long int i_31 = 2; i_31 < 23; i_31 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_32 = 0; i_32 < 24; i_32 += 3) 
                    {
                        for (unsigned long long int i_33 = 0; i_33 < 24; i_33 += 3) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_93 [i_31] [i_31 - 2] [i_31] [i_32] [i_32])) ? (arr_93 [i_30] [i_31 - 2] [i_31 - 2] [i_31] [i_32]) : (arr_93 [i_31 - 2] [i_31 - 2] [17U] [i_33] [i_33]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_93 [i_30] [i_31 - 1] [i_32] [i_33] [i_32])) && (((/* implicit */_Bool) var_3)))))));
                                arr_113 [i_31] [i_30] [i_31 + 1] [i_32] [i_33] [i_33] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_87 [i_31 - 1] [i_31 - 2] [i_31 - 2] [i_31 - 2]) % (arr_87 [i_31 + 1] [i_31 + 1] [i_31 + 1] [i_31 + 1])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_34 = 1; i_34 < 22; i_34 += 4) 
                    {
                        for (short i_35 = 0; i_35 < 24; i_35 += 4) 
                        {
                            {
                                var_37 = (i_30 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_105 [i_31 - 2] [i_31 + 1] [i_30] [i_34 + 1])) ? (((/* implicit */int) arr_105 [i_30] [i_31 - 1] [i_30] [i_34 + 2])) : (((/* implicit */int) arr_105 [i_31] [i_31 - 1] [i_30] [i_34 + 1])))) << (((((((/* implicit */_Bool) arr_105 [3LL] [i_31 - 2] [i_30] [i_34 + 2])) ? (((/* implicit */int) arr_105 [i_31] [i_31 - 2] [i_30] [i_34 + 1])) : (((/* implicit */int) var_12)))) - (236)))))) : (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_105 [i_31 - 2] [i_31 + 1] [i_30] [i_34 + 1])) ? (((/* implicit */int) arr_105 [i_30] [i_31 - 1] [i_30] [i_34 + 2])) : (((/* implicit */int) arr_105 [i_31] [i_31 - 1] [i_30] [i_34 + 1])))) << (((((((((/* implicit */_Bool) arr_105 [3LL] [i_31 - 2] [i_30] [i_34 + 2])) ? (((/* implicit */int) arr_105 [i_31] [i_31 - 2] [i_30] [i_34 + 1])) : (((/* implicit */int) var_12)))) - (236))) + (112))))));
                                var_38 = (i_30 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) arr_101 [i_30])) - (209)))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_101 [i_30])) & (((/* implicit */int) arr_101 [i_30])))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((((((/* implicit */int) arr_101 [i_30])) - (209))) + (125))) - (6)))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_101 [i_30])) & (((/* implicit */int) arr_101 [i_30]))))))));
                            }
                        } 
                    } 
                    arr_119 [i_29] [i_29] [i_30] [i_30] = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) arr_84 [11ULL] [11ULL] [i_30] [11ULL])) ? (((/* implicit */int) arr_109 [i_29] [i_30] [i_31] [i_30] [i_30])) : (((/* implicit */int) arr_107 [i_29] [i_29])))), (((/* implicit */int) arr_101 [i_30])))), (((/* implicit */int) arr_75 [(_Bool)1]))));
                    var_39 = ((/* implicit */long long int) ((arr_88 [i_29] [17U] [i_29] [i_29] [11]) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_116 [i_31 - 1] [i_30] [i_30] [i_30] [i_29])) - (arr_118 [(unsigned char)17] [i_30] [i_31 + 1] [i_31 - 2]))))));
                }
            } 
        } 
        var_40 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_101 [10LL])) : (((/* implicit */int) (_Bool)1)));
    }
}
