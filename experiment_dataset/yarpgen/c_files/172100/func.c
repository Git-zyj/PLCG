/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172100
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
    var_13 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_1))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_7);
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */short) ((max((max((((/* implicit */unsigned long long int) (unsigned char)93)), (10081550944765281828ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) != (var_0)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        arr_4 [(unsigned char)16] = ((/* implicit */unsigned char) ((signed char) ((((((/* implicit */int) arr_0 [8] [i_0 + 1])) + (2147483647))) << ((((+(((/* implicit */int) var_7)))) - (48))))));
        arr_5 [(unsigned char)0] &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((5746809683403796457LL), (((/* implicit */long long int) var_4))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (8365193128944269788ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) var_1)))) & (((/* implicit */int) ((((/* implicit */_Bool) 10081550944765281832ULL)) && (((/* implicit */_Bool) 2147483647))))))))));
        arr_6 [(short)14] [i_0 + 1] &= ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0] [i_0 + 1])))), ((+(643365086))))) & (((/* implicit */int) min((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0 + 1] [i_0 + 1]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)162)) ? (8365193128944269814ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [4ULL])))))) ? (arr_7 [i_1 + 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])))));
        arr_10 [i_1 + 1] [(short)7] &= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])) >= (((/* implicit */int) var_7))));
        arr_11 [i_1] = ((/* implicit */unsigned long long int) ((arr_7 [i_1 + 1] [i_1 + 1]) == (((/* implicit */long long int) ((/* implicit */int) var_12)))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_14 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [1ULL] [(_Bool)1]))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_12))))), (((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (arr_12 [i_2] [6ULL]) : (arr_13 [i_2]))))) : (((/* implicit */unsigned long long int) (+(((int) var_5)))))));
        arr_15 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) 2283714214350596608ULL)) ? (arr_12 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) + (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)147)))) >> (((((/* implicit */long long int) ((/* implicit */int) (signed char)-39))) / (-2707413302917883626LL))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        {
                            arr_27 [i_3] [i_4] [i_5] [(_Bool)1] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((var_10), (arr_19 [i_5] [i_3]))) >> (((min((((/* implicit */unsigned long long int) var_1)), (var_10))) - (66ULL)))))) ? (((unsigned long long int) arr_13 [i_3 - 1])) : ((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_3] [i_3] [i_3 + 2] [(_Bool)1]))) : (arr_21 [i_3 - 1] [i_4])))));
                            arr_28 [(short)6] [0ULL] [i_3] [(short)1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) -1462928825)) ? (((/* implicit */int) ((min((((/* implicit */long long int) var_3)), (arr_7 [i_3] [13ULL]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) arr_22 [i_3 - 1])) ? (((/* implicit */int) arr_22 [i_3 + 1])) : (((/* implicit */int) arr_22 [i_3 - 1]))))));
                            arr_29 [i_3] [i_5] [i_5] [i_5] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_3] [0LL])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (8365193128944269788ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (unsigned char)159))))))), (((/* implicit */unsigned long long int) (unsigned char)166))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (signed char i_9 = 1; i_9 < 17; i_9 += 3) 
                        {
                            {
                                arr_38 [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_18 [i_7]))))))), (arr_20 [i_3 + 1] [(short)14])));
                                arr_39 [i_3 + 1] [i_3] [(_Bool)1] [i_8] [i_9 - 1] = ((/* implicit */unsigned char) min((max((min((arr_32 [(_Bool)1]), (((/* implicit */long long int) (short)30674)))), (((/* implicit */long long int) (signed char)68)))), (((((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)44)))) | (min((((/* implicit */long long int) arr_31 [0LL] [i_8])), (-6252141708931271996LL)))))));
                                arr_40 [i_4] [i_4] [i_4] [i_3] [i_4] = min((((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned long long int) arr_35 [(unsigned char)9] [i_4] [i_8] [(unsigned char)9])), (arr_13 [i_4]))) : (((/* implicit */unsigned long long int) (+(4618509420654208152LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_9 + 1] [1ULL] [i_9] [i_9] [12])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_2)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
    {
        arr_43 [i_10] [i_10] &= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [5ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-7752452564549586540LL)))) ? (arr_25 [i_10]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)163)) ? (arr_42 [1ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) max((((/* implicit */unsigned char) (signed char)63)), ((unsigned char)85)))), (((short) 18446744073709551612ULL))))));
        arr_44 [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_10] [i_10]))) : (arr_20 [i_10] [i_10]))))));
    }
    /* vectorizable */
    for (unsigned char i_11 = 1; i_11 < 17; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 18; i_12 += 4) 
        {
            for (signed char i_13 = 4; i_13 < 17; i_13 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        for (signed char i_15 = 0; i_15 < 19; i_15 += 1) 
                        {
                            {
                                arr_58 [i_12] [i_13] [i_12] &= var_9;
                                arr_59 [i_11 + 1] [13LL] [i_11 + 1] [i_11] [13LL] [i_13] [(unsigned char)6] = ((/* implicit */unsigned char) arr_46 [i_11 + 2]);
                                arr_60 [i_15] [i_12] [i_13] [i_13] [i_12] [i_11] &= ((/* implicit */short) ((10081550944765281828ULL) ^ (arr_12 [i_12] [i_15])));
                                arr_61 [(short)12] [i_13] [i_13] [i_13] [i_15] [i_15] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_9)) != (arr_47 [i_11] [5ULL] [i_11]))) ? (((((/* implicit */int) var_4)) + (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_49 [i_11] [i_11 + 1] [i_13 - 4]))));
                            }
                        } 
                    } 
                    arr_62 [i_11] [i_12] [i_11] &= ((((/* implicit */_Bool) var_8)) ? (arr_13 [i_11]) : (arr_56 [i_11] [i_11 + 1] [i_12 + 1] [i_12 + 1] [i_13 + 2]));
                    arr_63 [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) 7ULL)) ? (arr_12 [i_11] [i_12 - 2]) : (arr_12 [i_12] [i_12 - 1])));
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 1; i_16 < 15; i_16 += 2) 
                    {
                        arr_66 [i_11] [i_12] [i_13] [16LL] [i_13] [i_16] = ((/* implicit */short) ((((((/* implicit */_Bool) 6252141708931272015LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_64 [i_11 + 2] [i_11 + 2] [i_13] [i_13 + 1] [i_13 - 4] [i_13 - 4]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_64 [i_16] [i_16] [i_13] [i_12 - 1] [i_11] [i_11]))))));
                        arr_67 [i_11 + 1] [i_12] [i_13] [i_16] &= ((/* implicit */unsigned char) var_5);
                        arr_68 [i_11] [10ULL] [i_12] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                    }
                    for (short i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        arr_73 [i_11] [i_13] [8LL] [i_13] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) arr_71 [i_11 + 2] [i_11 + 2] [i_13] [i_11 - 1] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_55 [i_11] [i_11] [i_11] [i_11] [i_11 - 1])) && (((/* implicit */_Bool) var_3)))))) : (arr_71 [i_13 - 1] [i_12 - 1] [i_13] [i_13] [i_13])));
                        arr_74 [i_11] [i_12] [i_11 - 1] [i_11 - 1] [i_11] [i_11 + 2] &= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (var_0))) ? (((/* implicit */int) (unsigned char)171)) : (((/* implicit */int) arr_55 [i_11 + 2] [i_12] [i_13] [i_13] [i_13]))));
                        arr_75 [i_11 + 1] [i_12 + 1] [i_12] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_72 [i_12] [i_12] [i_13] [i_17]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23902)))))) ? (620282422) : (((/* implicit */int) var_12))));
                        arr_76 [i_11 + 2] [i_11 + 2] [i_13] [i_17] [i_12] [i_13] = ((/* implicit */unsigned char) arr_53 [i_13 + 1] [i_13] [i_13 - 1] [i_13 + 2]);
                        arr_77 [i_11 - 1] [i_11] [i_12] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_12 - 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -768657681)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))) : (10081550944765281831ULL))))));
                    }
                }
            } 
        } 
        arr_78 [i_11] [(short)9] = ((/* implicit */short) var_5);
    }
    for (unsigned char i_18 = 1; i_18 < 15; i_18 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 4) 
        {
            arr_84 [i_19] [i_19] = ((/* implicit */signed char) var_3);
            /* LoopNest 2 */
            for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 2) 
            {
                for (signed char i_21 = 3; i_21 < 13; i_21 += 3) 
                {
                    {
                        arr_91 [i_21 + 3] [i_21] [i_20] [i_19] [i_18] [i_18] = ((/* implicit */unsigned char) min((((var_5) & (((/* implicit */unsigned long long int) arr_36 [i_21 - 2] [i_21] [i_21 - 2] [i_19] [i_21 + 3] [i_21 + 3])))), (((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_7), (((/* implicit */unsigned char) (_Bool)1))))), ((+(((/* implicit */int) (unsigned char)9)))))))));
                        arr_92 [i_18] [i_18] [i_21] [i_18] = ((/* implicit */signed char) min(((+(max((((/* implicit */unsigned long long int) var_11)), (arr_85 [i_18 + 1] [i_19]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12692081351351213608ULL)) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) min(((unsigned char)0), ((unsigned char)190)))))))));
                        arr_93 [(_Bool)1] [i_18 - 1] [2ULL] [i_20] [i_18 - 1] &= ((/* implicit */signed char) (unsigned char)4);
                    }
                } 
            } 
        }
        arr_94 [i_18] = ((/* implicit */short) ((((((/* implicit */int) min((var_11), (var_3)))) + (((/* implicit */int) ((((/* implicit */int) arr_50 [i_18] [i_18] [i_18])) < (((/* implicit */int) arr_23 [i_18] [2LL] [(signed char)12] [(signed char)12]))))))) * (((/* implicit */int) (signed char)-73))));
    }
    var_14 = ((/* implicit */int) 18378851487128351165ULL);
}
