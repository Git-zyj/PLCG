/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147712
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
    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (var_8)));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)31561)) ? (((((var_4) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned short) var_3))) - (61688))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
    var_16 = ((/* implicit */signed char) var_0);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0] [7]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) + (9223372036854775807LL))) >> (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_1))))))) ? (((((/* implicit */_Bool) ((long long int) var_13))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) (-(var_13)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31561)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))))));
        var_18 *= ((/* implicit */signed char) (~(min((arr_1 [14U]), (((/* implicit */unsigned long long int) var_1))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_9 [2LL] [i_2] &= ((/* implicit */_Bool) var_7);
            arr_10 [i_1] [i_1] [i_2] = ((/* implicit */long long int) max((((unsigned long long int) arr_3 [i_1])), (min((((/* implicit */unsigned long long int) var_5)), (arr_3 [i_1])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_19 -= ((/* implicit */_Bool) arr_0 [i_1] [i_2]);
                arr_13 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */int) (signed char)118)) > (((/* implicit */int) (unsigned char)255))));
                arr_14 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) var_12);
                arr_15 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_3])) : (((/* implicit */int) var_6)))))));
                var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_1])) ? (((/* implicit */int) arr_12 [i_1] [i_2] [(unsigned char)1] [1U])) : (((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_2]))));
            }
            for (int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                arr_19 [i_2] = ((/* implicit */long long int) arr_16 [i_1] [i_2] [i_4]);
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_10)))))))))));
                arr_20 [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((0U), (4294967295U)))) ? (max((((/* implicit */long long int) var_8)), (var_12))) : (((/* implicit */long long int) var_8))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)6796)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1]))))))))) : (((((/* implicit */_Bool) 67107840U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_2] [i_4] [i_5]))) : (0ULL)))));
                            arr_26 [i_6] [i_6] [i_5] [i_5] [i_1] [(signed char)1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-31561)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (min((((((/* implicit */int) var_10)) | (((/* implicit */int) var_5)))), (((/* implicit */int) arr_17 [7] [(signed char)2] [i_5] [15LL]))))));
                            arr_27 [i_1] [i_1] [i_1] [i_4] [i_6] [i_6] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max(((unsigned char)255), (((/* implicit */unsigned char) arr_12 [8U] [(signed char)4] [i_1] [i_1])))), (var_7)))) ? (arr_21 [i_1] [i_1] [i_6] [i_5] [i_6]) : (((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)11765), ((unsigned short)2044)))) ? ((+(((/* implicit */int) var_5)))) : (var_8))))));
                            arr_28 [i_5] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_3)), (arr_22 [i_4] [i_2] [i_4] [i_5] [6LL] [i_4])));
                        }
                    } 
                } 
            }
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_23 += ((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) arr_32 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))) < (((/* implicit */int) var_7))))));
            var_24 = ((/* implicit */unsigned char) var_3);
        }
        /* LoopSeq 2 */
        for (unsigned char i_8 = 2; i_8 < 15; i_8 += 4) 
        {
            arr_37 [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)1);
            /* LoopSeq 3 */
            for (unsigned char i_9 = 2; i_9 < 16; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_10 = 4; i_10 < 14; i_10 += 4) 
                {
                    var_25 ^= ((/* implicit */signed char) (unsigned short)53770);
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max((arr_4 [i_9 + 1] [i_8 - 2]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (unsigned short)31)) & (var_8))) : (min((((/* implicit */int) var_5)), (var_3))))))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_11 = 1; i_11 < 16; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        {
                            arr_48 [i_1] [i_8 + 1] [i_11] [i_9] [i_9] [i_8 + 1] [i_12] = ((/* implicit */unsigned char) (((((~(arr_29 [i_1] [i_8 + 1]))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) arr_44 [i_8 + 1] [i_9 + 1] [i_11 + 1] [i_11 + 1])))) + (46)))));
                            var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_11 - 1] [i_9 - 2])) ? (arr_23 [i_11 + 1] [i_9 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1)))))) ? (min((var_4), (((/* implicit */long long int) ((int) (unsigned short)53770))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_11])) & (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_13))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_8)) : (var_4)))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) var_9))) > (15LL)))));
            }
            for (long long int i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                arr_51 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) max((var_10), (((/* implicit */short) var_5)))))) ? (min((((((/* implicit */_Bool) (unsigned short)53770)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12))) : (9223372036854775800LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_13] [(unsigned short)3] [i_8 + 1] [i_8 + 1] [i_1])) > (((/* implicit */int) var_1))))))) : (((/* implicit */long long int) ((int) (~(((/* implicit */int) (unsigned char)217))))))));
                arr_52 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_40 [i_13] [i_8]))))) ? (((((/* implicit */_Bool) arr_40 [i_1] [i_1])) ? (arr_30 [i_8 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_8 + 1] [i_8 + 1]))))) : (((((/* implicit */_Bool) arr_30 [i_13])) ? (((/* implicit */unsigned int) var_8)) : (arr_30 [i_1])))));
                var_29 ^= ((/* implicit */unsigned char) ((unsigned long long int) (~(((((/* implicit */_Bool) var_12)) ? (arr_29 [i_1] [i_8 + 2]) : (-9176308049591510536LL))))));
            }
            for (short i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (arr_24 [i_1] [(unsigned char)11] [i_8] [i_8] [i_8])));
                var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (-(((/* implicit */int) var_11))))))))));
                var_32 = (unsigned short)53798;
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 17; i_15 += 4) 
                {
                    for (unsigned char i_16 = 2; i_16 < 14; i_16 += 2) 
                    {
                        {
                            arr_60 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */long long int) (-(var_8)))) > (var_12))))));
                            arr_61 [8LL] [8LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (min((arr_32 [i_1]), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -5068337418912094527LL))))))) ? (((/* implicit */long long int) var_3)) : (((((((-9176308049591510536LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)127)) - (72))))) - (max((5068337418912094511LL), (var_13)))))));
                        }
                    } 
                } 
                arr_62 [i_1] [i_14] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_5 [16ULL] [i_8 - 1]))))));
            }
            var_33 ^= ((/* implicit */signed char) 9223372036854775776LL);
        }
        for (unsigned long long int i_17 = 3; i_17 < 14; i_17 += 2) 
        {
            arr_65 [i_1] [i_17 + 1] [i_17 - 1] = ((/* implicit */unsigned long long int) var_7);
            arr_66 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 31525197391593472LL))));
            arr_67 [i_1] [9U] [(unsigned char)9] = arr_30 [i_1];
            arr_68 [i_1] [i_1] = ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) (unsigned char)0)), (-9223372036854775801LL)))));
        }
        arr_69 [i_1] = ((/* implicit */unsigned int) var_9);
        /* LoopNest 2 */
        for (unsigned char i_18 = 0; i_18 < 17; i_18 += 2) 
        {
            for (int i_19 = 0; i_19 < 17; i_19 += 3) 
            {
                {
                    var_34 ^= ((/* implicit */unsigned short) (+((~(var_12)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_20 = 0; i_20 < 17; i_20 += 2) 
                    {
                        arr_81 [i_19] [i_19] [(unsigned short)13] [(unsigned short)13] = ((/* implicit */short) min((((/* implicit */int) arr_40 [i_18] [i_1])), (max((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) ((arr_3 [i_1]) > (((/* implicit */unsigned long long int) var_13)))))))));
                        var_35 &= ((/* implicit */_Bool) arr_42 [(signed char)6] [i_18] [(signed char)6] [(unsigned short)9]);
                    }
                    arr_82 [i_19] [i_18] [i_18] [14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? ((~(((arr_1 [i_1]) >> (((/* implicit */int) arr_71 [12ULL] [i_18])))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_45 [i_18] [i_18] [i_18] [i_18] [i_18])))))));
                    var_36 -= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_1] [i_18] [i_19] [i_19])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)(-127 - 1)))))), (((((/* implicit */_Bool) var_10)) ? (-9223372036854775801LL) : (((/* implicit */long long int) arr_42 [i_1] [i_18] [i_18] [i_19]))))));
                }
            } 
        } 
    }
    for (short i_21 = 0; i_21 < 13; i_21 += 4) /* same iter space */
    {
        var_37 ^= (~(((/* implicit */int) arr_49 [i_21])));
        /* LoopNest 2 */
        for (unsigned long long int i_22 = 0; i_22 < 13; i_22 += 4) 
        {
            for (unsigned short i_23 = 2; i_23 < 12; i_23 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_24 = 0; i_24 < 13; i_24 += 4) 
                    {
                        var_38 ^= ((/* implicit */unsigned char) (unsigned short)0);
                        arr_92 [i_22] = ((((/* implicit */_Bool) arr_58 [i_21] [i_22] [i_22] [i_22] [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967295U));
                    }
                    arr_93 [(short)7] [(short)7] [i_22] [i_22] = ((/* implicit */unsigned int) max((min((((/* implicit */signed char) arr_75 [i_23 + 1] [i_23 - 1] [i_23])), ((signed char)(-127 - 1)))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_13)))))));
                    var_39 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((long long int) var_11))));
                    arr_94 [(signed char)8] = (~(((/* implicit */int) (unsigned short)46363)));
                }
            } 
        } 
        var_40 -= ((/* implicit */short) ((unsigned int) ((((/* implicit */int) var_11)) | (((/* implicit */int) (short)25127)))));
    }
    /* vectorizable */
    for (short i_25 = 0; i_25 < 13; i_25 += 4) /* same iter space */
    {
        arr_97 [i_25] [9] &= ((/* implicit */unsigned short) var_13);
        /* LoopSeq 1 */
        for (long long int i_26 = 1; i_26 < 12; i_26 += 2) 
        {
            arr_100 [i_25] [i_26 + 1] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_63 [i_25] [14])))))));
            var_41 += ((/* implicit */signed char) ((long long int) arr_25 [i_26] [i_26 - 1] [i_26 - 1] [i_26 + 1] [i_26]));
            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_26 - 1] [i_26])) ? (var_4) : (var_12))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_28 = 0; i_28 < 13; i_28 += 2) 
            {
                for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                {
                    {
                        var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6))))))))));
                        arr_109 [i_25] [i_27] [i_25] [i_28] [i_29] = ((/* implicit */short) (~(((arr_59 [i_25] [14ULL] [i_28] [i_29 - 1]) | (var_12)))));
                    }
                } 
            } 
            var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */int) arr_101 [i_27] [i_25])))))));
        }
        arr_110 [(signed char)5] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (signed char)(-127 - 1)))))));
        /* LoopSeq 2 */
        for (unsigned short i_30 = 0; i_30 < 13; i_30 += 1) 
        {
            arr_115 [i_30] = ((/* implicit */unsigned char) (((((~(var_13))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_9)) - (214)))));
            arr_116 [i_30] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
        }
        for (unsigned char i_31 = 0; i_31 < 13; i_31 += 3) 
        {
            arr_121 [i_25] |= ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_25] [i_31]))));
            arr_122 [i_25] [i_31] = ((/* implicit */unsigned short) (signed char)63);
        }
    }
}
