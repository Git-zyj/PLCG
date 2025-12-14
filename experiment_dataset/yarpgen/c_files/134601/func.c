/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134601
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
                var_16 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_0])) < (((/* implicit */int) arr_1 [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (signed char i_3 = 3; i_3 < 19; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) min((var_18), (((-6756809074227545083LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */unsigned int) arr_7 [i_3] [i_4] [i_6])), (var_4))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) max((((arr_5 [i_3 - 3]) * ((+(0ULL))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                    /* LoopSeq 3 */
                    for (long long int i_7 = 1; i_7 < 20; i_7 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) var_10);
                        var_22 = ((/* implicit */signed char) (~(18446744073709551615ULL)));
                        var_23 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_7 [i_2] [i_3 + 1] [i_2])), (((((/* implicit */int) arr_7 [i_7] [i_4 - 1] [(_Bool)1])) | (((/* implicit */int) arr_7 [i_3 + 3] [i_3 + 1] [0LL]))))));
                        var_24 = ((/* implicit */int) var_4);
                    }
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) arr_12 [i_8] [i_3 - 1] [i_4 - 1] [i_8]))))))));
                        var_26 = ((/* implicit */_Bool) arr_4 [i_8]);
                        var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_21 [i_2] [i_3 + 1] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) arr_16 [i_2] [i_8] [(short)18])) : (var_6)))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_2] [i_3 - 1] [i_3 - 1] [i_8] [i_8])) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) arr_7 [i_2] [i_3 + 1] [i_8]))))), (var_8))) : (((/* implicit */long long int) arr_21 [i_2] [i_3 - 1] [i_8] [i_8]))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((unsigned long long int) arr_6 [i_9])))));
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) arr_25 [i_2] [i_2] [(signed char)5] [2U])), (var_7))))))))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-13924)) ? (max((arr_19 [i_2] [i_9] [i_4 - 1] [8LL] [8LL] [i_9]), (((/* implicit */unsigned long long int) arr_14 [i_2] [(signed char)14] [i_2] [i_2] [i_2] [(short)10])))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) var_11))))), ((-(8359275666957639876LL))))))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */short) ((unsigned char) var_9))))))) - (max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_9] [i_3] [i_10]))))), (((unsigned int) var_10))))));
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) min((((long long int) ((((/* implicit */int) arr_11 [i_3] [i_3 - 1] [i_3] [i_3 + 3] [i_3])) | (((/* implicit */int) (short)16352))))), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_10] [9ULL] [i_4])) | (((/* implicit */int) arr_17 [i_9] [i_3 + 1] [i_4 - 1] [i_9] [i_10]))))))))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_10 [i_4] [i_3 - 1] [i_4] [i_4 - 1])), ((~(((/* implicit */int) arr_10 [i_4] [i_3 + 3] [(unsigned char)19] [i_4 - 1]))))));
                            var_34 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53978))) | (0ULL)))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned char) (((~(max((arr_5 [i_4 - 1]), (((/* implicit */unsigned long long int) var_7)))))) ^ (((/* implicit */unsigned long long int) var_9))));
                            var_36 = ((/* implicit */unsigned int) var_7);
                        }
                        var_37 = ((/* implicit */signed char) (~((-(arr_31 [i_2] [i_2] [i_4] [21U] [i_3 + 1] [i_9] [i_4])))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_13 = 3; i_13 < 19; i_13 += 3) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned char) arr_22 [(signed char)3] [i_4] [i_4 - 1]);
                            var_39 *= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_2] [(short)14] [i_4] [i_9] [12ULL]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_3 + 3] [16LL] [i_9]))) : (arr_8 [i_3] [i_3 - 2]));
                            var_40 *= ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_13 - 2] [20LL] [i_4] [i_3])) & (((/* implicit */int) (!(((/* implicit */_Bool) (short)20341)))))));
                            var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (+(arr_34 [i_9] [i_9] [(unsigned short)10] [i_9] [i_9] [i_9]))))));
                        }
                        /* vectorizable */
                        for (long long int i_14 = 3; i_14 < 19; i_14 += 3) /* same iter space */
                        {
                            var_42 = ((/* implicit */signed char) arr_37 [i_14] [i_4] [i_4] [i_4] [i_2]);
                            var_43 = ((/* implicit */unsigned long long int) arr_37 [i_2] [i_4] [i_4] [i_9] [i_14]);
                            var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) arr_38 [i_2]))));
                            var_45 = (-(((/* implicit */int) arr_17 [i_4] [i_14 + 1] [i_4] [i_3 + 1] [i_4])));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 3) 
                        {
                            var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) ((unsigned int) ((arr_22 [i_3] [i_2] [i_3 + 3]) | (((/* implicit */unsigned long long int) arr_18 [i_4 - 1] [i_4 - 1] [i_3 + 3] [(unsigned char)20]))))))));
                            var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) arr_15 [4ULL] [i_3 + 1] [i_2] [10U] [10U] [i_3] [i_3]))));
                            var_48 &= ((/* implicit */short) max((((/* implicit */long long int) arr_30 [i_2] [i_3] [i_4 - 1] [i_9] [i_15])), ((~(arr_35 [(signed char)7] [i_4 - 1] [(signed char)1])))));
                            var_49 = ((/* implicit */signed char) (+(((/* implicit */int) arr_27 [i_3 + 3] [i_4] [i_3 + 2] [i_3] [i_3 + 3] [i_4 - 1]))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_16 = 0; i_16 < 24; i_16 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_17 = 1; i_17 < 22; i_17 += 1) 
        {
            for (unsigned int i_18 = 3; i_18 < 21; i_18 += 3) 
            {
                for (long long int i_19 = 0; i_19 < 24; i_19 += 2) 
                {
                    {
                        var_50 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_52 [i_16] [i_17 + 1] [9LL] [i_18 + 2] [i_19])));
                        var_51 |= ((/* implicit */int) var_12);
                        var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) ((long long int) ((unsigned char) 18446744073709551589ULL))))));
                    }
                } 
            } 
        } 
        var_53 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_44 [i_16])), ((~(var_6)))));
        var_54 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) arr_51 [i_16] [(short)10] [(short)14] [12LL])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_16] [i_16]))) & (var_10)))))));
    }
    var_55 = ((/* implicit */unsigned short) 1892824793U);
}
