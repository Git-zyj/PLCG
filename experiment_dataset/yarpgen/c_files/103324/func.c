/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103324
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
    var_10 = ((/* implicit */unsigned char) ((unsigned short) (_Bool)1));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(var_1)))) : (((/* implicit */int) ((((var_6) % (((/* implicit */unsigned long long int) var_3)))) != (((/* implicit */unsigned long long int) (~(var_3)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_2 - 1] [i_0] = ((/* implicit */short) min((var_3), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0])) << (((var_8) - (12930623278365526390ULL))))))));
                    arr_10 [2U] [i_1] [10U] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_8) >= (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [10ULL])))))) / (((/* implicit */int) arr_7 [i_0] [8] [i_2] [i_2 - 1]))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_12 [i_3])), (((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) arr_11 [i_3] [i_3])) : (arr_13 [i_3] [i_3]))))) <= (var_7)));
        arr_15 [i_3] = ((/* implicit */unsigned char) arr_11 [i_3] [i_3]);
        arr_16 [i_3] = ((/* implicit */int) arr_11 [i_3] [i_3]);
    }
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            arr_21 [20] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) var_6)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                arr_24 [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) arr_13 [20U] [i_6]);
                arr_25 [i_4] [i_4] = ((/* implicit */unsigned short) ((var_0) ^ (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_18 [i_4] [i_5])))))));
            }
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                arr_28 [i_7] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_18 [i_4] [i_5])))));
                arr_29 [i_4] [i_5] [i_4] = ((/* implicit */int) var_9);
            }
            arr_30 [i_4] [i_4] [i_5] = ((/* implicit */_Bool) min(((~(((((/* implicit */int) arr_18 [i_5] [i_5])) & (((/* implicit */int) arr_22 [i_4] [5U] [i_5] [i_5])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_17 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_4] [i_5] [i_5])))))))))));
            arr_31 [i_4] [i_5] = ((/* implicit */int) ((_Bool) (((!(((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_5])))) ? (min((arr_17 [i_4]), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_4] [i_4] [i_4])) >= (((/* implicit */int) var_2)))))))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            arr_36 [i_4] = ((/* implicit */signed char) arr_26 [i_4] [i_4] [i_4]);
            arr_37 [i_4] [i_4] [i_8] = ((/* implicit */int) arr_20 [i_4]);
        }
        for (unsigned int i_9 = 3; i_9 < 20; i_9 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                arr_44 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (var_7)))) : (((((/* implicit */_Bool) -332994196)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (_Bool)1))))));
                arr_45 [i_4] [i_4] [i_9] [(_Bool)0] = ((/* implicit */short) (-(arr_11 [i_9] [i_10])));
            }
            for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                arr_49 [i_4] [i_9] [i_11] = ((/* implicit */unsigned int) arr_48 [i_4] [i_4]);
                arr_50 [i_4] [i_9] [i_9] [i_9 - 1] = ((/* implicit */int) var_3);
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        {
                            arr_55 [i_4] [i_9 - 2] [i_4] = ((/* implicit */unsigned short) var_0);
                            arr_56 [i_4] [(unsigned char)11] = ((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)1)), (592077966U)));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_14 = 3; i_14 < 19; i_14 += 4) 
            {
                arr_60 [i_4] [i_9] [i_14] = ((((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) var_0))))) ^ (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_52 [i_4]))))));
                arr_61 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_1))));
            }
            for (unsigned char i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    arr_68 [i_15] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_42 [i_9 - 2])))) != (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_9 - 2])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        arr_71 [i_4] [i_4] [i_16] = ((/* implicit */int) ((short) ((int) arr_11 [i_4] [i_4])));
                        arr_72 [i_4] [i_4] [i_16] [i_16] [i_17] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_33 [i_4] [i_4])) || (((/* implicit */_Bool) arr_66 [i_17])))) ? (((((/* implicit */int) var_1)) * (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        arr_76 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (arr_51 [i_18] [i_9 + 1] [i_9 - 3] [i_9] [i_9 - 1] [i_9])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_4] [i_9 - 3] [i_9] [i_15] [i_4] [i_18]))) : (var_7)))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_73 [i_9] [i_9] [i_4])), (arr_42 [16LL]))))))) : (((/* implicit */long long int) (-(arr_41 [i_9] [i_9]))))));
                        arr_77 [i_4] [i_16] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_8))))))), (max((((/* implicit */int) ((unsigned char) arr_13 [i_4] [i_15]))), (var_0)))));
                        arr_78 [i_4] [i_4] [i_4] [i_16] = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) (-(var_9)))) >= ((-(var_8))))));
                    }
                    arr_79 [i_15] [i_15] = ((unsigned int) arr_35 [i_9] [i_15] [i_9]);
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 2) 
                {
                    arr_84 [i_19] [i_19] [(short)6] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_46 [i_15] [i_9 - 1] [i_9] [i_9 - 2])) ? (((/* implicit */int) arr_46 [i_4] [i_9] [i_4] [i_9 - 1])) : (((/* implicit */int) arr_46 [i_15] [i_19] [0ULL] [i_9 - 1]))));
                    arr_85 [i_4] [i_9] [i_9] = ((/* implicit */short) ((_Bool) arr_64 [i_9 - 2] [i_9 + 1]));
                }
                for (unsigned short i_20 = 2; i_20 < 19; i_20 += 1) 
                {
                    /* LoopSeq 4 */
                    for (int i_21 = 0; i_21 < 21; i_21 += 3) 
                    {
                        arr_90 [i_4] [i_9] [i_9] [i_4] [i_21] = ((/* implicit */signed char) ((-24660869781346674LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59154)))));
                        arr_91 [i_4] [i_4] [i_15] [i_21] [i_20 + 2] [i_20 - 2] [i_21] = ((/* implicit */_Bool) arr_27 [i_21]);
                        arr_92 [i_4] [i_21] [i_15] [i_20] [(short)8] [i_21] = ((/* implicit */unsigned int) arr_66 [i_20]);
                    }
                    for (short i_22 = 0; i_22 < 21; i_22 += 1) 
                    {
                        arr_96 [i_4] = (~(var_0));
                        arr_97 [i_22] [i_20] [i_9] [i_15] [i_9 + 1] [i_9] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_4)) | (((/* implicit */int) arr_67 [(unsigned short)4] [4LL] [13] [(unsigned short)4] [i_22] [i_20]))))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(var_7)))) && (((/* implicit */_Bool) arr_58 [i_20 + 1] [i_22]))))))));
                    }
                    for (signed char i_23 = 0; i_23 < 21; i_23 += 4) 
                    {
                        arr_100 [(signed char)15] [0] = ((/* implicit */_Bool) arr_41 [i_15] [i_20 + 2]);
                        arr_101 [19U] [i_9 + 1] [i_15] [i_15] [i_20] [i_20] [i_15] = ((unsigned int) arr_11 [i_15] [i_23]);
                    }
                    for (signed char i_24 = 3; i_24 < 19; i_24 += 1) 
                    {
                        arr_104 [i_4] [(unsigned char)13] [i_15] [i_15] [i_24] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_20] [i_20] [i_20]))) < (max((arr_17 [i_9]), (((/* implicit */unsigned long long int) arr_38 [i_15] [i_15] [i_4])))))));
                        arr_105 [i_4] [i_9] [i_4] [i_20] [i_4] = ((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_4] [i_4] [i_15])) % (((/* implicit */int) arr_88 [i_4] [i_15] [i_9 + 1] [i_20 - 2] [i_24 - 3] [i_20])))))));
                        arr_106 [i_4] [i_4] [i_20] = ((signed char) ((signed char) min((var_9), (((/* implicit */unsigned int) arr_53 [i_4] [i_9] [i_20] [i_24])))));
                    }
                    arr_107 [i_4] = ((/* implicit */unsigned char) max((max((max((((/* implicit */unsigned long long int) var_3)), (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_103 [i_4] [i_9] [i_15] [i_4] [i_20])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_4] [i_9] [i_15])))))))), (((/* implicit */unsigned long long int) ((arr_65 [i_9 - 3] [i_9 - 2] [i_9 - 1]) / (((/* implicit */long long int) var_0)))))));
                    arr_108 [i_15] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_67 [i_9 - 1] [i_15] [i_20] [i_20 + 1] [i_20 - 2] [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_11 [i_4] [i_4]))));
                }
                arr_109 [i_4] [i_9] [i_9] [i_9] = ((/* implicit */short) ((arr_64 [i_9 + 1] [i_15]) ? (((/* implicit */unsigned long long int) (-(arr_32 [i_9 - 3])))) : (((arr_64 [i_9 - 1] [i_9]) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
            }
            arr_110 [i_4] [i_4] |= ((/* implicit */unsigned char) arr_27 [i_4]);
            arr_111 [i_4] [i_9 - 2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((592077978U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))) && (((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_4] [i_4])))));
        }
        for (signed char i_25 = 0; i_25 < 21; i_25 += 1) 
        {
            arr_114 [i_4] [i_4] [i_4] = ((/* implicit */short) var_9);
            arr_115 [i_4] [i_25] = ((/* implicit */unsigned long long int) arr_64 [i_4] [i_4]);
            arr_116 [i_25] = ((/* implicit */int) (((-(var_9))) > (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_43 [i_25]))))), (var_9)))));
            arr_117 [i_4] [i_25] = ((/* implicit */int) arr_63 [i_4]);
            /* LoopSeq 1 */
            for (unsigned char i_26 = 0; i_26 < 21; i_26 += 1) 
            {
                arr_122 [i_4] [i_4] [i_26] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_4] [i_25] [i_26]))) != (((((/* implicit */unsigned int) ((var_0) ^ (((/* implicit */int) arr_42 [i_4]))))) & (min((4294967279U), (((/* implicit */unsigned int) (_Bool)0))))))));
                arr_123 [i_26] = ((/* implicit */int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_102 [i_4] [i_26]))) * (min((var_9), (((/* implicit */unsigned int) arr_52 [i_26]))))))));
            }
        }
    }
    for (unsigned char i_27 = 0; i_27 < 21; i_27 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            for (unsigned int i_29 = 3; i_29 < 20; i_29 += 1) 
            {
                {
                    arr_133 [i_27] [i_28] [i_29 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_127 [i_29 + 1] [i_29] [i_29 - 2]))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_52 [i_28]))))))) : ((~(var_7)))));
                    arr_134 [i_27] [i_28] [i_29] [i_29 - 2] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) ((signed char) var_9))))));
                    arr_135 [i_29] [i_29] [i_28] [i_27] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_126 [i_27]))));
                }
            } 
        } 
        arr_136 [i_27] [i_27] = ((/* implicit */unsigned int) (((~(arr_132 [i_27]))) & (((int) arr_132 [i_27]))));
        arr_137 [i_27] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_27]))) / (var_3)));
    }
    for (unsigned char i_30 = 0; i_30 < 21; i_30 += 2) /* same iter space */
    {
        arr_140 [1U] = ((/* implicit */unsigned char) var_1);
        arr_141 [i_30] = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) arr_58 [i_30] [i_30])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_125 [i_30]))) : (var_6))), (var_6)))));
    }
}
