/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152025
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
    var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((-6212740189844056343LL), (((/* implicit */long long int) var_8))))) ? (((/* implicit */int) var_4)) : (max((var_1), (((/* implicit */int) var_10)))))), (min((((/* implicit */int) ((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) (short)-11312)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))))))));
    var_21 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_22 += ((((/* implicit */int) var_16)) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (arr_3 [i_0] [i_1] [i_1])))) ? (((13481045091590757752ULL) / (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) - (3453996835ULL))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1] [i_1] [(unsigned char)3] [i_1])))) : (((/* implicit */int) arr_7 [i_0] [i_0 - 4] [i_0 + 3] [i_0 - 1]))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 4; i_3 < 12; i_3 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 - 1] [4] [i_2 - 1]);
                        arr_11 [i_0 + 4] [i_0] [i_1] [i_0] [i_3 - 1] &= ((unsigned char) arr_3 [i_0 - 2] [i_0 + 4] [i_0 + 4]);
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0)))) < (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) >= (((/* implicit */int) arr_1 [i_2]))))))))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 10; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_1] [i_2 - 1] [7LL] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_18) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_0 - 3] [(unsigned char)10] [i_2] [i_4 + 3] [i_5] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) (short)32767)));
                            var_26 = ((/* implicit */int) var_12);
                        }
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (short)(-32767 - 1))))))) | ((-(var_2)))));
                            arr_23 [i_0 + 2] [i_6] [i_2] [i_4 + 1] [i_6] [i_4] [(short)2] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0 - 3] [i_2]);
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((((/* implicit */int) var_12)) >> (((/* implicit */int) (unsigned short)1)))) : (((/* implicit */int) (short)-26229)))))));
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_6] [i_4 - 2])) ? (arr_17 [i_6] [i_4 + 2] [i_2] [i_0 - 2] [i_0] [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-8037)))))) ? (arr_3 [i_2 - 1] [i_0 - 1] [i_4 + 1]) : (arr_10 [i_0] [i_4 - 2] [i_2] [i_2 - 1])));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */int) arr_1 [i_7]);
                            var_31 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2]))))) >> (((((((/* implicit */_Bool) 3536267583958789289ULL)) ? (896137235U) : (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_2 - 1] [i_2 - 1])))) - (896137223U)))));
                            var_32 = ((/* implicit */unsigned long long int) arr_17 [i_0 + 1] [i_0 - 3] [i_1] [i_2 - 1] [i_2 - 1] [i_4 - 2]);
                        }
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                        {
                            arr_29 [(unsigned short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_0 - 4] [i_0 - 3] [i_2 - 1] [i_4 - 1] [i_4 + 1])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_4 + 1] [i_8])) : ((~(((/* implicit */int) var_12))))));
                            arr_30 [i_0 + 2] [i_0] [i_2 - 1] [i_4 + 1] [i_4 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)32767))));
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_0 + 4] [0LL] [i_9] [(signed char)0] [i_9] [(unsigned short)9] = ((/* implicit */signed char) ((arr_17 [i_0 + 3] [i_0] [i_0] [i_0 + 2] [i_2] [i_2 - 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2 - 1] [11LL] [(unsigned char)2] [i_2 - 1])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            arr_38 [i_9] [i_9] = ((/* implicit */unsigned short) (!(((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_19 [(_Bool)1] [i_1] [i_2] [i_2] [i_10] [(unsigned char)5]))))));
                            var_34 = ((/* implicit */int) min((var_34), ((-(((/* implicit */int) (short)-4294))))));
                            arr_39 [i_9] [i_1] = ((/* implicit */int) (short)(-32767 - 1));
                        }
                        /* LoopSeq 2 */
                        for (int i_11 = 1; i_11 < 10; i_11 += 3) 
                        {
                            arr_43 [i_9] = ((((/* implicit */_Bool) arr_34 [i_0] [i_0 - 3] [i_1] [i_9] [i_2 - 1] [i_9] [i_11])) || (((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0 - 2] [i_9] [i_0 - 2] [i_0 - 4])));
                            var_35 = (((!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 + 3] [(signed char)9])))) || (((/* implicit */_Bool) (short)32767)));
                            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) var_15))));
                        }
                        for (int i_12 = 3; i_12 < 9; i_12 += 1) 
                        {
                            arr_46 [i_0] [i_1] [i_9] [i_9] [(short)0] = ((/* implicit */short) (~(((/* implicit */int) arr_32 [i_2] [i_2] [i_2] [i_9] [i_2 - 1] [i_2 - 1]))));
                            var_37 += ((/* implicit */unsigned short) (!((!((_Bool)1)))));
                        }
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 2923405819193096819LL))) * (((((/* implicit */_Bool) 2923405819193096819LL)) ? (((/* implicit */int) arr_5 [i_13] [i_13] [i_13] [(_Bool)1])) : (((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_1] [i_1]))))));
                        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 4])) - (((/* implicit */int) arr_1 [i_0 - 3])))))));
                    }
                    var_40 = (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1])));
                }
                arr_49 [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) + ((+(((/* implicit */int) arr_36 [i_0] [i_1] [i_0 + 1] [i_0] [i_0 - 4]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_14 = 3; i_14 < 11; i_14 += 1) 
    {
        var_41 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (short)29667)), (4965698982118793864ULL)));
        var_42 = ((/* implicit */unsigned int) arr_41 [i_14 - 1] [i_14]);
    }
    /* vectorizable */
    for (short i_15 = 0; i_15 < 15; i_15 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_16 = 1; i_16 < 13; i_16 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_17 = 3; i_17 < 12; i_17 += 3) /* same iter space */
            {
                var_43 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_15] [i_15] [i_15]))))) + (arr_60 [i_15] [i_16 + 2])));
                var_44 = ((((/* implicit */_Bool) arr_57 [(unsigned char)7] [i_15])) ? (arr_59 [i_15] [i_16] [i_15] [(_Bool)1]) : (((/* implicit */int) arr_58 [i_15] [i_16] [i_16 + 2] [(_Bool)1])));
            }
            for (int i_18 = 3; i_18 < 12; i_18 += 3) /* same iter space */
            {
                var_45 ^= ((/* implicit */_Bool) (-(9223372036854775807LL)));
                var_46 = ((/* implicit */unsigned char) (_Bool)0);
            }
            var_47 = ((/* implicit */signed char) arr_58 [i_15] [i_15] [i_15] [i_16]);
        }
        for (unsigned short i_19 = 2; i_19 < 13; i_19 += 3) 
        {
            arr_66 [i_15] [10U] &= var_1;
            var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) arr_59 [i_15] [i_15] [(short)12] [i_15]))));
        }
        for (unsigned short i_20 = 1; i_20 < 14; i_20 += 1) 
        {
            var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) ((arr_54 [8ULL] [i_20 - 1]) / (arr_54 [(unsigned char)4] [i_20 - 1]))))));
            /* LoopNest 2 */
            for (long long int i_21 = 1; i_21 < 14; i_21 += 2) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    {
                        var_50 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_18) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_15])))))) ? ((((_Bool)1) ? (((/* implicit */int) (short)7812)) : (((/* implicit */int) (short)6019)))) : (((/* implicit */int) ((_Bool) var_19)))));
                        arr_76 [(unsigned short)13] [i_15] [i_21 - 1] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_15] [i_20 + 1])) ? (((((/* implicit */int) var_5)) | (((/* implicit */int) var_3)))) : (((var_1) - (((/* implicit */int) arr_70 [i_15] [i_15] [i_15]))))));
                        arr_77 [i_15] [i_20 + 1] [i_21 + 1] [i_20 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_72 [i_15] [i_15] [i_22])) ^ (((/* implicit */int) arr_72 [i_21 + 1] [i_21 + 1] [i_21]))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (int i_23 = 1; i_23 < 14; i_23 += 2) 
        {
            for (unsigned short i_24 = 0; i_24 < 15; i_24 += 2) 
            {
                {
                    var_51 = arr_62 [i_15] [i_23] [i_23] [i_24];
                    var_52 = var_17;
                }
            } 
        } 
        arr_82 [i_15] = ((/* implicit */short) (((-(((/* implicit */int) arr_70 [i_15] [i_15] [3U])))) > (((arr_59 [i_15] [2ULL] [i_15] [6]) / (((/* implicit */int) arr_68 [i_15]))))));
        arr_83 [i_15] = (!(((/* implicit */_Bool) arr_68 [i_15])));
        /* LoopNest 2 */
        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
        {
            for (long long int i_26 = 2; i_26 < 13; i_26 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_27 = 0; i_27 < 15; i_27 += 3) 
                    {
                        for (unsigned int i_28 = 0; i_28 < 15; i_28 += 3) 
                        {
                            {
                                var_53 = ((/* implicit */signed char) ((((/* implicit */int) arr_58 [11LL] [i_25] [5] [i_25 - 1])) & (((/* implicit */int) (unsigned char)22))));
                                var_54 = ((/* implicit */int) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_15])))));
                                var_55 = ((/* implicit */_Bool) var_6);
                                var_56 = ((((/* implicit */_Bool) 2147483647)) ? (13481045091590757752ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_15] [i_25] [i_25 - 1] [i_27]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_29 = 1; i_29 < 12; i_29 += 3) 
                    {
                        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                        {
                            {
                                var_57 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_81 [i_15] [i_15] [i_15] [i_15])) ? (arr_81 [i_30] [i_15] [i_15] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)42)))));
                                var_58 = ((/* implicit */_Bool) arr_89 [i_25 - 1] [i_15]);
                                var_59 = ((/* implicit */unsigned short) max((var_59), (((/* implicit */unsigned short) ((((/* implicit */int) arr_89 [i_15] [(short)14])) != (((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
