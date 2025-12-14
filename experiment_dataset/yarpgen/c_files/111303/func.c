/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111303
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            arr_4 [i_0] = arr_1 [i_1];
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((/* implicit */long long int) 54132140)) : (arr_6 [i_0] [i_0] [i_2] [i_1 - 2])))) ? (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) arr_0 [i_1 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)91)) ? (arr_6 [(unsigned char)1] [i_1 - 3] [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3])))))) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) <= (((/* implicit */int) arr_3 [i_0])))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_1 - 3] [i_1 - 2] [i_1 - 3])) + (((/* implicit */int) arr_8 [i_1 - 1] [(signed char)5] [i_1 - 1] [i_1 + 1]))))) ? (((((((/* implicit */int) arr_8 [i_1 - 2] [i_1] [i_1 - 3] [i_1 - 2])) + (2147483647))) >> (((-1212784785) + (1212784792))))) : (((/* implicit */int) arr_8 [i_1 + 1] [(unsigned char)0] [i_1 + 1] [i_1 + 1]))));
                            var_13 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))) < (1031915072U)));
                            arr_13 [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) ((arr_12 [i_4] [i_3] [9U] [4]) * ((+(arr_12 [i_0] [i_2] [i_2] [i_3])))));
                            arr_14 [(unsigned char)6] [i_3] [i_3] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)251)) ? (72057585447993344ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                        }
                        var_14 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) 1LL)) ^ (0ULL)))));
                    }
                } 
            } 
            arr_15 [(unsigned char)7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (13LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10819)))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [(short)18] [i_1 + 1] [i_1 - 2])) ? (arr_12 [i_1] [i_1 - 2] [i_1 - 2] [i_1]) : (((/* implicit */unsigned long long int) -1008413565293514297LL)))) : (((arr_0 [i_1 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 2]))) : (arr_12 [i_1] [i_1] [i_1 - 3] [(signed char)0])))));
            /* LoopNest 3 */
            for (short i_5 = 1; i_5 < 21; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) arr_2 [i_6] [i_0])) == (arr_18 [i_1] [i_1 - 2] [(signed char)15] [i_5 - 1])))))))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(-2LL)))) * (min((16701092583091375359ULL), (1745651490618176257ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [7LL] [i_1 - 2] [i_5] [i_1 - 2] [(unsigned char)1])) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6]))) : (arr_6 [i_5 + 1] [i_1 - 3] [i_1 + 1] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_5 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_21 [i_5 + 1] [i_5] [i_5] [i_5 - 1])) : (((/* implicit */int) arr_22 [i_1 - 1] [i_1 - 3] [i_5 + 1] [i_1 - 1] [i_5 - 1])))))));
                            arr_23 [(short)11] [i_6] [17LL] [i_1] [17LL] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_5 + 1])) >> (((((/* implicit */int) (unsigned short)44353)) - (44329)))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(1745651490618176257ULL)))) ? (((/* implicit */int) arr_8 [11LL] [i_5 + 1] [i_5 - 1] [i_1 - 2])) : (((/* implicit */int) ((((/* implicit */int) (short)23962)) != (((/* implicit */int) (short)-21)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_8 = 1; i_8 < 19; i_8 += 4) 
        {
            arr_28 [i_0] [i_0] = ((((/* implicit */_Bool) arr_18 [i_8 + 1] [i_8 + 3] [i_8 + 1] [i_8])) ? (arr_18 [i_8] [i_8 + 2] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [(signed char)2] [i_8 - 1] [i_0]))));
            arr_29 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) (short)-26)) : (((/* implicit */int) (_Bool)1))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) (_Bool)1)), (0U)));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_30 [i_0] [i_0] [i_9])), (arr_2 [i_0] [i_9])))) ? (((((/* implicit */_Bool) -1LL)) ? (8322152324953086680ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) arr_21 [0U] [(unsigned short)12] [(signed char)13] [0U])) : (((/* implicit */int) arr_21 [(signed char)12] [i_0] [i_9] [i_9])))))));
        }
        for (unsigned char i_10 = 2; i_10 < 21; i_10 += 4) 
        {
            var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1] [i_10]))) : ((+(0U)))));
            /* LoopNest 2 */
            for (long long int i_11 = 3; i_11 < 21; i_11 += 4) 
            {
                for (short i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    {
                        var_21 = ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-23772))) : (11LL));
                        var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-81))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_13 = 2; i_13 < 19; i_13 += 1) 
        {
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_12 [(unsigned char)13] [i_14 - 1] [i_14 - 1] [i_14 - 1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_27 [i_13 + 1] [i_14 - 1])) < (((/* implicit */int) arr_27 [i_13 - 1] [i_14 - 1]))))))));
                    var_24 *= ((/* implicit */unsigned char) ((((arr_37 [(unsigned short)18] [i_13 - 1] [i_13 - 2] [(signed char)6] [i_14 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_13 - 2] [i_14 - 1] [i_13 - 2]))))) >> (((((((/* implicit */_Bool) arr_6 [(signed char)21] [i_14 - 1] [3U] [(signed char)2])) ? (((((/* implicit */_Bool) 1745651490618176257ULL)) ? (16701092583091375359ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23983))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) arr_9 [8LL])) : (((/* implicit */int) arr_0 [i_0]))))))) - (16701092583091375357ULL)))));
                }
            } 
        } 
        arr_43 [i_0] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_19 [i_0] [i_0] [(short)11] [i_0] [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_34 [21U] [i_0] [i_0] [21U])), (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 3) 
        {
            for (short i_16 = 1; i_16 < 20; i_16 += 2) 
            {
                {
                    var_25 *= ((/* implicit */signed char) 11744667U);
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 22; i_17 += 3) 
                    {
                        for (unsigned int i_18 = 2; i_18 < 21; i_18 += 2) 
                        {
                            {
                                arr_52 [i_15] [(unsigned char)10] [i_17] [i_17] = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)140)), (((((/* implicit */_Bool) -1121974368)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) (short)16102))))));
                                arr_53 [i_17] [i_15] [i_16] [i_17] [i_17] = ((/* implicit */unsigned int) (signed char)127);
                                arr_54 [i_0] [i_17] [i_16 - 1] [i_0] [i_16 - 1] = ((/* implicit */unsigned int) arr_20 [i_0] [i_15] [i_16] [i_16 + 2] [i_18] [i_18]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_19 = 1; i_19 < 18; i_19 += 4) 
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_50 [i_19 + 3] [i_19 + 2] [i_19] [i_19] [i_19] [i_19] [i_19 + 2]) > (((/* implicit */int) arr_22 [i_19] [i_19] [i_19] [14LL] [i_19]))))) >> (((((/* implicit */int) arr_45 [(unsigned char)21] [i_19])) + (3626)))));
        arr_57 [9LL] [(unsigned char)0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_56 [i_19 + 3] [i_19 + 1])) * (((/* implicit */int) arr_56 [i_19 - 1] [i_19 + 1]))));
        var_27 = arr_22 [i_19 - 1] [i_19 - 1] [i_19] [i_19 - 1] [i_19 + 2];
    }
    /* LoopNest 3 */
    for (unsigned long long int i_20 = 2; i_20 < 18; i_20 += 4) 
    {
        for (signed char i_21 = 0; i_21 < 21; i_21 += 3) 
        {
            for (unsigned long long int i_22 = 1; i_22 < 20; i_22 += 1) 
            {
                {
                    arr_66 [i_20] [(signed char)12] [i_20] [i_20] &= ((/* implicit */long long int) (unsigned char)255);
                    /* LoopNest 2 */
                    for (unsigned char i_23 = 0; i_23 < 21; i_23 += 1) 
                    {
                        for (unsigned char i_24 = 0; i_24 < 21; i_24 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_49 [i_20 + 2])) ? (((/* implicit */unsigned long long int) 977958286U)) : (arr_62 [i_20 - 1] [i_20 + 3] [i_20 - 1]))) + (((((/* implicit */_Bool) arr_49 [i_20 + 2])) ? (arr_62 [i_20 - 2] [i_20 + 2] [i_20 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_20 + 1])))))));
                                var_29 *= ((/* implicit */unsigned char) 513283715);
                            }
                        } 
                    } 
                    arr_72 [i_22] [i_21] [i_22 - 1] = ((/* implicit */unsigned char) (((((-(((/* implicit */int) arr_5 [i_22 - 1] [i_22])))) + (2147483647))) << ((((+(((/* implicit */int) arr_39 [i_20] [i_20])))) - (126)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_25 = 3; i_25 < 19; i_25 += 4) 
                    {
                        arr_76 [i_20] [i_21] [i_20] [i_25] [i_22] [i_20] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)3)) ? (arr_12 [i_20] [(short)14] [(unsigned char)1] [15ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_25]))))) >> (((((/* implicit */int) arr_1 [i_20])) + (54)))));
                        var_30 = arr_44 [i_22];
                        /* LoopSeq 1 */
                        for (unsigned short i_26 = 0; i_26 < 21; i_26 += 3) 
                        {
                            arr_80 [(short)0] [(unsigned char)8] [(unsigned char)8] [i_20] [i_26] [i_26] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_39 [i_25 - 2] [i_22 + 1]))));
                            var_31 = ((/* implicit */unsigned int) arr_34 [i_25 + 2] [i_20 + 3] [i_20] [i_20]);
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_25 + 1] [i_20 - 2] [i_22 - 1] [i_20 - 2] [i_20 - 2]))) + (((((/* implicit */_Bool) arr_44 [i_20])) ? (arr_58 [i_20 + 1] [(unsigned char)18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_22 - 1] [i_22 - 1] [i_20])))))));
                        }
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_27 = 0; i_27 < 21; i_27 += 3) 
                    {
                        arr_85 [16U] [i_22] [i_22 - 1] = ((/* implicit */unsigned int) ((16701092583091375359ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_20 + 2])))));
                        var_33 |= ((/* implicit */unsigned char) ((arr_75 [i_20] [i_20 - 1] [i_22 - 1] [i_27]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                    }
                    /* vectorizable */
                    for (signed char i_28 = 4; i_28 < 19; i_28 += 2) 
                    {
                        arr_90 [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_20 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_20] [i_20] [i_20]))) : (1683192572519960419ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_73 [(signed char)19] [i_21] [(signed char)19] [i_21])) || (((/* implicit */_Bool) arr_16 [i_20]))))) : (((((/* implicit */_Bool) arr_46 [i_22] [(unsigned char)12] [i_20 + 1])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_70 [(unsigned char)12] [i_21] [i_22]))))));
                        arr_91 [1U] [12LL] [i_22 - 1] [i_22] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-4946))));
                        var_34 = ((/* implicit */long long int) arr_30 [i_20] [i_20] [i_20]);
                        var_35 |= ((/* implicit */int) ((((/* implicit */_Bool) 2253671124U)) ? (arr_46 [i_20 + 3] [i_21] [i_28 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52143)))));
                    }
                }
            } 
        } 
    } 
}
