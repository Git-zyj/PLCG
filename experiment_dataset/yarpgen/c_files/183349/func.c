/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183349
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)23)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)125)) + (((/* implicit */int) (short)32762))))))))));
        arr_2 [i_0] = ((/* implicit */short) ((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)8658)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1 - 1] [i_2] = ((/* implicit */long long int) 0U);
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_14 [i_3 - 2] = ((/* implicit */unsigned int) (~(arr_1 [i_0] [i_1 + 2])));
                                arr_15 [i_4] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_3] [i_3] [i_4]))) : (arr_11 [i_0] [i_0]))) == ((-(arr_8 [i_0] [7U] [i_0])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_5 = 1; i_5 < 15; i_5 += 1) 
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (((((/* implicit */_Bool) -4950400642834934676LL)) ? (var_5) : (((/* implicit */unsigned long long int) 4950400642834934675LL)))) : (((/* implicit */unsigned long long int) arr_7 [i_5 + 2] [i_5 + 2] [i_5] [i_5]))));
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_5]);
            var_19 -= ((/* implicit */signed char) ((long long int) arr_12 [i_0] [i_5 - 1] [(unsigned char)13] [i_5 - 1] [i_5 + 2] [i_5 + 2]));
            var_20 -= ((/* implicit */int) ((long long int) arr_3 [i_0] [i_0] [i_5 + 2]));
            var_21 -= ((/* implicit */short) -5032547192439877912LL);
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_22 [i_6] = ((/* implicit */long long int) (-((-(((/* implicit */int) (short)0))))));
            var_22 = ((/* implicit */unsigned int) ((arr_7 [i_0] [i_6] [i_6 - 1] [i_6 - 1]) / (arr_7 [i_0] [i_6] [i_6 - 1] [i_6])));
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                arr_27 [i_0] [i_6] [i_7] = ((signed char) ((-4950400642834934698LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68)))));
                arr_28 [i_6] = ((/* implicit */unsigned long long int) (~(arr_12 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6 - 1])));
                var_23 = ((/* implicit */unsigned long long int) ((arr_21 [i_6]) ? (arr_25 [i_6] [i_6] [13LL]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_26 [i_7] [i_0])))))));
            }
            var_24 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -733955482)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))) : (4950400642834934675LL)));
        }
        for (short i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            arr_32 [i_8] = (-(arr_10 [7U] [i_8] [i_0] [i_0] [i_0]));
            arr_33 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_0] [i_8] [i_8])) | (((/* implicit */int) arr_30 [i_0] [i_0]))));
            /* LoopSeq 3 */
            for (int i_9 = 2; i_9 < 15; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_10 = 1; i_10 < 13; i_10 += 1) 
                {
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((unsigned char) arr_35 [(signed char)6]))));
                    var_26 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((int) (short)29309))) | ((~(var_15)))));
                }
                arr_38 [i_0] [i_8] [i_8] [i_9] = ((/* implicit */int) 21ULL);
                var_27 = (+(3432014256U));
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                var_28 = ((/* implicit */signed char) ((arr_10 [i_11 - 1] [i_11] [i_11 - 1] [i_11] [i_11 - 1]) | (arr_10 [i_11 - 1] [i_11] [i_11] [i_11] [i_11 - 1])));
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    arr_44 [i_8] [i_8] [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) arr_39 [i_0]))));
                    arr_45 [i_8] [i_8] [i_8] [i_8] [0] = ((int) ((((/* implicit */_Bool) arr_10 [i_0] [i_8] [i_11] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) arr_30 [i_11] [i_0]))));
                }
            }
            for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_14 = 0; i_14 < 17; i_14 += 1) 
                {
                    var_29 ^= ((/* implicit */unsigned int) (unsigned short)5);
                    arr_50 [i_8] [i_8] [i_8] [i_14] = ((/* implicit */int) var_15);
                }
                for (long long int i_15 = 0; i_15 < 17; i_15 += 1) 
                {
                    var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_0] [i_0] [i_15] [i_13] [i_0]) | (((/* implicit */int) (signed char)-55))))) ^ (18446744073709551605ULL)));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_0] [2])) >= (((/* implicit */int) var_7))));
                }
                for (long long int i_16 = 1; i_16 < 16; i_16 += 1) 
                {
                    arr_55 [i_8] = (((!(((/* implicit */_Bool) (signed char)34)))) ? (5032547192439877923LL) : (((/* implicit */long long int) ((/* implicit */int) (short)1008))));
                    arr_56 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned int) (unsigned char)196);
                }
                arr_57 [i_8] [i_13] [i_13] = (~(((((/* implicit */_Bool) (short)-29522)) ? (-4950400642834934698LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_8] [i_13]))))));
                var_32 ^= ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (arr_49 [i_0] [i_0] [i_8] [i_13] [i_13]))) != (((/* implicit */int) arr_23 [i_0] [i_0] [14]))));
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned char i_18 = 0; i_18 < 17; i_18 += 1) 
                    {
                        {
                            var_33 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65514)) >> (((((/* implicit */int) var_10)) % (((/* implicit */int) (short)-29546))))));
                            var_34 = var_10;
                            var_35 = ((/* implicit */unsigned short) (+(var_0)));
                        }
                    } 
                } 
            }
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) var_5))));
        }
    }
    /* vectorizable */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
    {
        arr_66 [i_19] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_19]))) < (1U))))));
        arr_67 [i_19] = ((/* implicit */unsigned long long int) ((arr_21 [8U]) ? (((/* implicit */int) arr_21 [14LL])) : (((/* implicit */int) arr_21 [(unsigned char)16]))));
        arr_68 [i_19] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_42 [i_19] [i_19] [i_19] [i_19] [i_19])))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_3 [i_19] [i_19] [i_19]))));
        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((3677856187U) + (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-113)))))))));
        var_38 ^= ((/* implicit */unsigned int) ((int) arr_39 [i_19]));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_20 = 2; i_20 < 15; i_20 += 1) 
    {
        arr_71 [i_20 - 1] [i_20] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_69 [i_20]))) ^ (9206782726937384558LL))) ^ (((7687838417176036056LL) & (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_20])))))));
        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) var_8))));
        /* LoopNest 3 */
        for (unsigned short i_21 = 1; i_21 < 17; i_21 += 4) 
        {
            for (signed char i_22 = 1; i_22 < 15; i_22 += 1) 
            {
                for (unsigned int i_23 = 0; i_23 < 18; i_23 += 1) 
                {
                    {
                        var_40 *= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) -1188420591)) ? (((/* implicit */int) arr_79 [i_20] [i_21] [i_21] [i_23] [i_23])) : (((/* implicit */int) arr_70 [i_20])))) + (2147483647))) << (((/* implicit */int) ((unsigned char) arr_74 [i_21] [i_23])))));
                        var_41 = ((/* implicit */signed char) var_8);
                    }
                } 
            } 
        } 
        var_42 = ((/* implicit */_Bool) min((var_42), (((_Bool) ((((/* implicit */unsigned int) var_0)) >= (524032U))))));
    }
}
