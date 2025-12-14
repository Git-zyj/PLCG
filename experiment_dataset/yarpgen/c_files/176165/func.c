/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176165
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
    var_14 = ((/* implicit */int) var_13);
    var_15 = ((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_6 [i_0 - 2] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 25165824U)) < (7286726765658613998ULL))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4606253002404153383LL)));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_3 [i_0 + 1]) < (arr_3 [i_0 - 4])))) | (arr_3 [i_0 - 2])));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_3])) ? (((((/* implicit */_Bool) arr_12 [i_3] [i_2])) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) arr_12 [i_3] [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 - 1]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_0])))))));
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) arr_2 [i_0 - 3] [i_1 - 2]);
                        }
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                        {
                            arr_16 [i_0] [i_1 + 1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_0 - 4])) || (((/* implicit */_Bool) arr_9 [i_0 + 1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 - 4])) < (((/* implicit */int) arr_9 [i_0 - 4]))))) : (((((/* implicit */_Bool) arr_9 [i_0 - 4])) ? (((/* implicit */int) arr_9 [i_0 - 2])) : (((/* implicit */int) arr_9 [i_0 - 4]))))));
                            arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((((/* implicit */unsigned long long int) arr_11 [i_0 - 3] [i_5] [i_2] [i_3] [i_5])), (arr_5 [i_0]))))) << (((((/* implicit */int) arr_11 [i_5] [i_1] [i_2] [i_0 - 3] [i_1 - 1])) - (19661)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                        {
                            var_18 = arr_11 [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_1 - 1] [i_1];
                            var_19 = ((/* implicit */short) ((arr_18 [3U] [i_0 - 3] [3U]) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 1] [i_1 - 1] [i_2] [5LL])) : (((((/* implicit */_Bool) -4606253002404153384LL)) ? (((/* implicit */int) (unsigned short)21493)) : (((/* implicit */int) arr_11 [i_0] [i_6] [i_2] [i_2] [i_0]))))));
                            var_20 = ((/* implicit */unsigned short) arr_9 [i_0 - 4]);
                            var_21 = ((/* implicit */unsigned int) ((arr_18 [i_0 - 1] [(unsigned char)8] [i_3]) ? (8669536089197969882LL) : (((/* implicit */long long int) ((/* implicit */int) (short)23982)))));
                        }
                        arr_20 [(signed char)1] [(signed char)1] [i_1] [(signed char)1] = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_0] [2U]);
                        /* LoopSeq 3 */
                        for (long long int i_7 = 1; i_7 < 8; i_7 += 4) /* same iter space */
                        {
                            arr_23 [i_7] [(unsigned short)4] [i_7] [i_2] [i_7] [(short)7] [i_0] = ((/* implicit */unsigned short) arr_11 [i_0 - 4] [i_0] [i_0] [i_0 - 4] [i_0]);
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((arr_21 [i_0 - 3] [i_1 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 + 1]), (arr_21 [i_0 - 3] [i_1 - 1] [i_7 + 1] [i_7] [i_7] [(signed char)0]))))));
                        }
                        for (long long int i_8 = 1; i_8 < 8; i_8 += 4) /* same iter space */
                        {
                            var_23 -= ((/* implicit */unsigned char) arr_18 [9ULL] [i_3] [i_0 - 1]);
                            arr_26 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] [(signed char)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_12 [i_2] [i_0]) << (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 + 2] [i_8 + 2]))) : (arr_8 [i_0 + 1] [(short)2] [i_0] [i_0])))))) ? (max((arr_8 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 4]), (((/* implicit */unsigned int) arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 4])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_3] [i_1] [i_3])))));
                            var_24 = ((/* implicit */unsigned short) arr_2 [5U] [i_8]);
                        }
                        for (long long int i_9 = 3; i_9 < 10; i_9 += 1) 
                        {
                            arr_31 [i_0 - 2] [i_9] [(unsigned short)5] [i_3] [i_9] = ((/* implicit */unsigned int) arr_10 [i_1] [i_1]);
                            var_25 = ((/* implicit */unsigned short) arr_22 [i_9] [i_9 - 1] [(unsigned short)8] [(unsigned short)0] [i_1] [i_1 + 1]);
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_24 [i_3] [i_2] [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_24 [i_9] [i_0] [i_0 - 1] [(unsigned char)10] [(unsigned short)0])) : (((/* implicit */int) arr_24 [i_1] [10LL] [i_0 - 4] [i_0 - 1] [i_0])))), (((((/* implicit */int) arr_24 [i_9] [i_9] [i_0 - 3] [i_0] [i_0])) ^ (((/* implicit */int) arr_24 [i_9] [i_9] [i_0 - 3] [i_0] [i_0 - 3])))))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */int) max((arr_7 [i_0] [i_1] [i_0]), (arr_7 [i_0] [i_1 - 2] [i_1 - 2])))) ^ (((/* implicit */int) arr_27 [i_0] [i_1 + 2] [i_0] [i_3] [i_1 - 1]))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
                        {
                            var_28 -= ((((/* implicit */_Bool) ((arr_27 [i_0 + 1] [i_1] [i_0 + 1] [i_0] [i_0]) ? (((/* implicit */int) arr_25 [i_0 - 3] [i_1] [i_2] [i_3] [(unsigned char)0])) : (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0] [(unsigned char)4] [i_0]))))) ? (min((1125899906842624LL), (((/* implicit */long long int) (unsigned short)21493)))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned short)0] [i_3]))));
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_10 [i_2] [i_2]);
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_0 - 1] [i_0] [i_2] [i_3] [(signed char)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 + 1])) >> (((((/* implicit */int) arr_0 [i_1 - 2])) - (8801)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 + 2])))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_34 [i_0 - 3] [i_1 - 1] [i_1 + 2]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_0] [i_11] [i_2] [i_3] [i_11] [i_11])) ? (((/* implicit */int) arr_25 [i_0] [i_1] [i_2] [i_3] [i_11])) : (((/* implicit */int) arr_14 [i_0] [7] [7] [i_3]))))) : (arr_22 [i_0] [i_0] [i_2] [1ULL] [i_0] [i_3])))) ? (((((/* implicit */_Bool) arr_33 [i_1 + 2] [i_0 - 4] [i_0 - 1] [i_0] [i_0 - 4] [i_0 - 4])) ? (((((/* implicit */_Bool) arr_35 [i_11] [i_3] [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_35 [i_2] [i_1] [(unsigned short)6] [i_2] [(unsigned short)6] [i_11])) : (((/* implicit */int) arr_39 [0] [(short)0] [i_0])))) : (((/* implicit */int) arr_10 [i_11] [i_1])))) : (((/* implicit */int) arr_40 [i_0 - 2] [i_1 - 2] [i_1 + 1] [i_1] [i_1] [i_1 - 1]))));
                            arr_42 [i_0] [i_0] [i_0 - 4] [i_0] [i_0 - 4] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) ((arr_34 [5] [i_2] [i_3]) && (((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_2] [i_3] [i_11]))))) < (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_3] [i_11]))))), (max((((/* implicit */int) arr_27 [i_1] [i_1] [i_1 - 1] [(unsigned short)7] [(unsigned char)4])), (((((/* implicit */int) arr_32 [i_1 + 2] [i_1 + 2])) ^ (((/* implicit */int) arr_2 [i_0] [i_3]))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
                    {
                        arr_47 [i_0] = ((/* implicit */unsigned int) arr_34 [i_1 - 1] [i_0 - 4] [i_0 - 1]);
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 1; i_13 < 9; i_13 += 3) 
                        {
                            arr_52 [i_1 - 2] [i_1] [i_1] [i_1 - 1] [i_1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_0 - 3] [i_1 + 2] [i_2] [0] [i_13] [(unsigned char)0])) ? (((/* implicit */int) arr_38 [i_0] [i_1] [i_1] [i_2] [i_12] [(unsigned char)10])) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-12)) || (((/* implicit */_Bool) (unsigned short)65519)))))));
                            arr_53 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_50 [i_13 + 1] [9U] [i_13] [i_13] [i_13] [i_1 + 1] [i_1 - 2])) ? (((/* implicit */int) arr_38 [i_13] [i_13 + 2] [i_13 + 1] [i_13] [i_13 + 2] [i_12])) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 - 1] [(unsigned short)5] [i_0 - 1])) >= (((/* implicit */int) arr_18 [i_0 - 3] [i_0 - 1] [i_0 - 3])))))));
                            arr_54 [i_0] [i_1] [i_2] [i_12] [i_12] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_13 - 1])) ? (arr_5 [i_13 + 2]) : (arr_5 [i_13 + 2])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            arr_58 [i_0 - 1] [i_1] [i_2] [i_12] [i_14] [i_12] = ((/* implicit */unsigned int) ((arr_46 [i_0]) ? (((/* implicit */int) arr_46 [i_0])) : (((/* implicit */int) arr_33 [i_0] [i_0 - 4] [i_1 - 2] [i_1] [i_1 - 2] [i_1]))));
                            arr_59 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0 - 4] [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_37 [i_0 - 4] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))));
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) arr_51 [i_0] [(unsigned short)9] [i_0 - 1] [i_0] [i_0 - 3]))));
                            arr_60 [i_0 - 4] [i_1] [i_0 - 4] [i_12] [i_14] = ((/* implicit */unsigned int) arr_40 [i_0] [i_0] [i_1] [2LL] [i_12] [i_14]);
                            var_31 = arr_8 [(_Bool)0] [i_1] [i_1 + 1] [i_1];
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_63 [i_0] [i_0] [i_2] [2U] [i_15] [i_0] [i_0] = ((18273036343576794734ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)49))));
                            arr_64 [4U] [i_1] [i_2] [10U] [i_15] = ((/* implicit */unsigned short) arr_11 [i_1] [i_1] [i_2] [(short)6] [i_12]);
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_16 = 0; i_16 < 11; i_16 += 4) /* same iter space */
                    {
                        var_32 += ((((/* implicit */int) arr_9 [i_0 - 2])) >= (((/* implicit */int) arr_34 [i_0 - 2] [i_0 - 2] [i_1 + 2])));
                        var_33 = ((/* implicit */short) arr_66 [i_16]);
                        /* LoopSeq 2 */
                        for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51250)) ? (((/* implicit */int) (unsigned short)6449)) : (((/* implicit */int) (short)-6211))))) ? (((/* implicit */int) arr_33 [i_0] [i_1] [i_0 + 1] [i_16] [i_17] [i_16])) : (((/* implicit */int) arr_29 [i_0 - 3]))));
                            var_35 = ((/* implicit */unsigned short) ((2147483647) / (((/* implicit */int) (unsigned char)185))));
                            var_36 += ((/* implicit */unsigned short) arr_49 [i_0] [i_1] [i_2] [i_16] [i_17]);
                        }
                        for (unsigned int i_18 = 1; i_18 < 8; i_18 += 3) 
                        {
                            arr_73 [i_1] [i_1] [i_16] [(short)3] = ((/* implicit */unsigned short) ((arr_55 [i_0] [i_0 - 1] [i_0 - 4] [i_0 + 1] [i_1 + 2]) ? (((/* implicit */int) arr_55 [2U] [i_0 - 2] [i_0] [i_0 - 2] [i_1 + 1])) : (((/* implicit */int) arr_55 [i_0 - 1] [i_0] [(_Bool)1] [i_0 - 3] [i_1 - 1]))));
                            arr_74 [i_18 + 1] [i_18] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_71 [i_0 - 1] [i_2]);
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_18])) ? (arr_43 [i_0 - 2] [i_0 - 3] [i_0 + 1] [i_0 - 3]) : (((/* implicit */long long int) arr_45 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                            arr_75 [i_18] [i_2] [i_1] [i_0 - 1] = ((/* implicit */int) arr_49 [i_0 - 3] [(_Bool)1] [i_1 + 1] [i_2] [i_18 + 2]);
                        }
                    }
                    var_38 = arr_24 [i_2] [i_1] [i_1] [i_2] [i_2];
                }
            } 
        } 
    } 
}
