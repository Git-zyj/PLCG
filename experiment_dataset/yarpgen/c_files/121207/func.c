/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121207
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 4611650834055299072LL)) ? (-4611650834055299072LL) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) | (-4611650834055299072LL)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((long long int) arr_8 [i_0] [14ULL] [i_1] [i_2] [i_3] [i_3]));
                            var_16 = ((/* implicit */short) (signed char)54);
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned char) arr_5 [i_0]))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [16LL] [5LL]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_4 = 3; i_4 < 6; i_4 += 1) /* same iter space */
    {
        arr_11 [(_Bool)1] &= ((/* implicit */unsigned char) (unsigned short)65535);
        /* LoopSeq 4 */
        for (int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 3; i_7 < 8; i_7 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_7] [i_6] [i_5] [i_5] [i_4 + 1])) != (arr_5 [i_6])))) > (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_19 [i_4] [i_6] [i_6] [i_6])) : (((/* implicit */int) var_6))))));
                        arr_22 [i_5] [i_4] [i_5] [0] [i_7 - 3] |= arr_6 [i_4 + 2] [i_6];
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_4] [i_5] [i_4 + 4] [i_5] [i_5])) << (((/* implicit */int) arr_7 [i_4] [i_5] [i_4 + 1] [i_5] [i_5]))));
            /* LoopSeq 1 */
            for (int i_8 = 1; i_8 < 6; i_8 += 2) 
            {
                arr_26 [i_4 - 3] [i_4 - 3] = ((/* implicit */unsigned short) ((arr_24 [i_4 + 3] [i_4 + 3] [i_4 - 2]) ? (((/* implicit */int) arr_24 [i_4 + 1] [i_4 + 3] [i_4 - 2])) : (-652705814)));
                arr_27 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_4] [i_5]) | (arr_9 [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_4] [i_5] [i_8 + 4] [i_8] [i_5])) << (((/* implicit */int) arr_24 [(_Bool)1] [i_4] [(_Bool)1]))))) : (((arr_25 [0] [(unsigned char)5] [(unsigned char)5]) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [10])))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_4 - 2])) ? (arr_3 [i_4 + 3]) : (((/* implicit */int) (signed char)117))));
            }
            arr_28 [(signed char)6] [(signed char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4611650834055299072LL)) ? (((/* implicit */int) arr_16 [i_4 + 1] [i_5])) : (((/* implicit */int) arr_16 [i_4 - 1] [i_5]))));
        }
        for (short i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            arr_31 [i_9] = arr_18 [i_4] [i_9];
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_4 + 4])) ? (576460752303419392LL) : (((/* implicit */long long int) arr_12 [i_4 - 2])))))));
        }
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) arr_18 [4] [4]);
            var_23 = ((/* implicit */long long int) (-(arr_13 [i_4] [i_4] [i_4])));
            arr_34 [i_4] [i_10] = ((/* implicit */signed char) (_Bool)0);
            arr_35 [(_Bool)1] [(signed char)6] [i_10] |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4] [i_4 + 3]))) - (arr_32 [i_4 - 1])));
        }
        for (signed char i_11 = 0; i_11 < 10; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    {
                        var_24 |= ((/* implicit */unsigned short) 4611650834055299097LL);
                        arr_45 [i_4] [i_4] [i_12] [(short)3] = ((/* implicit */unsigned short) ((((arr_32 [i_12]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_0 [i_13])) - (46149)))));
                        /* LoopSeq 1 */
                        for (int i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            arr_48 [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_4] [i_12] [i_13] [i_11] [(unsigned short)3] [i_13])) >> (((((/* implicit */int) ((unsigned short) arr_12 [6LL]))) - (51601)))));
                            arr_49 [i_12] [i_12] [i_11] [(short)9] [i_12] [i_13] [(short)9] = ((/* implicit */_Bool) ((unsigned char) 9005000231485440LL));
                            arr_50 [i_4] [i_12] [i_12] [i_12] [i_4 + 2] [i_4] [i_11] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_14 [i_4] [i_13] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_4]))) : (arr_1 [i_4 - 2] [i_11]))) >= (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_11] [i_12]))) : (4611650834055299071LL)))));
                            var_25 &= ((/* implicit */unsigned short) arr_30 [i_4] [i_4 + 2] [i_4 + 3]);
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-124)) ? (arr_25 [i_4] [i_4] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) != (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_11] [i_11]))) - (57344LL))))))));
            arr_51 [i_11] = ((/* implicit */signed char) ((_Bool) arr_40 [i_4 + 4] [i_4 + 2] [i_4 + 2] [i_4 + 1]));
        }
        /* LoopNest 2 */
        for (unsigned short i_15 = 0; i_15 < 10; i_15 += 3) 
        {
            for (int i_16 = 1; i_16 < 9; i_16 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        arr_60 [i_4 + 2] [i_15] [i_15] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 32256ULL)))) <= (4611650834055299072LL)));
                        var_27 = ((/* implicit */unsigned long long int) (~(((int) arr_8 [i_4] [i_4] [(unsigned short)13] [i_15] [i_16] [i_17]))));
                        arr_61 [i_4 - 2] [i_4 - 2] [(unsigned char)8] [i_4 + 4] [i_4] [i_15] = ((/* implicit */unsigned char) arr_9 [i_4]);
                    }
                    for (unsigned int i_18 = 0; i_18 < 10; i_18 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_19 = 3; i_19 < 9; i_19 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_16 + 1] [i_16 - 1] [i_16 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28))) : (arr_25 [i_16 - 1] [i_16 - 1] [i_16 - 1])));
                            arr_67 [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) arr_20 [i_19] [i_18] [i_16] [4] [i_4])))));
                            var_29 = ((/* implicit */int) min((var_29), (-326745665)));
                        }
                        for (unsigned long long int i_20 = 3; i_20 < 9; i_20 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (signed char)-55))));
                            arr_70 [i_20] [i_18] [i_15] [i_15] [i_4 + 4] [(unsigned short)8] = ((/* implicit */int) ((((/* implicit */_Bool) -1416560785)) ? (arr_10 [i_16 - 1]) : (arr_10 [i_16 - 1])));
                            var_31 = ((/* implicit */unsigned long long int) ((arr_55 [i_4 - 2] [i_4 + 3]) < (arr_55 [i_4 - 2] [i_4 + 3])));
                        }
                        for (unsigned long long int i_21 = 3; i_21 < 9; i_21 += 3) /* same iter space */
                        {
                            arr_75 [i_15] [i_15] = ((/* implicit */short) arr_19 [i_4] [i_15] [i_15] [i_21 + 1]);
                            var_32 |= ((/* implicit */unsigned short) arr_57 [(signed char)8] [i_15] [i_16] [i_18]);
                        }
                        arr_76 [i_4] [(unsigned char)0] [i_16] [i_18] [i_15] |= ((/* implicit */unsigned char) arr_43 [i_4] [8ULL] [i_4 + 1] [i_18] [i_4]);
                        var_33 = (-2147483647 - 1);
                        var_34 = ((/* implicit */long long int) ((unsigned char) arr_62 [i_15]));
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_22 = 0; i_22 < 10; i_22 += 1) /* same iter space */
                    {
                        arr_79 [i_15] [i_15] [4] [i_22] = ((/* implicit */signed char) ((unsigned short) -1180562594));
                        arr_80 [i_4] [i_15] [i_15] [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)54810)) ? (arr_72 [i_4] [i_15] [(unsigned short)0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127)))))));
                    }
                    for (unsigned short i_23 = 0; i_23 < 10; i_23 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned char) ((unsigned short) ((arr_32 [i_23]) - (arr_42 [i_15] [i_16] [i_23]))));
                        arr_84 [i_4] [2U] [2] [i_23] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)156)) ? (9005000231485440LL) : (((/* implicit */long long int) ((/* implicit */int) (short)13976)))));
                        arr_85 [i_4] [i_15] [i_4] [i_16 + 1] [i_16 - 1] [(signed char)0] |= ((/* implicit */unsigned char) arr_56 [i_16] [i_15] [(signed char)0] [i_23]);
                        /* LoopSeq 4 */
                        for (unsigned short i_24 = 0; i_24 < 10; i_24 += 3) 
                        {
                            arr_88 [(unsigned char)2] [i_15] [i_16] [i_23] [i_24] = ((/* implicit */unsigned char) arr_21 [i_4] [i_16] [i_23] [i_24]);
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_73 [i_16 - 1] [i_16 - 1] [(unsigned short)8] [i_16 - 1] [(unsigned short)0] [(unsigned short)3] [i_24])) ? (((/* implicit */unsigned long long int) arr_54 [i_23])) : (arr_17 [i_4 + 1] [i_4 - 1] [i_4 + 4] [i_4 - 1])));
                            var_37 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_4 + 3] [6ULL] [i_16 + 1])) ? (((/* implicit */int) arr_71 [i_4 + 2] [i_4] [i_4] [i_4] [(signed char)7] [i_4 + 2] [i_4])) : (arr_13 [8ULL] [i_23] [i_24])));
                            var_38 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [i_15] [i_16] [(signed char)2] [(_Bool)1])) ? (arr_44 [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_4 + 3]) : (arr_44 [i_4] [i_15] [i_16 + 1] [i_24])));
                        }
                        for (unsigned short i_25 = 0; i_25 < 10; i_25 += 3) 
                        {
                            var_39 = ((/* implicit */long long int) arr_7 [i_4] [i_15] [i_16] [i_4] [(signed char)13]);
                            var_40 ^= ((/* implicit */long long int) ((int) arr_18 [4ULL] [4ULL]));
                            arr_92 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [i_15] [i_15] [i_4] [6U] = ((/* implicit */unsigned int) ((((((((/* implicit */int) (unsigned short)37322)) + (arr_5 [i_4]))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                            arr_93 [i_4] [3] [i_16] [i_23] [i_23] [i_15] [i_23] = ((/* implicit */unsigned char) ((arr_17 [i_4 + 3] [i_4 + 3] [i_4] [i_16 + 1]) / (arr_17 [i_4 + 3] [i_4 + 3] [i_16] [i_16 + 1])));
                            var_41 = ((/* implicit */_Bool) ((signed char) arr_7 [i_16 - 1] [i_16 - 1] [i_16] [i_16] [i_16 - 1]));
                        }
                        for (unsigned long long int i_26 = 0; i_26 < 10; i_26 += 2) 
                        {
                            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) arr_2 [i_4]))));
                            var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_65 [i_4] [i_15] [i_16] [i_23] [i_26])))) != (((arr_1 [i_4] [i_16]) / (((/* implicit */long long int) ((/* implicit */int) arr_38 [4LL] [i_15]))))))))));
                            arr_97 [i_15] [i_15] [i_15] [i_23] = (signed char)-80;
                        }
                        for (unsigned int i_27 = 2; i_27 < 8; i_27 += 1) 
                        {
                            arr_101 [(_Bool)1] [(_Bool)1] [i_16] [i_16] [i_15] [8U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)11328)) > (((/* implicit */int) (signed char)117))));
                            arr_102 [i_15] [i_15] [i_16] [i_23] [i_27] = ((/* implicit */long long int) (signed char)-87);
                        }
                        var_44 = ((/* implicit */signed char) (unsigned short)40441);
                    }
                    for (unsigned short i_28 = 0; i_28 < 10; i_28 += 1) /* same iter space */
                    {
                        arr_107 [i_15] [0] [i_16 + 1] [i_28] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_4 + 3])) ? (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-127)) + (2147483647))) << (((((/* implicit */int) (unsigned char)178)) - (178)))))) : (((((/* implicit */long long int) arr_3 [i_15])) + (arr_82 [i_4] [i_15] [i_16 - 1] [i_15] [i_28] [i_16])))));
                        arr_108 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 258048)) ? (((/* implicit */int) arr_62 [i_15])) : (((/* implicit */int) (_Bool)1))));
                        var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((unsigned short) ((unsigned int) (unsigned short)65535))))));
                        arr_109 [i_15] [i_15] [i_16] [(unsigned char)7] = ((/* implicit */long long int) arr_44 [(signed char)4] [i_4 + 3] [i_16 + 1] [i_28]);
                        arr_110 [i_15] [i_15] [i_15] [9] [i_16 + 1] [i_15] = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (unsigned short i_29 = 1; i_29 < 9; i_29 += 3) 
                    {
                        var_46 = ((/* implicit */unsigned short) arr_72 [i_4] [(signed char)6] [i_16 - 1]);
                        arr_113 [i_4] [i_4] [i_16] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_87 [i_16 - 1] [i_16] [i_16] [i_16] [i_16] [i_29] [i_29])) ? (arr_37 [i_16 + 1] [i_16 + 1] [4U]) : (arr_37 [i_16 + 1] [i_16] [i_29])));
                        arr_114 [i_4] [i_15] [i_16] [i_29] [(unsigned short)7] = ((/* implicit */signed char) ((arr_36 [(short)6] [i_4 + 3]) >> (((arr_36 [(signed char)9] [i_4 + 3]) - (1550489562)))));
                    }
                }
            } 
        } 
    }
    for (int i_30 = 3; i_30 < 6; i_30 += 1) /* same iter space */
    {
        arr_117 [(short)3] [i_30] = ((/* implicit */unsigned short) ((long long int) ((arr_64 [i_30 + 4] [(signed char)2] [i_30] [i_30 - 3] [(signed char)2] [i_30]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_90 [i_30 + 4]))))));
        var_47 = ((/* implicit */signed char) max((((arr_54 [i_30]) / (((/* implicit */unsigned int) 1039266308)))), (((/* implicit */unsigned int) arr_0 [i_30]))));
        var_48 = ((/* implicit */unsigned char) arr_25 [i_30] [i_30] [i_30]);
        var_49 = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) (short)-13977))), ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) | (min(((-2147483647 - 1)), (((/* implicit */int) arr_105 [i_30]))))))));
    }
    var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) max((-258049), (-1082987983))))));
}
