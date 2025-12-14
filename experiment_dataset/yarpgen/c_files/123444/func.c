/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123444
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_9 [(signed char)6] [i_1] [i_1] [(unsigned char)8] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned short)11] [i_1] [i_2]))) : (min((((/* implicit */long long int) (unsigned char)244)), (-6918139241988798295LL))))));
                    var_20 *= ((/* implicit */unsigned long long int) max((min((-6918139241988798318LL), (((/* implicit */long long int) (signed char)0)))), (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_2] [i_1] [i_0])))))));
                }
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    var_21 = arr_4 [i_3] [i_1] [i_0];
                    /* LoopSeq 1 */
                    for (long long int i_4 = 3; i_4 < 22; i_4 += 3) 
                    {
                        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((-6918139241988798318LL) != (((/* implicit */long long int) ((((/* implicit */_Bool) 6918139241988798269LL)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) (short)-7340)))))))) / (((/* implicit */int) arr_7 [i_1] [i_3] [i_4 + 1]))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_4 + 2] [i_4 - 1])) * (((/* implicit */int) arr_15 [i_4 - 1] [i_4 + 1]))))) ? (((((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 2])) * (((/* implicit */int) arr_15 [i_4 - 3] [i_4 - 3])))) : (((/* implicit */int) max((arr_15 [i_4 + 2] [i_4 + 2]), (arr_15 [i_4 - 3] [i_4 - 1])))))))));
                            var_24 = ((/* implicit */long long int) ((unsigned char) var_11));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)221))))))))));
                            var_26 ^= ((/* implicit */long long int) ((unsigned char) (signed char)87));
                            arr_18 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_4 - 1])) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) >= (var_13)))))))) % (min((((/* implicit */long long int) (signed char)58)), (-6918139241988798336LL)))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_6] [i_3] [16LL] [i_6] = ((/* implicit */unsigned short) ((unsigned char) min((0U), (((/* implicit */unsigned int) 0)))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 3; i_7 < 21; i_7 += 4) 
                        {
                            arr_25 [i_0] [i_6] [i_3] [(short)23] [i_6] [i_7] [i_7 - 3] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_6] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_19)))) : (((/* implicit */int) arr_16 [i_6]))))));
                            var_27 = ((/* implicit */unsigned short) ((unsigned long long int) ((short) min(((signed char)15), ((signed char)-15)))));
                            arr_26 [i_6] [i_1] [i_1] [i_3] [i_6] [i_7 - 3] [i_7] = ((/* implicit */long long int) ((unsigned int) arr_17 [i_6] [i_6] [16U] [i_1] [i_6]));
                        }
                    }
                    for (unsigned char i_8 = 2; i_8 < 22; i_8 += 3) 
                    {
                        arr_30 [i_8 + 2] [i_3] [i_3] [i_1] [i_1] [i_0] &= ((/* implicit */signed char) ((unsigned char) 0LL));
                        var_28 = var_2;
                        arr_31 [i_1] = var_11;
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) 4294967295U))))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        arr_35 [i_0] [i_1] [i_3] [i_9] = ((/* implicit */unsigned char) min((0LL), (((/* implicit */long long int) (-(((/* implicit */int) arr_29 [i_0] [i_3] [i_3] [i_9])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_10 = 1; i_10 < 20; i_10 += 3) 
                        {
                            arr_38 [i_0] [i_1] [i_3] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_10 + 3] [i_10 + 4] [i_10 + 3] [i_10 + 1])) ? (((/* implicit */long long int) 131071)) : (arr_11 [i_10 + 4] [i_10 + 3] [i_10 - 1])));
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_37 [i_10 + 2] [i_10 + 4] [i_10 + 1] [i_10] [i_10 + 2] [i_10 + 4])) / (((/* implicit */int) arr_36 [i_10 + 1] [i_10] [i_10] [i_10 + 3] [i_10] [i_9] [i_1]))));
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (((-(0))) >= ((-(((/* implicit */int) var_7)))))))));
                        }
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) arr_20 [i_1])) ? (((/* implicit */int) arr_20 [i_3])) : (((/* implicit */int) (signed char)-8)))))))));
                        arr_40 [i_0] [i_1] [i_3] [i_9] = ((/* implicit */short) ((((((/* implicit */int) arr_0 [0ULL])) <= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-99)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((unsigned int) 9492572253853046808ULL))))) : (var_8)));
                    }
                }
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    arr_43 [i_0] [i_1] [5U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((long long int) var_11)) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    arr_44 [i_0] [i_0] [i_0] = ((/* implicit */short) ((int) ((((/* implicit */int) var_5)) & (((/* implicit */int) max((((/* implicit */short) arr_17 [i_1] [i_1] [i_11] [i_11] [6LL])), (var_2)))))));
                    /* LoopSeq 1 */
                    for (int i_12 = 2; i_12 < 21; i_12 += 1) 
                    {
                        arr_48 [i_11] = ((((/* implicit */_Bool) ((short) (unsigned short)65513))) ? (20LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_1] [i_11] [i_12 + 1]))));
                        var_32 &= ((/* implicit */unsigned short) (+((-(((/* implicit */int) (signed char)13))))));
                    }
                    /* LoopSeq 2 */
                    for (int i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        arr_51 [(unsigned char)10] [i_13] [i_11] [i_11] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_18)) | (((/* implicit */int) var_0)))) >> (((((((/* implicit */_Bool) (short)-9311)) ? (1341553684) : (((/* implicit */int) arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) - (1341553656)))))) ? (37LL) : (((/* implicit */long long int) min((((/* implicit */int) arr_42 [(unsigned char)8] [i_11] [i_1] [i_0])), (131041))))));
                        arr_52 [i_1] = ((/* implicit */unsigned char) var_18);
                    }
                    for (short i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        arr_55 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_0] [i_1] [i_11] [i_11] [i_14])) * (((/* implicit */int) arr_28 [i_0] [i_1] [i_11] [i_11] [0ULL]))))) ? ((-(max((((/* implicit */long long int) (unsigned short)0)), (0LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_0] [10] [i_11])))));
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (+(max((1312426685493969434ULL), (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_13))))))))));
                        arr_56 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)0)), (-8LL)));
                    }
                }
                for (unsigned int i_15 = 2; i_15 < 23; i_15 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 1) 
                    {
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_66 [i_17] [i_16] [i_15] [i_1] [i_0] = arr_7 [i_17] [i_1] [i_0];
                                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (unsigned char)29))));
                            }
                        } 
                    } 
                    arr_67 [i_0] [i_1] [i_15] = ((/* implicit */_Bool) min((max((arr_63 [i_1] [i_15] [i_15 - 1] [i_15 - 2] [i_15 - 2]), (((/* implicit */long long int) arr_0 [i_15 - 2])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_15] [i_15] [i_1] [i_1])) || (((/* implicit */_Bool) arr_24 [i_15 + 1] [i_15 - 1] [i_15] [i_15] [(unsigned short)5] [i_1])))))));
                }
                /* LoopSeq 1 */
                for (signed char i_18 = 0; i_18 < 24; i_18 += 3) 
                {
                    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) min((((/* implicit */unsigned short) ((arr_61 [i_0] [i_0] [i_0] [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_0] [(short)8])))))), (((unsigned short) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_1] [i_18] [(unsigned short)21]))) : (arr_50 [i_0] [i_0] [i_0] [i_0])))))))));
                    /* LoopSeq 1 */
                    for (long long int i_19 = 2; i_19 < 20; i_19 += 1) 
                    {
                        var_36 = ((/* implicit */_Bool) min((var_36), (arr_69 [(_Bool)1] [i_1] [(unsigned short)21] [i_1])));
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_1] [i_19 - 2] [i_19 + 4] [i_19 + 2] [i_1]))))) / (((((/* implicit */_Bool) arr_20 [i_18])) ? (arr_24 [i_0] [i_0] [i_1] [i_1] [i_19] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)130)))))));
                        arr_73 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_41 [19ULL] [i_1] [i_1] [(unsigned short)8]), (((/* implicit */int) ((unsigned short) arr_72 [i_19 + 3] [i_19 - 2] [i_19 + 4] [i_19 + 4])))));
                    }
                    arr_74 [i_18] [i_1] [(unsigned char)17] = ((/* implicit */signed char) min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) min((arr_29 [(signed char)1] [i_1] [i_1] [i_0]), (((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_18])))))));
                    var_38 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) ((unsigned char) arr_16 [i_1]))), (((short) arr_33 [i_0] [i_1] [i_1] [i_18]))))) ? (((((/* implicit */_Bool) arr_28 [i_18] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_28 [(short)6] [i_1] [i_18] [i_18] [i_18])) : (((/* implicit */int) arr_28 [i_0] [i_0] [(unsigned short)1] [i_0] [i_0])))) : (((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) arr_49 [i_0] [i_1] [i_18] [0LL] [i_18] [i_0])), (arr_32 [i_0] [i_0])))))));
                }
                arr_75 [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((long long int) arr_59 [i_1] [i_0] [i_0])));
            }
        } 
    } 
    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) var_17))));
}
