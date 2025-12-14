/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120148
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [10LL] [10LL] &= ((/* implicit */signed char) ((unsigned char) (signed char)-4));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (signed char)15))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((long long int) 13811443582436140125ULL)), (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) * (var_8))))))));
        arr_3 [6U] |= ((/* implicit */unsigned short) ((var_14) && (((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            arr_9 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1] [i_2 + 1]))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 3; i_3 < 7; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_1 [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (13811443582436140115ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)3)) / (((/* implicit */int) var_12)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 ^= ((/* implicit */unsigned char) ((2234390943255456517LL) < (((/* implicit */long long int) ((/* implicit */int) (short)14)))));
                            var_22 = ((/* implicit */unsigned char) ((signed char) arr_4 [i_2 + 1] [i_3 + 1]));
                        }
                        var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (signed char)-102)) / (((/* implicit */int) arr_10 [i_1] [i_1] [i_3]))))));
                    }
                } 
            } 
            arr_20 [2ULL] [2ULL] [2ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)12)) && (((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1]))));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 1; i_6 < 8; i_6 += 2) 
            {
                arr_23 [i_6 + 2] [i_6 + 2] [i_6] [i_6] = ((/* implicit */int) arr_13 [i_2] [i_2] [i_2 - 1]);
                arr_24 [i_1] [i_1] [i_6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_2 + 1] [i_2 + 1] [i_6 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_6]))) : (2234390943255456494LL)));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        {
                            var_24 *= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_2 - 1] [i_6 - 1]))));
                            var_25 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)50))) != (-2234390943255456512LL)));
                            arr_32 [i_1] [i_1] [i_1] [i_1] [i_6] [i_1] = ((/* implicit */unsigned short) ((arr_21 [i_8] [(unsigned short)2] [i_2 - 1] [i_1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_18))));
                            arr_33 [i_6] [i_6 + 1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4635300491273411492ULL)) ? (((/* implicit */int) (short)-17)) : (((((/* implicit */_Bool) arr_13 [i_6] [i_1] [i_1])) ? (arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */int) var_2))))));
                            var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_18))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
            }
        }
        /* LoopNest 3 */
        for (signed char i_9 = 2; i_9 < 8; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_28 &= var_8;
                        arr_41 [i_10] = ((/* implicit */short) var_5);
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */_Bool) max((var_29), ((_Bool)1)));
    }
    /* LoopSeq 1 */
    for (int i_12 = 1; i_12 < 8; i_12 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 1; i_13 < 8; i_13 += 3) 
        {
            var_30 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)26))));
            /* LoopSeq 2 */
            for (signed char i_14 = 2; i_14 < 7; i_14 += 3) 
            {
                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_9))) << (((2234390943255456489LL) - (2234390943255456487LL))))))));
                var_32 = ((/* implicit */unsigned char) var_10);
                var_33 += ((/* implicit */unsigned long long int) ((((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_1))))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (-5186792798497507981LL)))) && (arr_15 [i_12] [i_12] [i_12] [i_12])))))));
            }
            for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) 
            {
                /* LoopSeq 3 */
                for (signed char i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 2; i_17 < 9; i_17 += 4) 
                    {
                        arr_58 [i_12] [i_13] [i_17] [i_13] [(unsigned short)8] [i_13] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) (unsigned char)6))))) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2234390943255456505LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)55))) : (((((long long int) var_1)) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_29 [i_16] [i_13] [i_15] [i_16] [i_16] [i_16] [i_17])) : (((/* implicit */int) var_3)))))))));
                        var_34 &= ((/* implicit */short) (+(((/* implicit */int) var_11))));
                        var_35 = ((/* implicit */unsigned int) var_5);
                    }
                    for (int i_18 = 1; i_18 < 8; i_18 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) || (var_14))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((unsigned char) var_13)))))))))));
                        var_37 = ((/* implicit */signed char) max((((/* implicit */unsigned short) var_13)), (var_2)));
                        arr_63 [i_16] [(unsigned char)9] [i_16] [(unsigned char)9] [i_16] [i_16] [i_16] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_35 [i_18 + 1] [i_13 - 1] [i_12 - 1])) : (arr_27 [i_12 - 1] [i_13 - 1] [i_13 + 1]))) / ((-(((/* implicit */int) var_1))))));
                        var_38 *= var_8;
                    }
                    arr_64 [0ULL] [(unsigned char)6] [i_15] &= ((/* implicit */unsigned short) arr_47 [i_12 + 1] [i_13]);
                }
                for (unsigned char i_19 = 0; i_19 < 10; i_19 += 1) 
                {
                    var_39 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_66 [8U] [i_13] [i_13] [i_13])) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) -2234390943255456517LL)) ? (((/* implicit */int) (unsigned char)134)) : (-391662452))))));
                    arr_68 [i_12] [i_19] [i_15] [i_12] = ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned char) var_7)), (var_11))));
                }
                for (int i_20 = 2; i_20 < 7; i_20 += 3) 
                {
                    var_40 = ((/* implicit */signed char) var_12);
                    var_41 = ((/* implicit */_Bool) min((var_41), (arr_0 [i_12 + 1])));
                    arr_72 [i_20] = ((/* implicit */long long int) (((((+(((/* implicit */int) var_1)))) >> (((((/* implicit */int) var_11)) - (191))))) * (((((/* implicit */int) max((((/* implicit */unsigned short) var_18)), (var_4)))) / (min((-1607648314), (((/* implicit */int) (unsigned char)255))))))));
                }
                var_42 = ((/* implicit */int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)117))))))) ? (min((((/* implicit */unsigned int) (signed char)-38)), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
            }
            arr_73 [i_13] [i_12] = ((/* implicit */int) ((signed char) (~(((/* implicit */int) var_6)))));
            arr_74 [i_12] [i_12 + 1] [i_13] = ((/* implicit */unsigned int) (-((+(-626287766)))));
            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) var_4))));
        }
        /* vectorizable */
        for (signed char i_21 = 0; i_21 < 10; i_21 += 3) 
        {
            arr_77 [i_21] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_75 [i_12 + 2] [i_21])))))));
        }
        var_45 = ((/* implicit */signed char) arr_47 [i_12] [i_12 + 1]);
        arr_78 [i_12] |= arr_36 [i_12 + 1] [i_12] [i_12];
    }
    /* LoopSeq 1 */
    for (long long int i_22 = 1; i_22 < 12; i_22 += 4) 
    {
        var_46 += ((unsigned long long int) (~(((/* implicit */int) var_9))));
        /* LoopNest 3 */
        for (signed char i_23 = 3; i_23 < 12; i_23 += 3) 
        {
            for (int i_24 = 1; i_24 < 12; i_24 += 3) 
            {
                for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_26 = 4; i_26 < 11; i_26 += 1) 
                        {
                            arr_89 [i_26] [i_26] [i_26] [i_26] [i_22] = (unsigned short)44363;
                            arr_90 [i_22] [i_22] [i_24 + 1] [(signed char)3] [i_22] = ((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */_Bool) 503581698U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7232673374035560230ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))))))));
                        }
                        arr_91 [i_22] [i_24] [i_23 + 1] [i_22] = var_2;
                    }
                } 
            } 
        } 
        var_47 -= ((/* implicit */unsigned short) ((3) >> (((((((/* implicit */_Bool) (unsigned short)19123)) ? (((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_88 [i_22] [i_22] [i_22 - 1] [i_22] [i_22 - 1] [i_22] [i_22])) : (((/* implicit */int) (signed char)15)))))) + (50)))));
        var_48 ^= ((/* implicit */long long int) ((((/* implicit */int) (signed char)-26)) != (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)4965)))))));
        arr_92 [i_22] [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)82)), (1607648320)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_14)) / (((/* implicit */int) (short)-14680))))) : ((-(var_5)))));
    }
}
