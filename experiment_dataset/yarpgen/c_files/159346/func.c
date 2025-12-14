/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159346
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
    var_16 *= ((/* implicit */_Bool) var_6);
    /* LoopSeq 4 */
    for (signed char i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_5 [i_0] [(short)9] [i_0] = ((/* implicit */int) ((unsigned short) ((arr_0 [i_0 + 2] [i_0]) >= (((/* implicit */int) var_15)))));
            arr_6 [i_0] = ((((((/* implicit */int) var_9)) + (2147483647))) << (((((((/* implicit */int) arr_4 [(unsigned char)9])) - (((/* implicit */int) arr_1 [i_0])))) - (64519))));
            arr_7 [i_0] = ((/* implicit */long long int) (unsigned char)130);
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)51789)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1]))) : (-2938926793950918492LL)));
        }
        /* LoopSeq 2 */
        for (int i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (short i_4 = 3; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned char i_5 = 4; i_5 < 14; i_5 += 1) 
                    {
                        {
                            arr_19 [i_2] [i_4] [i_5] &= ((/* implicit */_Bool) (unsigned char)200);
                            arr_20 [i_0] [i_2] [i_0] [i_4] [i_0] = ((/* implicit */short) max((max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_2] [(_Bool)1] [i_4] [i_5 - 4]))) : (var_6))), (((/* implicit */long long int) ((unsigned char) var_2))))), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0 + 3]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                var_18 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(arr_9 [(_Bool)1] [i_0 + 3])))) - (-2938926793950918492LL)));
                arr_24 [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned char)57);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    arr_29 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (arr_22 [i_2 - 1] [(signed char)8] [i_0 + 3] [i_7 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    arr_30 [i_0 - 2] [i_2 + 2] [i_2] [(short)9] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)130)))) : (arr_18 [(unsigned short)0] [i_0] [i_7] [(unsigned short)15] [(unsigned short)0])));
                }
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    var_19 *= ((/* implicit */signed char) var_8);
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) max((arr_17 [i_0] [i_0 - 3] [i_2 - 1] [i_8] [i_8] [i_8] [i_8]), (arr_17 [i_0] [i_0 + 2] [i_2 + 1] [i_6] [i_0 + 2] [(signed char)10] [0LL])))) | (((/* implicit */int) arr_17 [i_0] [i_0 - 4] [i_2 + 1] [i_6] [i_2 + 1] [i_6] [i_8])))))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */long long int) max((arr_15 [i_6] [i_6] [i_6] [i_2] [i_2 - 1] [(short)14]), (((/* implicit */unsigned int) arr_17 [(signed char)14] [i_2] [i_2] [i_6] [i_6] [i_2] [i_2]))))) ^ (2938926793950918516LL)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((short) var_12)), (((/* implicit */short) var_2)))))) : (((((arr_22 [i_0] [i_0 - 2] [i_2 - 1] [i_8]) + (9223372036854775807LL))) >> (((9223372036854775807LL) - (9223372036854775783LL)))))))));
                    var_22 = ((/* implicit */_Bool) -2938926793950918517LL);
                }
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                arr_37 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_9);
                arr_38 [i_0] [i_2] [i_9] [i_0] = ((/* implicit */short) arr_18 [i_0] [i_0] [i_9] [i_9] [i_9]);
                arr_39 [(_Bool)1] [i_0] [(unsigned short)9] [(_Bool)1] = arr_10 [i_0];
            }
            for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                arr_42 [i_0] [i_0] = max(((unsigned short)4346), ((unsigned short)23401));
                arr_43 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) arr_27 [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0]);
            }
            for (int i_11 = 1; i_11 < 14; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    for (int i_13 = 1; i_13 < 15; i_13 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((unsigned short) ((max((((/* implicit */unsigned int) (_Bool)1)), (3126143435U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)35067))))))))));
                            var_24 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) max((arr_13 [i_11] [i_12]), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_17 [6] [(unsigned char)3] [i_11] [i_0] [6] [(unsigned short)1] [i_13 + 1])) - (24906)))))) <= (3126143435U))))))) : (((/* implicit */unsigned char) max((arr_13 [i_11] [i_12]), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((((((/* implicit */int) arr_17 [6] [(unsigned char)3] [i_11] [i_0] [6] [(unsigned short)1] [i_13 + 1])) - (24906))) + (3216)))))) <= (3126143435U)))))));
                        }
                    } 
                } 
                arr_51 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) arr_3 [i_2]))))) ? (((arr_47 [(unsigned char)13] [i_0] [10U] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38037))) : (arr_34 [i_11] [i_11] [i_11 - 1] [i_11]))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_2] [(short)4] [i_2 + 1])) ? (-2938926793950918517LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
                var_25 *= ((/* implicit */unsigned int) min((max((((var_0) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))) : (2938926793950918517LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -2938926793950918476LL))))))), (((/* implicit */long long int) min((var_8), (arr_25 [i_0 + 3] [i_2 + 1] [i_11 + 1]))))));
            }
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_26 |= ((/* implicit */signed char) ((var_2) ? (((((/* implicit */int) var_15)) >> (((((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))) - (84))))) : (((((/* implicit */_Bool) -725488097)) ? (((((/* implicit */int) arr_4 [i_0])) / (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_48 [i_0] [i_14] [i_14] [(unsigned short)8]))))));
            var_27 *= (_Bool)1;
        }
        arr_54 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
        arr_55 [(unsigned char)8] [i_0] = (!((_Bool)0));
    }
    /* vectorizable */
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        var_28 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_15 - 1]))) & (((((/* implicit */_Bool) (unsigned short)7292)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_15 - 1]))) : (0U)))));
        arr_59 [i_15] = (signed char)-44;
    }
    for (long long int i_16 = 0; i_16 < 11; i_16 += 1) /* same iter space */
    {
        arr_64 [10LL] &= ((/* implicit */unsigned short) var_5);
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_19 = 1; i_19 < 7; i_19 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */long long int) 1135888110U)) : (min((((/* implicit */long long int) (unsigned char)199)), (1466982558165119562LL))))))));
                        var_30 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((arr_34 [i_19 - 1] [i_19 + 4] [i_19 + 2] [i_19 + 4]) >= (arr_34 [i_19 + 3] [i_19 + 1] [i_19 + 1] [i_19 + 2])))), (arr_46 [i_19 + 4] [i_19 + 1] [i_19 + 1] [i_19 + 4])));
                    }
                    /* vectorizable */
                    for (long long int i_20 = 1; i_20 < 9; i_20 += 3) 
                    {
                        arr_73 [(unsigned short)3] [i_17] [i_17] [i_16] = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_69 [i_16] [i_17] [i_16] [i_16])) : (var_14))) << (((((((/* implicit */int) (_Bool)1)) | (var_5))) + (1556090564)))));
                        arr_74 [i_16] [(_Bool)1] [i_16] [i_16] = ((/* implicit */signed char) var_14);
                    }
                    /* LoopNest 2 */
                    for (signed char i_21 = 0; i_21 < 11; i_21 += 1) 
                    {
                        for (unsigned int i_22 = 3; i_22 < 7; i_22 += 3) 
                        {
                            {
                                arr_79 [i_16] [i_17] [i_16] [i_18] [i_21] [i_22] [i_22] = 16256;
                                arr_80 [i_16] = (((-(((3159079185U) | (1241552244U))))) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-20196))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_23 = 0; i_23 < 11; i_23 += 1) /* same iter space */
    {
        arr_84 [(_Bool)1] [i_23] = ((/* implicit */unsigned char) max((arr_69 [(unsigned char)10] [i_23] [i_23] [i_23]), (((/* implicit */unsigned short) max((((short) arr_21 [(unsigned short)12] [i_23] [(signed char)6] [i_23])), (((/* implicit */short) arr_1 [i_23])))))));
        arr_85 [i_23] [i_23] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8978))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_8)))))));
    }
}
