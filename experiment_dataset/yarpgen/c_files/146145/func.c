/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146145
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    var_12 = ((/* implicit */unsigned int) ((arr_8 [i_3 + 1] [i_3 - 3] [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? (((/* implicit */int) arr_8 [i_3 - 3] [i_3 - 1] [i_3 - 3] [i_3 - 1] [i_3 - 2])) : (((/* implicit */int) var_5))));
                    var_13 -= ((/* implicit */signed char) ((((/* implicit */int) var_9)) | (((/* implicit */int) ((unsigned char) var_9)))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    arr_13 [i_0] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */unsigned int) ((arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))) : (arr_5 [i_0] [i_0])));
                    var_14 -= ((/* implicit */unsigned long long int) ((((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))) >= (((/* implicit */long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_4)))))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */int) arr_4 [i_4]))))) || (((/* implicit */_Bool) var_5))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        arr_18 [i_0] = ((/* implicit */int) arr_1 [i_0]);
                        var_16 -= ((/* implicit */signed char) ((unsigned char) arr_8 [i_0] [i_0] [i_2] [i_2] [(unsigned short)14]));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31124)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (unsigned char)183))));
                        arr_19 [i_5] [i_4] [i_4] [i_0] [16ULL] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_5 [i_0] [i_2]) : (((/* implicit */unsigned long long int) var_11))));
                    }
                }
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_5 [(unsigned char)12] [i_0]))));
                arr_20 [(signed char)14] [i_1] [16ULL] [i_1] &= ((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0]));
            }
            for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
            {
                arr_24 [(signed char)20] [i_1] [6LL] &= var_11;
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 19; i_7 += 1) 
                {
                    for (short i_8 = 1; i_8 < 18; i_8 += 4) 
                    {
                        {
                            var_19 -= ((/* implicit */_Bool) ((arr_8 [(unsigned char)0] [i_8 - 1] [(unsigned char)0] [(signed char)10] [i_8]) ? (((/* implicit */int) arr_8 [i_8] [i_8 - 1] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_8 [i_7 + 1] [i_8 - 1] [15ULL] [(unsigned short)9] [i_8]))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_8 + 3] [i_8 + 1] [i_8 + 3])) << (((var_3) - (3170831839U)))));
                        }
                    } 
                } 
                var_21 -= ((/* implicit */int) ((arr_21 [i_0] [i_1] [i_6]) - (arr_21 [i_0] [i_1] [i_6])));
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    var_22 -= ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_6] [i_9] [i_9])) | (((/* implicit */int) var_8))));
                    var_23 = ((/* implicit */short) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_4))));
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((6U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44057))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_35 [i_0] [i_0] [i_6] [i_9] [i_10] = ((/* implicit */int) ((arr_0 [i_0] [i_1]) >= (arr_0 [i_1] [i_10])));
                        arr_36 [i_0] [i_0] [i_9] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_0])) || (var_4))) ? (((/* implicit */int) arr_8 [i_0] [(unsigned short)5] [i_6] [(unsigned short)5] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0])) && (((/* implicit */_Bool) arr_6 [i_6])))))));
                        var_25 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_6] [i_10]);
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_6] [i_9] [i_10]))) == (((((/* implicit */_Bool) arr_2 [i_10] [2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_1] [i_6] [i_9] [i_10]))) : (arr_1 [i_10]))))))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_6] [i_9])) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [19LL] [i_0])));
                    }
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) | (4294967295U)))) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_37 [i_11] [i_0])) + (2147483647))) << (((((arr_22 [i_0] [i_6] [i_6]) + (1343111451))) - (24))))))));
                        arr_39 [i_0] [i_1] [i_9] [i_11] |= ((/* implicit */short) ((((int) var_8)) == (((/* implicit */int) arr_38 [i_0] [(signed char)6] [(unsigned char)16] [(signed char)7] [(unsigned short)3] [i_11] [i_0]))));
                    }
                    var_29 = ((/* implicit */signed char) ((((((/* implicit */int) arr_3 [i_0])) / (var_1))) * (((/* implicit */int) var_8))));
                }
                var_30 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_8 [i_0] [i_1] [i_1] [i_6] [i_6]))) ^ (((/* implicit */int) arr_32 [i_0] [i_0] [i_1] [i_6] [i_6]))));
            }
            var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21921)) ? (9223372036854775807LL) : (((/* implicit */long long int) 1U))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_8)));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 21; i_14 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 4; i_15 < 20; i_15 += 1) 
                        {
                            arr_50 [i_12] [i_14] [i_0] = ((/* implicit */signed char) ((arr_1 [i_15 - 4]) / (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                            var_32 += ((/* implicit */long long int) ((arr_8 [i_13] [i_13] [i_15 + 1] [i_13] [i_15 - 3]) ? (((/* implicit */int) arr_8 [i_12] [i_15] [i_15] [i_15 - 4] [i_15 - 1])) : (((/* implicit */int) arr_8 [i_0] [i_15 + 1] [i_15] [i_15] [i_15 - 2]))));
                            var_33 = ((/* implicit */unsigned long long int) arr_21 [i_0] [0U] [i_13]);
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            var_34 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (unsigned char)96))));
                            var_35 = ((/* implicit */unsigned int) arr_30 [(_Bool)1] [i_12] [i_12] [i_12]);
                            var_36 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_5 [i_12] [i_14]))));
                            var_37 = ((/* implicit */unsigned int) ((unsigned long long int) arr_15 [i_0] [i_0] [i_12] [i_0] [i_0] [i_0]));
                        }
                        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [(_Bool)1]))) + (arr_51 [i_0] [i_12] [i_12] [i_0] [i_14])))) ? (((/* implicit */int) ((var_3) > (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) ((_Bool) var_7)))));
                        arr_54 [i_0] [i_0] [i_12] [i_13] [i_14] &= ((((/* implicit */int) arr_28 [i_0] [(unsigned char)4] [i_0])) >= (((/* implicit */int) var_8)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_17 = 0; i_17 < 21; i_17 += 1) 
            {
                for (long long int i_18 = 3; i_18 < 20; i_18 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_52 [i_0] [i_12] [i_0] [i_18 - 1] [i_19]))));
                            arr_61 [i_0] [i_12] [i_17] [i_18] [i_19] = var_5;
                        }
                        for (unsigned short i_20 = 1; i_20 < 19; i_20 += 1) 
                        {
                            var_40 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_18 + 1])) << (((((/* implicit */int) (unsigned char)17)) - (16)))));
                            var_41 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_18 - 3] [i_18] [i_18] [i_18] [i_18 - 1]))) : (arr_30 [(unsigned short)11] [(unsigned short)11] [i_18] [i_18 + 1])));
                            var_42 = ((signed char) ((arr_58 [i_0] [i_12] [i_12] [i_17] [i_18] [i_20]) || (arr_60 [4] [7] [i_12] [(unsigned char)0] [(_Bool)1])));
                        }
                        arr_65 [(unsigned short)14] [i_12] [2U] [i_12] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_18 - 1] [i_18 - 1] [i_18 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_18 + 1] [i_18 - 2] [i_18 - 2]))) : (arr_0 [i_18 - 1] [i_18 + 1])));
                        /* LoopSeq 2 */
                        for (short i_21 = 0; i_21 < 21; i_21 += 1) 
                        {
                            var_43 += ((/* implicit */short) arr_45 [(short)6] [i_12] [i_0]);
                            var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) < (((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */int) arr_45 [i_17] [i_18] [i_17])))))))));
                            var_45 *= ((/* implicit */long long int) ((arr_31 [i_17] [i_18 - 3] [i_18] [i_18] [i_18 - 3]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (var_1))))));
                        }
                        for (signed char i_22 = 0; i_22 < 21; i_22 += 3) 
                        {
                            var_46 &= ((unsigned int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_4))));
                            var_47 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_12 [i_22] [i_17] [i_12])) * (arr_34 [i_0] [i_18 + 1] [11U] [i_18 - 3])));
                            var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_12] [i_12] [i_12]))) <= (((unsigned int) var_2)))))));
                            var_49 = ((((/* implicit */_Bool) var_7)) ? (((int) arr_7 [i_22])) : (((/* implicit */int) var_5)));
                        }
                        arr_71 [i_0] [i_0] [i_12] [i_17] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) arr_56 [12U] [i_12] [(unsigned char)4]))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_23 = 0; i_23 < 21; i_23 += 2) 
            {
                /* LoopNest 2 */
                for (short i_24 = 0; i_24 < 21; i_24 += 2) 
                {
                    for (unsigned int i_25 = 0; i_25 < 21; i_25 += 2) 
                    {
                        {
                            var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_74 [i_0] [i_12] [i_25])) ? (((/* implicit */int) arr_74 [i_12] [i_23] [i_25])) : (((/* implicit */int) arr_77 [i_0] [i_12] [i_23] [i_23] [i_24] [i_25])))))));
                            var_51 = ((/* implicit */int) ((_Bool) ((arr_40 [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_52 [16LL] [2U] [i_0] [i_24] [16LL])))));
                            var_52 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_56 [i_0] [i_23] [i_24]))));
                            var_53 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_25] [9ULL] [9ULL])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (arr_21 [i_12] [i_24] [i_25]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_51 [(short)4] [i_12] [(signed char)12] [i_12] [i_12]) == (((/* implicit */long long int) var_3))))))));
                            var_54 = ((/* implicit */_Bool) min((var_54), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_9)))))) < (arr_48 [20U] [0LL])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_26 = 0; i_26 < 21; i_26 += 2) 
                {
                    for (unsigned int i_27 = 0; i_27 < 21; i_27 += 2) 
                    {
                        {
                            arr_89 [i_0] [i_0] [i_12] [i_23] [i_0] [i_26] [(unsigned short)13] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_1)) & (((var_11) | (arr_51 [i_26] [i_26] [i_26] [i_0] [i_26])))));
                            var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) ((((var_7) + (2147483647))) << (((((var_1) & (((/* implicit */int) arr_83 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23])))) - (1))))))));
                            var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (arr_59 [i_0]) : (arr_59 [i_23])));
                            var_57 = ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */unsigned long long int) var_3)) : (arr_2 [i_23] [i_26]));
                        }
                    } 
                } 
                var_58 = ((/* implicit */unsigned char) max((var_58), (((/* implicit */unsigned char) ((short) arr_3 [i_12])))));
                var_59 ^= ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_88 [i_0] [i_0] [i_12] [i_23] [i_23])));
                /* LoopNest 2 */
                for (unsigned char i_28 = 2; i_28 < 20; i_28 += 4) 
                {
                    for (unsigned char i_29 = 0; i_29 < 21; i_29 += 1) 
                    {
                        {
                            arr_94 [i_0] [i_12] [i_12] [17LL] = ((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-41)))));
                            arr_95 [(signed char)18] [i_12] [16LL] [i_28 + 1] [i_29] [i_0] = ((((/* implicit */_Bool) arr_63 [i_28 - 1] [i_28 - 1] [i_28 - 1] [i_28 - 1] [i_28 + 1])) || (((/* implicit */_Bool) var_5)));
                        }
                    } 
                } 
            }
            for (unsigned int i_30 = 3; i_30 < 20; i_30 += 3) 
            {
                arr_100 [i_0] [(signed char)6] [i_30] = ((/* implicit */_Bool) ((arr_57 [i_30 - 1] [(_Bool)1] [i_30 + 1] [i_30 - 1]) / (((/* implicit */long long int) arr_85 [i_30 + 1] [i_30] [0] [i_30] [i_30 - 2]))));
                var_60 = ((/* implicit */int) min((var_60), (((((/* implicit */int) arr_25 [i_0] [i_12] [i_30] [i_12] [i_30 + 1] [i_30 + 1])) ^ (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_12] [i_0]))))));
                /* LoopNest 2 */
                for (int i_31 = 2; i_31 < 18; i_31 += 1) 
                {
                    for (int i_32 = 0; i_32 < 21; i_32 += 3) 
                    {
                        {
                            arr_107 [i_32] [i_0] [i_30] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0))) << (((((/* implicit */int) var_5)) - (29)))));
                            var_61 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (var_1)))) ^ (arr_85 [i_30] [i_30] [i_30] [i_30 - 1] [i_31 - 1])));
                            var_62 *= ((/* implicit */_Bool) ((((/* implicit */int) (short)5963)) / (4194303)));
                            var_63 = ((/* implicit */_Bool) max((var_63), (arr_45 [i_0] [i_12] [i_30])));
                        }
                    } 
                } 
                var_64 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_47 [i_30 - 3] [i_30 - 1] [i_12] [i_0])) >= (((/* implicit */int) arr_47 [i_0] [(_Bool)1] [i_12] [i_30 - 2]))));
                var_65 = ((/* implicit */_Bool) max((var_65), (((/* implicit */_Bool) ((signed char) arr_81 [i_30 - 3] [i_30] [(unsigned char)18] [i_30] [i_12] [i_30 - 1] [i_30 - 1])))));
            }
            var_66 = ((/* implicit */unsigned int) max((var_66), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (arr_62 [i_12] [i_12] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) >> (((((/* implicit */int) var_8)) + (28934))))))));
        }
    }
    var_67 = ((/* implicit */short) min((var_67), (((/* implicit */short) ((var_0) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((var_1) & (((/* implicit */int) var_4)))))) - (25))))))));
}
