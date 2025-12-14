/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158626
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
    var_11 += ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_12 ^= ((((/* implicit */int) arr_1 [i_0 + 1])) >> (((((/* implicit */_Bool) (unsigned short)480)) ? (((/* implicit */int) (_Bool)0)) : (arr_0 [i_0 + 3]))));
        var_13 = ((/* implicit */signed char) var_9);
        /* LoopSeq 4 */
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                for (unsigned int i_3 = 2; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_12 [i_2] [(signed char)14] = ((/* implicit */unsigned int) ((var_7) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 2])))));
                        var_14 = ((/* implicit */unsigned char) (~(arr_0 [i_1 + 2])));
                        arr_13 [i_2] = ((/* implicit */unsigned long long int) arr_1 [i_2 + 1]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            var_15 = ((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 3] [(short)8] [i_4 + 1] [i_2 - 1] [(signed char)2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_3 - 2] [18U] [i_3 - 2] [i_3 - 2])));
                            var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [i_2 + 1] [i_3] [i_4 + 1] [i_4]))));
                            var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)12] [(signed char)12] [i_2 - 1]))) - (arr_10 [(unsigned short)15] [i_1] [i_2] [14] [i_4] [14]))))));
                        }
                    }
                } 
            } 
            arr_17 [1U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-110)) || (((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_0] [15ULL] [i_0] [i_0]))));
            var_18 += ((/* implicit */short) -1752034868);
            /* LoopSeq 4 */
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 268304384U)))))));
                            var_20 ^= (+(((/* implicit */int) arr_15 [i_0 + 3] [i_1] [(unsigned char)16] [i_7] [16U] [i_1 - 1] [i_5])));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1]))));
            }
            for (unsigned int i_8 = 2; i_8 < 17; i_8 += 3) /* same iter space */
            {
                var_22 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_8 - 1] [i_0 + 2] [i_1 + 2])) & (((/* implicit */int) arr_26 [i_8 - 1] [i_0 + 2] [i_1 - 1]))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0 + 3] [i_1 - 2] [i_8] [i_8 + 1])) || (((/* implicit */_Bool) (~(var_3))))));
                arr_28 [i_0] [12ULL] [i_0] [i_0] = ((/* implicit */int) (unsigned short)46015);
                var_24 = ((/* implicit */unsigned int) -2147483628);
                arr_29 [i_0] [(signed char)16] [i_8] = ((/* implicit */unsigned int) (~(arr_19 [i_1 + 2] [i_1] [i_8 + 1] [i_0])));
            }
            for (unsigned int i_9 = 2; i_9 < 17; i_9 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [12ULL] [(unsigned char)8] [(unsigned char)8] [i_0] [(unsigned char)8]);
                var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_32 [(_Bool)1] [i_1] [6U]))));
                var_27 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                var_28 = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_1 - 2] [i_1]);
            }
            for (int i_10 = 3; i_10 < 17; i_10 += 2) 
            {
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_1] [i_1] [i_1 + 2] [i_1 - 1] [i_1 - 2])) % (((/* implicit */int) arr_16 [i_1] [i_1] [14LL] [i_1 - 1] [i_1 - 2]))));
                var_30 = ((/* implicit */signed char) (+(arr_4 [i_0 + 2] [(_Bool)1])));
            }
        }
        for (unsigned int i_11 = 2; i_11 < 17; i_11 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                arr_40 [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_11 - 2])) * (((/* implicit */int) (_Bool)0))));
                var_31 = ((/* implicit */unsigned long long int) arr_25 [10] [i_0 - 1] [i_11 - 1]);
                arr_41 [i_0] [i_12] = ((/* implicit */unsigned long long int) var_4);
                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) arr_23 [i_0 + 2] [i_0] [i_0 + 1] [10ULL] [i_0 + 3])) : (((/* implicit */int) arr_23 [i_0 + 1] [(signed char)18] [8] [i_0] [i_0 - 1])))))));
                var_33 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) var_6))))) - ((~(arr_3 [(signed char)6])))));
            }
            for (unsigned short i_13 = 0; i_13 < 19; i_13 += 3) 
            {
                var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
                arr_45 [i_0 + 3] [i_11] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_27 [i_0 + 1] [i_0 + 1] [i_11 + 1]))));
                /* LoopSeq 1 */
                for (long long int i_14 = 2; i_14 < 18; i_14 += 1) 
                {
                    var_35 = ((/* implicit */signed char) (+(8U)));
                    arr_50 [i_0] [i_0] = arr_5 [i_0] [(signed char)4] [i_0];
                    arr_51 [i_13] [11U] [i_14] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) <= (((/* implicit */int) arr_16 [i_14 - 1] [i_11 + 2] [i_0 + 2] [i_0] [i_0]))));
                }
            }
            for (unsigned char i_15 = 2; i_15 < 18; i_15 += 1) 
            {
                var_36 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 2]))));
                arr_54 [i_0] = ((/* implicit */short) ((unsigned int) arr_44 [i_0] [0U] [i_0 + 3]));
            }
            arr_55 [i_11] [i_0] = ((/* implicit */unsigned long long int) var_7);
        }
        for (unsigned int i_16 = 2; i_16 < 17; i_16 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_17 = 0; i_17 < 19; i_17 += 4) 
            {
                for (unsigned short i_18 = 3; i_18 < 15; i_18 += 2) 
                {
                    {
                        arr_65 [13ULL] [i_0] = ((/* implicit */unsigned short) ((arr_10 [(_Bool)1] [i_16] [i_16 - 2] [i_18] [i_16] [i_0 - 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 3] [i_0] [i_0])))));
                        /* LoopSeq 1 */
                        for (int i_19 = 2; i_19 < 17; i_19 += 3) 
                        {
                            var_37 *= ((/* implicit */signed char) arr_32 [i_19] [i_19 + 1] [i_16 + 2]);
                            arr_70 [i_17] [i_16 - 2] [i_17] [i_18] [i_17] [10ULL] = var_8;
                            arr_71 [i_19] [i_18 + 1] = ((/* implicit */int) (-(arr_19 [(signed char)12] [(unsigned short)18] [i_0 + 1] [i_16 + 2])));
                            var_38 = (-(((/* implicit */int) arr_37 [i_0] [i_19 - 1] [i_0 + 2])));
                        }
                    }
                } 
            } 
            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_16 + 1] [i_16 - 2] [3] [i_0 + 2])) ? (arr_14 [i_0] [i_16 - 2] [i_0] [i_16] [i_0 + 3]) : (arr_14 [i_0] [i_16 + 1] [(signed char)10] [(signed char)10] [i_0 + 2])));
            var_40 = ((/* implicit */short) (~(arr_20 [i_16 + 2] [i_0 + 3])));
            /* LoopSeq 3 */
            for (short i_20 = 4; i_20 < 16; i_20 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_21 = 1; i_21 < 15; i_21 += 1) 
                {
                    arr_76 [(short)9] [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)1))))));
                    arr_77 [i_0] [i_0] [i_0] [(unsigned short)10] [i_0] = (_Bool)1;
                }
                for (unsigned int i_22 = 0; i_22 < 19; i_22 += 3) 
                {
                    arr_81 [i_0 + 3] [i_0 + 3] [11] = ((/* implicit */long long int) arr_23 [i_0] [i_16 - 1] [i_20] [i_22] [i_22]);
                    var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) (~((+(arr_47 [(unsigned short)11] [i_16] [i_20] [i_16]))))))));
                    var_42 |= ((/* implicit */long long int) var_9);
                }
                for (unsigned int i_23 = 2; i_23 < 17; i_23 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (short i_24 = 1; i_24 < 18; i_24 += 2) 
                    {
                        arr_89 [i_0] [i_24] = ((/* implicit */signed char) 2147483628);
                        arr_90 [(short)8] [(signed char)12] [i_24] [12ULL] [i_24] = ((/* implicit */long long int) (unsigned short)46015);
                    }
                    for (int i_25 = 1; i_25 < 17; i_25 += 3) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) (-(var_5)));
                        var_44 = (unsigned short)19515;
                        var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65535)))))));
                        var_46 ^= ((/* implicit */unsigned char) ((unsigned long long int) arr_36 [i_16 - 1]));
                        var_47 = ((/* implicit */int) ((unsigned long long int) arr_9 [i_0 + 2] [i_16 - 1] [i_20] [i_23 - 2]));
                    }
                    for (unsigned char i_26 = 0; i_26 < 19; i_26 += 4) 
                    {
                        arr_96 [i_0] [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-126))));
                        var_48 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % ((~(arr_72 [(unsigned short)5])))));
                        var_49 = ((/* implicit */int) (signed char)(-127 - 1));
                    }
                    for (signed char i_27 = 4; i_27 < 17; i_27 += 2) 
                    {
                        var_50 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [1LL] [i_16] [i_16 - 1] [i_16] [i_16 - 1] [i_20 + 1] [i_27]))));
                        var_51 = ((/* implicit */int) max((var_51), (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_23] [i_20 - 4] [i_23 + 1] [i_23] [i_16 + 2] [1LL] [(unsigned char)6])) ? (arr_82 [i_20 + 2] [(_Bool)1] [i_0 + 1] [i_20 + 2]) : (((/* implicit */long long int) arr_47 [i_0] [i_16 - 1] [i_20] [i_23])))))));
                        var_52 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_0] [i_0 - 1] [i_0 + 2]))));
                        var_53 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_42 [i_27 - 1] [i_20] [i_16] [i_0 - 1])) ? (((/* implicit */int) (short)-13712)) : (((/* implicit */int) var_8))))));
                    }
                    var_54 = ((/* implicit */long long int) ((unsigned int) var_9));
                    arr_101 [3U] [16] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_78 [i_0 + 1] [i_23 + 1]))));
                    var_55 &= ((/* implicit */unsigned long long int) ((-2097979104) * (((/* implicit */int) arr_44 [i_0] [i_0 + 2] [i_0]))));
                    var_56 = ((/* implicit */short) ((_Bool) arr_43 [i_0 + 1] [i_0 + 2]));
                }
                for (unsigned int i_28 = 2; i_28 < 17; i_28 += 1) /* same iter space */
                {
                    arr_104 [i_0] [i_16] [(unsigned short)9] [i_28 + 1] = ((/* implicit */long long int) ((((2539905338U) * (((/* implicit */unsigned int) var_10)))) >> (((((/* implicit */int) var_8)) - (47997)))));
                    arr_105 [i_0] [16ULL] [i_20] [i_28] [7LL] [i_0] = ((/* implicit */long long int) (+((+(((/* implicit */int) var_4))))));
                }
                var_57 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_9)))));
                var_58 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_7 [(unsigned char)14] [(signed char)17] [i_20 - 1]))));
            }
            for (short i_29 = 4; i_29 < 16; i_29 += 2) /* same iter space */
            {
                var_59 = ((/* implicit */_Bool) max((var_59), (((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_0 [i_16 + 2])) & (arr_98 [(_Bool)1] [i_0] [i_16 - 1] [i_16] [i_29 + 3]))))));
                arr_109 [i_0] [i_16] [i_0] = ((/* implicit */int) arr_52 [i_0] [i_16] [0LL] [i_16]);
                var_60 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (arr_82 [i_0 - 1] [i_16 + 2] [(unsigned short)8] [i_29 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)55)))));
                var_61 = ((/* implicit */int) (+(arr_66 [1LL] [(unsigned short)15] [i_0 + 3] [i_16 + 1] [i_29])));
            }
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                var_62 = ((/* implicit */short) min((var_62), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) var_1)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_5)) : (var_3))))))));
                var_63 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_15 [(short)14] [i_16 - 2] [i_0 + 2] [i_0] [i_0] [i_0] [i_0]))));
            }
        }
        for (unsigned int i_31 = 2; i_31 < 17; i_31 += 1) /* same iter space */
        {
            var_64 = ((/* implicit */unsigned long long int) ((unsigned int) arr_59 [10] [15U] [i_31 - 1] [i_0 + 2]));
            var_65 = ((/* implicit */int) max((var_65), (((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_0 - 1] [i_0 + 3] [i_0 - 1])))))));
            var_66 = ((/* implicit */signed char) min((var_66), (((/* implicit */signed char) ((arr_60 [i_31 - 1] [0U]) || (((/* implicit */_Bool) arr_80 [i_0 + 2] [i_31 - 2] [i_31] [i_31 + 2] [13LL])))))));
            var_67 = ((/* implicit */unsigned int) (short)31177);
        }
    }
    for (unsigned short i_32 = 3; i_32 < 19; i_32 += 1) 
    {
        arr_118 [i_32] = ((((/* implicit */_Bool) min((17U), (((/* implicit */unsigned int) (_Bool)1))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-125))))));
        /* LoopNest 2 */
        for (int i_33 = 4; i_33 < 19; i_33 += 3) 
        {
            for (unsigned short i_34 = 0; i_34 < 21; i_34 += 3) 
            {
                {
                    var_68 = ((/* implicit */long long int) max((var_68), (((/* implicit */long long int) arr_119 [(short)14] [i_33] [4ULL]))));
                    arr_125 [i_32] [(signed char)14] = ((/* implicit */unsigned long long int) var_7);
                    var_69 ^= ((/* implicit */unsigned long long int) min((min((((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) arr_124 [20] [i_33] [i_34])))), ((-(((/* implicit */int) var_1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_119 [i_32 - 1] [i_32 - 1] [18U])))))));
                    /* LoopNest 2 */
                    for (int i_35 = 1; i_35 < 20; i_35 += 1) 
                    {
                        for (unsigned short i_36 = 1; i_36 < 20; i_36 += 1) 
                        {
                            {
                                arr_131 [i_32] [i_36 - 1] [i_35] [i_34] [i_34] [i_32 - 1] [i_32] = min((((/* implicit */long long int) var_1)), (max((9223372036854775807LL), ((-9223372036854775807LL - 1LL)))));
                                var_70 = ((/* implicit */long long int) max((var_70), (((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_124 [(unsigned char)6] [i_32 - 3] [i_35 + 1]))))) % ((~(min((((/* implicit */unsigned int) (_Bool)1)), (487807558U))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_132 [2ULL] [14ULL] |= ((/* implicit */int) min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) arr_116 [(unsigned short)20]))));
    }
}
