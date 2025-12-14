/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148986
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
    var_19 = ((/* implicit */_Bool) var_5);
    var_20 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */long long int) var_18)))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    arr_7 [i_0] [i_1] [(_Bool)1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_2] [i_2 + 1] [i_2 - 2])) ? (((/* implicit */unsigned int) arr_3 [i_2] [i_2 - 2] [i_2 - 1])) : (1928032234U)))));
                    arr_8 [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)21816)), ((-(arr_2 [i_0] [i_2])))))), (((((/* implicit */_Bool) (+(arr_4 [i_0])))) ? (max((((/* implicit */unsigned long long int) arr_1 [(unsigned short)2])), (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7335441433165534625ULL)) ? (arr_3 [i_0] [0] [i_2 + 1]) : (((/* implicit */int) (unsigned short)21820)))))))));
                }
                for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 6; i_4 += 3) 
                    {
                        arr_13 [i_0] [i_1] [i_3] [i_4 + 4] = ((/* implicit */unsigned char) min((max((((/* implicit */signed char) arr_1 [i_3])), ((signed char)-16))), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-73)), (arr_5 [i_0] [i_0] [i_4])))))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) var_18);
                        arr_15 [i_0] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */short) (signed char)5);
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((((/* implicit */_Bool) 3763500856U)) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) arr_12 [(short)1] [i_1] [i_3] [(short)1] [i_3] [i_4])))) ^ (max((arr_11 [i_4] [(unsigned short)7] [i_0] [i_1] [i_0]), (arr_2 [i_4] [i_4]))))) >= ((-(((/* implicit */int) var_8))))));
                    }
                    for (int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        arr_21 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)15))))), (((((/* implicit */_Bool) var_4)) ? (arr_9 [i_0] [9ULL] [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))))))) ? (((/* implicit */int) max((var_3), (arr_10 [i_3])))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_3] [i_5])) ? (-1628837923) : (((/* implicit */int) (unsigned char)234))))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            arr_25 [i_0] [i_0] [i_3] [i_6] [i_0] = ((/* implicit */signed char) var_10);
                            arr_26 [i_0] [i_1] [i_1] [(unsigned char)7] [i_6] = 5364020149477171844LL;
                            arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (short)3896))));
                        }
                        arr_28 [i_3] = ((/* implicit */long long int) var_9);
                    }
                    arr_29 [i_0] [i_1] [(signed char)1] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((max((((/* implicit */int) arr_12 [i_1] [i_1] [i_3] [i_3] [i_1] [i_0])), (var_17))), (((/* implicit */int) arr_24 [i_0] [i_1] [i_3] [i_3] [i_1]))))), (arr_17 [i_0] [i_0] [i_3] [i_1] [i_3])));
                }
                /* LoopSeq 2 */
                for (short i_7 = 1; i_7 < 7; i_7 += 2) 
                {
                    arr_34 [i_7] = arr_24 [i_0] [i_1] [i_1] [i_1] [i_7 + 2];
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 9; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            {
                                arr_40 [i_0] [i_1] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1105351340)) ? (max((((/* implicit */unsigned long long int) (signed char)-1)), (arr_36 [i_7] [i_0] [i_7]))) : (((/* implicit */unsigned long long int) (-(((var_14) ^ (((/* implicit */int) arr_18 [i_9] [i_1] [i_7] [i_8] [i_9] [i_9])))))))));
                                arr_41 [i_1] [3U] [i_7] = ((((/* implicit */unsigned long long int) var_18)) & (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_19 [i_1] [i_7] [i_7] [i_9])) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_7] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7 + 2]))) : (max((((/* implicit */unsigned long long int) arr_23 [i_9] [i_0] [i_0] [i_7] [i_1] [i_0])), (arr_36 [i_0] [i_1] [i_7]))))));
                                arr_42 [i_0] [(_Bool)1] [i_1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
                                arr_43 [i_0] [i_9] [i_7 + 2] [i_0] [8] &= ((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_7 - 1] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [i_0] [i_1] [i_1] [i_7 + 2] [i_8] [i_9]))))) : (min((var_12), (((/* implicit */unsigned long long int) var_9)))))) ^ (((min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_9])), (4341998177794548824ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_38 [i_0] [i_9] [i_9] [i_8] [i_9])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_7] [i_1] [i_0] [i_7]))))))));
                                arr_44 [i_7] [i_1] [i_8] [i_1] [i_1] [i_1] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(1628837912))))));
                            }
                        } 
                    } 
                    arr_45 [i_7] [i_7] [(unsigned char)2] [(unsigned char)2] = ((/* implicit */signed char) arr_33 [i_7]);
                }
                for (unsigned long long int i_10 = 3; i_10 < 7; i_10 += 3) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        arr_52 [i_11] [i_11] [i_11] [i_0] = ((/* implicit */_Bool) var_7);
                        arr_53 [i_11] = max((((/* implicit */long long int) arr_17 [i_0] [i_1] [i_10] [1LL] [i_11])), (min((((/* implicit */long long int) var_16)), (((((/* implicit */_Bool) arr_12 [i_10] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) 1628837914)) : (arr_35 [i_11] [i_1]))))));
                        arr_54 [i_1] [i_0] = ((/* implicit */short) 5608444816132831066ULL);
                        arr_55 [i_0] [i_0] [i_11] [i_0] [i_11] [i_11] = ((/* implicit */short) max((min((min((((/* implicit */unsigned long long int) 3139781408813655058LL)), (arr_22 [(_Bool)1] [8ULL] [i_10]))), (((/* implicit */unsigned long long int) min((arr_12 [(unsigned short)6] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) (signed char)106))))))), (((/* implicit */unsigned long long int) var_15))));
                    }
                    for (unsigned char i_12 = 1; i_12 < 7; i_12 += 2) 
                    {
                        arr_58 [i_12 + 2] [i_10] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)21820)), (arr_5 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [9LL])) : (var_0)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)93))));
                        arr_59 [4LL] [i_1] [4LL] [4LL] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_48 [i_0] [0ULL] [0ULL] [5U])), ((+((+(((/* implicit */int) (unsigned char)199))))))));
                    }
                    for (long long int i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_14 = 3; i_14 < 9; i_14 += 1) 
                        {
                            arr_65 [i_0] [i_0] [i_14] = ((/* implicit */unsigned short) max((11676144380293610745ULL), (min((arr_22 [i_1] [(unsigned short)5] [(unsigned short)5]), (((/* implicit */unsigned long long int) ((-3139781408813655067LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)117))))))))));
                            arr_66 [i_0] [i_1] [i_10] [i_13] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58751)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0)))) ? (max((288230376151711743ULL), (((/* implicit */unsigned long long int) arr_46 [1LL] [i_13] [i_14])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32086)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)63))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) 1928032222U))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */long long int) var_17)) : (arr_5 [(_Bool)1] [(_Bool)1] [i_10])))))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_70 [(signed char)3] [(signed char)3] |= ((/* implicit */_Bool) (~(min((((/* implicit */int) var_16)), (((var_16) ? (((/* implicit */int) (unsigned char)3)) : (var_10)))))));
                            arr_71 [i_0] [i_1] [i_15] = ((/* implicit */signed char) ((0) <= (min((min((-1797183566), (((/* implicit */int) (signed char)42)))), (((/* implicit */int) arr_1 [i_0]))))));
                        }
                        arr_72 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_50 [i_0] [i_10 + 1] [i_0]), (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)10261)) ? ((-(var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((1024476810U) <= (((/* implicit */unsigned int) var_13))))))))) : (arr_57 [i_0] [i_0] [i_0] [i_0])));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        arr_76 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_10 + 3] [i_10 + 3] [i_10] [i_10] [i_16])) ? (((/* implicit */int) arr_18 [i_0] [i_10 - 3] [i_16] [i_16] [i_16] [i_16])) : (((/* implicit */int) arr_56 [0LL] [i_10 - 2] [i_10] [i_10]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_56 [i_1] [i_10 + 3] [i_10 + 3] [i_10 + 2])), (arr_18 [i_0] [i_10 + 2] [i_16] [i_16] [i_16] [i_16])))) : ((~(((/* implicit */int) arr_56 [i_10 + 1] [i_10 + 2] [i_16] [i_16]))))));
                        arr_77 [i_16] = ((/* implicit */unsigned short) min((max((((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (var_4))), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_16] [i_1] [i_1]))) : (2366935050U))))));
                    }
                    for (unsigned long long int i_17 = 1; i_17 < 8; i_17 += 1) 
                    {
                        arr_80 [i_17] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) 1632434809930239765LL);
                        arr_81 [i_0] [i_0] [i_0] [i_0] [i_10 + 2] [i_0] = ((/* implicit */long long int) (-(arr_47 [2] [2] [i_10 - 2])));
                        /* LoopSeq 2 */
                        for (short i_18 = 0; i_18 < 10; i_18 += 2) 
                        {
                            arr_85 [i_18] [i_18] [i_10] [i_17] [i_18] [i_10] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)3)) : ((-2147483647 - 1))))))) ? (-9223372036854775791LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_18] [i_0] [i_18] [i_10 + 3])) : (((/* implicit */int) arr_31 [i_10 - 3] [i_10 + 2])))))));
                            arr_86 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_68 [i_17 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1]);
                        }
                        for (unsigned int i_19 = 0; i_19 < 10; i_19 += 2) 
                        {
                            arr_89 [i_19] [i_17] [i_10 + 2] [i_10 + 2] [i_1] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_20 [i_17] [i_10 - 1] [i_0] [i_0])), (arr_78 [i_1] [i_1])));
                            arr_90 [i_0] [(signed char)8] [i_10 - 2] [i_17] [(signed char)8] = ((/* implicit */short) var_13);
                            arr_91 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_20 [8LL] [8LL] [8LL] [i_19]))));
                            arr_92 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)7636)) ? (((/* implicit */int) arr_68 [i_17 - 1] [i_17] [i_17] [i_17])) : (((/* implicit */int) (unsigned short)15872)))), (((/* implicit */int) (unsigned char)127))));
                            arr_93 [(short)4] [(short)8] [i_10] [(short)8] [i_1] [i_0] = ((/* implicit */_Bool) arr_23 [i_1] [i_1] [(unsigned short)3] [(signed char)2] [(short)4] [i_1]);
                        }
                    }
                    for (short i_20 = 0; i_20 < 10; i_20 += 2) 
                    {
                        arr_97 [i_0] [i_1] [i_10 - 3] [(short)3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 15360)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */unsigned int) var_14)) : (458658316U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (18446744073709551615ULL)))));
                        arr_98 [i_20] [i_20] [i_10] = ((/* implicit */short) max(((-(max((((/* implicit */unsigned int) (short)-7647)), (2701585772U))))), (((/* implicit */unsigned int) arr_60 [2U] [i_20] [i_20] [i_20]))));
                        arr_99 [i_0] [i_0] [8ULL] [i_0] [i_10] [i_0] &= ((/* implicit */long long int) arr_0 [i_10]);
                    }
                    arr_100 [i_0] [i_0] [(unsigned short)8] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_0] [i_0] [i_0] [i_0] [i_10])) ? (arr_35 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_0] [i_0] [(_Bool)1] [3ULL] [i_0] [3ULL] [i_0])))))) ? (arr_3 [i_0] [i_0] [i_10]) : (((((/* implicit */_Bool) (unsigned short)51853)) ? (((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_1] [(unsigned short)4])) : (15872)))))) > (arr_5 [i_1] [i_1] [i_10 - 2])));
                    arr_101 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_9);
                }
                arr_102 [i_0] [i_1] |= ((/* implicit */unsigned long long int) arr_50 [i_0] [i_0] [i_0]);
            }
        } 
    } 
}
