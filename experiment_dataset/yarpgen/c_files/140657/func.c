/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140657
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned long long int) -1312606338)) : (var_18)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_5))) : (var_18)))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) -279878478)), (var_18))))))));
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)22104))))) ? (((/* implicit */int) ((unsigned short) (short)18686))) : ((+(((/* implicit */int) (unsigned char)252)))))) | (((/* implicit */int) var_16))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)100)) ? (2047U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56378)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((arr_1 [i_0 - 1]), (((/* implicit */unsigned int) var_9))))) ? (((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) var_4))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 4) /* same iter space */
                    {
                        arr_11 [i_3] [i_1] [i_1] [i_2] [i_3] &= ((/* implicit */_Bool) min((2047U), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -6050723408600356180LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_0 + 1] [i_1]))))), (arr_1 [i_2])))));
                        arr_12 [i_0 - 1] [i_1] [i_2] = ((/* implicit */unsigned long long int) 3953834729U);
                    }
                    for (unsigned char i_4 = 2; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        arr_16 [i_0 + 2] [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56378)) ? (((/* implicit */int) arr_15 [i_0 - 1] [i_1] [i_1] [i_4 + 2] [i_4 + 1] [i_1])) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0 + 1]) >= (var_1))))) * ((+(arr_1 [i_4 + 1])))))) : (min((min((((/* implicit */unsigned long long int) arr_5 [i_2] [i_1] [i_0 + 1])), (8738040439514899948ULL))), (((/* implicit */unsigned long long int) var_19))))));
                        arr_17 [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_12)) | (arr_1 [i_0])))) ? (min((var_5), (((/* implicit */unsigned long long int) 3543926059U)))) : (((((/* implicit */_Bool) 9223372036854775790LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18687))) : (8738040439514899931ULL))))) == (((/* implicit */unsigned long long int) ((((arr_10 [i_0 + 2] [i_1] [i_2] [i_4 - 2]) + (((/* implicit */int) arr_0 [i_1])))) - ((-(((/* implicit */int) var_19)))))))));
                        arr_18 [i_1] [i_1] [i_2] [i_4 + 2] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65535))));
                        arr_19 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_1] [i_2] [i_1])) ? (var_18) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 5134098849779697588LL)) ? (((/* implicit */int) var_8)) : (var_9))) * ((+(((/* implicit */int) (unsigned char)255)))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 3) 
                    {
                        arr_22 [2ULL] |= ((/* implicit */unsigned long long int) var_1);
                        arr_23 [i_1] = ((/* implicit */unsigned long long int) (unsigned short)65517);
                        arr_24 [i_0 + 1] [i_1] [i_1] [i_5 + 1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_5)) ? (arr_10 [i_0 + 1] [i_0 + 2] [i_0] [i_5 + 1]) : (arr_10 [i_0 + 1] [i_0 - 1] [i_1] [i_5 - 1])))));
                        arr_25 [i_0 + 2] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((1122343323301212240LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))), ((-(13041905407935219027ULL)))))) ? (((/* implicit */long long int) (-(arr_7 [i_1] [i_2] [i_1] [i_1])))) : (min((((((/* implicit */_Bool) 2381880200U)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)27)) && (((/* implicit */_Bool) (unsigned short)40113)))))))));
                    }
                    for (unsigned char i_6 = 1; i_6 < 11; i_6 += 4) 
                    {
                        arr_29 [8U] [i_2] [i_1] [8U] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (signed char)-35)) ? (4294967295U) : (arr_4 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) arr_14 [i_0 + 3] [i_1] [i_2] [(unsigned char)10])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)107)) + (((/* implicit */int) arr_6 [i_2] [i_6]))))) : (min((((/* implicit */unsigned int) arr_14 [i_6] [i_1] [i_2] [2ULL])), (1828244339U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_0] [i_0])))))));
                        arr_30 [i_0] [i_1] [i_1] [i_6] = ((unsigned long long int) arr_26 [i_1] [i_1] [i_2]);
                        arr_31 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((-(var_18))) : (((/* implicit */unsigned long long int) (((((+(var_9))) + (2147483647))) >> (((9708703634194651684ULL) / (18446744073709551615ULL))))))));
                        arr_32 [i_6] [10U] [10U] [i_0 + 2] &= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_14 [i_6 - 1] [i_6] [i_6] [2ULL])) || (((/* implicit */_Bool) -8232959632194136357LL))))));
                        arr_33 [(unsigned char)6] [i_0 + 2] [i_6 - 1] &= ((/* implicit */unsigned char) (~(((unsigned long long int) ((((/* implicit */_Bool) arr_20 [(unsigned char)0] [i_2] [i_1] [(unsigned char)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 2] [i_2]))) : (var_5))))));
                    }
                    arr_34 [i_1] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) var_16)), (2147483642)))) / (((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_12)) : (18446744073709551615ULL))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                {
                    arr_42 [i_7] [i_7 - 1] [i_8] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)-18704)))) ? (((((/* implicit */_Bool) arr_21 [i_7 - 1] [i_0 + 2])) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) arr_21 [i_7 - 1] [i_0 + 2])))) : (((/* implicit */int) arr_21 [i_7 - 1] [i_0 + 2]))));
                    arr_43 [i_7] = ((/* implicit */unsigned long long int) var_6);
                    arr_44 [(_Bool)1] = ((/* implicit */unsigned char) 732271159);
                }
            } 
        } 
    }
    for (short i_9 = 3; i_9 < 11; i_9 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            arr_51 [i_10] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(6647206313269432256ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-42)) ? (arr_7 [i_10] [i_10] [i_10] [(unsigned short)4]) : (((/* implicit */unsigned int) 244634891)))))));
            arr_52 [i_9 - 3] [i_10] = (~(((/* implicit */int) (unsigned char)240)));
        }
        /* LoopSeq 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopSeq 4 */
            for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                arr_60 [i_11] [i_11] = ((/* implicit */unsigned char) arr_6 [i_9 + 1] [i_11]);
                arr_61 [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_19))));
            }
            for (signed char i_13 = 2; i_13 < 10; i_13 += 4) /* same iter space */
            {
                arr_65 [i_13] [i_11] = ((/* implicit */unsigned long long int) var_6);
                arr_66 [i_13] [i_11] [i_11] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)183))) : (min((arr_64 [i_11] [i_13]), (((/* implicit */unsigned long long int) arr_7 [i_9] [i_11] [i_13 + 1] [i_13]))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_48 [i_11])), (var_17)))) ? (arr_45 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_9 - 2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_9] [i_13 - 1] [i_13] [i_13])) ? (3) : (((/* implicit */int) arr_27 [i_9 + 1] [i_11]))))) ? (arr_59 [i_13] [i_9 - 3] [i_13 - 1] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 813777565U))))))))));
            }
            for (signed char i_14 = 2; i_14 < 10; i_14 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 10; i_15 += 1) 
                {
                    for (unsigned int i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        {
                            arr_76 [i_11] [i_11] [i_14 - 2] [i_15] [i_16] [i_16] = ((/* implicit */unsigned char) arr_13 [i_9] [i_11] [i_9 + 1]);
                            arr_77 [i_14] [i_14] [i_14 - 2] [i_14 + 2] [i_14] [i_14 + 1] [i_14 - 2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)222)), (min(((unsigned short)7), (((/* implicit */unsigned short) (unsigned char)206))))));
                            arr_78 [i_11] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_9 - 3] [i_11] [i_15 + 2] [i_11])) ? (((/* implicit */int) var_6)) : (-1389625301))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_15 + 2] [i_11]))) : (-3962134823875113608LL)))))))));
                        }
                    } 
                } 
                arr_79 [i_9 - 3] [i_14] [i_11] [i_14 + 1] |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_15) >> (((((/* implicit */int) var_16)) - (17360))))))))), (max((var_11), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_45 [i_9 - 3])))))))));
            }
            for (signed char i_17 = 2; i_17 < 10; i_17 += 4) /* same iter space */
            {
                arr_84 [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 10; i_18 += 4) 
                {
                    for (short i_19 = 0; i_19 < 12; i_19 += 2) 
                    {
                        {
                            arr_89 [i_9] [i_11] [i_17 - 1] [i_18] [i_19] [i_11] = min((((((/* implicit */_Bool) arr_85 [i_18 - 1] [i_18] [i_18] [i_11] [i_18 + 1])) ? (10752044725293062196ULL) : (((/* implicit */unsigned long long int) arr_85 [i_18 + 2] [i_18 - 1] [i_18 + 1] [i_11] [i_18 - 1])))), (((/* implicit */unsigned long long int) (unsigned short)63)));
                            arr_90 [i_9 - 2] [i_11] [i_11] [i_18 + 2] [i_19] = ((/* implicit */short) var_4);
                            arr_91 [i_11] = ((/* implicit */long long int) ((var_1) | (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3300348092U)) ^ (5919407657658607005ULL)))) ? ((~(1812554181U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)64)))))))));
                        }
                    } 
                } 
            }
            arr_92 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_11] [i_11] [i_11] [i_9] [i_9])) ? (((unsigned int) 2977493095U)) : (((((/* implicit */_Bool) max((2728652071U), (((/* implicit */unsigned int) (signed char)-5))))) ? (arr_75 [i_11]) : (((/* implicit */unsigned int) ((var_13) & (((/* implicit */int) var_16)))))))));
            arr_93 [i_11] = ((/* implicit */unsigned int) (unsigned char)153);
            /* LoopNest 3 */
            for (unsigned int i_20 = 1; i_20 < 9; i_20 += 4) 
            {
                for (unsigned short i_21 = 0; i_21 < 12; i_21 += 1) 
                {
                    for (long long int i_22 = 0; i_22 < 12; i_22 += 1) 
                    {
                        {
                            arr_102 [i_9] [i_11] [i_9 - 2] [i_9 - 1] [i_9 - 1] [i_9 - 1] = 2977493093U;
                            arr_103 [i_11] = ((/* implicit */unsigned short) -491051938);
                            arr_104 [i_9 - 3] [i_11] [i_11] [i_21] = ((/* implicit */unsigned char) arr_47 [i_11] [i_11]);
                        }
                    } 
                } 
            } 
        }
        for (int i_23 = 0; i_23 < 12; i_23 += 4) 
        {
            arr_107 [i_9] |= ((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) arr_75 [i_23])) ? (((/* implicit */int) (signed char)14)) : (var_13)))))));
            arr_108 [i_9] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_9 - 3])) && (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-1))))))) <= (((/* implicit */int) (((-(var_2))) == (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
            arr_109 [i_9] [i_9 - 1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_14)), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_48 [i_23])), (arr_47 [i_9] [i_23])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)53398)) / (((/* implicit */int) (signed char)-1))))) : (((unsigned int) (unsigned char)34))))));
            arr_110 [i_9 - 1] [i_23] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_23] [i_23]))) : (arr_70 [i_23] [i_23] [i_23] [i_23])))) ? ((-(1566315224U))) : (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_62 [i_9 - 1])) * (((/* implicit */int) (_Bool)0)))))))) : (((/* implicit */int) arr_36 [i_23]))));
        }
    }
    for (int i_24 = 3; i_24 < 12; i_24 += 4) 
    {
        arr_115 [i_24] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176))) : (var_1)))) | (max((arr_114 [i_24]), (((/* implicit */unsigned long long int) arr_112 [i_24 + 2] [i_24]))))))));
        arr_116 [(signed char)10] [i_24] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54))) | (2074048186U)))) ? (((unsigned long long int) 1ULL)) : (((((/* implicit */_Bool) arr_114 [i_24])) ? (arr_114 [i_24 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))))))) >> (((((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_112 [i_24] [i_24 + 1]))) << (((((/* implicit */int) var_14)) + (113))))) - (749469645U)))));
        /* LoopNest 2 */
        for (unsigned int i_25 = 0; i_25 < 14; i_25 += 1) 
        {
            for (unsigned char i_26 = 3; i_26 < 13; i_26 += 1) 
            {
                {
                    arr_123 [i_24] [i_25] [i_25] [i_24] = ((/* implicit */unsigned int) arr_111 [i_24]);
                    arr_124 [i_26 - 2] [12] [12] [i_24] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_6))))));
                    arr_125 [(unsigned short)4] [(unsigned short)4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12137))) <= (((((((/* implicit */_Bool) arr_113 [i_24] [i_25])) ? (7827431842363740245ULL) : (((/* implicit */unsigned long long int) var_9)))) << (((((/* implicit */int) arr_111 [(unsigned char)8])) - (125)))))));
                    arr_126 [i_24] [i_24] [i_26] = ((/* implicit */unsigned short) ((short) min((arr_117 [i_24 - 1] [i_26 - 1]), (((/* implicit */unsigned int) (_Bool)1)))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned long long int) 306521872U)), (8829349231081831870ULL))));
}
