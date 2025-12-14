/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105024
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
    var_17 = ((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)85))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (15531669261001084908ULL))) >= (15531669261001084908ULL))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (unsigned short)12695);
                                var_19 += ((/* implicit */signed char) min((min((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)46)) - (46))))), ((~(((/* implicit */int) var_6)))))), (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) (unsigned short)52840)) >= (((/* implicit */int) (_Bool)0))))), (((signed char) (signed char)-109)))))));
                                var_20 = ((/* implicit */int) max((((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4]))) : (arr_11 [i_0] [i_2] [i_0] [5]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_4)), (var_2))))))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)-113)))) * (((var_11) / (var_1))))))));
                                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-60))));
                                arr_15 [i_4] [i_1] [i_0] [i_2] [i_0] [i_1] [i_0] = var_14;
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) min((min((arr_4 [i_0]), (((/* implicit */unsigned int) arr_3 [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_2] [i_1] [i_0] [i_0] [i_0])) ? (max((var_1), (var_11))) : (((/* implicit */int) (signed char)118)))))));
                        arr_18 [0ULL] [i_5] [i_2] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (max((2027515951), (((/* implicit */int) arr_8 [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 1; i_7 < 13; i_7 += 4) 
                        {
                            var_23 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2)))) >= (((/* implicit */int) ((_Bool) var_0)))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_6] [i_6] [i_6 + 1] [i_7 - 1])) / (((/* implicit */int) var_8))));
                            var_25 &= ((1335923655U) >> (((arr_10 [i_0] [(signed char)10] [i_2] [i_7 - 1]) + (1300100934))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_8 = 4; i_8 < 12; i_8 += 3) 
                        {
                            var_26 = ((/* implicit */int) max((var_26), (arr_25 [i_6] [i_1] [i_2] [i_6] [i_6])));
                            var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)5)))))));
                            arr_26 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (221059338) : (((/* implicit */int) arr_12 [i_0] [i_6 + 1] [i_6 + 1] [i_6 + 1]))));
                            var_28 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_12)) ? (arr_10 [i_0] [i_0] [i_6] [i_8]) : (((/* implicit */int) (unsigned short)52841))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            arr_31 [(signed char)1] [i_0] [(signed char)1] = ((/* implicit */unsigned short) (!((!(var_4)))));
                            var_29 &= ((/* implicit */unsigned short) (-(((/* implicit */int) var_12))));
                            arr_32 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_0])) >= (((/* implicit */int) arr_20 [i_0] [i_2] [i_0] [i_9]))));
                            var_30 = ((((/* implicit */int) arr_21 [i_0] [i_0] [i_6 + 2] [i_6 + 1])) - (((((/* implicit */_Bool) 31)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (signed char)-97)))));
                            var_31 = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                        }
                        for (int i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            arr_35 [i_0] [i_1] [i_1] [i_1] [i_10] = ((signed char) var_0);
                            arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_6 - 1] [i_0])) << (((/* implicit */int) arr_28 [i_6] [i_6 + 1] [i_10] [i_10]))));
                        }
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((((/* implicit */int) var_10)) != (2027515950))) || (((/* implicit */_Bool) var_12)))))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_6)), (787722583099024820ULL))) << (((((/* implicit */int) arr_24 [i_0] [i_11])) + (115))))))));
                        var_34 = ((/* implicit */unsigned short) ((((_Bool) ((signed char) 517362624))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)31866))));
                    }
                    /* LoopSeq 3 */
                    for (int i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        var_35 = ((/* implicit */signed char) ((58854770) + (((min((-1411544228), (((/* implicit */int) (signed char)-116)))) * (((/* implicit */int) ((((/* implicit */int) (signed char)-109)) <= (((/* implicit */int) (_Bool)0)))))))));
                        var_36 += ((/* implicit */unsigned long long int) ((min((((14993275500784052012ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (var_2)))))));
                        var_37 += max((((/* implicit */int) (signed char)11)), (-221059341));
                        /* LoopSeq 4 */
                        for (signed char i_13 = 0; i_13 < 14; i_13 += 3) 
                        {
                            arr_47 [i_0] [i_12] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) var_10);
                            var_38 = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) arr_28 [i_1] [i_1] [i_2] [i_1])))) * (((/* implicit */int) ((unsigned short) arr_28 [i_0] [i_12] [i_2] [i_12]))));
                            arr_48 [i_0] [0] [i_2] [i_0] [i_13] [i_2] = ((/* implicit */_Bool) (signed char)71);
                            var_39 &= ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_7))))))) : (((int) arr_2 [i_12])));
                        }
                        /* vectorizable */
                        for (signed char i_14 = 0; i_14 < 14; i_14 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) arr_16 [i_0] [i_12] [i_1] [i_0])) : (((/* implicit */int) arr_16 [i_12] [i_1] [(signed char)2] [i_0]))));
                            var_41 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0]);
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            arr_53 [i_0] [i_0] [i_0] [10] [10] = ((/* implicit */_Bool) max((10612755676640479660ULL), (((/* implicit */unsigned long long int) (signed char)-97))));
                            var_42 = ((/* implicit */int) min((max((min((15531669261001084898ULL), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (signed char)34)))), (((/* implicit */unsigned long long int) var_6))));
                            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((1071616069), (1736857311)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-2027515950)))) : (18446744073709551615ULL)));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            var_44 = ((/* implicit */signed char) ((unsigned long long int) 758460688U));
                            var_45 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_0])) >> (((((/* implicit */int) var_14)) + (59)))))));
                            var_46 = ((/* implicit */unsigned int) var_4);
                            var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_42 [(signed char)8] [6] [i_2] [i_12] [12U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))), ((~(((/* implicit */int) (unsigned short)12868))))))))))));
                        }
                    }
                    for (int i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        arr_60 [i_0] = (-(max((221059338), (((/* implicit */int) var_6)))));
                        var_48 = ((/* implicit */unsigned int) (signed char)-87);
                    }
                    /* vectorizable */
                    for (signed char i_18 = 0; i_18 < 14; i_18 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_19 = 0; i_19 < 14; i_19 += 3) 
                        {
                            var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2])) || (((/* implicit */_Bool) arr_4 [i_0])))))));
                            var_50 = ((((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_0])) : (((/* implicit */int) (signed char)29)));
                            arr_66 [i_18] [i_18] [i_2] [i_1] [i_18] |= var_6;
                        }
                        for (signed char i_20 = 0; i_20 < 14; i_20 += 1) 
                        {
                            arr_71 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_1] [i_0])) * (((/* implicit */int) var_0))));
                            var_51 += ((signed char) arr_46 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (signed char i_21 = 2; i_21 < 13; i_21 += 3) 
                        {
                            var_52 = ((/* implicit */unsigned int) (signed char)-55);
                            var_53 = ((/* implicit */_Bool) max((var_53), (((/* implicit */_Bool) ((((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [13ULL] [13ULL])))) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-55)) && (((/* implicit */_Bool) arr_11 [(unsigned short)4] [i_2] [i_18] [(signed char)6]))))))))));
                        }
                        var_54 = ((/* implicit */unsigned short) min((var_54), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-30)) < (((/* implicit */int) (signed char)-5))))) + (((/* implicit */int) arr_74 [(_Bool)1] [i_1] [i_1] [i_1] [i_1])))))));
                        var_55 = ((/* implicit */int) max((var_55), (((/* implicit */int) (~(var_13))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_22 = 0; i_22 < 14; i_22 += 2) /* same iter space */
                    {
                        var_56 = ((/* implicit */signed char) (-(((/* implicit */int) arr_59 [i_22] [i_2] [i_1] [2]))));
                        var_57 = var_0;
                    }
                    for (unsigned int i_23 = 0; i_23 < 14; i_23 += 2) /* same iter space */
                    {
                        arr_82 [i_0] [i_1] [i_2] = var_2;
                        var_58 *= ((/* implicit */int) ((((/* implicit */int) max((arr_74 [i_23] [i_23] [i_23] [i_23] [i_23]), (arr_74 [9ULL] [i_1] [9ULL] [i_1] [(signed char)3])))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_74 [i_23] [i_1] [i_2] [i_0] [i_2])) && (((/* implicit */_Bool) arr_56 [i_1] [(signed char)2] [i_23])))))));
                    }
                    for (int i_24 = 0; i_24 < 14; i_24 += 2) 
                    {
                        arr_86 [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_0])) : (((/* implicit */int) (unsigned short)16383))))) && (arr_28 [i_0] [i_1] [i_1] [i_24])))) - ((~(((((/* implicit */int) arr_40 [i_0] [i_1] [i_1] [i_0])) * (((/* implicit */int) var_7)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_25 = 0; i_25 < 14; i_25 += 1) 
                        {
                            var_59 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? ((~(6291151U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [3] [i_24] [i_25])))))));
                            var_60 |= ((/* implicit */unsigned long long int) var_10);
                            var_61 = ((/* implicit */_Bool) min((((int) ((70368744112128ULL) - (((/* implicit */unsigned long long int) var_11))))), ((~(((var_5) | (((/* implicit */int) arr_6 [i_1]))))))));
                        }
                    }
                }
            } 
        } 
    } 
}
