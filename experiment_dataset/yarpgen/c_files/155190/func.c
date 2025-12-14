/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155190
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
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) (-(arr_2 [i_0 + 2])));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_9 [i_0 - 2] [(_Bool)1] [(signed char)11] [i_3 - 2] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 4])) - (((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 3]))));
                        arr_10 [i_0] [i_0] [(unsigned char)11] [6] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */int) arr_6 [(signed char)18] [i_0 + 3])) : (((/* implicit */int) arr_6 [i_0] [i_0 + 1]))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 - 3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_2] [i_1])))))));
                        var_22 = ((/* implicit */unsigned int) -726180942);
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0 - 4])) <= (((((/* implicit */int) arr_0 [i_3 + 2])) / (-726180942)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_5 = 3; i_5 < 10; i_5 += 4) 
        {
            var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_13 [i_4 - 1]))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_4 + 1])) ? (-1718255983) : (((/* implicit */int) arr_4 [(short)5]))));
                        /* LoopSeq 3 */
                        for (int i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            arr_25 [i_4] [i_5] [(short)3] [3ULL] [(signed char)8] = ((/* implicit */int) var_5);
                            arr_26 [(signed char)2] [i_7] [(signed char)5] = ((/* implicit */unsigned char) ((arr_11 [i_4 - 1] [(unsigned char)9]) / (arr_11 [i_4 + 1] [i_4])));
                            arr_27 [i_4] [i_5] [(short)1] [i_7] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_24 [(short)9] [(short)1] [(short)2] [i_7] [(unsigned char)1]))))) % (((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) -726180953)) : (arr_20 [(short)3] [(short)3] [(signed char)3] [i_8])))));
                        }
                        for (signed char i_9 = 4; i_9 < 9; i_9 += 2) 
                        {
                            var_26 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_16 [i_6])))) || (((/* implicit */_Bool) arr_12 [i_4 + 1] [i_5 - 2]))));
                            arr_30 [i_9] [9ULL] [i_6] [i_5 - 1] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [(_Bool)1] [i_9 + 1] [(signed char)10] [i_9 - 1] [i_9 - 2]))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            arr_33 [i_4] [1U] [6] [6ULL] [1U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [5ULL] [(signed char)3] [(short)10] [(signed char)8] [i_10]))))) ? (arr_12 [i_5] [i_5 - 3]) : (((arr_28 [3LL] [(signed char)2] [(unsigned char)2] [i_4] [i_4 - 1]) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) var_7))))));
                            var_27 = ((/* implicit */signed char) var_4);
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (arr_11 [i_4 - 1] [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [(_Bool)1] [i_5 + 1]))))));
                        }
                    }
                } 
            } 
        }
        for (long long int i_11 = 2; i_11 < 8; i_11 += 4) 
        {
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_11 + 2] [i_11 + 2] [(short)3])) ? (((/* implicit */int) arr_18 [i_11 - 2] [i_11 + 3] [(short)9])) : (((/* implicit */int) arr_18 [i_11 + 1] [7] [i_11 + 1]))));
            arr_36 [(unsigned char)3] [(unsigned char)6] [6LL] = ((/* implicit */int) ((unsigned char) arr_35 [(signed char)1] [i_4 - 1]));
            var_30 = ((/* implicit */signed char) (+(((/* implicit */int) (short)32767))));
            var_31 *= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (signed char)-102))));
        }
        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_28 [i_4] [(unsigned char)1] [(unsigned char)4] [i_4] [9ULL]))) ? ((~(((/* implicit */int) (short)-2048)))) : (((/* implicit */int) arr_3 [i_4]))));
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 11; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    {
                        arr_45 [(short)9] = ((((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_13] [(_Bool)1]))) & (var_14))) != (((/* implicit */long long int) (~(((/* implicit */int) arr_28 [i_4] [(short)9] [i_13] [(short)9] [0ULL]))))));
                        /* LoopSeq 2 */
                        for (signed char i_15 = 2; i_15 < 8; i_15 += 1) 
                        {
                            arr_48 [i_4] [i_12] [(signed char)1] [(short)3] [i_15] = ((/* implicit */_Bool) ((arr_15 [i_4 + 1] [(unsigned char)9] [(unsigned char)9]) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [(signed char)9] [(signed char)2] [6])) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) (short)0)))))));
                            arr_49 [i_4 + 1] [(unsigned char)6] [i_13] [i_14] [i_15] = ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_15 - 1] [i_15 - 1] [i_15] [i_15 + 2] [(signed char)21]))));
                        }
                        for (signed char i_16 = 0; i_16 < 11; i_16 += 1) 
                        {
                            var_33 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_11 [(short)7] [i_4 - 1])) != (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_19)))));
                            arr_54 [i_4] [i_4] [(short)6] [i_4] [i_4 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_4 - 1] [i_4 + 1])) ? (((/* implicit */int) arr_1 [i_4 + 1] [i_4 - 1])) : (((/* implicit */int) var_2))));
                        }
                        var_34 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [(short)10] [(_Bool)1] [i_4 + 1] [(signed char)8] [i_4 - 1] [1] [i_14]))) + (arr_40 [i_4 - 1])));
                    }
                } 
            } 
        }
        var_35 = ((/* implicit */_Bool) ((((((/* implicit */int) var_17)) >= (((/* implicit */int) (unsigned char)243)))) ? (((/* implicit */int) ((unsigned char) 10ULL))) : (((/* implicit */int) var_5))));
        arr_55 [(unsigned char)2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_4 + 1])) << (((/* implicit */int) arr_6 [(unsigned char)7] [(_Bool)1]))));
        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */int) arr_38 [i_4 - 1] [(signed char)1] [i_4 + 1])) << (((((((((/* implicit */int) arr_1 [(short)10] [15ULL])) + (2147483647))) << (((((((/* implicit */int) arr_39 [(unsigned char)8] [3U])) + (14312))) - (30))))) - (2147483562))))))));
        arr_56 [i_4] [i_4] = ((/* implicit */_Bool) arr_37 [i_4] [(short)6]);
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 25; i_17 += 1) 
    {
        var_37 += ((/* implicit */short) ((2089768591121331251LL) + (-2089768591121331252LL)));
        var_38 = ((/* implicit */unsigned char) ((((var_12) >= (((/* implicit */int) arr_57 [(short)0] [i_17])))) ? (((/* implicit */int) (short)22727)) : (((/* implicit */int) ((short) arr_58 [(_Bool)1])))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 2) 
    {
        for (long long int i_19 = 0; i_19 < 21; i_19 += 2) 
        {
            {
                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_4 [i_18])))) ? (((((/* implicit */int) arr_58 [i_18])) & (((/* implicit */int) min((arr_0 [13ULL]), (var_18)))))) : (((((/* implicit */int) (short)-32513)) - (((/* implicit */int) (signed char)-17)))))))));
                arr_64 [(signed char)11] [i_19] [i_19] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [17U] [i_19])))) ? (((((/* implicit */_Bool) -2089768591121331258LL)) ? (((((/* implicit */_Bool) (signed char)10)) ? (0ULL) : (((/* implicit */unsigned long long int) 9223372036854775799LL)))) : (((/* implicit */unsigned long long int) ((764806688) + (726180942)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_18] [i_19] [i_19] [i_19]), (arr_8 [12U] [i_18] [(signed char)10] [i_19])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_40 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [(short)13])) || (((/* implicit */_Bool) arr_3 [(short)15]))));
                    /* LoopNest 2 */
                    for (short i_21 = 0; i_21 < 21; i_21 += 2) 
                    {
                        for (signed char i_22 = 3; i_22 < 20; i_22 += 2) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) == (((((/* implicit */_Bool) 1718255983)) ? (764806688) : (((/* implicit */int) arr_67 [i_20] [i_20] [(unsigned char)4] [i_20]))))));
                                arr_74 [i_20] [(unsigned char)15] [i_20] [(short)0] [(unsigned char)15] = (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_58 [i_18]))) != (arr_2 [(signed char)21])))));
                            }
                        } 
                    } 
                    var_42 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_18])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_68 [(short)14] [(short)4] [i_18] [(short)14] [i_20] [i_20]))));
                }
                var_43 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((13835058055282163712ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216)))))) < (((/* implicit */int) ((unsigned char) var_4)))))) == (((((/* implicit */int) min(((short)22727), (((/* implicit */short) (signed char)3))))) << (((-1718255958) + (1718255958)))))));
            }
        } 
    } 
    var_44 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_12)))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) ((var_14) == (((/* implicit */long long int) -1701271742))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_23 = 3; i_23 < 15; i_23 += 2) 
    {
        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? ((~(((/* implicit */int) arr_1 [i_23 - 1] [i_23 - 1])))) : ((~(((/* implicit */int) max((var_16), (arr_67 [14ULL] [i_23 - 1] [(short)8] [14ULL])))))))))));
        var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((1718255980), (((/* implicit */int) arr_8 [(signed char)15] [i_23 - 2] [i_23 - 2] [i_23 - 2]))))) ? (((min((((/* implicit */int) arr_61 [i_23])), (2097024))) - (-1701271742))) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_60 [(_Bool)1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_23 + 1])))))) || (((((/* implicit */int) var_13)) == (((/* implicit */int) var_16))))))))))));
    }
    var_47 -= ((/* implicit */signed char) min((min((5584998263351419799LL), (9223372036854775794LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (1718255982)))) ? (((var_2) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_17)))))));
}
