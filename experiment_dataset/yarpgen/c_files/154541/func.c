/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154541
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned int) (((!(arr_0 [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))))) : (((/* implicit */int) min((arr_6 [11] [i_1] [i_0 + 1]), (((((/* implicit */int) var_11)) > (((/* implicit */int) (signed char)-66)))))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0 + 1] [i_0] [i_2 - 2] [i_0 + 1] [i_3] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) max((var_5), (var_5)))) ? (((/* implicit */int) (!(var_12)))) : (((/* implicit */int) arr_3 [i_0])))));
                            arr_14 [(short)10] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(signed char)20] [i_0 + 2] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [12ULL]))) : (arr_10 [i_0] [i_0 - 1] [i_2 - 1])))) ? ((~(((/* implicit */int) arr_0 [(signed char)4])))) : (((/* implicit */int) (!(arr_0 [2LL]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                arr_24 [i_0] = ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */int) var_17))))))));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_9 [i_6] [21] [21] [i_1])) / (var_2))), (((/* implicit */int) arr_18 [i_0] [i_0] [i_0 + 1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7LL)) ? (var_13) : (((/* implicit */int) arr_17 [i_0 + 2] [i_0 - 1] [i_0 + 1]))))) : (((var_10) >> (((((((((/* implicit */int) arr_21 [i_6] [i_6] [i_1] [i_5] [i_6] [i_4])) + (2147483647))) << (((((((/* implicit */int) var_11)) + (106))) - (22))))) - (2147453678)))))));
                                arr_25 [i_0] [i_1] [(unsigned char)2] [i_0] [i_1] [(unsigned char)2] [(unsigned char)2] = ((/* implicit */unsigned int) var_2);
                                var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(arr_0 [i_4])))) : ((+(((/* implicit */int) arr_0 [i_4]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) (((-(((((/* implicit */unsigned long long int) -1945269093)) * (var_10))))) + (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) max((var_0), (((/* implicit */short) var_4))))))))));
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_35 [i_7] [11ULL] [i_7] = ((/* implicit */unsigned char) arr_32 [i_7] [(unsigned char)19]);
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_30 [i_8] [(unsigned char)22]), (((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) min((arr_34 [i_7] [i_8] [i_7] [i_8]), (arr_34 [i_7] [i_8] [i_8] [(signed char)12]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 23; i_10 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            arr_42 [i_7] [i_8] [i_7] [i_10] [i_11 - 1] = ((/* implicit */_Bool) ((arr_37 [i_11] [i_11] [i_11 - 1] [i_11 - 1] [9ULL]) | (arr_37 [i_11] [i_11 - 1] [i_11] [i_11 - 1] [i_11])));
                            arr_43 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_10] [i_8] [(_Bool)1] [i_10] [(_Bool)1] [i_8] [i_10 - 1])) || (((/* implicit */_Bool) (unsigned char)93))));
                            arr_44 [i_7] [i_8] [i_8] [i_7] [i_10 - 2] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_10 + 1] [i_11 - 1])) % (((((/* implicit */_Bool) 1235655272)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)98))))));
                        }
                        for (int i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_47 [i_10] [i_10] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 + 1]))));
                            arr_48 [i_7] [i_8] [6] [i_7] [i_12] = ((/* implicit */unsigned long long int) (-(var_14)));
                        }
                        /* LoopSeq 2 */
                        for (int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            arr_53 [i_7] [i_8] [i_9] [i_10] [i_13] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))));
                            var_25 = ((/* implicit */int) ((arr_34 [i_10 - 1] [i_10 - 1] [(unsigned char)7] [i_10]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_49 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 2])));
                            arr_54 [i_7] [i_7] [i_7] [i_8] [i_13] [i_8] = ((/* implicit */unsigned int) (!(arr_50 [i_10] [i_10 - 1] [i_10] [i_10 - 2] [i_10])));
                        }
                        for (unsigned int i_14 = 0; i_14 < 24; i_14 += 2) 
                        {
                            arr_57 [i_14] [i_8] [i_9] [i_9] [i_7] [i_14] = ((/* implicit */unsigned char) ((var_16) << (((var_5) + (249070237)))));
                            var_26 = ((/* implicit */short) (-(((/* implicit */int) arr_56 [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 1] [(short)7] [i_10 + 1] [i_14]))));
                        }
                        arr_58 [i_7] [i_7] [(unsigned char)9] [i_8] [i_7] [i_7] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_31 [i_7] [i_9]))))));
                        arr_59 [i_7] [i_7] [i_9] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)12058))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (-((-(((/* implicit */int) arr_56 [i_7] [i_10] [i_9] [(signed char)9] [i_10] [(short)5] [i_10])))))))));
                    }
                    for (signed char i_15 = 1; i_15 < 23; i_15 += 3) 
                    {
                        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_8] [i_15 - 1])) ? (arr_61 [i_7] [i_15 - 1]) : (((/* implicit */unsigned long long int) var_2))))) ? (((((/* implicit */_Bool) arr_61 [i_7] [i_15 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_7)));
                        /* LoopSeq 2 */
                        for (long long int i_16 = 0; i_16 < 24; i_16 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) max(((~(arr_38 [i_7]))), (((/* implicit */long long int) arr_55 [i_7] [i_7]))));
                            arr_68 [i_7] [i_8] [i_8] [i_15] [i_8] = ((/* implicit */int) max((var_19), (((/* implicit */unsigned int) max((var_5), ((~(((/* implicit */int) (unsigned char)213)))))))));
                            arr_69 [i_7] [(short)9] [i_7] [i_16] [i_7] [i_8] = ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */int) arr_52 [i_7] [i_7] [i_8] [(signed char)1] [12U] [i_15] [i_16])) : (((/* implicit */int) var_3))))))));
                        }
                        /* vectorizable */
                        for (long long int i_17 = 0; i_17 < 24; i_17 += 4) /* same iter space */
                        {
                            arr_73 [i_7] [i_8] [i_8] [i_15] [i_7] = ((/* implicit */unsigned char) ((var_18) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_7] [i_8] [(_Bool)1] [i_8] [i_7] [i_17] [i_9])))));
                            var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))));
                            var_31 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_27 [i_17])))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) var_0))))));
                        }
                        arr_74 [i_7] [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)103)), (arr_64 [i_7] [i_7] [i_8] [i_8] [i_15 - 1] [i_15 - 1])))) ? (((/* implicit */int) arr_50 [i_7] [i_7] [i_9] [(_Bool)1] [i_8])) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_51 [i_7] [i_7] [i_9] [i_9] [i_15])))))) << (((max((((((/* implicit */_Bool) arr_47 [10ULL] [(unsigned char)4] [i_8] [i_8] [10ULL] [i_7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_71 [i_7] [i_7] [i_9] [i_15] [i_9])))), (((var_12) ? (((/* implicit */int) (short)20201)) : (arr_30 [i_7] [i_9]))))) - (20194)))));
                    }
                    for (int i_18 = 0; i_18 < 24; i_18 += 4) 
                    {
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_10) << (((arr_66 [22ULL] [(_Bool)1] [i_8] [i_18] [i_18]) + (8471889452888849342LL)))))) ? ((+(arr_67 [i_18]))) : (((/* implicit */int) ((short) arr_67 [i_18])))));
                        var_33 = ((/* implicit */signed char) ((var_9) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_7] [i_7])) / (((/* implicit */int) arr_76 [i_8] [i_8])))))));
                    }
                    /* LoopNest 2 */
                    for (short i_19 = 2; i_19 < 22; i_19 += 3) 
                    {
                        for (signed char i_20 = 0; i_20 < 24; i_20 += 1) 
                        {
                            {
                                arr_81 [i_7] [i_8] = ((/* implicit */int) (signed char)127);
                                arr_82 [i_8] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_7] [(unsigned char)2] [i_9] [i_19] [i_20])) ? ((~(((/* implicit */int) arr_75 [i_7] [i_7] [i_19 - 1] [i_7] [i_20] [i_9])))) : ((((_Bool)0) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_34 [i_7] [i_8] [i_19] [i_20])) : (var_13))) : (((/* implicit */int) arr_52 [i_19 - 1] [i_19] [i_19] [i_19] [i_19 - 2] [i_19] [i_19 - 1]))))));
                                arr_83 [i_20] [i_7] [i_19 - 2] [i_9] [i_7] [i_7] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (~(arr_27 [i_20])))) >= (((((/* implicit */_Bool) var_19)) ? (arr_40 [i_7] [6U] [i_9] [i_19] [i_7] [i_20]) : (var_10))))) || (((((/* implicit */unsigned int) var_2)) <= (var_15)))));
                                var_34 = ((/* implicit */_Bool) var_13);
                                var_35 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_49 [i_7] [i_19 - 1] [i_9] [i_9])) ? (var_8) : (arr_49 [i_7] [i_19 + 2] [i_19] [i_19])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((long long int) (unsigned char)163))))) ? (((((/* implicit */_Bool) var_7)) ? (var_8) : (((((/* implicit */_Bool) var_16)) ? (var_19) : (var_18))))) : (max((var_9), (var_9)))));
    var_37 = var_12;
}
