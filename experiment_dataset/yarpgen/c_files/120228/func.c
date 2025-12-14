/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120228
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
    var_17 &= ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_2 [8U] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned char)158))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_18 [i_1] [i_4] [5ULL] = ((/* implicit */int) (((~(var_16))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) -7067833247404686661LL))))))));
                                arr_19 [0ULL] [i_3] [(short)2] [(short)2] [i_1 - 2] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0]);
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) 385521086U);
                }
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            arr_25 [i_6] [i_5] [i_5] = ((/* implicit */unsigned char) ((min((1046528U), (arr_24 [i_5] [i_6] [i_6]))) << (((((/* implicit */int) var_1)) - (25189)))));
            arr_26 [i_6] [i_6] [i_5] = ((/* implicit */long long int) ((arr_10 [i_5] [i_6] [i_6] [i_6]) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_6]))))))));
        }
        arr_27 [i_5] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) 1072699339)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)158))) : (-7067833247404686661LL))) ^ (((/* implicit */long long int) max((var_14), (((((/* implicit */unsigned int) ((/* implicit */int) (short)2032))) ^ (2994702952U))))))));
        arr_28 [i_5] [i_5] = ((/* implicit */unsigned long long int) min(((short)-10437), (((short) var_0))));
        arr_29 [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((7067833247404686660LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))), ((-(((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
    {
        arr_33 [i_7] = ((arr_17 [i_7] [i_7]) ^ (arr_17 [i_7] [i_7]));
        arr_34 [i_7] [(signed char)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2453089753U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-2032))));
        arr_35 [i_7] [(unsigned short)6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
        /* LoopSeq 2 */
        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            arr_38 [i_7] [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)9416)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (signed char)59)))) < (((/* implicit */int) (unsigned char)158))));
            /* LoopSeq 3 */
            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    arr_44 [i_7] [i_9] [i_9] [i_10] [i_10] [9U] = ((/* implicit */signed char) ((int) 4611685984067649536LL));
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 3; i_11 < 8; i_11 += 2) /* same iter space */
                    {
                        arr_48 [i_7] [i_8] [i_10] [i_11] = ((/* implicit */unsigned short) var_15);
                        arr_49 [i_7] [i_8] [i_9] [i_10] [(unsigned char)2] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_11]))) / (arr_24 [i_10] [i_8] [i_7]))));
                    }
                    for (unsigned char i_12 = 3; i_12 < 8; i_12 += 2) /* same iter space */
                    {
                        arr_53 [i_12 - 2] [i_10] [i_9] [i_7] [i_7] [(short)1] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_41 [i_7] [i_12 - 2] [i_12 + 3] [i_10] [i_12] [i_9]))));
                        arr_54 [i_7] [i_10] [i_9] [i_10] [i_12] [i_12 + 3] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1543482146U)))))));
                    }
                }
                arr_55 [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_8))));
                arr_56 [i_7] = ((/* implicit */unsigned long long int) var_0);
            }
            for (short i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                arr_60 [i_13] = ((/* implicit */unsigned char) arr_57 [i_13] [i_8] [i_8] [i_7]);
                /* LoopNest 2 */
                for (unsigned char i_14 = 3; i_14 < 8; i_14 += 2) 
                {
                    for (signed char i_15 = 4; i_15 < 10; i_15 += 4) 
                    {
                        {
                            arr_65 [i_7] [(signed char)11] [i_7] [(signed char)11] [i_7] [(unsigned short)2] [(signed char)11] &= ((unsigned int) ((unsigned short) (short)-20368));
                            arr_66 [i_15] [(unsigned short)1] [i_13] [(unsigned char)2] [i_15 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1300264343U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)22908))))) ? (((/* implicit */int) arr_47 [(unsigned char)11] [i_8] [i_13] [i_13] [i_8] [i_15 - 4])) : (((/* implicit */int) ((var_14) != (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_8] [i_8]))))))));
                            arr_67 [i_7] [i_14] [i_14] [i_8] [i_8] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) arr_13 [i_7] [i_7] [i_13]))))));
                            arr_68 [i_15] [i_7] [i_13] [i_8] [i_7] = ((/* implicit */int) (((-(3507664307U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -7067833247404686682LL)) || (((/* implicit */_Bool) (signed char)9))))))));
                        }
                    } 
                } 
                arr_69 [i_7] [i_8] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)225)) & (((/* implicit */int) (unsigned short)13611))));
                arr_70 [i_13] [i_8] = ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned short)38282))))));
            }
            for (unsigned long long int i_16 = 2; i_16 < 11; i_16 += 2) 
            {
                arr_73 [i_16] [i_8] [i_7] [i_7] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_16] [i_16 - 1] [i_16] [i_8] [i_16]))));
                /* LoopSeq 2 */
                for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    arr_78 [i_7] [i_7] [i_7] [i_8] [i_16 - 2] [i_17] = ((/* implicit */unsigned char) (+(arr_8 [i_7] [(unsigned char)6] [i_17] [i_7])));
                    arr_79 [i_7] [i_8] = ((/* implicit */unsigned char) ((arr_52 [i_16 - 1] [i_16 + 1] [i_16 - 2] [i_17] [i_17] [i_17]) % (((/* implicit */int) (signed char)89))));
                }
                for (int i_18 = 2; i_18 < 10; i_18 += 1) 
                {
                    arr_84 [i_18] [10] [(unsigned short)2] [(unsigned short)2] [i_18] = ((/* implicit */short) (-(((var_4) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_81 [i_7] [i_7] [i_16] [i_18]))))));
                    arr_85 [i_7] [i_18] [i_16] [i_16] [i_7] [i_7] &= ((/* implicit */unsigned int) ((32767) < (((/* implicit */int) var_5))));
                }
                arr_86 [i_16] [i_8] [i_7] [i_7] = ((/* implicit */long long int) (-(1665208360U)));
            }
            arr_87 [i_7] = ((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (short)-5431)));
            /* LoopNest 2 */
            for (unsigned char i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    {
                        arr_94 [i_7] [i_8] [i_19] [i_19] [i_20 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2994702939U))));
                        arr_95 [i_20 - 1] [0ULL] [0ULL] [i_8] [i_7] = ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_13 [i_7] [i_19] [i_19])) + (((/* implicit */int) var_8)))) + (2147483647))) << (((((unsigned int) arr_4 [i_20 - 1] [i_8] [i_19])) - (4294967240U)))));
                        arr_96 [i_7] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (signed char)(-127 - 1))))))));
                    }
                } 
            } 
        }
        for (long long int i_21 = 1; i_21 < 9; i_21 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 1) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (short i_24 = 3; i_24 < 10; i_24 += 3) 
                    {
                        {
                            arr_111 [i_7] [i_7] [i_7] [i_21 + 3] [i_21] [(signed char)5] [i_24] = ((/* implicit */short) (~(((/* implicit */int) arr_77 [i_23] [i_23] [i_23] [i_21 - 1] [i_7]))));
                            arr_112 [i_7] [i_21 + 3] [i_22] [i_23] [(unsigned char)8] [i_22] [i_23] |= ((/* implicit */unsigned short) arr_74 [i_24] [i_24 + 1] [i_24] [i_24 - 1] [i_21 + 1] [i_21]);
                            arr_113 [i_7] [i_21] [i_7] [i_21] [i_21] [6U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)228))))) ? (2699928072U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_25 = 0; i_25 < 12; i_25 += 4) 
            {
                arr_118 [i_21] [i_25] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) (unsigned char)228)))) + (2147483647))) << (((((/* implicit */int) var_7)) - (157)))));
                /* LoopSeq 1 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_27 = 2; i_27 < 10; i_27 += 1) 
                    {
                        arr_124 [i_25] [(unsigned short)2] [i_21] [6ULL] [(unsigned short)2] [i_27] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)6259)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))));
                        arr_125 [i_21] [i_21] [i_25] [i_21] [i_21] [i_7] = ((/* implicit */int) ((unsigned short) arr_98 [i_26] [i_27 - 2]));
                    }
                    for (long long int i_28 = 0; i_28 < 12; i_28 += 1) /* same iter space */
                    {
                        arr_130 [i_28] [i_26] [i_25] [i_21] [9ULL] [(signed char)0] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_120 [i_7] [i_21 + 2] [i_7] [i_26])))));
                        arr_131 [i_7] [i_21 + 1] [i_25] [i_25] [i_25] [i_28] [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)28)) << (((((/* implicit */int) arr_21 [i_21])) - (53324)))))) ? (arr_75 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) (~(arr_50 [i_28] [i_7] [i_25] [i_25] [(unsigned short)8] [i_7] [i_7]))))));
                        arr_132 [i_21] = ((/* implicit */short) ((unsigned long long int) (-(var_16))));
                        arr_133 [0LL] [2ULL] [i_25] [i_21 + 2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((((/* implicit */int) (signed char)-102)) != (((/* implicit */int) arr_58 [i_21] [i_25] [i_26]))))));
                    }
                    for (long long int i_29 = 0; i_29 < 12; i_29 += 1) /* same iter space */
                    {
                        arr_136 [i_25] [i_21] [i_25] [i_26] [i_29] = ((/* implicit */unsigned long long int) (((-(var_14))) << (((((/* implicit */int) arr_13 [i_29] [i_25] [i_21])) - (13562)))));
                        arr_137 [i_7] [i_25] [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_93 [i_21 - 1] [i_21 - 1] [i_26])) || (((/* implicit */_Bool) arr_93 [i_21 + 3] [i_21] [i_26]))));
                    }
                    for (long long int i_30 = 0; i_30 < 12; i_30 += 1) /* same iter space */
                    {
                        arr_141 [i_7] [2U] [i_21 + 2] [i_25] [i_25] [i_30] [i_30] &= ((/* implicit */signed char) ((unsigned int) 4064U));
                        arr_142 [i_7] [i_21] [i_21] [i_26] [i_30] = ((/* implicit */unsigned short) var_11);
                    }
                    arr_143 [i_7] [i_25] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) - (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))) - (1400895575U)))));
                    arr_144 [i_21] [i_21] [i_21] [i_26] [(unsigned short)4] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_21 + 2])) ? (17592186044412ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                }
            }
            arr_145 [i_21] = (~(((((/* implicit */_Bool) (short)0)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_114 [i_21] [i_21] [i_7] [i_7]))))));
        }
    }
    var_18 = ((/* implicit */unsigned short) (!(((((((/* implicit */int) (unsigned short)63434)) * (((/* implicit */int) (short)5430)))) > (((/* implicit */int) var_11))))));
    var_19 = ((/* implicit */_Bool) var_11);
}
