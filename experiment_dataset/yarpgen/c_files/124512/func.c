/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124512
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    arr_10 [i_0] [6LL] [6LL] [i_2] = ((/* implicit */unsigned long long int) ((long long int) ((int) ((((/* implicit */_Bool) arr_2 [i_1] [4U])) ? (((/* implicit */int) arr_4 [i_2])) : (arr_9 [i_2] [8ULL] [i_0] [(unsigned char)11])))));
                    arr_11 [i_1] = ((/* implicit */long long int) arr_2 [i_2] [i_0]);
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((int) arr_6 [i_0] [i_0] [i_1] [i_2]))) ? (((/* implicit */int) arr_3 [i_2] [i_2] [i_2])) : (((/* implicit */int) ((unsigned char) arr_8 [4ULL] [i_1] [(unsigned char)4] [i_2])))))))));
                    arr_12 [1U] [1U] [(unsigned short)0] [i_1] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [(unsigned short)4]);
                }
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((signed char) ((unsigned int) ((unsigned short) arr_14 [i_3] [i_3] [i_1] [(unsigned char)2])))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1 - 2] [(signed char)2] [i_3])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_3])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_0] [3LL] [i_3]))) : (((/* implicit */int) ((unsigned short) arr_1 [4LL])))))) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [(unsigned char)2])))));
                }
                for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned char) ((unsigned short) ((short) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_4] [i_1 - 1] [i_0]))) : (arr_17 [i_0] [i_1 - 1] [i_4])))));
                                var_20 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_4] [i_0])) ? (((/* implicit */int) arr_2 [i_4] [i_4])) : (((int) arr_3 [i_0] [(unsigned short)1] [i_4])))));
                                arr_24 [i_0] [i_4] [i_4] &= ((/* implicit */long long int) arr_3 [(short)7] [i_4] [(short)7]);
                                var_21 = ((/* implicit */unsigned long long int) ((int) ((int) ((unsigned char) arr_3 [(unsigned char)2] [i_1] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((unsigned int) ((unsigned char) ((unsigned short) arr_21 [(unsigned short)10] [i_0] [i_1] [i_4] [i_7] [i_7])))))));
                        arr_27 [i_7] [(unsigned char)8] [i_4] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((unsigned char) arr_25 [i_7] [i_0] [i_1 + 2] [i_0] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_20 [i_0])))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_4] [i_7])) ? (((/* implicit */unsigned int) ((int) arr_20 [i_1 + 1]))) : (((unsigned int) arr_0 [i_4]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_8 = 2; i_8 < 11; i_8 += 3) /* same iter space */
                        {
                            arr_30 [i_0] [i_1] [i_4] [i_1] [i_7] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_28 [i_8] [i_7] [i_4] [i_1] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_4] [i_7])) : (arr_28 [i_0] [i_0] [i_4] [i_7] [i_7]))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((long long int) ((unsigned char) arr_4 [i_7])))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 2; i_9 < 11; i_9 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_0] [i_1 - 1] [6LL] [i_7] [i_9] [i_7])) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [i_7] [i_9])) : (((/* implicit */int) arr_7 [i_0] [(unsigned char)2] [3] [i_7])))));
                            arr_33 [i_7] [i_7] = arr_20 [0];
                            arr_34 [i_0] [i_1] [i_4] [i_1] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_7]))) ? (((/* implicit */int) ((signed char) arr_8 [i_9] [i_4] [i_1] [i_0]))) : (((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((unsigned int) arr_2 [(unsigned short)0] [i_1])))));
                    var_26 = ((/* implicit */int) arr_26 [i_4] [10LL] [i_1] [i_1] [i_1] [i_0]);
                    arr_35 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((signed char) arr_25 [i_1] [i_1] [i_0] [i_0] [i_1]));
                }
                arr_36 [2LL] &= ((/* implicit */unsigned short) ((int) arr_0 [4]));
                arr_37 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((int) arr_26 [i_1] [i_0] [3LL] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_28 [i_0] [(signed char)5] [i_0] [i_0] [i_0]))) ? (((int) arr_4 [i_1 + 2])) : (((/* implicit */int) ((signed char) arr_32 [3U] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) arr_26 [i_1] [i_1 + 1] [i_0] [i_0] [i_0] [i_0]))));
                /* LoopSeq 3 */
                for (unsigned char i_10 = 3; i_10 < 8; i_10 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        arr_43 [i_0] [i_10] [i_0] = ((/* implicit */unsigned int) arr_39 [i_0] [i_10] [i_10] [i_0]);
                        var_28 = arr_32 [i_11] [i_10] [2] [1];
                        arr_44 [i_1 - 1] [i_10 + 2] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_32 [i_11] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_29 [i_0] [i_1 - 1] [i_10] [i_11] [i_10] [i_10]))))) ? (((unsigned long long int) arr_14 [i_0] [i_1] [i_10] [i_11])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)2] [i_10])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_10 + 4] [i_1])) ? (((/* implicit */int) arr_3 [(unsigned short)3] [(unsigned short)3] [i_11])) : (((/* implicit */int) arr_18 [i_1 + 2] [i_1 - 2] [i_1]))))) ? (((((/* implicit */_Bool) arr_28 [i_10] [i_0] [i_10] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [(signed char)8] [i_11])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_10] [i_11])))) : (((/* implicit */int) arr_25 [i_10] [i_10] [i_1 - 2] [i_0] [i_10])))) : (((int) ((long long int) arr_9 [i_0] [i_1] [i_10 - 1] [i_11])))));
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_11] [i_10 - 2])) ? (((unsigned int) ((_Bool) arr_31 [i_11] [i_11] [i_10 + 1] [i_1] [i_1] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((long long int) arr_0 [i_0]))))))))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((short) ((unsigned char) ((((/* implicit */_Bool) arr_26 [i_11] [i_11] [i_0] [i_10 - 2] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1 + 2] [i_10 + 2] [i_11])) : (((/* implicit */int) arr_39 [i_11] [i_1] [i_10] [i_11])))))))));
                    }
                    arr_45 [i_10] [i_1] = arr_15 [i_0] [i_1] [i_10] [i_10];
                    var_31 ^= ((/* implicit */unsigned char) arr_21 [i_0] [i_0] [i_0] [6] [i_0] [i_0]);
                }
                for (unsigned char i_12 = 3; i_12 < 8; i_12 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        for (int i_14 = 2; i_14 < 10; i_14 += 1) 
                        {
                            {
                                var_33 = arr_55 [i_0] [i_1 + 2] [i_1] [i_1] [i_13] [i_14];
                                var_34 = ((((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_12])) ? (((long long int) arr_31 [i_0] [i_1 - 1] [i_0] [i_14] [i_14] [i_0] [i_14])) : (((/* implicit */long long int) arr_13 [i_14] [i_13] [i_12] [i_0])));
                                arr_57 [i_0] [i_1] [i_12] = arr_16 [i_12] [i_13] [i_12] [i_12];
                            }
                        } 
                    } 
                    arr_58 [i_12] [i_1] = ((/* implicit */int) arr_18 [(unsigned char)0] [(_Bool)1] [(_Bool)1]);
                    arr_59 [i_12] [i_1] [i_12] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_12]);
                }
                for (unsigned char i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    arr_62 [(short)1] [i_15] [i_15] [6LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((long long int) arr_13 [i_0] [i_1] [i_15] [i_15]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_0] [i_1 - 1] [i_15])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_51 [i_0] [i_1] [i_0]))))) ? (arr_6 [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_28 [i_0] [i_0] [i_0] [i_1] [i_15]))))))));
                    var_35 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_15])) ? (((((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_15] [i_15])) ? (((/* implicit */int) arr_39 [i_0] [i_1] [i_0] [i_15])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_15] [i_0])))) : (((/* implicit */int) arr_22 [(unsigned short)11] [9LL] [i_1] [i_1 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_42 [i_15])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0])) ? (arr_13 [i_1 - 1] [i_0] [i_1 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [2] [i_1] [i_15])))))) ? (((/* implicit */long long int) ((unsigned int) arr_32 [i_1] [i_1] [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_19 [0U] [i_1 + 2] [i_1] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [11] [11] [i_15] [i_15] [i_15]))) : (arr_15 [i_15] [i_0] [i_0] [i_0])))))));
                }
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */long long int) var_5))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2))) : (((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) var_3)))))) : (var_4))))));
    var_37 = ((/* implicit */int) ((unsigned long long int) var_2));
    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_7)) : (var_2))))) ? (((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((long long int) var_9)) : (((long long int) var_14)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_3))) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_15)))))))));
}
