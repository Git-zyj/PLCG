/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142740
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            arr_10 [i_1] [i_3] [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) arr_7 [i_4] [i_0] [(signed char)9] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_3)))) : (arr_3 [i_1] [i_1]));
                            arr_11 [(unsigned short)16] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_3 - 2]);
                            arr_12 [i_0] [i_1] [10] [i_2] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))));
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_2 [i_1 + 1]));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 3) 
                        {
                            arr_17 [i_3] [1ULL] [(unsigned char)14] [(unsigned char)14] [i_3 - 4] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_8 [i_0] [i_5] [i_3 - 1] [i_3 - 1] [i_2] [i_5 + 1])) ^ ((-(var_4)))));
                            var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_9))))) ? (var_1) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 1] [i_1]))) : (((arr_2 [i_5 - 1]) ? (arr_16 [i_0] [i_1] [i_3 - 4] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_3] [3LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [i_0] [i_6])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0 - 2] [i_1] [i_3] [i_6])) ? (var_1) : (((/* implicit */unsigned int) arr_3 [i_1] [i_1]))))) : (arr_6 [i_1 + 1] [i_2] [i_0 - 1] [i_6] [i_6])));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) var_6)) : (arr_3 [i_1] [i_1 + 1])));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (arr_8 [i_3 - 2] [i_6] [i_3 - 2] [i_1 + 1] [i_1 - 2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 1])) >= (((/* implicit */int) var_9))))))));
                            arr_21 [i_0 - 2] [i_0 - 2] [i_2] [i_1] = ((/* implicit */signed char) ((unsigned char) arr_9 [i_0 + 1] [i_3 - 1] [i_1 + 2]));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            arr_24 [15ULL] [i_1] [i_2] [(unsigned char)17] [1LL] = ((/* implicit */int) var_2);
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) & (var_8))))))));
                        }
                    }
                    for (unsigned short i_8 = 2; i_8 < 17; i_8 += 3) 
                    {
                        arr_27 [i_1] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_8 [i_0] [i_1] [i_2] [i_1] [6LL] [i_0])))) == (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_8))))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1 - 2] [i_8 - 1])) ? (arr_18 [i_8] [i_1] [i_8] [i_1] [i_8 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0 + 1] [i_0])) && (((/* implicit */_Bool) var_5)))))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_1)))));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned int) arr_23 [i_0 - 2] [i_1 + 1] [i_2] [i_2] [i_0])) : (var_17))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_26 [i_2] [i_8] [i_1 + 1] [(unsigned short)10] [i_0])))))))) ? ((((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) var_7)) ? (arr_8 [i_2] [i_2] [i_2] [(signed char)7] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((arr_23 [i_0] [i_2] [i_2] [i_2] [i_0]) + (((/* implicit */int) var_6))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((unsigned long long int) arr_4 [9LL] [i_1] [i_1])))))));
                    }
                    arr_28 [i_0] [i_1] [i_0 - 2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_5 [(signed char)15] [i_1] [i_1]))))) ? (min((var_5), (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2])))) : (((/* implicit */int) arr_14 [i_1 + 1] [i_1] [i_0 + 1]))))) ? (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_0] [i_0] [i_1]))) : (var_1))) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_2] [i_2])) >> (((arr_22 [i_0] [i_1] [i_1] [i_1 - 1] [i_2]) - (1550489235U))))) : (((((/* implicit */_Bool) arr_14 [i_2] [(unsigned char)8] [(unsigned char)8])) ? (var_5) : (arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [13])))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
    {
        for (unsigned int i_10 = 2; i_10 < 15; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
                    {
                        var_24 = ((((/* implicit */_Bool) var_13)) ? (arr_18 [i_10 - 2] [8LL] [i_10] [8LL] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_10] [i_10 - 2] [i_10 + 3] [i_10 + 1] [i_10 + 3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_12] [(unsigned char)11] [i_13])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) arr_25 [i_9] [i_9] [i_11] [i_9] [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_15 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))));
                            var_26 = ((/* implicit */int) ((((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ? (((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_10 - 2] [i_13] [i_10 + 2])))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_5))));
                            var_28 = ((arr_42 [i_12] [i_11] [i_11] [i_10 - 2] [i_14]) ? (((/* implicit */unsigned long long int) var_1)) : (arr_34 [i_10 + 3] [i_10 - 1] [i_12]));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_11] [i_10 + 1] [i_11] [i_9] [i_9])) ? (((/* implicit */int) arr_26 [i_15] [i_15] [i_10 - 1] [i_10 + 1] [i_10 + 2])) : (arr_23 [i_9] [i_10 - 2] [i_15] [i_10 - 2] [i_10 - 2])));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_10] [i_10 + 3] [i_10] [i_10])) ? (arr_16 [i_10] [i_10 + 1] [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_10] [i_10])))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) 
                        {
                            var_31 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_44 [i_11] [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_16] [i_16] [i_16])))))) ? (((arr_2 [i_9]) ? (((/* implicit */int) arr_46 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_40 [i_16])))) : (arr_31 [i_10 + 1])));
                            var_32 = ((/* implicit */int) var_6);
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_9] [i_11] [i_12])) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) arr_23 [(unsigned char)14] [i_10] [i_11] [i_10] [i_16])) ? (arr_50 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 2; i_17 < 14; i_17 += 3) 
                        {
                            var_34 = ((/* implicit */int) min((var_34), (((int) arr_4 [i_10 + 1] [i_10 + 2] [i_10 + 2]))));
                            var_35 = ((/* implicit */int) max((var_35), (((((/* implicit */_Bool) arr_29 [i_17 + 1] [i_10 + 3])) ? (((/* implicit */int) arr_39 [i_10] [i_10 - 2] [i_9] [i_17 - 2] [i_10 - 2] [i_10 - 2])) : (((/* implicit */int) arr_29 [i_17 + 4] [i_10 + 3]))))));
                        }
                        arr_54 [i_12] [14] [i_10] [i_9] [i_9] = ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned long long int) arr_3 [(short)16] [i_12])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 1) /* same iter space */
                    {
                        arr_57 [i_9] [i_10] [i_10] [i_10] [(unsigned char)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (var_5)))) ? (((/* implicit */int) arr_29 [i_10 + 3] [i_10 + 3])) : (arr_3 [2U] [i_10 - 2])));
                        /* LoopSeq 1 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_60 [i_9] [i_10] [i_11] [i_19] [i_19] = ((((/* implicit */int) arr_40 [i_10 - 1])) >> (((((/* implicit */int) arr_40 [i_10 - 1])) - (3643))));
                            var_36 = (-(((arr_2 [i_9]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))));
                        }
                        var_37 = ((/* implicit */int) var_15);
                        arr_61 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_10 + 3])) ? (var_4) : (arr_37 [i_10] [i_10 + 2] [i_10 + 2] [i_10 - 2])));
                    }
                    arr_62 [i_9] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) arr_51 [i_9] [i_10 - 2] [i_10] [i_10] [i_11] [i_11] [i_11])) : (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))), (((/* implicit */unsigned long long int) var_3))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_20 = 2; i_20 < 18; i_20 += 3) /* same iter space */
    {
        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (+(arr_63 [i_20 + 2]))))));
        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((unsigned char) arr_63 [i_20 + 3])))));
    }
    /* vectorizable */
    for (unsigned char i_21 = 2; i_21 < 18; i_21 += 3) /* same iter space */
    {
        var_40 |= ((/* implicit */long long int) ((signed char) arr_66 [i_21 - 1]));
        var_41 |= ((unsigned short) arr_65 [i_21] [i_21 + 3]);
        var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_21 - 2] [i_21])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_64 [i_21]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_21 + 2]))) : (((((/* implicit */_Bool) arr_66 [i_21])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_63 [17]))))))));
    }
    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_13)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) max((var_2), (var_3)))) : (((var_14) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))))))));
}
