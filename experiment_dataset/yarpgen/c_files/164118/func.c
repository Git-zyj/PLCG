/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164118
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min((((((/* implicit */unsigned long long int) 4261412864U)) | (18446744073709551588ULL))), (((/* implicit */unsigned long long int) var_5)))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_9)) ? (var_9) : (arr_0 [i_0]))), (((/* implicit */long long int) arr_1 [i_0])))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (_Bool)1))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) var_3);
        var_20 = ((/* implicit */long long int) var_10);
        var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (arr_0 [i_0]))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (unsigned short i_3 = 3; i_3 < 15; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */int) min((arr_10 [i_3] [i_3 - 2] [i_3] [i_2]), (arr_10 [i_3] [i_3 + 1] [i_3] [i_2])))) >= (((((/* implicit */_Bool) arr_10 [i_3] [i_3 + 2] [i_3] [i_2])) ? (((/* implicit */int) arr_10 [i_3] [i_3 - 3] [i_3] [i_2])) : (((/* implicit */int) var_8))))));
                    arr_11 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) (~(max((((((/* implicit */int) var_0)) ^ (((/* implicit */int) (signed char)-26)))), (((/* implicit */int) ((arr_6 [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))))))))));
                    var_23 += ((/* implicit */unsigned char) min((var_6), (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (arr_3 [i_1] [i_2])))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_13))))))) >> (((((/* implicit */int) max((((/* implicit */short) max((var_10), (var_8)))), (min((var_7), (((/* implicit */short) var_5))))))) - (215))))))));
    /* LoopSeq 2 */
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 11; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_25 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))) <= (((((/* implicit */_Bool) -1942427995)) ? (((/* implicit */unsigned long long int) -9223372036854775785LL)) : (742167569395316096ULL))))) ? (var_17) : (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-(var_17)))))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            {
                                arr_23 [i_7] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5 + 1] [i_5 + 1]))) <= (max((arr_6 [i_6]), (((/* implicit */unsigned int) arr_19 [i_7] [i_7] [i_7])))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_7]))));
                                var_26 = ((/* implicit */long long int) (signed char)15);
                                var_27 ^= (signed char)34;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_9 = 2; i_9 < 11; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((2059309986) <= (((/* implicit */int) (signed char)-35)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5] [i_5 - 1] [i_10]))) == (var_6))))) : (min((((/* implicit */long long int) arr_14 [i_5] [i_5 - 1] [i_10])), (var_6))))))));
                                var_29 = ((/* implicit */signed char) min((var_29), ((signed char)4)));
                                var_30 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_7 [i_9])) : (((/* implicit */int) var_4))))))) * (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_10] [i_9] [i_6] [i_5]))) : (var_12))), (((/* implicit */unsigned int) var_4))))));
                                var_31 &= ((/* implicit */short) (_Bool)1);
                                arr_30 [i_4] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) arr_5 [i_9 - 1] [i_5 + 1])) : (((/* implicit */int) arr_5 [i_9 + 1] [i_5 - 1]))))), (max((-3993321538366983481LL), (((/* implicit */long long int) (signed char)-98))))));
                            }
                        } 
                    } 
                    arr_31 [i_4] [i_4] [i_4] |= ((/* implicit */unsigned long long int) arr_20 [i_6] [i_5] [i_4] [i_4]);
                }
            } 
        } 
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned char) arr_9 [i_4] [i_4] [i_4] [i_4]))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_10))))), (arr_6 [i_4]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) max((arr_19 [i_4] [i_4] [i_4]), (((/* implicit */signed char) var_4))))))))));
    }
    for (long long int i_11 = 1; i_11 < 15; i_11 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_12 = 1; i_12 < 15; i_12 += 3) 
        {
            var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1942428003)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)55))) : (-3993321538366983453LL)));
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned short i_14 = 1; i_14 < 15; i_14 += 3) 
                {
                    {
                        arr_41 [i_11] [i_12] [i_13] [0ULL] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_11] [i_12] [i_13] [i_14]))) & (((((/* implicit */_Bool) ((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_14)), (arr_6 [i_11])))) : (((((/* implicit */_Bool) (unsigned char)231)) ? (274877906936LL) : (((/* implicit */long long int) 1942427995))))))));
                        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */_Bool) 4237721902566504654LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94))) : (2298803010U))))));
                        var_35 ^= var_6;
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_15 = 4; i_15 < 12; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_16 = 3; i_16 < 15; i_16 += 2) 
            {
                arr_48 [i_11] [i_15] [i_16] [i_16] = ((/* implicit */_Bool) var_17);
                var_36 = ((/* implicit */unsigned char) ((((var_4) ? (arr_36 [(short)6] [i_15] [(short)6]) : (var_3))) + (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_11 - 1] [i_11])))));
                /* LoopNest 2 */
                for (signed char i_17 = 3; i_17 < 13; i_17 += 1) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned char) min((var_37), (var_10)));
                            var_38 |= ((/* implicit */unsigned int) (unsigned short)65535);
                        }
                    } 
                } 
            }
            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) arr_1 [i_11 + 1]))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_19 = 0; i_19 < 16; i_19 += 3) /* same iter space */
        {
            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) arr_53 [i_11] [i_11] [i_11 - 1] [i_11] [i_19] [i_19] [i_19]))));
            var_41 *= ((/* implicit */short) ((arr_6 [i_11 - 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))));
            var_42 = ((/* implicit */short) var_11);
        }
        /* vectorizable */
        for (unsigned char i_20 = 0; i_20 < 16; i_20 += 3) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_20] [i_11 - 1] [i_11 + 1] [i_11 + 1])) ? (((/* implicit */int) arr_39 [i_20] [i_11 - 1] [i_11 - 1] [i_11 - 1])) : (((/* implicit */int) var_4))));
            /* LoopSeq 3 */
            for (unsigned short i_21 = 1; i_21 < 15; i_21 += 3) 
            {
                var_44 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_21 - 1] [i_11 + 1]))) : (var_3)));
                var_45 = ((/* implicit */long long int) ((arr_53 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21 - 1] [i_20]) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21 + 1] [i_20])))));
                var_46 += ((/* implicit */_Bool) var_9);
            }
            for (unsigned int i_22 = 2; i_22 < 14; i_22 += 2) 
            {
                arr_64 [i_11] [i_11] = ((/* implicit */int) var_3);
                var_47 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_11] [i_22])) + (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)62)))) : (((/* implicit */int) var_11))));
            }
            for (long long int i_23 = 0; i_23 < 16; i_23 += 2) 
            {
                var_48 -= ((/* implicit */unsigned long long int) (signed char)-16);
                arr_67 [i_23] [i_20] [i_20] [i_11] = ((/* implicit */signed char) ((arr_36 [i_23] [i_20] [i_23]) + (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_23] [i_20] [i_11 - 1])))));
                var_49 -= ((/* implicit */long long int) var_16);
            }
        }
        var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) (((~(max((((/* implicit */long long int) var_8)), (var_3))))) < (((/* implicit */long long int) 4139424024U)))))));
    }
    var_51 = ((/* implicit */short) (!(min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (21ULL))), (((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (var_9)))))));
}
