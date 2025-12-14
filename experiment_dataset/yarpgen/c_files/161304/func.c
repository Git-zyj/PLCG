/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161304
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
    for (short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) == (0U)))) >> (((18012199486226432LL) - (18012199486226426LL))))))));
        var_13 = ((/* implicit */signed char) ((((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_1)))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 2])) && (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_1] = ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((((/* implicit */int) (signed char)-118)) != (((/* implicit */int) var_7)))))))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 3]))) < (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) % (4294967295U)))))));
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 3]))))) >= (((((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 2])) >> (((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 2]))))));
        }
    }
    for (unsigned short i_2 = 3; i_2 < 16; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (signed char)-35))))) < (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)57081)) == (((/* implicit */int) (signed char)-29))))) == (((/* implicit */int) ((((/* implicit */long long int) -1)) < (18012199486226426LL)))))))));
            arr_13 [0] [i_3] |= ((/* implicit */long long int) ((((((/* implicit */int) (signed char)36)) ^ (var_10))) < (((((/* implicit */int) (signed char)89)) >> (((/* implicit */int) arr_6 [i_2 + 2]))))));
            var_15 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((1454910131U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))))))) - (((-18012199486226433LL) ^ (((/* implicit */long long int) 1835008))))));
        }
        for (short i_4 = 1; i_4 < 15; i_4 += 4) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((-1) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (0U))))))) < (((/* implicit */int) ((((/* implicit */int) (signed char)13)) == (((/* implicit */int) (unsigned short)59176)))))));
            arr_16 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (5278450827059194956LL)))) % (((((/* implicit */int) var_3)) ^ (var_10)))));
            var_17 = ((/* implicit */_Bool) max((var_17), (((((/* implicit */int) (signed char)46)) != (((/* implicit */int) (unsigned char)208))))));
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [i_2 - 2])) ^ (((/* implicit */int) arr_9 [i_2])))) & (((((/* implicit */int) (unsigned char)135)) | (((/* implicit */int) var_1)))))))));
            var_19 = ((/* implicit */int) ((((arr_10 [i_4 - 1] [i_4 + 1] [i_4]) ^ (((/* implicit */int) var_9)))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4 + 2] [i_2] [i_2])) && (((/* implicit */_Bool) var_8)))))));
        }
        var_20 = ((((arr_11 [i_2 - 1] [i_2] [i_2 + 1]) ^ (arr_11 [i_2 - 3] [i_2] [i_2 - 3]))) == (((((/* implicit */int) (_Bool)1)) ^ (arr_11 [i_2 + 2] [i_2] [i_2 - 3]))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 11; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                {
                    arr_25 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_5 [i_7] [i_5]))));
                    var_21 &= ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)21303)) - (21287))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_7))));
                            arr_33 [i_5] [i_6] [i_7] [i_5] [i_7] = ((/* implicit */short) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_30 [i_6])) < (((/* implicit */int) arr_21 [i_5] [i_5]))))))));
                            arr_34 [(_Bool)1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)25470)) * (((/* implicit */int) (unsigned short)64720))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            arr_38 [i_5] [i_5] [i_5] [i_5] [i_10] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152))) <= (14624939493725517603ULL)))) <= (((/* implicit */int) var_5))));
                            var_23 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)34812)) != (((/* implicit */int) (_Bool)1))));
                        }
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_7))));
                    }
                    var_25 = ((/* implicit */int) ((arr_37 [i_5] [i_6] [i_6] [i_6] [i_6] [i_5]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) arr_30 [i_5]))));
        /* LoopSeq 2 */
        for (signed char i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            var_27 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned short)12]))) < (18012199486226441LL)))) > (((/* implicit */int) arr_24 [i_5] [i_5] [i_11]))));
            var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)79)) | (((/* implicit */int) (signed char)62))));
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) % (9101562148477476519LL))))));
            /* LoopSeq 3 */
            for (unsigned int i_12 = 3; i_12 < 10; i_12 += 3) 
            {
                arr_44 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((3000363181U) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                var_30 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (var_10))))) <= (arr_41 [i_12 - 2] [i_12 + 3] [i_12 + 2])));
                arr_45 [i_5] [1U] [i_11] [i_12] = ((/* implicit */unsigned int) ((2372465549U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
            for (signed char i_13 = 4; i_13 < 11; i_13 += 2) 
            {
                var_31 = ((var_8) % (((/* implicit */int) arr_40 [i_11] [i_13 - 2] [(unsigned short)2])));
                var_32 &= ((/* implicit */int) ((302233141067095472LL) >> (((10282076172923350545ULL) - (10282076172923350522ULL)))));
            }
            for (short i_14 = 1; i_14 < 12; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_33 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_14 + 1] [i_11])) >= (((/* implicit */int) arr_29 [i_14 - 1] [i_15] [i_15 - 1] [i_15 - 1] [i_15]))));
                            var_34 |= ((2517727051U) >> (((arr_54 [i_15 - 1] [i_11] [i_15 - 1] [i_11] [i_14]) + (1830152248))));
                            var_35 += ((4074198821U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_11]))));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) % (((/* implicit */int) (_Bool)1))));
                            var_37 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_19 [i_11] [i_14 - 1])) % (((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32217)))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_17 = 0; i_17 < 14; i_17 += 2) 
                {
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18012199486226429LL)) && (((/* implicit */_Bool) arr_29 [i_14 - 1] [i_14] [13U] [i_14] [i_14]))));
                    var_39 = ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_50 [i_5] [i_14 + 1] [i_5])));
                    var_40 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_17] [i_14 + 2])) == (((/* implicit */int) arr_30 [i_5]))));
                }
                for (unsigned int i_18 = 4; i_18 < 10; i_18 += 2) 
                {
                    arr_63 [i_5] [i_11] [i_5] [i_5] = ((/* implicit */unsigned char) ((((2059792292392153187ULL) >> (((var_0) - (304624924U))))) ^ (((/* implicit */unsigned long long int) -302233141067095473LL))));
                    var_41 = (i_5 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_50 [i_14 + 2] [i_18 - 4] [i_5])) >> (((((/* implicit */int) arr_50 [i_14 + 1] [i_18 - 1] [i_5])) - (32395)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_50 [i_14 + 2] [i_18 - 4] [i_5])) >> (((((((/* implicit */int) arr_50 [i_14 + 1] [i_18 - 1] [i_5])) - (32395))) + (17274))))));
                }
            }
        }
        for (unsigned int i_19 = 2; i_19 < 12; i_19 += 4) 
        {
            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (3506419022U))))));
            var_43 = ((/* implicit */signed char) ((3092910438U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
            /* LoopNest 3 */
            for (unsigned long long int i_20 = 3; i_20 < 13; i_20 += 4) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                    {
                        {
                            var_44 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_58 [i_19] [(unsigned short)10] [i_19 - 1] [i_22 + 1])) == (((/* implicit */int) arr_58 [i_19] [i_19 + 2] [i_19 - 1] [i_22 + 1]))));
                            var_45 *= ((/* implicit */unsigned char) ((788548294U) % (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_65 [i_5] [i_19] [i_19])))))));
                        }
                    } 
                } 
            } 
            var_47 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_35 [i_19 - 1] [i_19 + 1] [i_19 - 1] [(short)5] [i_19 - 2])) - (((/* implicit */int) (_Bool)1))));
        }
        var_48 &= ((/* implicit */_Bool) ((1202056858U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29708)))));
    }
    var_49 = var_4;
}
