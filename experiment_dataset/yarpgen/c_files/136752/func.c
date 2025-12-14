/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136752
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 = min((((/* implicit */unsigned char) min(((signed char)125), ((signed char)-123)))), (var_6));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_14 = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (min((((/* implicit */unsigned long long int) arr_3 [i_0])), (137247359981726205ULL)))))));
                    var_15 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (short)-30056)) : (528215215))) % (((((/* implicit */int) (short)-30042)) - (528215209))))), (((/* implicit */int) arr_1 [i_1] [i_0]))));
                }
                for (unsigned short i_3 = 3; i_3 < 19; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        var_16 -= ((/* implicit */unsigned short) max((((((/* implicit */int) arr_14 [i_0] [i_1] [i_3 - 1] [i_4] [i_1] [i_4])) | (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) (_Bool)1))));
                        var_17 = ((/* implicit */long long int) (signed char)-80);
                        arr_16 [i_0] [(short)0] [i_0] [3ULL] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) min(((short)30055), (arr_12 [i_1] [i_3 - 1] [i_3 - 1] [i_3 - 2])))), (((((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_1] [i_0] [i_3 - 2])) - (((/* implicit */int) arr_12 [i_0] [i_3 - 3] [i_3 - 3] [i_3 + 1]))))));
                        var_18 += ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-32))));
                        arr_17 [(signed char)0] [i_3] [i_1] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned short) var_10);
                    }
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) arr_0 [i_1] [12ULL]);
                        var_20 &= ((/* implicit */short) (signed char)-104);
                        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_3] [i_5] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned short)4]))) : (arr_6 [i_0] [i_5] [11ULL]))), (((/* implicit */unsigned int) arr_4 [i_3 - 3]))))) ? (((((/* implicit */_Bool) (unsigned short)27)) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) arr_10 [19U] [i_1] [i_3 + 1]))));
                        arr_21 [i_0] [i_0] = ((/* implicit */unsigned short) arr_9 [i_0] [(unsigned short)5] [(unsigned short)5] [(short)12]);
                    }
                    var_22 = ((/* implicit */unsigned int) min((max(((signed char)-126), (((/* implicit */signed char) (_Bool)0)))), ((signed char)(-127 - 1))));
                }
                for (unsigned long long int i_6 = 3; i_6 < 17; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17; i_7 += 2) 
                    {
                        for (short i_8 = 2; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_27 [i_8 - 1] [i_7 + 1] [i_6 + 3] [15U] [(unsigned char)4] [i_1])) % (((/* implicit */int) var_5)))), (((/* implicit */int) arr_20 [i_6 - 1] [i_0] [(unsigned char)15] [(unsigned char)15]))));
                                var_24 = max((((/* implicit */int) (unsigned char)128)), (max((((/* implicit */int) min((((/* implicit */short) (signed char)-95)), ((short)-30061)))), (min((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_7])), (arr_2 [i_0]))))));
                                arr_30 [i_0] [i_7 + 1] [i_6] [i_1] [i_0] = ((/* implicit */short) arr_22 [i_1] [i_6]);
                                var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-22374)), (-26596195706377942LL)))) : (13068405232581551728ULL)));
                            }
                        } 
                    } 
                    arr_31 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [(_Bool)1] [i_6])))));
                    var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)58))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 4; i_9 < 18; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_3 [i_0]), (((/* implicit */short) min((arr_14 [i_0] [(signed char)1] [i_9] [i_10] [i_10] [i_9]), ((signed char)-108))))))), (18309496713727825411ULL)));
                            arr_36 [i_0] [i_0] [3U] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_1] [i_9]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)24190)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)227))))) : (min((arr_6 [i_0] [i_9] [12LL]), (((/* implicit */unsigned int) (signed char)-94))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    for (short i_12 = 1; i_12 < 19; i_12 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                            /* LoopSeq 1 */
                            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                            {
                                arr_46 [i_0] [i_0] [i_11] [i_12 + 1] [i_0] [(signed char)13] [6] = ((6125436360485419738ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30045))));
                                var_29 = ((/* implicit */_Bool) min((528215215), (min((((/* implicit */int) (signed char)107)), (-1021837286)))));
                                arr_47 [i_0] [(_Bool)1] [i_1] [i_11] [(unsigned char)4] = ((/* implicit */int) arr_22 [i_1] [i_1]);
                            }
                            arr_48 [i_1] [i_1] [i_11] [(signed char)6] &= ((/* implicit */unsigned short) arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_14 = 1; i_14 < 22; i_14 += 2) 
    {
        for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_16 = 1; i_16 < 21; i_16 += 2) 
                {
                    for (signed char i_17 = 4; i_17 < 22; i_17 += 1) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 24; i_18 += 3) 
                        {
                            {
                                var_30 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)2)), (2938655806U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_14]))) : (max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)15))))), (arr_60 [i_14] [i_15] [i_15 - 1] [i_16] [i_16] [i_16 + 3])))));
                                var_31 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-21)))) ? (((((/* implicit */int) arr_51 [i_15 - 1])) - (((/* implicit */int) arr_51 [i_15 - 1])))) : (((/* implicit */int) min((arr_58 [(unsigned char)20] [i_16 - 1]), (arr_58 [(unsigned char)12] [i_16 + 2]))))));
                            }
                        } 
                    } 
                } 
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)3))))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_54 [i_14] [i_14] [i_14 - 1] [i_15])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)124))), ((unsigned char)220)))))));
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9571188313073393180ULL)) ? (((/* implicit */int) (short)30042)) : (((/* implicit */int) (unsigned char)55))));
                /* LoopNest 3 */
                for (long long int i_19 = 4; i_19 < 21; i_19 += 3) 
                {
                    for (long long int i_20 = 0; i_20 < 24; i_20 += 1) 
                    {
                        for (unsigned long long int i_21 = 1; i_21 < 21; i_21 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */short) min((var_34), (min(((short)30047), (arr_49 [16U])))));
                                arr_69 [i_14] [i_15] [i_14] [i_20] [i_21] = ((/* implicit */signed char) ((328328352U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-43)))));
                                var_35 ^= ((/* implicit */unsigned long long int) min((((arr_60 [i_14 + 1] [i_19 - 1] [i_21 + 1] [(short)19] [i_21] [(short)9]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_14 + 2] [i_19 - 3]))))), ((-(arr_60 [i_14 + 1] [i_19 + 1] [i_21 + 1] [i_21] [i_14 + 1] [(unsigned char)9])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_36 = ((/* implicit */int) var_9);
    var_37 = ((/* implicit */long long int) var_7);
    var_38 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)201))));
}
