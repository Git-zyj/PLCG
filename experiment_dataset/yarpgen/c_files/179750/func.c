/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179750
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
    var_18 -= ((unsigned char) var_1);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] &= ((/* implicit */short) ((long long int) (signed char)15));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_19 += ((/* implicit */short) ((signed char) ((unsigned char) 3698325045344728899LL)));
                        arr_9 [i_1] [1LL] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) (short)-32761);
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_3])))) != (((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) arr_8 [(unsigned char)15]);
                        arr_13 [i_0] [i_0] [(signed char)3] [i_0] = ((/* implicit */short) min((((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0]))))), (arr_0 [i_0])));
                        arr_14 [i_0] [(unsigned char)2] [(signed char)9] [i_0] = ((/* implicit */signed char) ((max((arr_1 [i_0]), (((/* implicit */long long int) arr_4 [i_4] [i_0])))) == (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-1), ((signed char)-56)))))));
                    }
                    arr_15 [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((arr_1 [i_0]) / (var_13))) > (min((((/* implicit */long long int) (short)32753)), (var_15))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            for (unsigned char i_6 = 2; i_6 < 14; i_6 += 4) 
            {
                {
                    var_22 -= ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */long long int) (short)11201)), (-2862145534571049746LL)))) ? (-3698325045344728900LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)55)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_5])) ? (((/* implicit */int) min((((/* implicit */short) (signed char)25)), (var_5)))) : (((((/* implicit */_Bool) arr_10 [i_0] [13LL] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_3)))))))));
                    arr_21 [(signed char)15] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_17) : (arr_1 [i_0]))), (((/* implicit */long long int) ((arr_1 [i_5]) > (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6 - 2] [i_5] [i_0]))))))));
                }
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
        {
            arr_28 [i_8] [(unsigned char)13] [0LL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_8] [i_8] [(signed char)3] [(signed char)3])) && (((/* implicit */_Bool) var_17))));
            /* LoopNest 3 */
            for (signed char i_9 = 3; i_9 < 15; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    for (short i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_8] [i_9 - 2] [i_8] [i_9 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_2))))));
                            arr_37 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_9 - 1])) > (((/* implicit */int) arr_0 [i_7]))));
                        }
                    } 
                } 
            } 
            arr_38 [(short)6] [i_7] |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) (signed char)-1)))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (arr_5 [i_7] [i_8] [i_7]) : (((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_8] [i_7] [i_8])) ^ (((/* implicit */int) var_7)))))));
        }
        for (long long int i_12 = 0; i_12 < 16; i_12 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_13 = 3; i_13 < 15; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 4) 
                    {
                        {
                            var_25 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_34 [i_7] [3LL] [3LL] [i_15]) : ((-9223372036854775807LL - 1LL)))) > ((+(((((/* implicit */_Bool) var_17)) ? (arr_1 [i_14]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                            var_26 ^= ((/* implicit */short) max((min((((signed char) var_17)), (var_0))), (((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_7] [i_7])) >= (((/* implicit */int) arr_24 [i_7] [i_7])))))));
                            var_27 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_13 - 2] [i_13 + 1] [i_13 - 1] [(short)3] [i_15] [(short)3]))) : (var_2))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_13 - 2] [i_13 - 2] [i_13 - 1] [i_13 - 3] [i_13 - 2])) ? (((/* implicit */int) arr_33 [i_13 - 2] [(unsigned char)2] [i_13 - 1] [(unsigned char)2] [(unsigned char)2])) : (((/* implicit */int) arr_33 [i_13 - 2] [i_13] [i_13 - 1] [i_15] [i_15])))))));
                            var_28 ^= max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32767)) && (((/* implicit */_Bool) 8603202920308163058LL))))), (2862145534571049733LL));
                        }
                    } 
                } 
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) var_14))));
            }
            for (signed char i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                var_30 &= ((/* implicit */long long int) min((var_3), (var_3)));
                arr_52 [i_7] [i_7] [i_7] &= ((/* implicit */unsigned char) ((signed char) ((1152920405095219200LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))))));
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_20 [i_7] [i_12] [i_16]))) ? (((/* implicit */int) arr_17 [i_7])) : (((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) (signed char)-101)), (var_13)))))));
            }
            arr_53 [(unsigned char)9] [(unsigned char)9] [(signed char)11] |= ((/* implicit */long long int) ((((/* implicit */int) (signed char)54)) > (((((/* implicit */int) arr_22 [i_7] [i_7])) | (((/* implicit */int) var_11))))));
            /* LoopSeq 2 */
            for (unsigned char i_17 = 0; i_17 < 16; i_17 += 4) 
            {
                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((((/* implicit */int) min((arr_20 [i_7] [i_7] [(unsigned char)9]), (((/* implicit */short) arr_55 [i_17] [i_7] [i_7]))))) > (((((/* implicit */_Bool) arr_55 [13LL] [i_12] [13LL])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) % (arr_5 [i_7] [i_12] [(short)2])))))))));
                /* LoopNest 2 */
                for (signed char i_18 = 3; i_18 < 15; i_18 += 2) 
                {
                    for (long long int i_19 = 0; i_19 < 16; i_19 += 2) 
                    {
                        {
                            arr_60 [i_7] [(signed char)9] [i_7] [i_7] [(short)3] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))) : (((((/* implicit */int) var_12)) / (((/* implicit */int) var_14))))))) ? (((((((/* implicit */int) arr_3 [i_7])) <= (((/* implicit */int) (signed char)-112)))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) (short)-2048)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) arr_29 [i_7])))))) : (((/* implicit */int) var_8))));
                            var_33 ^= ((/* implicit */short) var_9);
                            var_34 = ((/* implicit */short) max((var_34), (((short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-56)))) / (((/* implicit */int) arr_4 [(short)4] [(unsigned char)3])))))));
                            arr_61 [i_7] [i_7] [i_7] [i_18 - 3] [14LL] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255))))), (arr_10 [i_7] [i_18 - 1] [i_17] [i_18]))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_20 = 0; i_20 < 16; i_20 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_21 = 0; i_21 < 16; i_21 += 4) 
                {
                    arr_66 [i_7] &= ((/* implicit */signed char) (short)-32761);
                    /* LoopSeq 1 */
                    for (long long int i_22 = 1; i_22 < 14; i_22 += 4) 
                    {
                        arr_69 [2LL] [i_12] = ((/* implicit */signed char) var_17);
                        arr_70 [(short)12] [i_7] [i_20] [i_7] [i_7] &= ((long long int) var_13);
                        arr_71 [i_7] = ((/* implicit */unsigned char) (signed char)11);
                    }
                    var_35 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_17 [i_7])) : (((/* implicit */int) arr_22 [i_7] [i_12]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_17))));
                }
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_5 [i_7] [i_7] [i_20]))) * (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 16; i_23 += 1) 
                {
                    for (short i_24 = 0; i_24 < 16; i_24 += 2) 
                    {
                        {
                            var_37 *= ((/* implicit */unsigned char) var_17);
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */int) ((short) (signed char)15))) < (((/* implicit */int) (unsigned char)86)))))));
                            arr_80 [i_12] |= ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-1)) ^ (((/* implicit */int) (signed char)-117)))) % (((/* implicit */int) var_6))));
                            var_39 = ((/* implicit */long long int) arr_46 [i_7] [i_20] [i_20] [i_23] [i_24]);
                        }
                    } 
                } 
            }
        }
        var_40 ^= ((/* implicit */signed char) arr_74 [14LL] [i_7] [14LL] [i_7]);
    }
    for (unsigned char i_25 = 0; i_25 < 16; i_25 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_26 = 0; i_26 < 16; i_26 += 2) 
        {
            for (signed char i_27 = 0; i_27 < 16; i_27 += 3) 
            {
                for (long long int i_28 = 2; i_28 < 15; i_28 += 1) 
                {
                    {
                        var_41 += var_8;
                        var_42 = ((/* implicit */signed char) max((min((((arr_58 [(signed char)1] [i_26] [(short)9] [(signed char)1] [(signed char)1] [(short)9]) + (arr_34 [i_26] [i_26] [i_26] [(unsigned char)9]))), (arr_45 [i_25] [(signed char)5] [i_27] [i_28] [i_25]))), (((/* implicit */long long int) min((arr_57 [(unsigned char)3] [i_26] [i_26] [(signed char)0]), (arr_57 [i_25] [i_26] [i_26] [3LL]))))));
                    }
                } 
            } 
        } 
        arr_91 [i_25] = ((/* implicit */signed char) ((short) (+(((/* implicit */int) var_3)))));
        var_43 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
        arr_92 [(unsigned char)4] = ((/* implicit */unsigned char) var_13);
    }
    for (unsigned char i_29 = 0; i_29 < 16; i_29 += 4) /* same iter space */
    {
        arr_96 [(short)15] |= var_8;
        /* LoopNest 2 */
        for (signed char i_30 = 0; i_30 < 16; i_30 += 4) 
        {
            for (long long int i_31 = 3; i_31 < 13; i_31 += 4) 
            {
                {
                    arr_102 [(short)11] [i_30] [(short)11] = ((/* implicit */signed char) min((var_3), (((/* implicit */short) var_11))));
                    /* LoopSeq 2 */
                    for (short i_32 = 0; i_32 < 16; i_32 += 1) 
                    {
                        arr_106 [7LL] [i_30] [i_31] [(unsigned char)7] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))), (min((((/* implicit */long long int) arr_22 [(short)5] [(short)5])), (min((((/* implicit */long long int) (unsigned char)88)), (-3698325045344728900LL)))))));
                        var_44 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_10 [i_29] [(signed char)2] [i_31] [i_29]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) (signed char)-110)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_31]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16))))))), (((/* implicit */long long int) arr_33 [i_29] [(unsigned char)0] [i_29] [i_29] [6LL]))));
                        var_45 = ((/* implicit */unsigned char) min((min(((~(arr_30 [7LL] [7LL] [i_31 - 1] [i_32]))), (((var_13) | (arr_45 [i_29] [i_30] [i_29] [i_31] [(signed char)0]))))), ((~(min((((/* implicit */long long int) arr_86 [i_29] [i_30])), (arr_74 [(signed char)11] [(short)10] [i_31 - 2] [(short)10])))))));
                        arr_107 [13LL] [(signed char)15] [13LL] [(signed char)15] [(signed char)15] [(signed char)15] = ((/* implicit */short) min((((/* implicit */long long int) ((((((/* implicit */int) arr_55 [(signed char)6] [(signed char)6] [(signed char)14])) <= (((/* implicit */int) var_9)))) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_0)))))))), (min((((/* implicit */long long int) (short)-1115)), (-9223372036854775799LL)))));
                    }
                    for (unsigned char i_33 = 0; i_33 < 16; i_33 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_34 = 0; i_34 < 16; i_34 += 1) 
                        {
                            var_46 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)-117)) - (((/* implicit */int) (unsigned char)56))))), (((arr_58 [i_29] [i_31 - 1] [(unsigned char)0] [(unsigned char)0] [i_34] [i_34]) / (((/* implicit */long long int) ((/* implicit */int) arr_111 [i_29] [i_31 - 1] [(signed char)13] [i_31 - 1])))))));
                            var_47 *= ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_7)))), (min((((/* implicit */int) ((short) var_7))), (((((/* implicit */_Bool) arr_101 [i_29] [(unsigned char)8] [(short)3])) ? (((/* implicit */int) arr_36 [i_29] [(unsigned char)2] [(unsigned char)2] [(signed char)12] [i_34])) : (((/* implicit */int) var_11))))))));
                            var_48 ^= max((min((arr_49 [11LL] [i_30] [i_31 - 2] [11LL] [11LL]), (arr_49 [(short)2] [(short)2] [i_31 + 1] [i_34] [(signed char)9]))), (((unsigned char) arr_87 [i_31] [i_31] [i_31 - 1])));
                        }
                        for (signed char i_35 = 0; i_35 < 16; i_35 += 4) 
                        {
                            var_49 -= ((/* implicit */short) var_9);
                            arr_120 [i_29] [i_29] [i_31] [i_33] [i_33] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_64 [i_31 - 2] [i_31 + 2] [(unsigned char)1] [i_29] [i_29])) ? (((/* implicit */int) arr_64 [i_31 - 3] [i_31 + 3] [2LL] [(unsigned char)7] [i_30])) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_16))));
                            var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_77 [i_31] [i_31] [i_31] [i_31] [i_31 - 3] [i_31] [i_31 - 1]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((var_6), (((/* implicit */short) var_12)))))));
                        }
                        var_51 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */short) arr_98 [i_31 + 3] [i_31 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (-421279943431485229LL)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((short) var_5)))))) : (arr_30 [i_31 + 1] [i_31 - 3] [i_31 - 3] [i_31 + 1])));
                        arr_121 [i_33] [(signed char)10] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_36 = 2; i_36 < 15; i_36 += 4) 
                        {
                            var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) ((((/* implicit */int) (((-(((/* implicit */int) (signed char)55)))) == (((/* implicit */int) (signed char)58))))) << (((((((((-8922477360993960282LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_5)) + (20380))))) >> (((((/* implicit */int) (short)-26557)) + (26578))))) - (16LL))))))));
                            var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_31 - 2] [i_30])) - (((/* implicit */int) arr_40 [i_29] [i_30]))))) ? (((((/* implicit */int) (unsigned char)201)) - (((/* implicit */int) arr_40 [(short)8] [i_36 - 2])))) : (((/* implicit */int) min((arr_40 [i_29] [i_29]), (arr_40 [i_29] [i_36 - 2]))))));
                            var_54 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_20 [i_36 - 1] [i_36 - 1] [i_31 + 2]), (arr_20 [i_36 + 1] [i_36 - 2] [i_31 + 2]))))));
                        }
                    }
                }
            } 
        } 
        var_55 ^= ((/* implicit */unsigned char) arr_72 [i_29] [i_29] [i_29] [(signed char)9]);
        arr_124 [i_29] |= ((/* implicit */short) (-(((((/* implicit */int) var_7)) / (((/* implicit */int) var_6))))));
        arr_125 [i_29] = max((((/* implicit */unsigned char) ((signed char) arr_115 [i_29] [i_29] [(unsigned char)2] [(unsigned char)2] [(short)12] [i_29]))), (((unsigned char) (!(((/* implicit */_Bool) (signed char)-80))))));
    }
    var_56 = var_13;
    var_57 ^= ((/* implicit */short) (((-((-(((/* implicit */int) var_7)))))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max((var_7), (var_16)))) : (((/* implicit */int) min(((signed char)48), ((signed char)54))))))));
}
