/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105214
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
    var_15 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : ((-(((/* implicit */int) (short)24740))))))) : (min((((/* implicit */long long int) var_3)), ((-(arr_1 [i_0])))))));
        arr_2 [9U] |= ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            arr_9 [(signed char)6] &= arr_3 [(unsigned short)10];
            arr_10 [i_2] [6ULL] &= ((/* implicit */short) ((signed char) arr_6 [i_1 + 2] [i_2]));
        }
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (~(var_11))))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_13 [i_3] [(unsigned short)9])))), (((/* implicit */int) (short)128))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65530)) : ((-(((/* implicit */int) arr_13 [i_3] [i_3]))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (arr_12 [i_4])));
        var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (((/* implicit */int) arr_11 [i_4] [i_4])) : (((/* implicit */int) (unsigned char)220)))), (((/* implicit */int) arr_11 [i_4] [i_4]))));
        /* LoopSeq 3 */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */short) min((min((((/* implicit */int) (signed char)0)), (619403982))), (((int) arr_19 [i_4] [i_4] [i_5]))));
            var_22 = ((/* implicit */unsigned char) min((var_22), (var_0)));
        }
        for (long long int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
        {
            arr_22 [i_6] [i_4] = ((/* implicit */signed char) ((unsigned short) ((signed char) arr_13 [i_4] [i_6])));
            /* LoopSeq 4 */
            for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                arr_25 [i_6] &= ((/* implicit */unsigned char) var_1);
                var_23 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((arr_0 [i_7]), (arr_21 [i_4] [i_4])))), (((((unsigned int) arr_21 [i_6] [i_7])) | (arr_16 [i_4])))));
                var_24 = ((/* implicit */signed char) arr_17 [(_Bool)1]);
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                var_25 += ((/* implicit */long long int) arr_16 [i_4]);
                arr_28 [13LL] [i_6] [13LL] = ((/* implicit */signed char) (+(((/* implicit */int) arr_24 [i_6] [i_8]))));
                arr_29 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -619403983)) ? (((/* implicit */int) arr_27 [i_4] [i_6])) : (((/* implicit */int) arr_26 [i_8] [i_6] [i_6] [i_4])))) >> (((((/* implicit */int) arr_11 [i_4] [i_6])) - (56)))));
            }
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                arr_33 [i_4] [i_9] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((var_10), (var_3)))))) / (min((((/* implicit */long long int) (unsigned char)110)), (((((/* implicit */_Bool) arr_13 [i_4] [i_6])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_9] [i_6])))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    var_26 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_4] [i_10] [i_4]))));
                    var_27 *= ((/* implicit */unsigned char) arr_0 [(unsigned char)14]);
                    var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_10])) ? (((/* implicit */int) arr_11 [i_4] [19LL])) : (((/* implicit */int) arr_11 [i_10] [i_9]))));
                    var_29 = ((/* implicit */unsigned char) arr_12 [i_4]);
                    var_30 = ((/* implicit */unsigned short) ((signed char) var_12));
                }
                for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    var_31 ^= (unsigned char)156;
                    var_32 = ((short) ((unsigned char) arr_27 [i_9] [i_6]));
                }
                for (unsigned short i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    var_33 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */int) ((_Bool) var_7))), (((int) arr_20 [i_6] [i_6] [i_6]))))), (arr_30 [6LL])));
                    var_34 ^= ((/* implicit */unsigned char) max(((~(-784848955))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-103)))))));
                    /* LoopSeq 1 */
                    for (signed char i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */long long int) arr_13 [i_9] [(unsigned short)10]);
                        arr_45 [i_4] [i_9] [i_9] [i_12] [i_9] = ((/* implicit */unsigned short) min(((-(min((((/* implicit */long long int) (_Bool)0)), (arr_30 [i_4]))))), (((/* implicit */long long int) ((unsigned char) var_12)))));
                        arr_46 [i_9] [(short)4] [i_9] = ((/* implicit */unsigned char) (-(arr_43 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_9])));
                        arr_47 [i_9] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((arr_30 [i_4]), (var_11)))))) ? (min((arr_1 [1]), (((/* implicit */long long int) arr_23 [i_6] [i_9] [(_Bool)1])))) : (((/* implicit */long long int) (~(min((arr_15 [i_4]), (((/* implicit */unsigned int) var_3)))))))));
                    }
                }
                for (unsigned char i_14 = 1; i_14 < 15; i_14 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        arr_52 [i_4] [i_4] [i_4] [i_4] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) arr_27 [i_14 - 1] [i_14 - 1]))));
                        arr_53 [i_4] [i_6] [i_6] [(unsigned short)3] [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_41 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_9] [i_14]))));
                        arr_54 [i_4] [i_4] [16ULL] [16ULL] [i_9] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_15] [i_14 + 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_44 [i_6] [i_14 + 1] [i_9] [i_9] [i_6] [i_6] [i_4]))));
                        arr_55 [(unsigned short)0] [i_6] [i_9] [10U] [i_15] [i_9] = ((/* implicit */long long int) arr_24 [i_9] [i_9]);
                    }
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((unsigned char) arr_36 [i_14 + 1] [i_14 + 1] [i_6] [i_14 + 1])))));
                        arr_59 [i_9] [i_14 + 1] [i_9] [i_6] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_48 [i_4] [i_4] [16LL] [i_4]))));
                    }
                    arr_60 [i_9] [(unsigned char)9] [i_9] [i_9] [i_6] [i_4] = ((/* implicit */unsigned char) arr_51 [i_4] [(unsigned short)10] [(unsigned short)10] [i_9] [i_4]);
                    arr_61 [10U] [i_9] [i_9] [i_9] [i_14 - 1] = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) arr_37 [i_9] [i_6] [i_6] [i_6] [i_6])));
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 17; i_17 += 1) 
                    {
                        arr_65 [i_4] [i_4] [i_9] [i_14] [i_9] = ((/* implicit */unsigned char) min((((var_13) + (((/* implicit */int) arr_0 [(unsigned short)0])))), (619403969)));
                        arr_66 [i_4] [i_4] [i_4] [i_9] [i_4] = ((/* implicit */short) (-(var_13)));
                    }
                    arr_67 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)110), ((unsigned char)162)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_9] [i_4] [i_4])) >> (((((/* implicit */int) (signed char)92)) - (89)))))) && (((/* implicit */_Bool) arr_57 [i_14 - 1] [(unsigned char)2] [i_14] [i_9] [i_14] [i_14 + 1] [i_14 - 1]))))) : (((/* implicit */int) ((short) arr_21 [i_4] [i_9])))));
                }
                /* LoopSeq 3 */
                for (short i_18 = 0; i_18 < 17; i_18 += 1) 
                {
                    arr_71 [i_9] [i_6] [i_9] [i_9] = ((/* implicit */_Bool) min(((~(((/* implicit */int) ((arr_63 [i_4]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))), (((/* implicit */int) (signed char)111))));
                    /* LoopSeq 2 */
                    for (long long int i_19 = 0; i_19 < 17; i_19 += 1) 
                    {
                        arr_76 [i_9] [i_6] [i_9] [i_9] [i_9] = arr_41 [i_6] [i_4] [i_4] [i_9] [i_4];
                        arr_77 [i_4] [i_6] [i_9] [i_18] [i_18] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_19]))))) ? (min((((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)120)))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)32426)))))) : (((/* implicit */int) arr_21 [i_4] [i_19]))));
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((((/* implicit */int) (short)-32427)) + (2147483647))) << (((((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_32 [i_4] [i_6] [(_Bool)1] [0U]))))) : (max((((/* implicit */long long int) var_14)), (arr_17 [(signed char)15]))))) - (1LL))))))));
                        arr_78 [i_4] [i_9] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (-2147483647 - 1));
                    }
                    for (unsigned short i_20 = 0; i_20 < 17; i_20 += 4) 
                    {
                        var_38 ^= ((/* implicit */unsigned char) var_14);
                        var_39 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)216))));
                        var_40 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_57 [i_20] [i_20] [(_Bool)1] [i_9] [i_9] [i_9] [i_20])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_31 [i_4] [i_4] [i_9]), (((/* implicit */short) arr_80 [i_9] [i_6] [(unsigned char)15] [(_Bool)1] [i_6] [i_6] [i_6])))))))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_21 = 2; i_21 < 16; i_21 += 2) /* same iter space */
                {
                    arr_83 [2] [i_9] [i_9] = ((/* implicit */long long int) arr_23 [i_4] [i_9] [(unsigned char)15]);
                    var_41 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_21 + 1] [i_21 - 1]))));
                }
                /* vectorizable */
                for (unsigned char i_22 = 2; i_22 < 16; i_22 += 2) /* same iter space */
                {
                    var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) arr_69 [i_22] [i_22 - 1] [i_6] [i_22 - 1]))));
                    var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_63 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? ((-(((/* implicit */int) arr_79 [i_4] [i_6] [i_6] [i_4] [i_22 + 1] [i_22] [(unsigned short)12])))) : (((((/* implicit */int) arr_82 [i_4] [i_6] [i_9] [i_22 - 2])) % (((/* implicit */int) var_9)))))))));
                }
                arr_87 [i_4] [i_9] [i_9] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) arr_12 [i_9])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_12 [i_6]))));
            }
            for (signed char i_23 = 0; i_23 < 17; i_23 += 3) 
            {
                var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (short)32426)) << (((((/* implicit */int) (unsigned char)192)) - (191)))))))));
                /* LoopSeq 2 */
                for (unsigned short i_24 = 0; i_24 < 17; i_24 += 1) /* same iter space */
                {
                    var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) var_8))));
                    /* LoopSeq 1 */
                    for (unsigned char i_25 = 0; i_25 < 17; i_25 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) var_13))));
                        arr_97 [(_Bool)1] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_26 [i_23] [i_6] [i_23] [(unsigned char)2]), (arr_58 [i_23] [i_24] [i_23])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_88 [i_4] [i_6] [i_23] [i_23]))))))));
                    }
                }
                for (unsigned short i_26 = 0; i_26 < 17; i_26 += 1) /* same iter space */
                {
                    var_47 += ((/* implicit */short) arr_15 [i_4]);
                    /* LoopSeq 3 */
                    for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                    {
                        arr_103 [(unsigned char)2] [i_6] [(unsigned char)2] [i_23] [i_26] [i_23] = ((/* implicit */signed char) ((unsigned char) min((arr_100 [i_4] [i_4] [i_4] [i_4] [i_23] [i_4]), (((/* implicit */unsigned int) var_7)))));
                        arr_104 [(unsigned char)10] [i_4] [(unsigned char)10] [i_26] [i_23] = ((/* implicit */signed char) (~(((/* implicit */int) var_14))));
                        arr_105 [i_4] [i_4] [i_23] [i_4] = ((/* implicit */signed char) min((arr_68 [i_4] [i_6] [i_23] [i_26] [i_27 - 1]), (((/* implicit */long long int) arr_56 [(unsigned char)7] [(unsigned char)7] [i_6] [i_23] [i_23] [(unsigned char)14]))));
                        var_48 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_101 [i_4] [i_4] [i_23] [i_23] [i_26] [i_26] [i_27 - 1])))) + (arr_37 [i_23] [i_26] [i_23] [i_6] [i_23])))) ? ((~(((/* implicit */int) (unsigned char)112)))) : (((/* implicit */int) arr_91 [i_23] [i_26] [i_4] [i_23]))));
                    }
                    for (signed char i_28 = 0; i_28 < 17; i_28 += 2) 
                    {
                        var_49 = var_4;
                        arr_109 [(signed char)15] [i_6] [(signed char)15] [i_23] [i_6] = var_10;
                        arr_110 [i_23] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_108 [i_28] [(unsigned short)10] [i_23] [i_6] [i_4]))));
                    }
                    for (unsigned short i_29 = 2; i_29 < 14; i_29 += 4) 
                    {
                        arr_114 [i_29] [i_26] [i_23] [i_23] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned char) (unsigned char)110)));
                        var_50 = ((/* implicit */_Bool) min((var_50), (((/* implicit */_Bool) arr_81 [i_26] [i_23] [i_4] [i_4]))));
                    }
                }
            }
        }
        for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
        {
            var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) ((((/* implicit */int) arr_35 [i_4] [(unsigned char)12] [i_4] [i_4] [(unsigned char)12] [i_4])) | (((/* implicit */int) ((unsigned char) arr_79 [(unsigned char)12] [i_30] [i_30 - 1] [(unsigned char)12] [i_30 - 1] [16U] [i_4]))))))));
            /* LoopSeq 1 */
            for (short i_31 = 1; i_31 < 15; i_31 += 1) 
            {
                var_52 += ((/* implicit */unsigned char) arr_1 [(unsigned char)12]);
                /* LoopSeq 2 */
                for (signed char i_32 = 2; i_32 < 16; i_32 += 1) 
                {
                    arr_126 [(signed char)5] [i_31] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_89 [i_31] [i_30 - 1])))), (((/* implicit */int) arr_49 [10LL]))))) ? (((/* implicit */int) arr_36 [i_4] [i_30 - 1] [i_31] [i_32 - 2])) : (((/* implicit */int) var_12))));
                    /* LoopSeq 2 */
                    for (unsigned char i_33 = 0; i_33 < 17; i_33 += 3) 
                    {
                        var_53 += arr_130 [i_4] [i_30] [i_31 - 1] [i_32] [i_33];
                        var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) (unsigned char)97))), ((-(1152921504606846975LL)))))) ? (((((/* implicit */int) arr_89 [i_31] [i_30 - 1])) & (((/* implicit */int) var_14)))) : (((/* implicit */int) ((unsigned short) arr_116 [i_31] [(unsigned char)10] [i_33])))));
                        var_55 ^= ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) var_6)), (arr_127 [i_4] [i_33] [i_31 + 2] [i_32] [i_33] [(_Bool)1])))));
                        arr_131 [i_33] [i_32 - 1] [i_31] [i_30 - 1] [i_4] = ((/* implicit */signed char) (unsigned char)95);
                    }
                    for (unsigned char i_34 = 0; i_34 < 17; i_34 += 2) 
                    {
                        arr_134 [i_4] [i_34] [i_4] [i_4] [i_4] [i_4] [(unsigned short)10] &= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                        var_56 = ((/* implicit */unsigned char) max((var_56), (((/* implicit */unsigned char) ((_Bool) (-(((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */int) arr_64 [i_34])) : (((/* implicit */int) (signed char)67))))))))));
                        arr_135 [i_31] [i_30 - 1] = ((/* implicit */long long int) (-(arr_100 [i_4] [(_Bool)1] [i_31] [i_30] [i_31] [i_31])));
                    }
                }
                /* vectorizable */
                for (unsigned short i_35 = 0; i_35 < 17; i_35 += 1) 
                {
                    arr_138 [i_4] [(unsigned char)2] [i_31] [i_31 - 1] [i_35] [i_35] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_96 [i_35] [i_35] [i_31 - 1] [i_30] [i_4])) ? (((/* implicit */int) arr_34 [4U] [i_31] [i_4] [i_31] [i_4])) : (((/* implicit */int) arr_123 [i_31] [i_35])))));
                    arr_139 [i_31] [2LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_30 - 1] [i_31] [i_31 + 1])) ? (arr_23 [i_30 - 1] [i_31] [i_31 + 2]) : (arr_23 [i_30 - 1] [i_31] [i_31 + 2])));
                    var_57 = ((/* implicit */int) min((var_57), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_84 [(unsigned char)10] [i_35] [i_31] [i_30 - 1] [(unsigned char)10])) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) (unsigned char)160))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_80 [(_Bool)1] [i_30] [i_30] [(unsigned short)6] [(short)14] [i_30 - 1] [i_30 - 1]))))) : ((+(((/* implicit */int) (_Bool)1))))))));
                    var_58 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                }
            }
            var_59 = ((/* implicit */unsigned int) min((arr_40 [(signed char)16] [i_4] [i_4] [(signed char)16]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_75 [i_4] [0LL] [i_4] [i_4] [i_4])))))));
        }
    }
    for (unsigned short i_36 = 0; i_36 < 10; i_36 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_37 = 0; i_37 < 10; i_37 += 1) 
        {
            var_60 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max(((short)-32760), (((/* implicit */short) (unsigned char)169))))), (((unsigned int) arr_31 [(_Bool)1] [(unsigned short)12] [(_Bool)1]))));
            /* LoopSeq 4 */
            for (unsigned char i_38 = 0; i_38 < 10; i_38 += 1) 
            {
                arr_149 [i_38] [i_38] [i_38] [i_37] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)38861)) ? (arr_116 [i_36] [i_37] [i_38]) : (((/* implicit */int) var_7))))))));
                var_61 = ((/* implicit */_Bool) arr_132 [i_36] [i_36] [i_36] [i_37] [i_38] [i_37]);
            }
            /* vectorizable */
            for (short i_39 = 0; i_39 < 10; i_39 += 4) 
            {
                arr_152 [i_36] [i_37] [i_39] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_36] [i_36] [i_36])) ? (((/* implicit */int) (unsigned short)26690)) : (((/* implicit */int) ((unsigned short) arr_5 [(unsigned short)14])))));
                arr_153 [i_36] [i_37] [i_39] |= arr_80 [i_39] [i_37] [i_39] [i_37] [i_37] [i_37] [i_36];
                var_62 ^= ((/* implicit */int) arr_144 [i_39] [i_39] [i_36]);
            }
            for (unsigned char i_40 = 0; i_40 < 10; i_40 += 1) 
            {
                var_63 ^= ((/* implicit */long long int) var_6);
                arr_156 [i_37] [i_37] [i_37] = ((/* implicit */unsigned char) min((arr_150 [i_36] [i_36] [i_36] [i_36]), (arr_150 [i_36] [i_36] [i_36] [i_36])));
            }
            for (unsigned char i_41 = 0; i_41 < 10; i_41 += 1) 
            {
                var_64 = ((/* implicit */short) min((var_64), (((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_150 [i_36] [i_36] [i_37] [i_36])), ((unsigned short)19194)))), (min((((((/* implicit */_Bool) arr_154 [0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (3171160048664285076LL))), (((/* implicit */long long int) arr_36 [(unsigned short)4] [i_37] [(unsigned char)16] [i_41])))))))));
                arr_159 [i_36] [i_37] [(short)8] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)0)) ? ((~(((/* implicit */int) arr_130 [i_36] [(signed char)2] [i_37] [(unsigned char)12] [i_41])))) : (((/* implicit */int) (signed char)91))))));
                arr_160 [i_36] [i_36] [i_37] = ((/* implicit */unsigned char) min((((/* implicit */short) arr_99 [i_41] [i_36])), (arr_86 [i_41] [i_41] [i_41] [7] [i_37] [i_36])));
            }
            var_65 = ((/* implicit */unsigned char) min((var_65), (((/* implicit */unsigned char) arr_132 [i_36] [(unsigned short)10] [6U] [4LL] [0LL] [i_37]))));
        }
        for (signed char i_42 = 0; i_42 < 10; i_42 += 4) 
        {
            arr_165 [(short)0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_132 [i_36] [i_36] [i_42] [i_42] [i_36] [i_42])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_132 [i_36] [i_36] [i_36] [i_42] [i_36] [i_36]))), (((/* implicit */long long int) min((arr_23 [i_36] [i_42] [i_36]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_36] [i_36] [i_36])) ? (((/* implicit */int) arr_86 [i_42] [i_42] [i_42] [i_36] [i_36] [i_36])) : (((/* implicit */int) (unsigned char)87))))))))));
            var_66 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (arr_86 [i_36] [i_36] [i_42] [i_42] [i_36] [i_42])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [(unsigned char)21])), (arr_96 [i_42] [i_42] [i_42] [i_42] [(unsigned char)0])))) : (((/* implicit */int) arr_79 [i_42] [i_42] [i_42] [i_42] [i_36] [i_42] [(_Bool)1]))))) ? (arr_3 [i_42]) : (((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_6)))))))));
            arr_166 [i_42] = ((/* implicit */unsigned short) arr_108 [i_36] [i_36] [i_36] [i_42] [i_42]);
        }
        arr_167 [i_36] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((unsigned short) arr_140 [i_36])))) * (((/* implicit */int) arr_0 [i_36]))));
        var_67 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) arr_24 [(unsigned char)14] [4LL])))));
        var_68 = ((/* implicit */unsigned char) max((var_68), (((/* implicit */unsigned char) min((((/* implicit */long long int) var_6)), (arr_1 [i_36]))))));
    }
}
