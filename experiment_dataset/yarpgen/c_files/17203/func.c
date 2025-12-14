/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17203
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
    var_19 = ((/* implicit */short) max((max(((-(var_17))), (((/* implicit */long long int) ((int) var_3))))), (max((((var_17) | (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((long long int) var_2))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                var_20 = (unsigned short)62280;
                var_21 = ((/* implicit */unsigned long long int) ((short) var_14));
            }
            for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
            {
                arr_9 [i_0] [1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_0]) : (arr_1 [i_0 - 2])));
                /* LoopNest 2 */
                for (unsigned short i_4 = 2; i_4 < 13; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_15 [i_4] [8U] [(signed char)6] [(unsigned char)14] [i_1] = ((/* implicit */unsigned int) ((short) (unsigned char)234));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((unsigned int) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_0] [(signed char)7] [i_4] [13LL])) - (226)))))))));
                        }
                    } 
                } 
            }
            arr_16 [i_1] [14U] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [1LL] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)11879)) : (((/* implicit */int) (unsigned short)47477)))));
            arr_17 [(unsigned short)5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)247)) * (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 2]))));
        }
        arr_18 [i_0] = ((/* implicit */int) (!((_Bool)1)));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) 229389065U)) / (2934052818707402904LL)));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)44)) / (((/* implicit */int) arr_20 [i_6]))))) ? (((/* implicit */int) ((unsigned short) 1452687644))) : (((((/* implicit */int) (unsigned char)234)) / (((/* implicit */int) (_Bool)1))))));
        var_25 = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) var_3)))));
        arr_21 [i_6] &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) arr_20 [i_6]))));
    }
    /* vectorizable */
    for (signed char i_7 = 1; i_7 < 9; i_7 += 1) 
    {
        arr_24 [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)0))));
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_7 - 1])) ? (((/* implicit */int) arr_20 [i_7 + 2])) : (((/* implicit */int) arr_20 [i_7 + 2])))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 1; i_8 < 7; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_31 [(unsigned short)1] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_0 [i_8] [i_7]))) <= (((/* implicit */int) (short)3149))));
                    var_27 += ((/* implicit */short) arr_19 [i_7 + 2] [i_7]);
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        for (short i_11 = 1; i_11 < 9; i_11 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) (((_Bool)1) ? (arr_34 [1LL] [i_8] [(unsigned char)4] [i_8]) : (arr_34 [i_7] [i_9] [2ULL] [i_11 + 1])));
                                var_29 = (!(((/* implicit */_Bool) 4264410554411275103LL)));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned short i_12 = 1; i_12 < 8; i_12 += 4) 
                    {
                        arr_40 [3LL] [i_7] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned short)6750)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)211)))))));
                        arr_41 [(short)2] [(short)8] [i_9] [0LL] &= ((/* implicit */_Bool) (~(arr_2 [3U])));
                        var_30 = (+(-1016364428910387278LL));
                        arr_42 [i_7] [i_8] [i_9] [i_7] [i_8] [i_7] = ((/* implicit */long long int) arr_19 [i_8 + 3] [i_8]);
                        var_31 = ((/* implicit */short) ((((_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_8 + 4] [i_7 + 1]))) : (arr_34 [i_8 + 2] [(unsigned short)4] [i_8] [i_8])));
                    }
                    for (long long int i_13 = 4; i_13 < 8; i_13 += 3) 
                    {
                        var_32 ^= arr_43 [i_7] [(short)4] [i_8] [i_9] [i_9] [i_13];
                        arr_45 [i_7] [i_9] [0ULL] [i_7] = ((/* implicit */short) arr_38 [i_7] [i_9] [i_13]);
                        arr_46 [i_7] [i_8] [i_7] [i_9] [i_9] [i_13] = ((/* implicit */long long int) arr_30 [i_13] [i_9] [i_8] [i_7]);
                    }
                    for (long long int i_14 = 2; i_14 < 8; i_14 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_15 = 1; i_15 < 10; i_15 += 3) 
                        {
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((_Bool) arr_26 [i_15 - 1] [i_8 + 4])))));
                            arr_53 [i_7] [i_7] [i_9] [i_14] [(unsigned char)7] = ((/* implicit */_Bool) arr_25 [(unsigned short)7] [i_9] [i_7]);
                            arr_54 [6U] [i_8] [i_8] [i_8] [i_8] [i_8] [i_7] = ((/* implicit */long long int) ((short) arr_26 [i_9] [i_14 + 3]));
                        }
                        for (int i_16 = 0; i_16 < 11; i_16 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)243)))))));
                            arr_58 [i_8] [i_8] [9LL] [(_Bool)1] [i_8] [i_7] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8 - 1] [i_7 + 2]))) : (var_17)));
                            arr_59 [i_7] [i_7] [i_9] [i_14] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_9]))))) && (((/* implicit */_Bool) arr_50 [i_7]))));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) var_10))));
                            var_36 = ((/* implicit */long long int) arr_14 [(unsigned short)8] [i_8] [i_9] [(signed char)2] [i_7] [i_8]);
                        }
                        var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_8]))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) ((short) arr_32 [i_7 - 1] [i_9]));
                        arr_62 [i_7] [i_8] [i_9] [i_17] [i_17] = var_10;
                        var_39 = ((/* implicit */short) (~(0)));
                    }
                    var_40 = ((/* implicit */signed char) (+(0)));
                }
            } 
        } 
        arr_63 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_57 [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 1]))));
        arr_64 [i_7] = var_9;
    }
    /* LoopNest 3 */
    for (signed char i_18 = 1; i_18 < 11; i_18 += 1) 
    {
        for (short i_19 = 1; i_19 < 11; i_19 += 1) 
        {
            for (long long int i_20 = 0; i_20 < 12; i_20 += 3) 
            {
                {
                    arr_72 [i_18] [i_19] [i_18] [(signed char)2] = ((/* implicit */long long int) ((var_1) % (((((/* implicit */_Bool) (unsigned char)247)) ? (var_16) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)51)) ? (var_15) : (((/* implicit */int) (unsigned char)243)))))))));
                    var_41 = ((/* implicit */unsigned int) var_16);
                    var_42 = ((/* implicit */long long int) (~(5U)));
                    var_43 &= ((/* implicit */short) (unsigned char)24);
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (unsigned int i_22 = 0; i_22 < 12; i_22 += 1) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))), (16804941583117110680ULL))))))));
                                var_45 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_75 [i_18 - 1] [i_18 + 1] [i_18] [i_18] [(unsigned char)8]))));
                                arr_78 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
