/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161610
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
    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_9)))))) >= (((unsigned int) 2147483647))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (+(min((((((/* implicit */int) var_0)) + (((/* implicit */int) var_0)))), (((/* implicit */int) var_7))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) var_9))))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                    {
                        arr_13 [(unsigned short)0] [i_2] [i_2] [5] [i_2] [i_2] = ((short) var_15);
                        var_18 = ((/* implicit */unsigned char) ((arr_5 [i_4]) / (((/* implicit */long long int) arr_0 [i_4]))));
                    }
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        var_19 ^= ((/* implicit */unsigned char) var_15);
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_16 [i_3] [i_3] [i_1] [(short)5] [(short)3])))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_3] [i_5])) ? (arr_11 [i_3] [i_3] [(short)7] [i_3] [i_3] [i_3]) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_2] [(unsigned char)1] [i_3] [i_5] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))));
                    }
                    arr_17 [i_3] [i_2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                }
            } 
        } 
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (var_8))))));
    }
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 2; i_7 < 23; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                {
                    arr_28 [i_6] [i_7] [i_6] [i_6] = min((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_22 [i_6] [i_7] [i_6]))))), (((((/* implicit */_Bool) arr_27 [i_7] [i_7])) ? (((/* implicit */int) arr_22 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_27 [i_7] [i_7])))));
                    var_22 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_24 [i_7 + 1] [i_7] [(unsigned short)1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7 - 1] [i_7]))))) != (((((/* implicit */_Bool) arr_24 [i_7 - 2] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7 + 1] [i_7]))) : (arr_23 [i_7 - 2] [i_7])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [15LL] [15LL])) / (((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (arr_25 [i_6] [i_8] [(unsigned short)5] [18U]))))))))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_7] [i_9])) | (((/* implicit */int) arr_18 [i_7 + 1] [i_8]))))) ? ((~(((/* implicit */int) arr_18 [i_6] [i_7 - 1])))) : (((((/* implicit */_Bool) arr_18 [i_8] [(unsigned short)8])) ? (((/* implicit */int) arr_18 [i_6] [i_6])) : (((/* implicit */int) arr_18 [i_6] [i_7])))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            var_25 -= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_20 [(signed char)4])))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_6]))))) : (((var_13) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_27 [i_6] [(_Bool)1]))))));
                            var_27 = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_27 [i_6] [i_6])))) < (((/* implicit */int) arr_33 [i_6] [i_6] [i_6])));
                            arr_35 [i_6] = ((/* implicit */short) ((unsigned short) arr_25 [i_6] [22] [i_7 - 2] [i_10]));
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_11 = 1; i_11 < 22; i_11 += 1) /* same iter space */
                        {
                            arr_38 [(_Bool)1] [i_7] [i_8] [i_7] [i_6] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [(unsigned char)1] [i_6] [i_8] [i_7] [i_6] [i_6]))))) ? (((/* implicit */int) min((var_12), (var_1)))) : ((+(((/* implicit */int) arr_36 [i_6] [i_7] [i_8] [i_8] [i_6])))))));
                            arr_39 [i_6] [i_11] [i_9] [i_9] [i_8] [i_7] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [(_Bool)1] [i_6] [i_8] [(short)17] [i_9] [i_11])))))))) && (arr_33 [i_6] [i_6] [i_11])));
                            arr_40 [i_6] [(short)21] [(short)21] [i_8] [8LL] [i_11] = ((/* implicit */unsigned int) arr_34 [i_9] [i_7 - 2] [i_7 - 2] [i_6]);
                            var_28 ^= ((/* implicit */unsigned int) arr_32 [(signed char)20] [i_7] [i_7] [16] [i_11]);
                        }
                        for (unsigned short i_12 = 1; i_12 < 22; i_12 += 1) /* same iter space */
                        {
                            arr_43 [i_6] = ((/* implicit */_Bool) arr_26 [i_6]);
                            var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_8] [i_6])) ? (((/* implicit */int) ((unsigned short) arr_22 [i_6] [i_7] [i_7]))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_6] [i_7] [i_8] [i_9])) ? (((/* implicit */int) arr_18 [i_6] [i_8])) : (((/* implicit */int) arr_24 [i_12] [i_9] [i_6]))))))))));
                        }
                        for (unsigned short i_13 = 1; i_13 < 22; i_13 += 1) /* same iter space */
                        {
                            arr_46 [i_6] [i_7] [i_6] [i_9] [i_13] = ((/* implicit */short) arr_41 [i_6] [(unsigned char)17] [(unsigned char)17] [i_8] [(_Bool)1] [i_13]);
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_26 [i_9]))));
                            var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_6])) || (((/* implicit */_Bool) arr_21 [i_6])))))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            var_32 = (i_6 % 2 == 0) ? (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) << (((((/* implicit */int) arr_29 [i_6] [i_6] [i_9] [i_7 - 1] [i_6] [i_14])) - (151))))))) : (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) << (((((((/* implicit */int) arr_29 [i_6] [i_6] [i_9] [i_7 - 1] [i_6] [i_14])) - (151))) - (21)))))));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */int) arr_34 [i_9] [i_8] [(short)20] [i_6])) * (((/* implicit */int) arr_33 [(signed char)8] [i_8] [i_7])))) >> (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_41 [i_6] [i_7] [i_8] [i_9] [i_14] [i_8]))))))) : (arr_49 [i_6] [i_6] [(signed char)15] [i_6] [i_14])));
                            var_34 = max((((/* implicit */int) arr_26 [i_6])), (min((((((/* implicit */int) (unsigned char)109)) >> (((((/* implicit */int) (signed char)90)) - (68))))), (((var_11) | (var_8))))));
                            var_35 = ((/* implicit */unsigned long long int) min((max((arr_45 [i_14] [i_6] [i_7]), (arr_45 [i_8] [i_6] [i_6]))), (min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) arr_32 [i_6] [i_7] [i_6] [i_7] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_6] [(unsigned short)18] [i_6] [i_7 + 1] [i_6] [i_7 - 2]))) : (var_10)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            arr_53 [i_6] [i_7] [i_8] [i_6] = ((/* implicit */int) min(((-(arr_32 [i_9] [i_6] [i_6] [(unsigned char)17] [i_7 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_15] [i_7] [i_8])) || (((/* implicit */_Bool) arr_32 [14] [14] [i_6] [i_9] [i_7 + 1])))))));
                            arr_54 [i_6] [i_6] [i_6] [i_8] [i_9] [i_15] [2U] = ((/* implicit */short) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))), (arr_30 [i_15] [i_9] [i_8] [9ULL] [9ULL])));
                        }
                    }
                }
            } 
        } 
    } 
}
