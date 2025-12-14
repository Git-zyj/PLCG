/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140521
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)252))))) - (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_18))))) << (((min((arr_3 [i_0 - 2]), (arr_3 [i_0 - 1]))) - (3674254286U)))));
                    var_19 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 - 2])) * (((/* implicit */int) var_9))))) + (((var_11) << (((arr_2 [i_0 + 3] [i_0 + 2]) - (2055665531U)))))));
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((signed char) (~(arr_2 [i_0] [i_0]))));
                    var_20 = ((/* implicit */short) (~((~(arr_3 [i_1])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (short i_6 = 3; i_6 < 13; i_6 += 3) 
                    {
                        {
                            arr_23 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) > (arr_0 [i_4 - 1])));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)58790)) ? (((/* implicit */unsigned long long int) (+(arr_17 [i_0 + 1])))) : (min(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((arr_18 [i_0] [i_3] [i_4] [i_5] [i_6]) / (arr_17 [i_0 + 2]))))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19376))) / (var_13))) + (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_7 = 3; i_7 < 13; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    {
                        var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 + 3] [i_0] [i_0 + 1] [i_7 - 2])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0 - 2])))))) ? (((/* implicit */unsigned long long int) var_3)) : ((~(max((((/* implicit */unsigned long long int) 1690881573)), (arr_5 [i_0])))))));
                        arr_30 [i_8] [i_8] [i_7] [i_3] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_11 [i_0])))), (((/* implicit */int) var_6))));
                    }
                } 
            } 
        }
        arr_31 [i_0] [i_0] = ((/* implicit */short) var_3);
    }
    var_24 = ((/* implicit */signed char) ((var_3) << (((var_15) - (9755535011048166410ULL)))));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        for (long long int i_10 = 2; i_10 < 16; i_10 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    var_25 &= ((/* implicit */unsigned char) 1209211198U);
                    arr_40 [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)19376)), (((var_18) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14)))))))) ? (max((var_13), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_38 [i_9] [i_10 - 1] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_11]))) : (var_14))) > (((unsigned long long int) var_3))))))));
                    var_26 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_32 [i_9])))), (((/* implicit */int) (signed char)117))));
                    var_27 = ((/* implicit */short) arr_39 [i_11] [i_10] [i_9] [i_9]);
                    var_28 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_32 [i_10])) : (((/* implicit */int) arr_36 [i_11] [i_10] [i_9]))))) ? (((/* implicit */int) arr_37 [i_9] [i_10 + 1])) : (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_0))))))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        for (unsigned int i_14 = 4; i_14 < 15; i_14 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_38 [i_14 - 2] [i_14 + 1] [i_10 - 1]))))), (arr_38 [i_9] [i_10] [i_13])));
                                arr_49 [i_9] [i_9] [i_10] [i_12] [i_13] [i_14] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126))) > (min((((/* implicit */unsigned int) arr_46 [i_9] [i_10] [i_12] [i_13] [i_14])), (var_1))))))) ^ (min((1050173653U), (((/* implicit */unsigned int) var_7)))));
                                arr_50 [i_9] [i_10] [i_12] [i_13] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)-32233), (((/* implicit */short) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) ((var_2) / (((/* implicit */int) var_0))))), ((+(arr_39 [i_9] [i_10 - 1] [i_12] [i_14]))))) : (((/* implicit */unsigned long long int) min((max((var_1), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) var_12)))))));
                            }
                        } 
                    } 
                    arr_51 [i_9] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (6104800501424234127LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)13))))) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)58790))))));
                }
                /* vectorizable */
                for (unsigned short i_15 = 2; i_15 < 15; i_15 += 2) 
                {
                    arr_55 [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_14))));
                    /* LoopSeq 3 */
                    for (unsigned char i_16 = 0; i_16 < 17; i_16 += 3) 
                    {
                        var_30 = ((/* implicit */int) ((((unsigned int) var_3)) >> (((((((/* implicit */_Bool) arr_43 [i_9] [i_9] [i_10] [i_10] [i_15] [i_16])) ? (3362843726U) : (((/* implicit */unsigned int) arr_42 [i_9] [i_10] [i_15] [i_16])))) - (3362843726U)))));
                        /* LoopSeq 4 */
                        for (short i_17 = 2; i_17 < 16; i_17 += 4) 
                        {
                            var_31 *= ((/* implicit */unsigned int) var_11);
                            var_32 -= ((/* implicit */unsigned int) var_16);
                        }
                        for (long long int i_18 = 1; i_18 < 16; i_18 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (~(arr_47 [i_18 + 1] [i_15 - 1] [i_10 - 1] [i_10 - 1] [i_10] [i_10 + 1]))))));
                            var_34 ^= ((/* implicit */_Bool) (~(arr_35 [i_15] [i_15 - 2] [i_15 + 2])));
                        }
                        for (int i_19 = 1; i_19 < 15; i_19 += 2) /* same iter space */
                        {
                            var_35 ^= ((/* implicit */unsigned short) arr_44 [i_9] [i_9] [i_9]);
                            var_36 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_62 [i_9] [i_9] [i_10 + 1] [i_15] [i_16] [i_16] [i_19])) : (((/* implicit */int) arr_41 [i_9] [i_10] [i_19 + 1]))))));
                        }
                        for (int i_20 = 1; i_20 < 15; i_20 += 2) /* same iter space */
                        {
                            arr_67 [i_9] [i_20] [i_15] [i_15] |= (-(arr_47 [i_10 - 2] [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_20 - 1]));
                            var_37 = ((((((/* implicit */int) (unsigned short)58778)) << (((/* implicit */int) arr_63 [i_9] [i_9] [i_9] [i_9])))) >> (((((/* implicit */int) arr_59 [i_10] [i_10] [i_16] [i_16] [i_20] [i_10 - 2])) + (99))));
                        }
                        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_46 [i_16] [i_15 - 2] [i_10] [i_9] [i_9]))))) ? (((/* implicit */int) arr_37 [i_9] [i_15 - 1])) : (((/* implicit */int) (signed char)110))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_21 = 1; i_21 < 15; i_21 += 4) 
                        {
                            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) -4336417014554296425LL))));
                            var_40 = ((/* implicit */signed char) var_2);
                            var_41 -= ((/* implicit */unsigned long long int) (-(var_13)));
                        }
                        for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 3) 
                        {
                            var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? ((-(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_22] [i_16] [i_15 + 1] [i_10 - 1] [i_9] [i_9])))));
                            arr_72 [i_9] [i_10 - 2] [i_15 - 2] [i_22] [i_22] = ((/* implicit */short) arr_66 [i_22] [i_16] [i_16] [i_15] [i_15] [i_10] [i_9]);
                        }
                    }
                    for (int i_23 = 0; i_23 < 17; i_23 += 2) 
                    {
                        var_43 += ((/* implicit */short) var_18);
                        arr_75 [i_9] [i_10 - 1] [i_23] [i_23] &= ((/* implicit */unsigned int) ((short) ((unsigned short) var_9)));
                    }
                    for (unsigned int i_24 = 3; i_24 < 16; i_24 += 2) 
                    {
                        var_44 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : ((~(var_5)))));
                        arr_78 [i_9] [i_24] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (+(arr_35 [i_9] [i_10] [i_15 + 1])));
                    }
                }
                arr_79 [i_9] [i_10 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 560366675))));
            }
        } 
    } 
}
