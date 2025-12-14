/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183616
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
    var_15 |= ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_1 + 2] = ((/* implicit */_Bool) arr_1 [i_1 + 2]);
                arr_5 [13] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((0U), (447497003U)))) * (min((arr_3 [i_1 - 1] [i_1 + 2]), (arr_3 [i_1 + 2] [i_1 + 2])))));
                var_16 = ((/* implicit */unsigned short) min((min((arr_3 [i_0] [i_1 + 1]), (((/* implicit */unsigned long long int) arr_2 [i_1 - 1] [i_0])))), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        var_17 *= ((/* implicit */short) max((((/* implicit */unsigned int) ((signed char) var_9))), (((((/* implicit */_Bool) var_14)) ? (3847470278U) : (((/* implicit */unsigned int) ((arr_6 [i_2] [i_2]) ? (((/* implicit */int) var_13)) : (var_4))))))));
        var_18 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_8 [i_2 - 1])), (var_11)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            for (long long int i_5 = 1; i_5 < 13; i_5 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) (short)-1);
                    arr_19 [i_3] [(short)2] [(short)2] [i_5] |= ((/* implicit */short) min((max((5598740658186454096ULL), (((/* implicit */unsigned long long int) (short)2515)))), (((/* implicit */unsigned long long int) var_4))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_6 = 3; i_6 < 10; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_7 = 2; i_7 < 13; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 4) /* same iter space */
                {
                    var_20 += var_12;
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_20 [i_6 + 2]))));
                }
                for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_2))) | (((((/* implicit */_Bool) arr_13 [i_3] [i_9] [i_3])) ? (((/* implicit */int) (short)27465)) : (arr_13 [i_3] [i_9] [i_3]))))))));
                    arr_32 [i_3] [i_3] [i_6] [i_6] [i_9] = ((/* implicit */unsigned short) ((_Bool) arr_15 [i_6 + 3] [i_9 + 3]));
                    arr_33 [i_6] [i_6] [(_Bool)0] [i_6] [i_7] [i_9] = ((/* implicit */unsigned int) var_2);
                    var_23 ^= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) var_2)), (arr_21 [i_3] [i_3]))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9] [i_9 - 1] [i_9 + 1] [i_9 + 2]))) | (arr_3 [i_7 - 1] [i_9]))), (((/* implicit */unsigned long long int) ((long long int) (unsigned short)65535)))))));
                    arr_34 [i_3] [i_6] [i_3] [i_7] [i_9 + 2] = ((/* implicit */short) ((min((((((/* implicit */unsigned long long int) -193401607)) | (arr_3 [i_3] [i_7]))), (((/* implicit */unsigned long long int) 4294967295U)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3])))));
                }
                for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 4) /* same iter space */
                {
                    arr_37 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */_Bool) (unsigned char)76);
                    var_24 = ((/* implicit */signed char) var_1);
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_10 - 2] [i_7] [i_7 + 1] [i_6])) ? (min((var_11), (((/* implicit */unsigned int) arr_28 [i_10 - 1] [i_7 + 1] [i_7 + 1] [i_7])))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_10 + 3] [i_7] [i_7 - 2] [i_7 - 1])) | (((/* implicit */int) arr_28 [i_10 + 2] [i_7 + 1] [i_7 + 1] [i_6])))))));
                }
                for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */signed char) arr_21 [i_6 - 2] [i_7 - 2]);
                    arr_40 [i_6] [i_6] [i_6 + 3] = ((/* implicit */_Bool) var_12);
                }
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        {
                            arr_45 [(short)11] [i_6] [i_7] [i_7 - 2] [i_7 + 1] [i_7 - 1] [i_7] = ((/* implicit */_Bool) (unsigned char)117);
                            arr_46 [i_7] [(unsigned char)10] [i_6] = ((/* implicit */short) ((unsigned long long int) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_3)), (arr_39 [i_6] [i_12] [i_3] [i_6])))));
                            var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_7 - 1] [i_12] [i_7 - 1] [i_7] [i_6] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_25 [i_3] [i_3] [i_7 + 1] [i_12]))))) : (var_6)));
                        }
                    } 
                } 
                var_28 ^= ((/* implicit */long long int) arr_23 [i_7 - 2] [i_7 - 2] [i_7 - 1]);
            }
            for (unsigned short i_14 = 2; i_14 < 13; i_14 += 1) /* same iter space */
            {
                arr_49 [i_6] [i_6] [i_14 + 1] = ((/* implicit */long long int) ((arr_39 [i_3] [i_6 - 3] [i_6] [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-18)) <= (max((((/* implicit */int) arr_31 [i_3] [i_3] [i_3] [i_14])), (-193401607)))))))));
                arr_50 [i_3] [i_3] [i_6] = ((/* implicit */int) ((unsigned long long int) ((arr_35 [i_14 - 2] [i_14 - 1] [i_14] [i_14 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_14 - 2] [i_14 + 1] [i_14] [i_14 + 1]))))));
            }
            arr_51 [i_6] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) max((arr_47 [(unsigned char)10] [i_6] [i_3] [i_3]), (((/* implicit */long long int) var_2)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (arr_11 [i_3] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))) : (((unsigned int) arr_8 [i_6]))))) : (max((((/* implicit */long long int) arr_23 [i_6] [i_6] [i_6])), (var_9)))));
        }
    }
    for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_16 = 4; i_16 < 11; i_16 += 4) 
        {
            var_29 = ((/* implicit */long long int) arr_31 [i_15] [i_15] [i_16] [i_16 - 1]);
            arr_57 [i_15] [i_15] = ((/* implicit */short) (_Bool)1);
            arr_58 [i_16] = ((/* implicit */unsigned char) var_9);
            var_30 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_55 [i_16 - 4] [i_16 + 3] [i_16 + 3]))) * (((arr_44 [i_16] [i_16 + 3] [i_16] [i_16 + 3] [i_16 + 3] [i_16 + 3]) / (((/* implicit */int) arr_55 [i_16 + 2] [i_16 - 4] [i_16 - 3]))))));
            arr_59 [(unsigned short)5] [i_15] [i_15] = ((/* implicit */_Bool) ((min((arr_3 [i_16] [i_16 + 2]), (((/* implicit */unsigned long long int) arr_10 [i_16 + 3] [i_16])))) * (min((((/* implicit */unsigned long long int) arr_10 [i_16 - 4] [i_16 - 4])), (arr_3 [i_16] [i_16 - 1])))));
        }
        /* vectorizable */
        for (unsigned short i_17 = 3; i_17 < 12; i_17 += 4) /* same iter space */
        {
            var_31 = var_9;
            var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (-2328039464435582666LL) : (((/* implicit */long long int) 963479200))));
            var_33 = ((/* implicit */unsigned long long int) ((unsigned int) var_8));
            /* LoopSeq 1 */
            for (signed char i_18 = 0; i_18 < 14; i_18 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_19 = 0; i_19 < 14; i_19 += 2) /* same iter space */
                {
                    arr_69 [i_19] [i_18] [i_19] [i_19] = var_6;
                    arr_70 [i_15] [i_18] [i_17 + 2] [i_18] [9ULL] = ((/* implicit */unsigned char) var_6);
                    var_34 ^= ((/* implicit */unsigned char) ((unsigned long long int) 4220089366759099059ULL));
                }
                for (short i_20 = 0; i_20 < 14; i_20 += 2) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned short) arr_13 [i_17] [i_18] [i_17]);
                    var_36 ^= ((/* implicit */_Bool) (short)-5035);
                }
                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) var_4))));
            }
        }
        /* vectorizable */
        for (unsigned short i_21 = 3; i_21 < 12; i_21 += 4) /* same iter space */
        {
            arr_76 [i_15] [i_15] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (arr_29 [i_21 - 2] [i_21] [i_21]) : (arr_29 [i_21 - 2] [(signed char)11] [(signed char)11])));
            var_38 = ((/* implicit */short) ((long long int) arr_28 [i_15] [i_21 + 1] [i_21 - 2] [i_21 - 3]));
            var_39 = ((/* implicit */long long int) var_7);
            /* LoopSeq 3 */
            for (unsigned short i_22 = 0; i_22 < 14; i_22 += 4) 
            {
                arr_79 [i_15] [i_21 + 1] [i_22] = ((/* implicit */unsigned long long int) ((unsigned short) arr_17 [i_15] [i_15] [i_15] [i_15]));
                var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_21 + 2] [i_21 + 2] [i_21 + 1]))) <= (var_6))))));
            }
            for (int i_23 = 2; i_23 < 13; i_23 += 3) 
            {
                var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) (unsigned short)40045))));
                var_42 ^= ((/* implicit */int) ((-2328039464435582666LL) != (((/* implicit */long long int) ((/* implicit */int) (short)26129)))));
                var_43 -= ((/* implicit */unsigned int) ((unsigned char) arr_22 [i_23 - 2]));
            }
            for (int i_24 = 2; i_24 < 13; i_24 += 3) 
            {
                arr_85 [i_21] [i_21] [i_24] = ((/* implicit */unsigned short) arr_0 [i_21 - 3]);
                arr_86 [i_24] [i_21] [i_21] [7ULL] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)-63)) | (-1720882644)))) | (-4230323312044646333LL)));
                var_44 ^= ((/* implicit */signed char) arr_27 [i_15] [i_15] [i_21] [i_24] [i_24]);
            }
            var_45 ^= ((/* implicit */unsigned int) ((unsigned char) arr_8 [i_15]));
        }
        /* vectorizable */
        for (unsigned short i_25 = 3; i_25 < 12; i_25 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_26 = 3; i_26 < 10; i_26 += 4) 
            {
                for (unsigned char i_27 = 0; i_27 < 14; i_27 += 4) 
                {
                    {
                        var_46 = ((/* implicit */int) var_6);
                        var_47 -= ((/* implicit */_Bool) ((int) arr_68 [i_25] [i_25 - 1] [i_25] [i_26 + 2] [i_26 - 1]));
                    }
                } 
            } 
            var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_38 [0LL] [i_15] [i_25 + 1] [i_25 + 2])))))));
            var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) arr_25 [i_25] [i_15] [i_15] [i_15]))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_28 = 1; i_28 < 13; i_28 += 2) 
        {
            var_50 = ((/* implicit */int) ((unsigned short) arr_0 [i_15]));
            var_51 = ((/* implicit */unsigned char) min((var_51), (var_2)));
        }
        /* LoopSeq 1 */
        for (signed char i_29 = 1; i_29 < 13; i_29 += 4) 
        {
            var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_43 [i_29 - 1] [i_29 + 1] [i_29 + 1] [i_29 + 1] [i_29 - 1])), (4221170780U)))) ? (((((/* implicit */unsigned int) arr_43 [i_29 + 1] [i_29 - 1] [i_29 + 1] [i_29 - 1] [i_29 + 1])) * (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_29 - 1] [i_29 - 1])))));
            arr_103 [i_15] = ((/* implicit */unsigned int) ((((arr_35 [i_29 + 1] [i_29 + 1] [i_29 + 1] [i_29]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_78 [i_29 + 1] [i_29 + 1] [i_29 + 1]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned char) arr_78 [i_29 + 1] [i_29] [2ULL]))))))));
            /* LoopSeq 2 */
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) /* same iter space */
            {
                var_53 ^= ((/* implicit */unsigned short) 15201574674971761803ULL);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    var_54 = ((/* implicit */short) ((((/* implicit */int) arr_48 [i_29 + 1])) != (((/* implicit */int) arr_71 [i_15] [i_15] [i_15] [i_15] [i_30]))));
                    var_55 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_31] [(unsigned short)3] [i_15] [i_15])) ? (arr_35 [i_15] [i_15] [8ULL] [i_31]) : (((/* implicit */unsigned int) 1023))));
                }
            }
            /* vectorizable */
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_33 = 0; i_33 < 14; i_33 += 1) /* same iter space */
                {
                    var_56 = ((long long int) -193401596);
                    var_57 = ((/* implicit */long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_65 [i_29 + 1] [i_29 + 1] [i_29 + 1] [i_29 - 1] [i_29 - 1]))));
                    var_58 = ((/* implicit */signed char) var_13);
                }
                for (int i_34 = 0; i_34 < 14; i_34 += 1) /* same iter space */
                {
                    arr_117 [i_34] = ((((/* implicit */_Bool) arr_102 [i_32] [i_32])) ? (arr_102 [i_29 + 1] [i_15]) : (arr_102 [i_29 + 1] [i_34]));
                    var_59 = ((/* implicit */long long int) max((var_59), (((/* implicit */long long int) ((((/* implicit */_Bool) 963479200)) ? (((/* implicit */unsigned int) 1234134413)) : (1777052212U))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_35 = 1; i_35 < 11; i_35 += 3) /* same iter space */
                    {
                        var_60 ^= ((/* implicit */_Bool) arr_101 [i_35] [i_29]);
                        arr_120 [i_15] [i_29 + 1] [i_34] [i_34] [i_35] = ((((/* implicit */int) arr_72 [i_29 - 1] [i_35 - 1] [i_35] [i_35 + 3])) | (((/* implicit */int) arr_72 [i_29 - 1] [i_35 - 1] [i_35 + 1] [i_29 - 1])));
                        var_61 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_101 [i_15] [i_29])) ? (arr_67 [i_34] [i_15] [i_29 + 1] [i_35 + 3] [i_35 + 3] [i_35]) : (((/* implicit */int) arr_108 [i_15] [i_15] [i_29 + 1] [(short)11]))));
                    }
                    for (unsigned long long int i_36 = 1; i_36 < 11; i_36 += 3) /* same iter space */
                    {
                        arr_123 [(signed char)9] [i_29] [i_29 - 1] [i_29 - 1] [i_34] [(signed char)9] [1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_27 [i_36] [i_34] [i_32] [i_29] [i_15]))));
                        var_62 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_102 [i_29 + 1] [i_36 + 1]) : (((/* implicit */int) var_12))));
                    }
                    for (unsigned long long int i_37 = 1; i_37 < 11; i_37 += 3) /* same iter space */
                    {
                        arr_128 [i_34] [i_34] [i_32] [i_34] [i_34] = ((/* implicit */unsigned int) arr_98 [i_15] [i_32] [i_34]);
                        var_63 = ((/* implicit */unsigned long long int) arr_28 [i_15] [i_32] [i_34] [i_37 + 3]);
                    }
                    for (unsigned long long int i_38 = 1; i_38 < 11; i_38 += 3) /* same iter space */
                    {
                        arr_131 [i_34] [i_34] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_74 [i_15] [i_15])) : (((-1807459139) | (((/* implicit */int) arr_60 [i_15])))));
                        var_64 += ((unsigned long long int) arr_71 [i_38] [i_34] [i_32] [i_15] [i_15]);
                    }
                    arr_132 [i_15] [i_15] [i_34] [i_32] [i_34] = ((/* implicit */_Bool) ((int) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) arr_115 [i_15] [i_29 - 1] [i_29 + 1] [i_32] [i_29 - 1] [i_34]))))));
                    var_65 = ((/* implicit */unsigned short) arr_78 [i_29] [i_29] [i_15]);
                }
                var_66 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (arr_16 [i_29 - 1] [i_15])));
                arr_133 [(unsigned char)8] = ((/* implicit */short) var_10);
            }
        }
        arr_134 [(_Bool)1] = ((/* implicit */short) arr_47 [i_15] [(short)6] [i_15] [i_15]);
    }
}
