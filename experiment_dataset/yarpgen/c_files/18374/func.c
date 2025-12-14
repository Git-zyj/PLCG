/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18374
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
    var_18 = ((/* implicit */signed char) var_13);
    var_19 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-99)), ((unsigned char)56)))) ? (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (_Bool)1))))) : (((((/* implicit */_Bool) 533747102U)) ? (((/* implicit */int) (unsigned short)26457)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min(((-(var_4))), (((/* implicit */long long int) ((arr_3 [i_1 - 1] [i_1 - 1] [i_0]) ? (var_7) : (((/* implicit */int) var_15)))))))) ? (((((/* implicit */_Bool) max((var_3), (((/* implicit */int) arr_3 [i_0] [0U] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12))))) : (var_0))) : (max((min((var_0), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_12)))))))));
                    var_20 = (+(max((max((arr_0 [i_0]), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((((arr_3 [i_0 - 3] [4] [4]) ? (((/* implicit */unsigned long long int) var_4)) : (var_17))), (var_17))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_4 [i_0] [i_0] [i_0 + 1]))) ^ (min((((/* implicit */long long int) var_1)), (var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1176)) + (((/* implicit */int) (signed char)99))))) != (max((arr_4 [i_0 - 3] [i_0 - 3] [i_0 - 1]), (((/* implicit */long long int) arr_5 [10ULL] [i_0] [i_0])))))))) : (max((((/* implicit */long long int) max((arr_5 [(unsigned short)8] [i_0 - 1] [i_0]), (((/* implicit */unsigned short) var_5))))), (max((arr_4 [i_0] [i_0] [i_0 - 2]), (((/* implicit */long long int) var_1))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
        {
            arr_15 [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_4] [i_3]))) : (arr_12 [i_3]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)64372)) << (((/* implicit */int) (_Bool)1))))));
            arr_16 [i_4] [(unsigned short)0] [i_4] = ((/* implicit */_Bool) var_11);
            /* LoopSeq 2 */
            for (short i_5 = 1; i_5 < 17; i_5 += 2) 
            {
                var_23 *= ((/* implicit */long long int) arr_14 [i_3] [i_3] [i_3]);
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_25 [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_17 [i_3] [i_4] [i_4])))) ? (((((/* implicit */long long int) arr_22 [i_5] [i_4] [i_5] [i_6 + 1] [i_5])) / (var_4))) : (((/* implicit */long long int) arr_22 [i_5] [i_5] [i_5] [i_5 + 2] [i_6 + 1]))));
                            arr_26 [i_5] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_12))) <= (((((/* implicit */_Bool) var_17)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_4] [i_5])))))));
                        }
                    } 
                } 
                arr_27 [i_3] [i_5] [i_4] [i_5 + 1] = ((/* implicit */unsigned long long int) ((arr_14 [i_5 + 1] [i_5 + 2] [i_5 + 2]) ? (((/* implicit */int) arr_14 [i_5 + 1] [i_5 - 1] [12ULL])) : (((/* implicit */int) arr_14 [i_5 + 2] [i_5 + 3] [i_5]))));
                arr_28 [i_5] [i_5] [(signed char)9] = ((/* implicit */_Bool) (-(((var_8) ? (((/* implicit */int) arr_14 [i_3] [i_4] [i_3])) : (((/* implicit */int) arr_19 [19U]))))));
            }
            for (unsigned short i_8 = 3; i_8 < 17; i_8 += 3) 
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((((((/* implicit */int) var_5)) + (17114))) - (16)))))) ? (((/* implicit */int) arr_14 [i_3] [i_4] [i_8 - 3])) : (((((/* implicit */int) arr_14 [i_3] [i_4] [i_8])) << (((((/* implicit */int) arr_23 [5U] [i_8] [i_4] [i_4] [i_3] [i_3])) - (26163)))))));
                arr_31 [i_3] [i_3] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                var_25 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */int) var_2))))));
            }
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_36 [i_4] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_12)))))));
                        arr_37 [i_3] [i_4] [i_4] [i_9] [(_Bool)1] [i_10] = ((/* implicit */long long int) ((arr_32 [i_3] [i_3] [i_3] [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                    }
                } 
            } 
        }
        for (signed char i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                for (unsigned int i_13 = 1; i_13 < 19; i_13 += 3) 
                {
                    for (unsigned short i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        {
                            arr_47 [i_3] [i_13] [(unsigned short)16] [i_12] [i_13 + 1] [i_14] = ((((/* implicit */_Bool) (signed char)73)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)98))) - (arr_41 [i_3] [i_11]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2469737711U))))) : (max((((/* implicit */int) (unsigned short)52892)), (729911527)))))));
                            arr_48 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */long long int) ((var_8) ? (arr_29 [i_3] [i_11] [i_13 + 1] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (min((arr_33 [i_3] [i_13 - 1] [i_12] [i_13 - 1]), (((/* implicit */long long int) var_5))))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_13 + 1])) : (((/* implicit */int) var_12))))))) >= (min((((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) var_13))))));
                            arr_49 [i_3] [i_3] [i_3] [i_3] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_14] [i_13] [i_14]))) | (var_0)))) ? (max((((/* implicit */long long int) arr_46 [i_3] [i_11] [i_12] [i_13] [i_14])), (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_38 [i_3] [i_11] [(_Bool)1])))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) min((arr_44 [i_3] [i_11] [i_12] [i_13 - 1] [i_14] [i_14]), (((/* implicit */unsigned short) var_13)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_14])) << (((var_17) - (2060161677747201479ULL)))))) ? (var_9) : (((((/* implicit */_Bool) var_1)) ? (arr_41 [i_13 - 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                        }
                    } 
                } 
            } 
            arr_50 [i_3] [i_3] = ((/* implicit */unsigned int) (-(120259084288LL)));
        }
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
        {
            arr_54 [i_15] [12LL] [i_15] = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
            arr_55 [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3] [(unsigned char)3] [i_3] [i_15] [i_15])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_51 [i_3] [i_15] [i_15]))))) ? ((-(arr_41 [i_3] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_3] [i_15] [i_15] [i_15] [i_3])))));
            arr_56 [(_Bool)1] [i_15] [i_15] = ((/* implicit */unsigned long long int) var_11);
            /* LoopNest 2 */
            for (short i_16 = 1; i_16 < 19; i_16 += 1) 
            {
                for (short i_17 = 2; i_17 < 19; i_17 += 3) 
                {
                    {
                        arr_63 [i_15] = ((/* implicit */short) arr_35 [18ULL] [18ULL] [i_16 - 1] [18ULL] [18ULL] [i_16]);
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_15)) ? (arr_62 [i_17] [i_15] [5U] [i_15] [i_3]) : (((/* implicit */unsigned long long int) arr_46 [(short)0] [i_16 - 1] [i_15] [i_3] [(short)0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        arr_64 [i_3] [i_15] [i_16 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))) : (10531990808902574514ULL)));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (!(((/* implicit */_Bool) ((arr_22 [8LL] [i_15] [i_16 + 1] [i_17] [2ULL]) + (-729911524)))))))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_18 [i_3] [i_3] [i_15]))))) ? ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1768))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_15] [i_15] [i_15] [(short)14] [i_15])) || (((/* implicit */_Bool) var_7))))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_15] [i_15] [i_15] [i_15] [i_15]))));
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (signed char i_20 = 1; i_20 < 19; i_20 += 2) 
                {
                    for (short i_21 = 2; i_21 < 19; i_21 += 2) 
                    {
                        {
                            arr_74 [i_3] [i_18] [i_18] [i_20 + 1] = ((/* implicit */short) ((((((/* implicit */_Bool) (~(var_9)))) ? (arr_69 [i_20 + 1] [i_20 - 1] [i_20 + 1] [i_20 - 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))))) > (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_52 [i_18])))) ? (((((/* implicit */_Bool) arr_33 [i_3] [i_3] [i_21 - 1] [i_20])) ? (((/* implicit */int) arr_10 [i_19] [i_21])) : (var_3))) : (((/* implicit */int) arr_71 [i_21 + 1] [i_20 + 1] [i_18] [i_3])))))));
                            arr_75 [i_3] [i_18] [i_20 - 1] [i_18] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % (var_14)))) != (((arr_40 [i_19] [i_20 - 1] [i_21 - 2]) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_3] [i_18] [i_19] [i_19] [i_18] [i_21 + 1]))))))) ? (min((((/* implicit */unsigned int) var_8)), (min((((/* implicit */unsigned int) var_16)), (arr_68 [i_3] [(signed char)3] [i_18]))))) : (((/* implicit */unsigned int) (((((-(var_7))) + (2147483647))) << (((((((var_4) ^ (((/* implicit */long long int) var_3)))) + (7400398390953053090LL))) - (15LL))))))));
                            arr_76 [i_18] [i_18] [i_19] [i_20] [i_21 - 2] = ((/* implicit */short) var_8);
                        }
                    } 
                } 
            } 
            arr_77 [i_18] [i_18] [i_18] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1073217536U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11902)))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_53 [i_3])) : (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) arr_53 [i_3]))))))), ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (arr_62 [i_18] [i_18] [i_18] [i_18] [i_18])))))));
        }
        arr_78 [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) != (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3]))) : (var_9)))))) << (((((max((((/* implicit */long long int) var_1)), (arr_17 [i_3] [i_3] [i_3]))) << (((/* implicit */int) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) - (46731LL)))));
    }
    for (unsigned short i_22 = 3; i_22 < 18; i_22 += 3) 
    {
        arr_82 [i_22] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_81 [i_22])))))) ? (arr_79 [i_22 - 2]) : ((-(var_9))))) * (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        var_31 += ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((((/* implicit */_Bool) arr_79 [i_22])) ? (((/* implicit */long long int) ((/* implicit */int) arr_81 [i_22 + 4]))) : (arr_79 [i_22 + 4]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_23 = 2; i_23 < 21; i_23 += 2) 
        {
            arr_87 [i_23] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(var_6)))) <= (((arr_86 [i_22 + 1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))));
            /* LoopSeq 1 */
            for (long long int i_24 = 0; i_24 < 22; i_24 += 2) 
            {
                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_88 [i_22] [i_23 + 1] [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_9)))) ? (((var_17) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_89 [i_22]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) == (var_17)))))));
                var_33 = ((/* implicit */long long int) (((_Bool)1) ? (1620723014U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
                arr_90 [i_23] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_85 [i_23] [i_23] [i_22 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0)))) < (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_85 [i_24] [i_23] [i_22])))));
            }
            arr_91 [i_23 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_81 [i_23]))));
            var_34 = ((/* implicit */short) ((((/* implicit */int) (short)0)) % ((-(((/* implicit */int) (short)-9588))))));
        }
        for (short i_25 = 0; i_25 < 22; i_25 += 3) 
        {
            arr_95 [i_22 + 2] [i_25] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(var_9))), (((/* implicit */long long int) max((var_7), (((/* implicit */int) arr_80 [i_22] [i_22 + 4])))))))) && (((/* implicit */_Bool) (~(max((var_3), (var_7))))))));
            arr_96 [i_25] [i_25] [i_25] = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_81 [i_22])))), (((/* implicit */int) var_10)))), (max((((/* implicit */int) max((var_6), (arr_83 [i_22] [i_22 - 2])))), (((((/* implicit */_Bool) arr_93 [i_22 - 3] [(signed char)1])) ? (((/* implicit */int) arr_81 [i_25])) : (((/* implicit */int) var_16))))))));
        }
    }
    var_35 = ((/* implicit */unsigned int) var_12);
    var_36 = ((/* implicit */short) (((~(((var_9) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))))))) | (((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (14U))), (((/* implicit */unsigned int) var_1)))))));
}
