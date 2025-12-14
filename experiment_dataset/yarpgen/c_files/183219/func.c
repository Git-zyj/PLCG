/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183219
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
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        var_17 -= ((((/* implicit */_Bool) var_6)) ? (((var_5) / (((/* implicit */int) var_10)))) : (var_5));
        var_18 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 3]))));
        var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0 - 1]))));
        var_20 = ((/* implicit */signed char) arr_0 [i_0]);
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 + 1])));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) var_6);
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 14; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_21 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_15 [i_1] [8U] [i_2] [i_3 + 1] [i_4] [i_4 + 1] [i_4]))))) && (((/* implicit */_Bool) arr_11 [i_4 + 3] [i_4 + 2]))));
                            arr_17 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(4294967295U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2]))) : (arr_14 [(signed char)16] [i_3] [i_1] [i_2] [i_5] [i_2])));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [0] [i_1] [9])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_2])))));
            var_23 = ((/* implicit */int) (+(10ULL)));
            var_24 |= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))) + (10ULL))) >> (((((/* implicit */int) arr_6 [i_1])) + (24778)))));
        }
        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 2; i_7 < 14; i_7 += 2) 
            {
                arr_22 [i_1] = ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */int) arr_19 [i_1] [i_1] [i_7])) * (((/* implicit */int) arr_18 [i_7] [i_1])))) : ((~(var_11))));
                var_25 = ((/* implicit */unsigned int) var_3);
                arr_23 [i_6] [i_7] |= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)40022))));
            }
            arr_24 [i_1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) - (((/* implicit */int) var_1))))) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) var_13))));
        }
        var_26 = ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_1] [i_1]))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 3; i_8 < 14; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                var_27 = (+(((/* implicit */int) (short)-20)));
                arr_31 [i_1] [i_1] = ((/* implicit */int) (-(var_9)));
                var_28 = ((/* implicit */int) (((-(18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55)))));
                arr_32 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_8] [i_9])) / (((/* implicit */int) arr_10 [i_1] [5ULL] [i_8 - 3] [i_1]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 2) 
                {
                    var_29 = ((/* implicit */unsigned int) var_6);
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_28 [i_9])) + (2147483647))) << ((((((~(((/* implicit */int) (unsigned short)25512)))) + (25535))) - (22))))))));
                    var_31 = ((((/* implicit */_Bool) 5ULL)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_1] [i_8 - 3] [i_1])) : (-958549690))) : ((~(((/* implicit */int) var_10)))));
                    arr_36 [i_1] [i_8] [i_1] [i_9] [(unsigned short)9] = ((/* implicit */unsigned short) (short)14041);
                }
                for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    /* LoopSeq 4 */
                    for (int i_12 = 1; i_12 < 16; i_12 += 4) 
                    {
                        arr_41 [i_9] [i_8] [i_9] |= ((/* implicit */short) (+(6ULL)));
                        var_32 -= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (-34852710) : (((/* implicit */int) var_15))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        arr_45 [i_13] [i_1] [(signed char)14] [i_9] [i_8] [i_1] [i_1] = ((/* implicit */signed char) var_9);
                        arr_46 [i_1] [i_8] [i_9] [i_9] [(signed char)0] |= ((/* implicit */int) ((((/* implicit */int) arr_18 [i_8 - 2] [i_8 - 2])) == (((/* implicit */int) arr_18 [i_8 - 2] [i_8 + 1]))));
                    }
                    for (int i_14 = 1; i_14 < 16; i_14 += 4) 
                    {
                        var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_37 [i_1] [i_8] [i_9] [(unsigned char)0] [i_9]))))) && (((/* implicit */_Bool) 11ULL))));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_14] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_8 + 2] [i_1])) ? (((/* implicit */unsigned long long int) 27436330)) : (arr_20 [i_14 + 1] [i_14 + 1] [i_14 - 1])));
                        arr_49 [i_1] [i_1] [i_1] [i_11] [i_1] [(short)2] [i_1] = ((/* implicit */signed char) -390063497472793663LL);
                    }
                    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 2) 
                    {
                        arr_52 [i_1] [i_8 - 2] [i_9] [i_8] [i_8 + 3] = ((/* implicit */unsigned short) var_9);
                        var_35 |= ((/* implicit */int) ((arr_16 [i_1] [i_8] [i_8] [i_8] [i_8] [i_9] [3ULL]) == (arr_34 [i_8 - 3] [i_8 + 1] [i_8 + 2] [i_8 - 2])));
                    }
                    var_36 -= ((/* implicit */unsigned int) arr_42 [4] [i_11] [i_9] [i_9] [i_9]);
                    var_37 = ((/* implicit */signed char) arr_42 [i_8 - 1] [i_1] [i_9] [i_11] [i_8 - 1]);
                    arr_53 [i_8] [i_1] [(signed char)3] [i_8] [i_8] = ((/* implicit */unsigned int) arr_44 [i_8 + 3] [i_8] [i_8] [i_8 - 2] [i_8]);
                }
            }
            arr_54 [i_1] [0ULL] [i_8] |= ((/* implicit */signed char) 1509031586);
            /* LoopNest 3 */
            for (int i_16 = 3; i_16 < 15; i_16 += 2) 
            {
                for (short i_17 = 2; i_17 < 14; i_17 += 3) 
                {
                    for (short i_18 = 0; i_18 < 17; i_18 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_16))));
                            var_39 = ((/* implicit */short) ((arr_27 [i_17 + 3] [9] [i_16] [i_1]) < (arr_27 [i_8] [i_8] [i_16 + 1] [i_16 + 1])));
                            var_40 = ((/* implicit */unsigned short) ((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            var_41 = ((/* implicit */int) var_7);
                        }
                    } 
                } 
            } 
            arr_61 [i_1] = ((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_1] [i_1]);
            arr_62 [i_8 + 2] [(unsigned short)16] [i_8] |= ((/* implicit */int) (short)-28027);
        }
    }
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 20; i_19 += 2) 
    {
        for (unsigned char i_20 = 1; i_20 < 18; i_20 += 2) 
        {
            {
                var_42 -= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (min((arr_65 [i_19] [i_19]), (((/* implicit */unsigned long long int) arr_68 [i_20])))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (arr_67 [i_19])))))));
                var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (~((~(((/* implicit */int) var_0)))))))));
                var_44 = ((/* implicit */int) min((1926017941U), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-27)) / (((/* implicit */int) (unsigned short)25505)))))));
            }
        } 
    } 
}
