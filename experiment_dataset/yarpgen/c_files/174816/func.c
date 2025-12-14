/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174816
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
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) (signed char)-6)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) var_16)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0]))));
            arr_4 [i_0 - 1] [i_0] = ((/* implicit */short) ((_Bool) var_19));
            var_22 = ((/* implicit */signed char) arr_3 [i_0] [0U]);
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_0 - 1] [i_0] [i_2] = ((/* implicit */unsigned int) ((unsigned char) arr_2 [3U] [(signed char)3] [i_0 + 1]));
            arr_9 [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_0]))));
            arr_10 [i_0 - 2] [i_0] = var_16;
            arr_11 [i_0] [i_2] = ((/* implicit */signed char) ((arr_0 [i_0 + 1]) + (arr_0 [i_0 - 2])));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
        {
            arr_14 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (signed char)-6))))));
            var_23 &= arr_3 [i_3] [i_3];
            /* LoopSeq 4 */
            for (int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                arr_18 [4ULL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (arr_13 [i_3]) : (((/* implicit */int) arr_6 [i_0]))))) != (arr_17 [i_0] [i_0] [i_3] [i_4])));
                var_24 *= ((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [0LL] [i_4]));
            }
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_24 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0 - 1] &= ((/* implicit */signed char) arr_0 [i_0]);
                    arr_25 [i_0] = ((arr_1 [i_0]) % (((/* implicit */int) arr_16 [i_0 + 1] [i_0])));
                    arr_26 [i_5] [i_3] [i_5] [i_6] |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (short)-7932))))));
                    var_25 = ((/* implicit */unsigned long long int) var_10);
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        var_26 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_27 [i_0] [i_5] [i_5] [i_6] [i_7]) <= (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_3] [i_6] [i_7]))))))) - (((((/* implicit */_Bool) var_15)) ? (arr_2 [i_0] [i_3] [(unsigned char)2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_3])))))));
                        arr_29 [i_0 - 1] [i_0] [(short)3] [i_6] [i_6] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [i_5] [i_3] [i_3] [i_5] [i_3] [i_6]))))) ? (((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))) : (arr_3 [i_3] [i_5]));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) (short)-7913))))));
                    }
                    for (int i_8 = 1; i_8 < 10; i_8 += 3) 
                    {
                        arr_33 [i_3] [i_0] [i_5] [(unsigned short)7] = ((/* implicit */_Bool) (-((+(arr_12 [(short)8] [i_3] [i_5])))));
                        arr_34 [i_0] [i_3] [i_8] [i_6] = ((((/* implicit */int) (short)7928)) >= (((/* implicit */int) (signed char)-8)));
                    }
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */long long int) var_3);
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (-(var_14))))));
                    arr_39 [4ULL] [i_0] [i_5] [i_9] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)7913)) ? (((/* implicit */int) (short)24812)) : (((/* implicit */int) (short)7913))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (short)7905))) & (1048575U)))));
                }
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_0 - 2] [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 3] [i_0 - 1])) % (((/* implicit */int) arr_30 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 3] [i_0 + 1] [i_0 - 1]))));
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_5 [(signed char)7] [i_3]))) ? (arr_3 [i_0 - 3] [(signed char)0]) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_28 [(short)0] [i_3] [(short)0] [i_3] [i_3] [i_5]))))));
                /* LoopSeq 4 */
                for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    var_32 = ((((/* implicit */_Bool) arr_35 [i_0] [i_5] [i_0])) ? ((~(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) arr_28 [i_0] [i_3] [i_5] [i_10] [i_5] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_30 [i_10] [i_10] [i_10] [i_10] [i_10] [(signed char)9] [i_10])))));
                    arr_43 [i_0] [i_0] [(short)4] [i_10] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)-6))))));
                    var_33 = ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)127)) >= (((/* implicit */int) (signed char)33))))) : (var_12));
                    arr_44 [i_5] &= ((/* implicit */unsigned int) var_5);
                }
                for (short i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
                {
                    arr_47 [i_0] [i_3] [(signed char)9] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */int) var_15))))) ? (arr_13 [i_3]) : ((+(((/* implicit */int) var_7))))));
                    var_34 |= ((/* implicit */unsigned int) ((unsigned short) (signed char)-12));
                    var_35 = ((/* implicit */unsigned short) ((arr_36 [i_0] [i_3] [i_0]) ? (((/* implicit */int) ((short) arr_21 [i_0] [i_0] [i_5] [i_11]))) : (((((/* implicit */_Bool) arr_23 [i_0] [i_3])) ? (arr_1 [i_0]) : (((/* implicit */int) var_7))))));
                    arr_48 [i_0] [i_3] [(signed char)10] [4LL] = ((int) arr_1 [i_0]);
                    arr_49 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) ((var_6) ? (((var_6) ? (arr_22 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_5] [i_5] [i_0] [i_3] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_22 [(unsigned char)2]))))));
                }
                for (short i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
                {
                    arr_52 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_5] [i_3] [i_5] [i_12])) ? (((((/* implicit */int) arr_15 [i_0 - 1] [i_5] [i_5] [i_0 - 1])) & (((/* implicit */int) var_8)))) : (((/* implicit */int) var_18))));
                    arr_53 [i_0] [i_3] [(unsigned char)7] [i_0] [i_5] [i_3] = ((/* implicit */unsigned int) ((signed char) arr_38 [(unsigned char)9] [i_0 - 3] [i_0] [i_0 - 3] [i_0 - 3] [i_0]));
                    /* LoopSeq 3 */
                    for (short i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) * ((+(((/* implicit */int) var_17))))));
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_30 [i_5] [i_5] [i_5] [i_12] [i_0] [i_0 - 2] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_23 [i_0 - 1] [6U])))) ? (((/* implicit */int) arr_28 [i_0 - 2] [i_3] [i_5] [i_12] [(signed char)4] [i_13])) : ((-(((/* implicit */int) (signed char)-7))))));
                    }
                    for (short i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                    {
                        arr_58 [i_5] &= ((/* implicit */unsigned long long int) arr_41 [0LL] [i_12] [i_12] [i_14] [i_14] [i_14]);
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */int) var_4)) == (arr_20 [i_0 - 1]))))));
                        var_39 -= ((/* implicit */signed char) (~(arr_41 [i_0] [i_5] [i_0] [i_12] [i_14] [i_3])));
                        var_40 = ((/* implicit */long long int) ((((/* implicit */int) arr_54 [9ULL] [9ULL] [9ULL] [i_0] [i_0] [i_0 - 3] [i_0 + 1])) % (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_56 [i_3] [i_3] [i_3] [i_0] [(signed char)7])) : (((/* implicit */int) var_9))))));
                        arr_59 [i_0 + 1] [i_3] [i_5] [i_14] [i_14] [i_0] [i_3] = ((((/* implicit */int) ((((/* implicit */int) arr_35 [i_5] [i_5] [i_5])) >= (((/* implicit */int) arr_45 [i_0]))))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0])) && (((/* implicit */_Bool) var_16))))));
                    }
                    for (short i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
                    {
                        var_41 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)6))))));
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [(unsigned char)8] [i_0]))))) : (((/* implicit */long long int) ((arr_15 [7U] [i_3] [i_5] [i_12]) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_17)))))));
                    }
                }
                for (short i_16 = 0; i_16 < 11; i_16 += 4) /* same iter space */
                {
                    var_43 = ((/* implicit */int) min((var_43), ((+(((/* implicit */int) (_Bool)0))))));
                    var_44 |= (+(((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */int) arr_30 [i_3] [i_0] [i_5] [(signed char)6] [6] [i_0] [i_16])))));
                    arr_65 [10LL] [i_0] [i_5] [i_0] [i_16] = ((/* implicit */short) ((_Bool) arr_21 [i_0] [i_3] [i_5] [i_16]));
                }
            }
            for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 4) 
            {
                var_45 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_17 [i_17] [i_3] [(unsigned short)7] [(unsigned short)7]) & (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0 - 2] [i_3] [i_17] [i_17])))))) ? (((arr_13 [i_0]) << (((((/* implicit */int) var_16)) - (22205))))) : ((+(((/* implicit */int) var_18))))));
                arr_69 [i_0] = ((/* implicit */long long int) arr_28 [i_0 - 3] [i_0] [i_3] [i_3] [i_17] [i_3]);
                var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_0 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_54 [i_0] [i_0] [i_17] [(unsigned short)8] [i_3] [i_0] [(unsigned short)8])))) & (((/* implicit */int) ((signed char) arr_15 [i_0] [(_Bool)1] [7ULL] [i_17]))))))));
            }
            for (long long int i_18 = 0; i_18 < 11; i_18 += 2) 
            {
                arr_73 [i_0 - 2] [i_0] [i_0 - 2] = ((/* implicit */unsigned int) var_13);
                /* LoopNest 2 */
                for (unsigned int i_19 = 4; i_19 < 9; i_19 += 3) 
                {
                    for (unsigned int i_20 = 0; i_20 < 11; i_20 += 2) 
                    {
                        {
                            arr_80 [i_0] [i_3] [i_18] [i_3] [i_20] = ((/* implicit */signed char) ((var_6) ? (((/* implicit */int) arr_30 [i_19 - 2] [i_19] [i_19] [i_19] [i_19 - 2] [i_19 - 2] [i_19 + 2])) : ((~(((/* implicit */int) var_19))))));
                            var_47 *= ((/* implicit */unsigned int) ((unsigned short) ((long long int) arr_12 [i_0] [i_3] [i_18])));
                            var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) ((unsigned char) var_5)))));
                        }
                    } 
                } 
                var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_22 [i_18]))))) >> (((((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) - (39761))))))));
            }
            arr_81 [(short)2] [i_3] [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)26))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [2] [2] [i_3] [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_18)))))));
            var_50 = ((/* implicit */short) var_19);
        }
        for (short i_21 = 0; i_21 < 11; i_21 += 3) /* same iter space */
        {
            var_51 ^= ((/* implicit */signed char) min(((unsigned short)127), (((/* implicit */unsigned short) arr_70 [(short)0] [i_21]))));
            arr_85 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_21])) ? (arr_23 [i_0] [2]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_61 [i_0 - 2] [i_21]))))))) ? (min((((/* implicit */unsigned int) ((unsigned short) arr_15 [i_0] [i_21] [i_0] [i_0]))), (arr_67 [i_0]))) : (((/* implicit */unsigned int) ((((((((/* implicit */int) arr_5 [i_0 + 1] [i_0])) % (((/* implicit */int) var_19)))) + (2147483647))) << (((((/* implicit */int) ((unsigned short) arr_57 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0 - 2] [i_0]))) - (36091))))))));
            var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_11)) - (29486)))))) ? (((/* implicit */int) max((var_13), (((/* implicit */short) var_9))))) : ((~(((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_19))) < (((((/* implicit */_Bool) (unsigned short)4213)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_76 [i_0] [(signed char)0] [i_21] [i_0] [(short)0])), (arr_6 [(signed char)4])))))))));
            /* LoopNest 2 */
            for (unsigned short i_22 = 1; i_22 < 9; i_22 += 3) 
            {
                for (long long int i_23 = 0; i_23 < 11; i_23 += 3) 
                {
                    {
                        var_53 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))))), ((~((+(arr_77 [i_0] [i_22 + 1] [i_0])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 3) 
                        {
                            arr_93 [i_0 - 1] [i_0] [i_22] [i_21] [i_22] = ((/* implicit */unsigned long long int) ((int) ((arr_37 [i_0] [i_24] [(short)1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))));
                            arr_94 [i_0] [i_21] [i_22] [i_23] [i_24] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-24)) | (((/* implicit */int) arr_15 [i_0] [i_21] [i_21] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (var_12)));
                        }
                        var_54 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_0] [i_23] [i_23] [i_0] [i_0] [i_23] [i_23]))) : (((((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_0] [i_21] [(short)9] [i_22] [i_22 + 2] [i_0] [0ULL]))) : (arr_83 [i_0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_0] [i_21] [i_21] [i_21] [i_22] [i_22] [i_23])) * (var_12)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_25 = 2; i_25 < 10; i_25 += 4) 
                        {
                            arr_99 [i_0] = ((/* implicit */short) var_0);
                            arr_100 [i_0] [i_0] [i_0] = (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */int) var_2)) / (((/* implicit */int) var_3)))) : (((/* implicit */int) var_10)))));
                        }
                    }
                } 
            } 
        }
        arr_101 [8ULL] &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_4)))))) | (arr_0 [i_0 + 1])));
    }
    var_55 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)4095))));
}
