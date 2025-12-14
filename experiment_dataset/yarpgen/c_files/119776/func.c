/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119776
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max(((unsigned short)36168), (var_0))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 4; i_2 < 22; i_2 += 3) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_6 [i_2 - 2] [i_2 + 1]))));
                    var_21 = ((/* implicit */short) var_4);
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [(unsigned char)23] [i_2 - 4] [i_2 - 1])) >= (((/* implicit */int) arr_7 [i_2] [i_2 - 4] [i_2]))));
                    var_23 += ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2]);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_3 + 2] [i_2 - 4] [i_2 - 4])) ? (6553448908205569478LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_3])) * (((/* implicit */int) (unsigned short)36180)))))));
                            arr_14 [i_3] [i_1] [i_2] [i_3 + 2] [i_3 - 1] [i_2] = ((/* implicit */int) ((unsigned short) (signed char)64));
                        }
                        for (int i_5 = 2; i_5 < 22; i_5 += 1) 
                        {
                            var_25 += ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_1] [8LL] [i_2] [i_1] [i_3] [18])))))));
                            arr_18 [i_3] [i_3 + 1] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [i_5 - 2] [12U] [i_3] [(signed char)13] [i_3] [(signed char)13] [i_1]))));
                            arr_19 [i_3] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) 2926488938928626695LL)))));
                        }
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            arr_22 [i_6] [i_3 + 2] [i_3] [19] [19] = ((/* implicit */signed char) ((long long int) arr_13 [i_3 + 1] [14ULL] [(unsigned short)17] [19ULL] [i_3 - 1] [i_3 + 1]));
                            arr_23 [i_0] [i_1] [i_3] [(unsigned short)16] [i_6] [i_6] [(signed char)20] = ((/* implicit */unsigned short) ((int) arr_11 [i_6] [i_1] [i_3] [i_3 - 1] [i_6] [i_6] [i_0]));
                            var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)31)) ? (-1688247398614545182LL) : (((/* implicit */long long int) 4294967295U)))) - (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_3])) | (((/* implicit */int) arr_13 [i_6] [i_3 - 1] [i_2 + 1] [i_1] [0U] [i_0])))))));
                            arr_24 [i_3] [i_3] = ((/* implicit */short) ((unsigned long long int) arr_11 [i_2 - 2] [i_2 - 3] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 - 3] [i_2 - 1]));
                            arr_25 [22] [(unsigned char)14] [i_3] [22] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)13588))));
                        }
                        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47009)) ? (arr_10 [i_3] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                    }
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        arr_30 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)29374);
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) (signed char)127))))))));
                    }
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_29 = ((/* implicit */signed char) (~(min((-5095981791794579615LL), (9223372036854775807LL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        for (short i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            {
                                arr_41 [i_10] [i_9] [(unsigned char)7] [(unsigned short)6] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [(signed char)5] [(unsigned char)13] [i_1] [(unsigned char)10] [i_1]))))) ? ((-(((/* implicit */int) ((arr_5 [i_1] [i_8] [i_10]) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-116)))))))) : (max(((-(((/* implicit */int) arr_38 [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_7 [i_8] [i_9] [i_10]))))));
                                arr_42 [i_9] [i_10] [i_9] [i_8] [i_10] [(unsigned short)8] = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_1] [i_8] [i_10]))) / (((unsigned long long int) (unsigned short)36160)))));
                                arr_43 [i_0] [i_10] [i_1] [i_0] [i_1] [i_10] = ((long long int) var_13);
                                arr_44 [i_0] [i_1] [i_1] [10] [i_1] [i_1] [i_1] &= ((/* implicit */short) arr_38 [(short)5] [i_1] [(short)3]);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (~(((((/* implicit */_Bool) 3920504821U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (1215083643136239620LL))))))));
                }
                for (unsigned int i_11 = 1; i_11 < 22; i_11 += 3) 
                {
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_48 [i_11 - 1] [i_11 + 2] [i_11])) ? (((/* implicit */int) arr_37 [i_11 - 1] [i_11 + 2] [i_11] [i_0] [i_11 + 2])) : (((/* implicit */int) arr_9 [i_11 - 1] [i_0] [i_11] [i_11] [i_11 + 2] [16LL])))), (((/* implicit */int) ((unsigned short) arr_9 [i_11 - 1] [i_0] [i_11 - 1] [i_11] [i_11 + 2] [i_11 - 1]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (int i_13 = 2; i_13 < 21; i_13 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((var_15) + (2147483647))) >> (((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_12] [20ULL] [i_0])) ? (arr_32 [(_Bool)1] [23LL]) : (((/* implicit */int) (signed char)-63)))) <= (((((/* implicit */_Bool) (signed char)-63)) ? (-1853917174) : (((/* implicit */int) (short)-342))))))))))));
                                arr_55 [4] [i_1] [i_11 + 1] [(short)12] [i_12] = ((/* implicit */short) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_12] [i_11] [i_12] [i_13] [i_12])))) ? (((/* implicit */int) arr_34 [i_13 + 1] [i_13 - 2] [i_11 + 1])) : (1700155523)))) % (9223372036854775807LL)));
                                var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_54 [i_11 - 1] [i_13 + 2] [(unsigned short)23] [i_13] [i_13 + 3]) * (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))))) ? (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_52 [i_0] [i_1] [i_11] [i_12] [i_0] [i_1])))))) : ((((_Bool)1) ? (((/* implicit */int) arr_26 [i_13 + 3] [i_13 + 1] [i_11 - 1] [i_11] [i_11 + 1])) : (((/* implicit */int) var_14)))))))));
                                var_34 *= ((/* implicit */unsigned long long int) (unsigned char)4);
                                var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_11) : (((/* implicit */int) var_10)))), (((/* implicit */int) ((unsigned short) arr_17 [(short)1] [i_12] [(unsigned char)17] [(short)1] [i_0]))))))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_11 + 2] [i_1] [i_11 + 2] [i_11] [i_11 + 1])) ? (-649923948) : (((/* implicit */int) arr_16 [i_0] [(signed char)2] [0ULL] [i_0] [i_11 + 1] [(unsigned short)10] [i_11 + 1]))))) ? ((-(((/* implicit */int) arr_16 [12] [i_1] [i_11] [i_0] [i_11 + 2] [16ULL] [i_11 - 1])))) : (((/* implicit */int) ((short) arr_48 [i_11 - 1] [i_11 - 1] [i_11])))));
                    /* LoopSeq 3 */
                    for (unsigned short i_14 = 2; i_14 < 23; i_14 += 2) 
                    {
                        var_37 = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [(unsigned short)15]))));
                        /* LoopSeq 2 */
                        for (long long int i_15 = 0; i_15 < 24; i_15 += 4) 
                        {
                            arr_60 [21] [i_1] [(short)1] [i_14] [i_15] = ((/* implicit */short) max(((unsigned short)36168), (((/* implicit */unsigned short) (short)-1540))));
                            arr_61 [(short)11] [19LL] = ((/* implicit */signed char) ((((arr_36 [i_14 - 1] [i_14 - 1] [i_14 + 1] [i_14 - 1]) - (arr_36 [i_14 - 1] [i_14 - 1] [i_14] [(unsigned short)19]))) << ((((~(arr_36 [i_14 - 1] [i_14 - 1] [i_14] [8LL]))) - (2356037447U)))));
                            var_38 = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) ((int) (unsigned short)49152))))));
                            arr_62 [i_0] [i_1] [i_11] [i_14] = ((/* implicit */long long int) ((int) (+(((/* implicit */int) arr_13 [i_0] [(unsigned short)1] [i_11 + 1] [i_14] [i_14 - 2] [i_15])))));
                            arr_63 [i_0] [4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_14 - 2] [i_11 - 1] [i_11 - 1])) || (((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)13] [21ULL])))))));
                        }
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            var_39 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142))) < (2804744425U)));
                            var_40 = ((((/* implicit */_Bool) ((int) (signed char)-127))) ? (((/* implicit */int) ((unsigned char) arr_52 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11] [i_11 + 2] [i_0]))) : (((/* implicit */int) min((arr_52 [(signed char)12] [(unsigned short)14] [i_11] [i_11] [i_11 + 2] [i_0]), (arr_52 [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 2] [i_11 + 2] [i_14])))));
                        }
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)36160)), ((+(arr_5 [i_0] [i_0] [17LL])))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (short)23746)))) : ((~(((/* implicit */int) arr_48 [i_1] [i_1] [i_11]))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_42 -= ((/* implicit */short) (signed char)74);
                        var_43 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(arr_45 [i_11 + 1] [i_11 - 1] [i_11 - 1])))), ((~(arr_10 [i_0] [i_17])))));
                    }
                    for (unsigned short i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        var_44 &= ((/* implicit */short) max((((/* implicit */int) ((unsigned short) max((((/* implicit */int) arr_37 [i_18] [i_1] [i_1] [i_1] [i_0])), (-1917504879))))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_68 [(signed char)6] [i_1] [i_11] [i_18]))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))));
                        arr_70 [(unsigned short)9] [6] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_18] [i_1] [i_1]))) / (max((((arr_8 [10LL] [i_1] [i_11] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned short)3] [i_18]))))), (arr_28 [i_0] [i_0])))));
                        /* LoopSeq 4 */
                        for (int i_19 = 0; i_19 < 24; i_19 += 3) 
                        {
                            arr_74 [i_0] [i_18] [i_11] [i_18] [(signed char)10] = ((/* implicit */_Bool) max((max((arr_36 [i_11 + 1] [i_11 + 2] [i_11 + 2] [i_11 - 1]), (((/* implicit */unsigned int) arr_73 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 + 2])))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)21871)), (arr_16 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_0] [i_11 + 2] [i_11 + 1] [i_11 + 1]))))));
                            var_45 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) (unsigned short)51096)), (386050292U)))));
                            arr_75 [i_0] [i_19] [19ULL] [i_19] [i_19] = ((/* implicit */short) (!(((/* implicit */_Bool) var_16))));
                        }
                        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                        {
                            var_46 = ((/* implicit */long long int) (unsigned char)7);
                            var_47 = ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) 716668431U)))))) ? (((arr_78 [i_11 + 1] [i_11 + 1] [i_20 - 1]) ? (((/* implicit */int) arr_78 [i_11 + 1] [i_18] [i_20 - 1])) : (((/* implicit */int) arr_78 [i_11 + 1] [i_11] [i_20 - 1])))) : (((((/* implicit */_Bool) (unsigned short)29346)) ? (min((((/* implicit */int) var_14)), (134217727))) : (((/* implicit */int) max((((/* implicit */short) arr_68 [i_1] [i_1] [3ULL] [6LL])), (arr_6 [i_18] [i_20 - 1]))))))));
                            var_48 = min((((((unsigned long long int) arr_37 [i_0] [i_1] [i_11] [i_0] [i_20])) / (min((arr_20 [(unsigned short)16] [i_1]), (((/* implicit */unsigned long long int) arr_52 [i_0] [i_1] [i_1] [i_1] [i_20] [i_1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_66 [i_11 - 1] [i_20 - 1] [(signed char)4] [i_20 - 1])) & (((/* implicit */int) var_4))))));
                        }
                        for (long long int i_21 = 0; i_21 < 24; i_21 += 2) 
                        {
                            arr_83 [i_0] [i_0] [i_11 + 1] [19] [i_21] = ((/* implicit */int) var_12);
                            arr_84 [(unsigned short)8] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_77 [i_11] [(unsigned short)22] [i_21]))));
                            arr_85 [i_0] [(_Bool)1] [i_11 + 1] = ((/* implicit */unsigned int) max(((-(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_13)) - (28196))))))), (((((/* implicit */_Bool) 386050314U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 17439137896165138895ULL))))) : (((/* implicit */int) arr_79 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            var_49 = ((/* implicit */short) (~((~(arr_40 [i_0] [i_0] [i_11 + 2] [i_18])))));
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            arr_89 [i_0] [1] [i_0] = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_69 [i_11 + 1] [i_18] [i_1] [i_11 + 1] [(signed char)8])) || (((/* implicit */_Bool) arr_69 [i_11 + 1] [(signed char)13] [i_11] [(short)16] [(unsigned char)1]))))));
                            var_50 &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_66 [i_11 + 2] [i_11] [i_11] [i_11 - 1]))));
                        }
                        var_51 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                    }
                    var_52 ^= ((/* implicit */unsigned int) (+(max((arr_65 [i_0] [i_1] [13LL] [i_0] [i_11 - 1]), (arr_65 [i_11] [i_1] [i_11 + 2] [i_11] [i_11 + 1])))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_23 = 0; i_23 < 19; i_23 += 4) 
    {
        for (long long int i_24 = 2; i_24 < 16; i_24 += 3) 
        {
            {
                arr_94 [i_23] [i_23] [i_23] = ((/* implicit */unsigned short) ((((arr_12 [i_24] [i_24 - 1] [i_23] [i_24] [i_23] [i_24] [i_24 + 2]) ? (((/* implicit */int) arr_12 [i_24 + 1] [(_Bool)1] [i_23] [i_24 + 3] [i_23] [i_24 + 3] [i_24 + 3])) : (((/* implicit */int) arr_12 [i_24] [i_24] [i_23] [i_24 + 1] [i_23] [i_24 + 3] [i_24 + 3])))) != (((arr_12 [i_24] [i_24 - 1] [i_23] [14] [i_23] [i_24] [i_24 + 1]) ? (((/* implicit */int) arr_12 [4ULL] [i_24] [i_23] [(short)14] [i_23] [i_24] [i_24 + 2])) : (((/* implicit */int) arr_12 [i_23] [i_23] [i_23] [(short)8] [i_23] [i_24] [i_24 + 2]))))));
                var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) max((arr_86 [i_24] [i_24 - 2] [i_23] [(unsigned char)19] [3LL] [7] [i_23]), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 268431360U)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_29 [i_23] [15ULL])))))))))));
            }
        } 
    } 
}
