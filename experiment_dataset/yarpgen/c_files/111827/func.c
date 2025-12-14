/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111827
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) var_2))));
    var_11 = ((/* implicit */unsigned long long int) (-(var_5)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 += ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((unsigned char) var_0))), (max((max((((/* implicit */unsigned short) (signed char)85)), (var_4))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0]) ^ (((/* implicit */long long int) ((((/* implicit */int) (signed char)85)) << (((arr_0 [i_0] [i_0]) - (4052083073435809906ULL))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_13 = ((/* implicit */int) ((((((arr_0 [i_0] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))) == (((/* implicit */unsigned long long int) min((arr_1 [i_1]), (((/* implicit */long long int) var_1))))))) && (((/* implicit */_Bool) var_7))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned char i_3 = 3; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_14 -= ((/* implicit */unsigned int) (+(min((arr_8 [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 1] [i_3 - 3] [i_3 + 1]), (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0])))))))));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) + (((((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_3 + 2] [i_3 + 1]))) : (arr_8 [i_0] [i_3] [i_3 + 2] [i_3] [i_3 - 2] [i_3])))));
                        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0] [i_2] [i_0])), (var_4))))) - (arr_8 [i_3] [i_3 + 1] [i_3 + 2] [i_3] [i_3] [i_3 + 2])))) ? (arr_6 [i_3 - 2] [i_3 - 1] [i_3 + 2] [i_3 + 1]) : (max((((long long int) arr_0 [i_3] [i_1])), (((/* implicit */long long int) ((((/* implicit */int) (signed char)85)) + (((/* implicit */int) (signed char)-92)))))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            var_17 -= ((/* implicit */unsigned int) ((unsigned char) var_1));
                            arr_13 [i_3] [i_0] [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) (((-(max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1] [i_0])), (arr_0 [i_1] [i_2]))))) * (((unsigned long long int) arr_11 [i_3] [i_3] [(short)18] [i_3] [i_3 - 1] [i_3]))));
                        }
                        for (signed char i_5 = 2; i_5 < 23; i_5 += 3) 
                        {
                            var_18 += ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(256568842)))), (arr_6 [i_5] [i_3 + 1] [i_3 + 1] [i_3 + 2])))) >= (max((min((arr_0 [i_3] [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_5])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3] [(unsigned char)2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5]))) : (4148196389U)))))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (4148196389U)));
                        }
                        arr_16 [i_0] [i_3] [i_0] [i_3] = min((((/* implicit */long long int) (~(arr_12 [i_3] [i_3] [i_3] [i_3 + 2] [i_3])))), (arr_5 [i_0] [i_1] [i_2]));
                    }
                } 
            } 
        }
        for (unsigned long long int i_6 = 3; i_6 < 22; i_6 += 2) 
        {
            var_20 = 1653456579483750293LL;
            var_21 = ((/* implicit */long long int) (~(((((((/* implicit */int) arr_15 [i_0] [i_0] [i_6] [i_6])) | (((/* implicit */int) (signed char)-37)))) | (((/* implicit */int) var_6))))));
            var_22 = ((/* implicit */_Bool) ((min((max((arr_5 [i_0] [i_6] [i_0]), (arr_7 [i_0]))), (((/* implicit */long long int) arr_12 [(signed char)11] [i_6 - 3] [i_6] [i_6] [i_6])))) - (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_6] [i_0] [i_6]))));
            arr_19 [i_6 - 2] [i_6] &= ((/* implicit */signed char) (-(arr_6 [i_6] [i_6 + 2] [i_0] [i_0])));
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 14; i_7 += 3) 
    {
        var_23 = (-(((long long int) arr_3 [i_7])));
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7] [i_7] [(signed char)4] [i_7 + 4] [i_9])) ? (arr_20 [i_7]) : (arr_14 [i_7] [i_7] [i_7] [i_7] [18ULL] [i_7 - 1] [i_9])));
                arr_27 [i_7] [i_8] [i_8] = (+(arr_6 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]));
                arr_28 [i_7] [i_8] [i_9] = ((/* implicit */int) arr_20 [i_8]);
                /* LoopSeq 2 */
                for (signed char i_10 = 2; i_10 < 15; i_10 += 2) 
                {
                    arr_31 [i_7] [i_8] [i_8] [i_10] = ((/* implicit */signed char) ((arr_1 [i_7 - 2]) & (((/* implicit */long long int) 146770906U))));
                    var_25 -= ((/* implicit */unsigned int) ((arr_20 [i_7]) / (arr_20 [i_7 + 3])));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_26 = ((/* implicit */short) var_8);
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 256568842)) : (arr_7 [i_8])))) ? (arr_24 [i_7 - 2]) : (arr_20 [i_7 - 1])));
                    arr_36 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) arr_32 [i_8]);
                    var_28 &= ((/* implicit */int) ((long long int) (~(((/* implicit */int) var_1)))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    for (int i_13 = 2; i_13 < 15; i_13 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_24 [i_7])) | (arr_22 [i_12] [i_13 + 3]))))));
                            var_30 = ((/* implicit */int) ((var_0) >= (((/* implicit */int) var_9))));
                            arr_42 [i_7 + 2] [5ULL] [i_9] [i_7 + 2] [i_13] [i_8] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1871171333)) ? (((/* implicit */long long int) arr_29 [i_13 + 1] [i_12] [i_9] [i_8] [i_7])) : ((~(arr_24 [i_7])))));
                            arr_43 [(unsigned short)2] [i_8] [i_8] [14ULL] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 8388607))))) * (((((/* implicit */int) var_6)) * (((/* implicit */int) arr_4 [i_7 + 1] [i_9] [(signed char)6]))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_14 = 3; i_14 < 16; i_14 += 4) 
            {
                arr_46 [i_7] [2ULL] [i_14] |= ((/* implicit */unsigned int) (unsigned char)193);
                var_31 = ((/* implicit */int) 17611970339824078785ULL);
                /* LoopSeq 3 */
                for (int i_15 = 0; i_15 < 18; i_15 += 4) 
                {
                    var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? (arr_20 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) arr_14 [i_7] [i_8] [i_7] [i_15] [i_15] [i_7] [i_7])) ? (((/* implicit */int) arr_33 [i_7] [i_7] [6U] [i_7] [i_7])) : (((/* implicit */int) var_3)))) : ((-(arr_30 [i_15] [i_8] [i_8] [i_7])))));
                    arr_49 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) (+(arr_10 [i_7 - 2] [i_8] [i_14 + 2])));
                    arr_50 [i_8] [i_8] [i_14] [i_15] = (!(((/* implicit */_Bool) (~(arr_17 [i_7])))));
                    var_33 *= ((/* implicit */signed char) ((var_5) + (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_9)))))));
                    var_34 = ((/* implicit */unsigned int) arr_47 [i_7] [i_8] [i_14]);
                }
                for (long long int i_16 = 1; i_16 < 17; i_16 += 2) 
                {
                    var_35 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    /* LoopSeq 1 */
                    for (int i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        var_36 += ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) < (((/* implicit */int) arr_41 [i_7] [i_8] [i_14] [i_16] [i_17])))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7 + 3])))));
                        var_37 &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_39 [3U] [i_7 - 2] [i_14 - 2] [i_14]))));
                    }
                    arr_57 [i_7] [i_7 + 1] [i_7 + 1] [i_8] = ((/* implicit */unsigned char) arr_6 [i_7] [i_7] [i_7] [i_7]);
                    arr_58 [i_7] [i_8] [i_8] [i_16 - 1] [i_8] [i_16 - 1] = ((/* implicit */long long int) ((arr_24 [i_14 - 3]) <= (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_14] [i_8] [i_14 - 2] [i_16 - 1])))));
                }
                for (signed char i_18 = 0; i_18 < 18; i_18 += 4) 
                {
                    var_38 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((arr_8 [i_18] [i_14] [i_14] [i_8] [i_8] [i_7]) & (((/* implicit */long long int) ((/* implicit */int) arr_15 [12ULL] [i_8] [i_14] [i_14])))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_7] [i_7]))) * (arr_35 [i_7] [15] [i_7])))));
                    /* LoopSeq 1 */
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        arr_65 [i_7] [i_8] [i_14] [i_8] [i_19] = (!(((/* implicit */_Bool) arr_35 [i_19] [i_8] [i_19 - 1])));
                        var_39 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7 + 2]))) * (arr_0 [i_19 - 1] [i_14 - 3])));
                    }
                    var_40 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 0LL)) ? (arr_22 [i_8] [i_8]) : (((/* implicit */unsigned long long int) var_0)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_7] [i_8] [i_14] [i_14])) < (((/* implicit */int) arr_15 [i_7] [i_8] [i_8] [i_7]))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (signed char i_21 = 2; i_21 < 16; i_21 += 3) 
                    {
                        {
                            arr_73 [i_7 + 2] [i_7] [i_8] [i_7] [i_7] = ((((/* implicit */_Bool) arr_61 [i_7 + 3] [i_7 + 1] [i_21 + 2])) && (((/* implicit */_Bool) arr_61 [i_7] [i_7 + 2] [i_21 - 1])));
                            var_41 ^= ((/* implicit */_Bool) (-(arr_17 [i_14 - 3])));
                            arr_74 [i_21] [i_8] [i_20] [i_14] [i_8] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) var_9)) * (((/* implicit */int) var_3))))));
                        }
                    } 
                } 
            }
            var_42 = ((/* implicit */unsigned char) (+(arr_37 [i_8] [i_8])));
        }
        arr_75 [i_7] = ((/* implicit */long long int) arr_3 [i_7 + 3]);
    }
    var_43 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_7)))));
}
