/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115027
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((1ULL), (((/* implicit */unsigned long long int) 1327099632)))))));
            var_21 -= ((/* implicit */short) arr_3 [i_0]);
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                for (signed char i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (short)-30463);
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_13))))));
                        var_22 = ((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)28211)) : (((/* implicit */int) (signed char)-113)))));
                        var_23 = ((/* implicit */int) 4294967295U);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                arr_18 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) -656378604)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (276639942958744963ULL));
                arr_19 [i_1] [i_0] [i_4 - 1] [i_0 + 1] = ((/* implicit */short) arr_11 [i_0] [i_4 - 1]);
                arr_20 [(short)9] [i_0 + 1] [i_0] [i_4 - 1] = ((-1937027244) == (((/* implicit */int) (unsigned char)103)));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 2; i_5 < 15; i_5 += 3) 
                {
                    arr_25 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [12U] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((var_17) != (((/* implicit */int) ((((/* implicit */int) (signed char)-84)) != (-143161301)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        arr_29 [i_0] [17U] [i_4] [i_0] [i_5] [(unsigned short)4] = ((/* implicit */signed char) (((((_Bool)0) ? (2147483647) : (((/* implicit */int) var_9)))) != (((/* implicit */int) var_1))));
                        arr_30 [i_0] [14ULL] [(signed char)15] = arr_22 [i_5] [i_5 - 2] [i_6] [i_0] [i_6];
                        var_24 *= ((/* implicit */long long int) (+(1401456835337383496ULL)));
                    }
                    var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_23 [0ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))) : (var_0))), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (((-(403229016U))) != (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), ((short)(-32767 - 1)))))))))) : (((((/* implicit */long long int) (+(((/* implicit */int) (signed char)50))))) | (var_18)))));
                    arr_31 [i_0 - 1] [(_Bool)1] [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4401))) : (1522009814U)));
                }
                for (unsigned short i_7 = 1; i_7 < 16; i_7 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 17; i_8 += 3) 
                    {
                        arr_37 [i_8 + 1] [8LL] [i_4] [i_4 - 1] [8LL] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1559953700827889077LL)) ? (2147483644) : (((/* implicit */int) (_Bool)1))))) & (var_5)));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_24 [i_0 + 1] [7] [i_0] [i_7 + 3])));
                        arr_38 [i_8] [i_8] [i_0] [i_8 - 2] [(signed char)16] = ((/* implicit */unsigned long long int) ((short) arr_23 [i_0]));
                    }
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
                    {
                        arr_41 [(signed char)6] [i_1] [i_4] [i_0] [(signed char)4] = ((/* implicit */short) (unsigned char)213);
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max((-388266480), (((/* implicit */int) (signed char)-1)))))));
                        arr_42 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) var_8);
                    }
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
                    {
                        arr_45 [i_0 + 1] [i_1] [(unsigned short)4] [i_7 + 1] [i_0] [i_10] = ((/* implicit */int) (+(4294967291U)));
                        arr_46 [(short)7] [i_0] [i_4] [(unsigned char)15] [i_4] [i_4] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63388))) : (13969735031775295975ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 624583213U)) ? (2422131586U) : (((/* implicit */unsigned int) 1470733116))))));
                        var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    }
                    arr_47 [i_0] [(unsigned char)5] [i_4 - 1] [i_1] [(short)18] [i_0] = arr_36 [i_7] [(unsigned char)10] [i_0] [i_0] [(signed char)6] [i_0];
                }
            }
            for (signed char i_11 = 4; i_11 < 18; i_11 += 3) 
            {
                var_29 *= ((/* implicit */unsigned long long int) var_7);
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 2; i_12 < 18; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 19; i_13 += 3) 
                    {
                        {
                            var_30 -= ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((-(max((((/* implicit */unsigned int) (_Bool)0)), (var_4)))))));
                            var_31 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (unsigned char)121)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)34907)) <= (((/* implicit */int) (signed char)91)))))));
                        }
                    } 
                } 
            }
            arr_56 [i_0 + 1] [i_0] [i_0 - 1] = ((/* implicit */short) min((((long long int) arr_2 [(_Bool)1])), (((/* implicit */long long int) var_8))));
        }
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (short)-14738))))));
    }
    /* vectorizable */
    for (short i_14 = 2; i_14 < 10; i_14 += 3) 
    {
        arr_59 [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)65524))));
        arr_60 [(_Bool)1] &= ((/* implicit */unsigned int) arr_44 [6U] [i_14 - 2] [i_14 - 1] [18LL] [i_14] [i_14] [i_14 + 1]);
    }
    var_33 = ((/* implicit */_Bool) var_18);
    /* LoopNest 2 */
    for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
    {
        for (signed char i_16 = 0; i_16 < 21; i_16 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_17 = 3; i_17 < 19; i_17 += 3) 
                {
                    for (unsigned long long int i_18 = 3; i_18 < 17; i_18 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_19 = 4; i_19 < 18; i_19 += 3) 
                            {
                                arr_75 [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) -1891807186);
                                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) min((((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) (signed char)-92)))), ((_Bool)0)))), (min((((/* implicit */unsigned long long int) arr_68 [i_19 + 1] [i_18 + 4] [i_17 + 1] [i_17 - 3])), (31ULL))))))));
                            }
                            /* LoopSeq 2 */
                            for (int i_20 = 1; i_20 < 19; i_20 += 3) /* same iter space */
                            {
                                arr_80 [i_16] [i_16] [i_18 + 3] [i_20 + 2] = ((/* implicit */signed char) min((((short) (unsigned short)40815)), (((/* implicit */short) arr_71 [i_15] [i_17 - 2] [(signed char)10] [i_18] [i_20 + 1] [i_16] [i_18]))));
                                arr_81 [10U] [(signed char)8] [i_18 + 3] |= ((/* implicit */short) var_0);
                                var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) max((arr_65 [i_18]), (((/* implicit */int) arr_68 [i_18 - 1] [i_20 + 2] [i_17 - 3] [i_17 + 1])))))));
                                arr_82 [i_16] = ((/* implicit */signed char) ((arr_71 [i_20 + 1] [i_17] [2ULL] [i_17] [5U] [i_15] [i_15]) ? (((/* implicit */int) (unsigned short)65535)) : (var_17)));
                            }
                            for (int i_21 = 1; i_21 < 19; i_21 += 3) /* same iter space */
                            {
                                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-113)) ? (max((565151734608570356ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))) : (((3444598101479593080ULL) * (((/* implicit */unsigned long long int) 2862437673035108843LL))))));
                                arr_85 [i_16] [i_16] [i_16] [i_16] [20U] = ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)-100)))) ? (11617798272688845832ULL) : (((/* implicit */unsigned long long int) 88329784))));
                                var_37 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) min((928423297), (((/* implicit */int) (unsigned short)6798))))), (min((((((/* implicit */_Bool) 3712490426U)) ? (arr_79 [i_18] [(signed char)8] [i_16] [(signed char)8]) : (var_5))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))))));
                                var_38 = ((/* implicit */_Bool) (short)32767);
                                var_39 -= ((/* implicit */short) ((-885965259) < (((/* implicit */int) (short)-1))));
                            }
                        }
                    } 
                } 
                var_40 = (signed char)0;
                var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) var_6))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_22 = 2; i_22 < 11; i_22 += 3) 
    {
        var_42 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-90))) * (max((((/* implicit */long long int) arr_48 [i_22] [i_22 - 2])), (min((-2305843009213693952LL), (((/* implicit */long long int) 524256U))))))));
        var_43 = ((/* implicit */unsigned int) min((var_43), (((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned int) (unsigned short)65526)), (((((/* implicit */_Bool) (signed char)54)) ? (1472529951U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_52 [14])))))))));
    }
    for (unsigned long long int i_23 = 1; i_23 < 22; i_23 += 3) 
    {
        arr_91 [2] = ((/* implicit */short) min((arr_89 [i_23 + 2]), (((/* implicit */unsigned char) (signed char)-110))));
        /* LoopNest 3 */
        for (unsigned long long int i_24 = 0; i_24 < 25; i_24 += 3) 
        {
            for (long long int i_25 = 0; i_25 < 25; i_25 += 3) 
            {
                for (unsigned short i_26 = 0; i_26 < 25; i_26 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_27 = 0; i_27 < 25; i_27 += 3) 
                        {
                            arr_106 [i_23 + 1] [(signed char)24] [i_24] [i_25] [(_Bool)1] [i_24] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_94 [i_24] [i_24]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-127)))))) ? ((+(((/* implicit */int) var_7)))) : (min((var_17), (-1034291704)))))));
                            arr_107 [i_24] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)8887)) : (((/* implicit */int) (signed char)-90))));
                            arr_108 [i_23] [i_24] [i_24] [i_25] [i_26] [i_27] = ((/* implicit */_Bool) (-(1359896369388983193LL)));
                            arr_109 [i_24] [i_24] = ((/* implicit */unsigned int) max(((unsigned short)2678), (((/* implicit */unsigned short) (signed char)-6))));
                        }
                        arr_110 [i_23 + 1] [(signed char)14] [i_25] [24U] &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)30223))))), (7ULL)));
                    }
                } 
            } 
        } 
        var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-127)))))));
    }
    for (signed char i_28 = 1; i_28 < 16; i_28 += 3) 
    {
        arr_114 [i_28] = ((/* implicit */unsigned int) (short)-9145);
        arr_115 [i_28] = ((/* implicit */int) 124017910U);
        arr_116 [i_28] = ((/* implicit */unsigned int) min((18446744073709551615ULL), (var_16)));
        var_45 = ((/* implicit */short) ((((/* implicit */int) ((2U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69)))))) == (((/* implicit */int) max((max((((/* implicit */unsigned char) var_10)), (var_8))), (((/* implicit */unsigned char) var_15)))))));
        arr_117 [12U] [12U] &= arr_67 [i_28] [i_28 - 1] [i_28] [14ULL];
    }
}
