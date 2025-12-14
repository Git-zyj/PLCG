/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139628
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) ((min((1651760490), (((/* implicit */int) (signed char)64)))) ^ (((int) arr_1 [i_0]))))) ? (499395226) : (((/* implicit */int) ((max((arr_1 [(unsigned char)2]), (((/* implicit */long long int) var_13)))) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 4; i_1 < 13; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) (-(arr_2 [i_1 + 1] [i_2])));
            arr_9 [(_Bool)1] [i_2] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_1])) ? (-1025488462) : (((/* implicit */int) arr_4 [i_1 - 3]))))) : (min((((/* implicit */unsigned long long int) (signed char)127)), (var_12))))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)-15233)) | (((/* implicit */int) (signed char)-48)))), (((/* implicit */int) ((unsigned short) arr_6 [(unsigned short)10] [i_1]))))))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            arr_12 [i_1] [i_1] [i_3] = ((/* implicit */short) var_12);
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6))));
        }
        for (int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_4 [i_4]))));
            var_19 *= ((/* implicit */unsigned char) max((min((((/* implicit */long long int) min((var_9), (((/* implicit */unsigned short) (unsigned char)226))))), (arr_1 [i_4]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 3])))))) ? (min((((/* implicit */int) (signed char)-79)), (-499395233))) : (((/* implicit */int) ((var_10) <= (((/* implicit */int) arr_4 [i_1]))))))))));
            arr_15 [i_4] [i_1] [i_1] = ((/* implicit */signed char) arr_0 [i_4]);
            arr_16 [i_1 + 2] [i_4] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (arr_5 [i_1] [i_1 + 3] [(unsigned char)11])))), (min((max((var_13), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) arr_13 [i_1] [i_4] [i_4]))))));
        }
        for (int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_13 [i_1] [(short)15] [i_6])))) * (((/* implicit */int) arr_3 [i_1]))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_1] [i_5] [i_6]))))) ? (((((/* implicit */_Bool) -1197220927648873000LL)) ? (((/* implicit */int) arr_17 [i_6])) : (2146283131))) : (((((/* implicit */_Bool) arr_11 [i_1] [i_5])) ? (var_0) : (-1651760490))))))));
                var_22 = ((/* implicit */int) var_11);
            }
            for (short i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                /* LoopSeq 3 */
                for (long long int i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
                {
                    var_23 = ((((((/* implicit */int) arr_21 [i_1 + 2] [i_1] [i_7] [i_7])) >= (((/* implicit */int) arr_17 [i_1 + 2])))) ? (((/* implicit */int) ((unsigned short) (signed char)-52))) : (((/* implicit */int) arr_21 [i_1 - 2] [i_8] [i_8] [(short)13])));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(var_3))), (min((var_3), (((/* implicit */unsigned int) arr_26 [i_1] [i_1 + 2] [i_5] [i_7] [i_7] [10ULL]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5])) ? (arr_14 [i_8]) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_1] [i_1])), (arr_0 [i_5])))))))));
                }
                for (long long int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
                {
                    arr_31 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1])) << (((((((/* implicit */int) var_5)) + (65))) - (6)))));
                    var_25 ^= ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */unsigned short) (unsigned char)42)), ((unsigned short)18649))));
                    var_26 = ((/* implicit */signed char) min((var_0), (arr_24 [i_5] [i_5])));
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    var_27 -= ((/* implicit */_Bool) (+(var_10)));
                    var_28 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1 + 2]))));
                    /* LoopSeq 4 */
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        arr_36 [i_5] [i_5] [i_7] [i_10] [i_11] = ((/* implicit */unsigned int) var_4);
                        var_29 = ((/* implicit */unsigned int) arr_11 [i_7] [i_10]);
                        arr_37 [i_1] [i_1] [i_7] [i_10] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-80)) || (((/* implicit */_Bool) arr_13 [i_5] [(_Bool)1] [i_11]))))) : (((/* implicit */int) arr_7 [i_7]))));
                        var_30 = ((((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 3])) ^ (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_21 [i_1] [i_5] [i_7] [i_11])) : (((/* implicit */int) arr_7 [i_10])))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 4) /* same iter space */
                    {
                        var_31 = ((((/* implicit */_Bool) (unsigned short)3584)) ? (((/* implicit */int) (unsigned char)15)) : (arr_39 [i_1 + 1] [i_10] [i_12]));
                        arr_40 [i_1] [i_5] = ((/* implicit */unsigned int) arr_0 [i_12]);
                        arr_41 [i_5] [i_5] [i_7] [i_10] [i_10] [i_10] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)46882))) ? (((((/* implicit */_Bool) var_2)) ? (arr_34 [i_1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_12] [i_10] [i_7] [i_5] [i_5] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1 - 4])))));
                        var_32 = arr_14 [0U];
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_1 - 3] [i_1] [(_Bool)1] [i_1])) ? (var_6) : (((/* implicit */int) arr_38 [i_1 + 3] [i_5] [i_7] [2U] [i_12]))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 4) /* same iter space */
                    {
                        var_34 ^= arr_42 [i_1] [i_7] [i_5] [i_7] [i_7] [i_10] [i_13];
                        var_35 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_13])) * (((/* implicit */int) arr_30 [i_13] [i_10] [i_7] [i_5] [i_5] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [(short)7] [i_5] [(short)7])) >= (((/* implicit */int) arr_45 [i_1] [i_7] [i_13] [i_10]))))) : (((int) arr_3 [i_1]))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
                    {
                        arr_48 [i_1] [i_1] [i_1 + 2] [i_5] [9U] = ((/* implicit */unsigned short) arr_39 [i_14] [i_14] [i_14]);
                        arr_49 [i_1] [(unsigned short)7] [i_7] [(unsigned short)12] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) | (((arr_1 [i_7]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20757)))))));
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_22 [i_7] [i_5] [i_7])) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (736750282U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1)))))))))));
                        var_37 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210))) + (2166167249U))) >= (((unsigned int) (unsigned short)41911))));
                    }
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_7] [i_5] [i_5]))))) <= ((~(-9223372036854775789LL)))));
                }
                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) arr_35 [i_1 - 2] [13] [13] [13] [i_7] [i_7]))));
            }
            var_40 -= ((/* implicit */int) ((((/* implicit */_Bool) min((min((1197220927648872999LL), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_27 [i_1 - 4] [i_5] [i_5] [(signed char)10] [i_5] [i_1])) ? (var_6) : (((/* implicit */int) var_11)))) / (((/* implicit */int) arr_4 [i_1 - 2])))))));
        }
        /* LoopSeq 1 */
        for (signed char i_15 = 0; i_15 < 16; i_15 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_16 = 0; i_16 < 16; i_16 += 4) 
            {
                var_41 = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */int) min((arr_10 [i_15] [i_15]), (((/* implicit */short) arr_19 [i_16] [i_15] [i_1]))))), ((+(-1))))));
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 16; i_17 += 2) 
                {
                    for (unsigned char i_18 = 0; i_18 < 16; i_18 += 2) 
                    {
                        {
                            arr_62 [i_1] [i_15] [i_16] [(unsigned short)0] [i_17] [i_18] [(signed char)10] = min((((/* implicit */unsigned short) (unsigned char)94)), ((unsigned short)23264));
                            var_42 = ((/* implicit */short) ((unsigned char) 11U));
                        }
                    } 
                } 
            }
            for (unsigned short i_19 = 0; i_19 < 16; i_19 += 2) 
            {
                arr_65 [i_1] [i_15] [i_15] [i_19] = ((/* implicit */unsigned char) ((2147483647) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                arr_66 [i_19] [8] [i_1 - 2] = ((/* implicit */unsigned int) (~(((unsigned long long int) ((unsigned short) var_11)))));
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_60 [i_1] [i_15] [(unsigned short)8] [i_15] [i_20] [i_20] [i_20])))))));
                /* LoopSeq 1 */
                for (unsigned short i_21 = 2; i_21 < 12; i_21 += 1) 
                {
                    arr_71 [i_1] [i_15] [i_15] [i_15] [i_20] [i_21 + 3] = ((/* implicit */int) arr_19 [i_1 - 1] [i_15] [i_20]);
                    var_44 = ((/* implicit */int) arr_13 [i_1] [i_1] [i_1]);
                    /* LoopSeq 1 */
                    for (signed char i_22 = 3; i_22 < 14; i_22 += 2) 
                    {
                        arr_76 [i_1] [i_1] [(signed char)11] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */int) arr_60 [i_22] [i_21] [i_20] [i_15] [i_20] [i_15] [i_1])), (var_4))), (max((arr_5 [i_15] [i_15] [i_15]), (((/* implicit */int) var_9))))))) || (((/* implicit */_Bool) var_12))));
                        arr_77 [i_1] [i_1] [i_20] [i_21] [(unsigned short)15] = ((/* implicit */unsigned short) var_11);
                        var_45 = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned short)16384), (((/* implicit */unsigned short) (short)340)))))))) >= (max((min((((/* implicit */long long int) var_10)), (3892869970352093363LL))), (((/* implicit */long long int) -720368938))))));
                    }
                }
                var_46 = ((/* implicit */unsigned char) arr_43 [i_20] [i_20] [i_15] [i_1]);
            }
            /* LoopNest 3 */
            for (int i_23 = 0; i_23 < 16; i_23 += 1) 
            {
                for (signed char i_24 = 0; i_24 < 16; i_24 += 4) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            var_47 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_82 [i_25] [i_23] [i_15] [i_1])), ((-(arr_18 [i_15] [i_15])))))) : (max((((unsigned int) 0)), (min((var_8), (((/* implicit */unsigned int) arr_23 [i_1] [i_15] [i_23] [i_25]))))))));
                            arr_85 [i_1 - 4] [i_15] [i_23] [i_24] [i_23] |= ((/* implicit */int) max((min((((/* implicit */unsigned short) (signed char)119)), (((unsigned short) var_6)))), (((/* implicit */unsigned short) ((signed char) arr_0 [i_1 - 4])))));
                            arr_86 [i_1] [i_15] [i_23] [i_24] [15] = ((/* implicit */unsigned short) var_11);
                        }
                    } 
                } 
            } 
        }
        var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [i_1] [i_1] [i_1] [i_1])) ? (min((((((/* implicit */_Bool) var_9)) ? (-1197220927648872994LL) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) min((arr_54 [i_1] [(unsigned char)2] [i_1] [9]), (var_3)))))) : (((/* implicit */long long int) var_10))));
    }
    for (unsigned short i_26 = 1; i_26 < 11; i_26 += 1) 
    {
        var_49 = ((/* implicit */int) arr_27 [i_26 + 1] [i_26 + 2] [i_26] [(unsigned short)0] [4] [i_26 + 2]);
        arr_90 [i_26] = var_12;
        var_50 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */int) (short)-8192)), (arr_84 [i_26] [i_26] [i_26] [i_26] [i_26]))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_26] [12])) << (((arr_46 [i_26] [2U] [i_26]) - (1958697542U)))))), (((unsigned long long int) var_9))))));
    }
    var_51 = ((/* implicit */_Bool) var_7);
}
