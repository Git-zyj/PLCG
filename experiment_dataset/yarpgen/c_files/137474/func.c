/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137474
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
    var_18 = ((/* implicit */unsigned long long int) (((~(var_16))) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [(short)2] [i_0] = ((/* implicit */int) arr_1 [i_0]);
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_0])) : (-1155348318))), (((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_0])))))))));
            var_20 = ((/* implicit */long long int) ((arr_3 [(_Bool)1] [i_1]) < (((/* implicit */unsigned int) ((1155348293) << (((((/* implicit */int) arr_1 [i_1])) - (51285))))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                for (unsigned int i_3 = 3; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_9)), (((unsigned int) 2147483635))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) min((min((arr_9 [i_1] [i_2 - 2] [i_4 + 1] [(signed char)18]), (arr_9 [(unsigned short)14] [i_2 + 1] [i_4 - 2] [i_4]))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0])) || (((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_1] [i_4]))))) - (((/* implicit */int) arr_13 [i_2 + 2] [i_3 - 3])))))));
                            var_22 = ((/* implicit */int) arr_13 [(unsigned char)0] [(unsigned char)0]);
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) 1155348313)) ? (arr_3 [i_4 + 2] [i_1]) : (((/* implicit */unsigned int) -1155348294)))))) << (((((/* implicit */int) ((unsigned char) min((arr_7 [i_2] [i_2]), (var_3))))) - (134))))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_18 [i_1] [i_1] [(signed char)3] [i_1] [(signed char)4] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (signed char)-98)) || (((/* implicit */_Bool) var_7)))) && (((((/* implicit */_Bool) arr_4 [i_1] [i_0])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0])))))) && (((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_0] [i_1] [(signed char)15]))))))));
                            arr_19 [i_0] [i_0] [i_1] [i_1] [3U] [i_1] [i_1] = ((/* implicit */short) arr_0 [i_0]);
                        }
                        var_24 = ((/* implicit */int) arr_3 [i_0] [i_0]);
                    }
                } 
            } 
        }
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 18; i_7 += 2) 
            {
                for (int i_8 = 1; i_8 < 19; i_8 += 1) 
                {
                    {
                        arr_26 [i_6] &= ((/* implicit */_Bool) (signed char)(-127 - 1));
                        arr_27 [i_0] [7] [i_7] [(short)9] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_9 [i_0] [i_7 - 1] [i_7 - 1] [i_8 + 1]) : (arr_9 [i_7] [i_7 - 1] [i_6] [i_8 + 1])))), (((((/* implicit */_Bool) arr_0 [i_8 - 1])) ? (((arr_20 [i_0]) + (((/* implicit */unsigned long long int) 1155348271)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_7] [i_6] [i_7])) ? (((/* implicit */int) arr_22 [i_0] [i_0])) : (((/* implicit */int) var_4)))))))));
                        arr_28 [i_7] [i_6] [i_6] = ((/* implicit */int) arr_17 [i_0] [i_0] [i_8] [i_0] [i_0] [i_0] [i_7]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_9 = 3; i_9 < 19; i_9 += 3) 
            {
                arr_31 [5U] [5U] [5U] = ((/* implicit */unsigned long long int) var_4);
                var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_20 [(unsigned char)12]), (((/* implicit */unsigned long long int) ((unsigned char) arr_13 [i_6] [i_6])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [4LL] [i_6] [i_9 - 3])) ? (-1155348285) : (((/* implicit */int) (signed char)-98))))))))));
            }
        }
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((int) var_10))) ? (((min((1847196676U), (((/* implicit */unsigned int) (unsigned char)169)))) | ((~(0U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_11 - 1] [i_11] [i_11] [0LL] [i_0])) ? (((/* implicit */int) arr_16 [i_11] [(unsigned short)18] [i_11])) : (((((/* implicit */int) arr_24 [i_0] [i_10] [14] [i_11])) | (((/* implicit */int) (unsigned char)86))))))))))));
                var_27 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [18U] [(unsigned char)14] [(unsigned char)14] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [16] [i_0]))) : (9223372036854775807LL))))));
                arr_37 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) max((((long long int) (unsigned short)65526)), (((/* implicit */long long int) arr_22 [i_11 - 1] [(_Bool)1]))))) ? (((((/* implicit */_Bool) arr_24 [i_11 - 1] [i_11 - 1] [(unsigned short)18] [(unsigned short)18])) ? (((/* implicit */unsigned long long int) var_15)) : (((unsigned long long int) arr_8 [i_0])))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0])) ? (arr_21 [i_0] [i_10] [i_0]) : (((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_11]))))) & ((((_Bool)0) ? (18446744073709551592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [(short)2] [i_0] [i_0] [i_0])))))))));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (+(((/* implicit */int) arr_32 [i_0] [(signed char)14])))))));
                arr_41 [i_0] [i_0] = ((/* implicit */unsigned short) arr_30 [i_0] [i_10]);
                arr_42 [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_23 [i_12] [i_12] [i_12]));
            }
            arr_43 [5LL] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_32 [i_10] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [(_Bool)1] [i_0]))) : (((((/* implicit */_Bool) arr_23 [(short)4] [(unsigned short)14] [(short)4])) ? (arr_36 [i_0]) : (((/* implicit */unsigned int) 1155348296)))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_23 [8LL] [i_10] [i_10])))) ? (min((((/* implicit */unsigned int) 1768886120)), (4294967267U))) : (arr_11 [i_10])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) -1155348294)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_10] [i_13] [i_14]))))))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_10] [i_14])) ? (((((/* implicit */long long int) ((/* implicit */int) (short)11738))) % (var_14))) : (((/* implicit */long long int) (-(arr_7 [i_14] [i_14]))))));
                }
                for (int i_15 = 1; i_15 < 18; i_15 += 1) 
                {
                    arr_51 [i_0] [i_0] [(signed char)1] [(signed char)1] [(signed char)1] |= ((/* implicit */long long int) -1155348308);
                    arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) arr_11 [i_13]);
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    arr_55 [i_0] [i_0] [i_0] [i_0] [13] = ((/* implicit */int) 0U);
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_13] [i_16] [i_10] [i_16] [10LL]))));
                }
            }
        }
        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */int) max((var_32), ((~(((/* implicit */int) arr_32 [i_17] [i_0]))))));
            arr_58 [i_0] [i_17] [i_0] = ((/* implicit */unsigned short) ((((unsigned int) var_2)) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
        }
        var_33 |= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [9LL]))) : (min((((arr_40 [18]) | (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((((var_9) + (2147483647))) << (0ULL))))))));
        /* LoopNest 2 */
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            for (unsigned int i_19 = 1; i_19 < 19; i_19 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_22 [i_0] [i_18])) : (((/* implicit */int) arr_22 [i_18] [(unsigned short)15]))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))));
                    arr_64 [i_0] [i_18] [i_18] = ((/* implicit */int) max((((/* implicit */unsigned int) ((unsigned short) (short)32739))), ((((~(0U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_19 + 1] [i_19 + 1] [i_18 - 1])))))));
                    var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) min((((/* implicit */int) arr_63 [i_0] [i_19 - 1] [i_19 - 1] [16LL])), (((((/* implicit */int) (signed char)99)) << (((((/* implicit */int) var_13)) + (89))))))))));
                    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) arr_38 [(signed char)18] [(unsigned short)12])) ? (0U) : (((/* implicit */unsigned int) var_9)))))), (((/* implicit */unsigned int) min((arr_15 [(unsigned char)6] [i_18 - 1] [10] [(unsigned short)4] [(signed char)8]), (arr_15 [i_18] [i_18 - 1] [i_18] [i_18] [(unsigned short)16])))))))));
                }
            } 
        } 
    }
}
