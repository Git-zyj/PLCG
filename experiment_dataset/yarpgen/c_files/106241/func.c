/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106241
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / ((+(min((var_11), (((/* implicit */unsigned long long int) var_2))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (arr_7 [i_0])))) ? (((((/* implicit */unsigned long long int) 0U)) & (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) arr_7 [i_0]))));
                arr_9 [i_0] = ((/* implicit */long long int) (_Bool)1);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_18 [(signed char)13] [(signed char)13] [i_1] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */signed char) arr_10 [8LL] [i_2] [i_1] [i_0]);
                                var_17 -= ((/* implicit */int) ((unsigned char) (-(137438953471LL))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_5 = 3; i_5 < 11; i_5 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((0ULL) == (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)32767)) : (arr_19 [i_6] [(signed char)13] [i_6])))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) arr_25 [i_5] [i_5] [i_5 - 2] [8U] [i_5])))) ? (max((max((7ULL), (((/* implicit */unsigned long long int) -1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(unsigned short)6] [i_6 - 1])) && (((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)8]))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 3) 
                    {
                        arr_30 [i_8] = ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_20 [i_8] [i_8 - 1] [i_5 + 3])), (4294967295U)))), (max((((/* implicit */long long int) 20)), (-1LL)))));
                        var_20 |= arr_19 [i_0] [i_0] [i_0];
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_8 - 2] [i_8 - 2] [i_5 + 2])) ? (((/* implicit */unsigned int) ((int) (unsigned char)127))) : (((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_8 - 1] [(_Bool)0] [i_5 + 3]))) : (16U)))));
                    }
                    for (signed char i_9 = 1; i_9 < 11; i_9 += 1) 
                    {
                        arr_34 [i_9] [i_9] [i_9] [(signed char)8] [i_1] [(signed char)8] = ((/* implicit */signed char) max((((18446744073709551608ULL) - (((/* implicit */unsigned long long int) arr_3 [i_9 + 4])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) arr_33 [i_9] [i_1] [i_1] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [12] [i_1] [(signed char)4])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_5] [i_5] [i_1] [i_1] [2])) : (arr_11 [i_0] [i_1])))))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_9 + 3] [i_9] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 4] [i_9 + 1])) ? (((/* implicit */int) arr_15 [i_9 + 3] [i_9] [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 4] [i_9])) : (((/* implicit */int) arr_15 [i_9 + 3] [i_9] [i_9 + 1] [i_9] [i_9 + 3] [i_9 + 4] [(unsigned char)6]))))) ? (((/* implicit */unsigned int) ((arr_14 [i_9 + 1] [i_5 - 2] [i_5 + 2] [i_9 + 1] [i_5 + 2] [i_5 - 2]) ? (((/* implicit */int) ((unsigned char) arr_7 [(signed char)1]))) : (((((/* implicit */int) arr_10 [i_0] [(signed char)14] [i_5] [i_9])) + (((/* implicit */int) arr_24 [i_9] [11ULL] [i_1] [8ULL]))))))) : (((unsigned int) ((signed char) (_Bool)0)))));
                    }
                    var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -6LL)), (((((/* implicit */_Bool) 31457280)) ? (min((6ULL), (((/* implicit */unsigned long long int) (signed char)-9)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [(short)12] [(_Bool)1] [(_Bool)1])) & (((/* implicit */int) (unsigned char)248)))))))));
                    arr_35 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (2147483647))))) & (max((8257536U), (((/* implicit */unsigned int) arr_15 [i_0] [(_Bool)1] [i_1] [i_1] [i_5] [i_5] [(signed char)7]))))))) ? (arr_23 [i_0] [(unsigned char)9] [7] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [(unsigned char)5] [i_1])))));
                }
                /* vectorizable */
                for (short i_10 = 3; i_10 < 11; i_10 += 2) /* same iter space */
                {
                    arr_38 [i_0] [5U] [5U] [i_10] |= ((/* implicit */unsigned long long int) ((((int) 0U)) + (((/* implicit */int) arr_31 [13LL] [i_10] [(_Bool)1] [i_0] [i_0]))));
                    var_24 = ((/* implicit */signed char) ((int) arr_0 [i_0] [i_0]));
                }
                for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    arr_43 [i_11] [(signed char)13] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [10LL] [i_0])) : ((-2147483647 - 1))))) ? (min((arr_42 [(signed char)0] [(signed char)14] [i_1] [i_11]), (((/* implicit */unsigned int) arr_0 [i_0] [(unsigned char)9])))) : (((arr_29 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_1] [i_11])))))))), (max(((+(arr_13 [i_0] [i_1] [11] [i_11]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)32)) / (((/* implicit */int) (signed char)-1)))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        arr_47 [i_0] = ((/* implicit */unsigned int) max((max((((/* implicit */int) (_Bool)1)), (-1))), (((/* implicit */int) arr_14 [(unsigned char)12] [(signed char)13] [i_0] [i_0] [i_0] [i_0]))));
                        arr_48 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) ((short) arr_39 [i_0] [(unsigned char)4]))) : (((/* implicit */int) (_Bool)1)))));
                        arr_49 [i_12] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [3ULL] [i_12])) << (((((/* implicit */int) (unsigned short)8064)) - (8060)))))), (arr_22 [7LL] [i_1] [i_1] [i_1]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_12] [i_12] [i_1] [i_1] [i_0])) ? (arr_13 [i_11] [(signed char)1] [i_11] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [14ULL] [(signed char)1] [12U])))))) ? (((18446744073709551598ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_12] [i_11] [11U] [i_1] [11U] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_11] [i_1])))))));
                        arr_50 [(short)8] [i_0] [7] [i_11] [i_12] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_11] [i_11] [(short)6] [i_0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_33 [i_0] [i_1] [i_11] [i_12]))));
                    }
                    for (unsigned char i_13 = 2; i_13 < 13; i_13 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)2)) || (((/* implicit */_Bool) (-2147483647 - 1)))))))) * (((((/* implicit */_Bool) ((unsigned int) 18446744073709551615ULL))) ? (((((/* implicit */_Bool) 9223372036854775793LL)) ? (4294967291U) : (((/* implicit */unsigned int) arr_11 [(signed char)4] [i_0])))) : (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                        /* LoopSeq 1 */
                        for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_14] [i_13 + 1] [i_13] [i_13 + 1] [i_13 + 1])) || (((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_13 + 1] [13LL] [i_14] [13LL] [13LL]))))), (((((/* implicit */_Bool) arr_23 [11ULL] [11ULL] [i_13 - 2] [i_11])) ? (arr_23 [i_1] [i_1] [i_13 + 2] [i_1]) : (arr_23 [i_13] [i_1] [i_13 + 2] [(unsigned char)7]))))))));
                            arr_56 [11U] [i_1] [i_1] [12U] [11ULL] = ((/* implicit */unsigned long long int) arr_54 [0] [4U] [0] [5LL] [i_0] [7ULL] [i_13 - 1]);
                            arr_57 [i_0] [i_0] [7U] [i_0] [i_0] |= ((/* implicit */unsigned char) ((_Bool) (+(-9LL))));
                        }
                        arr_58 [(short)6] [10ULL] [(signed char)8] [11ULL] [i_0] [11ULL] = ((/* implicit */unsigned int) ((18446744073709551610ULL) >> (((((/* implicit */int) (unsigned short)16383)) - (16358)))));
                    }
                    var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -5LL)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (-7LL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 4; i_15 < 13; i_15 += 3) 
                    {
                        for (unsigned long long int i_16 = 1; i_16 < 11; i_16 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) (+(((arr_46 [i_16 + 2] [3ULL]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [(_Bool)1] [(_Bool)1] [i_11] [(_Bool)1])) ? (((/* implicit */int) arr_17 [i_16] [i_15] [i_11] [i_1])) : (((/* implicit */int) arr_33 [i_0] [(unsigned short)5] [i_15] [(signed char)4])))))))));
                                arr_65 [i_15] [i_1] [i_15] [6LL] [i_1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) arr_62 [0] [(unsigned char)5] [0] [i_15] [0])) | (((/* implicit */int) min((((/* implicit */unsigned char) arr_16 [i_16] [(unsigned char)2] [i_11] [(_Bool)1] [(signed char)2] [(_Bool)1])), ((unsigned char)10)))))));
                                arr_66 [i_0] [i_15] [(_Bool)1] [i_15] [i_16] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((arr_46 [i_0] [i_15]) + (((/* implicit */unsigned long long int) arr_19 [i_1] [i_15] [i_16])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)384)) & (((/* implicit */int) (unsigned char)243))))))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_45 [i_15 - 2])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 1; i_17 < 13; i_17 += 1) 
                    {
                        var_29 = ((/* implicit */short) 8796093022207ULL);
                        arr_69 [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((signed char)-7), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)366)) && (((/* implicit */_Bool) arr_17 [i_17 - 1] [i_11] [(_Bool)1] [i_0])))))))) ? (((((/* implicit */_Bool) min((arr_32 [i_0]), (((/* implicit */long long int) arr_5 [13ULL] [i_1] [(_Bool)1]))))) ? (((/* implicit */int) ((signed char) 2147483647))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) != (18446744073709551604ULL)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0] [(unsigned short)3]))) : (-1LL))) < (((/* implicit */long long int) arr_42 [i_11] [8] [i_11] [i_11])))))));
                        arr_70 [12U] [i_17] [i_17] [i_17] = ((/* implicit */_Bool) (unsigned short)2032);
                    }
                }
            }
        } 
    } 
    var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (var_8)))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967267U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)126)))))) / (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_5))))))));
    var_31 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)32761)))) | (((/* implicit */int) var_7))))) + (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 16383ULL)) ? (4095LL) : (((/* implicit */long long int) 262143)))) : (max((var_8), (((/* implicit */long long int) -262155))))))));
    var_32 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) ^ (((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127)))))))), (max((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) 262131)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_9)))))));
}
