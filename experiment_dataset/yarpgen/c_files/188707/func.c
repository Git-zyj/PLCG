/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188707
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
    var_12 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((var_10) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_1 + 2]))))) : (((((_Bool) 2187350563U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10)))) : (((arr_5 [i_0] [i_1] [i_0]) >> (((var_2) - (932959008U)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) min(((unsigned short)13), (((/* implicit */unsigned short) arr_12 [i_3] [i_3] [i_2] [i_1] [i_0]))))))));
                                arr_13 [i_1] [i_1] [i_2] [i_3 - 1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((((var_9) | (((/* implicit */long long int) ((/* implicit */int) var_11))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((unsigned char) arr_10 [i_1 + 2] [i_1])))));
                                var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned int) arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 1]))))) ? ((~(((((/* implicit */int) var_7)) >> (((((/* implicit */int) (short)20426)) - (20418))))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)65532)) ? (var_2) : (var_2)))))));
                                arr_14 [i_0] [i_1] [i_1] [15] [(short)0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            arr_21 [(signed char)16] [i_1] [(signed char)16] [(unsigned char)4] [i_6] = (~(((/* implicit */int) (unsigned short)18)));
                            arr_22 [i_6] [i_1] [i_2] [i_6] [(unsigned short)5] [(unsigned char)9] [i_1] = ((/* implicit */int) ((short) (unsigned short)18));
                        }
                        for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_25 [i_1] [(short)4] [(unsigned char)7] [i_5] [i_7])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))) + (2147483647))) >> (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1]))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)28491)) >> (((-744923420) + (744923443)))))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))) : (16059265173226510270ULL)))));
                            var_18 ^= ((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_18 [i_0] [i_0] [i_2] [i_2] [i_5] [i_7])))) + (2147483647))) >> (((/* implicit */int) arr_15 [i_2] [(short)5] [i_2] [i_0] [(short)5] [i_0])))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)72)) >> (((3577384445254725838LL) - (3577384445254725820LL)))));
                            arr_26 [i_0] [3U] [(unsigned short)2] [i_0] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((_Bool) (signed char)15)))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_8 = 4; i_8 < 14; i_8 += 4) 
                        {
                            arr_29 [i_0] [i_0] [i_1] [i_1 + 2] [i_2] [i_5] [i_1] = ((/* implicit */unsigned char) ((short) arr_10 [i_8 - 3] [i_1 - 1]));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_24 [i_0] [(_Bool)1] [(_Bool)1] [i_8 + 2] [i_8] [i_8 + 2] [i_1 + 1]))));
                            var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65517)) ? (-1053812888) : (((/* implicit */int) (signed char)29))));
                        }
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */int) ((arr_12 [5ULL] [5ULL] [(short)1] [i_5] [i_9]) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4257560080U))))) >> (((/* implicit */int) var_6))))) : ((~((+(arr_3 [i_2])))))));
                            var_24 = ((/* implicit */unsigned short) var_11);
                            arr_32 [i_9] [i_5] [i_1] [i_1 + 2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_24 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2] [i_1] [i_1 + 1]))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_36 [i_0] [i_1] [i_1] [i_5] [i_10] = ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
                            arr_37 [i_1] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((var_7) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_10] [i_10] [i_10] [i_10]))) : ((~((~(var_9)))))));
                            arr_38 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)57344), (((/* implicit */unsigned short) (_Bool)1)))))) / ((-(var_3)))))) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 + 2]))) : (arr_6 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            arr_39 [i_2] [(_Bool)1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (short)-17309);
                        }
                        for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            arr_44 [i_0] [i_0] [i_0] [i_0] [2U] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6618847017401630594ULL)) ? (((((/* implicit */_Bool) (short)1619)) ? (((((/* implicit */_Bool) var_2)) ? (4294967295ULL) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (((((((/* implicit */_Bool) -5977557981150198088LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0] [(unsigned char)2]))) : (arr_31 [i_0] [2ULL] [i_1] [i_11] [i_11]))) - (201LL))))))));
                            arr_45 [i_11] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) (short)-17331)) : (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [(unsigned char)11]))))) >> (((min((((/* implicit */int) arr_24 [i_2] [i_2] [1ULL] [i_2] [14ULL] [i_2] [i_2])), (arr_9 [i_11]))) - (193)))));
                        }
                        arr_46 [(_Bool)1] [i_1] = (~(((/* implicit */int) arr_42 [i_5] [i_1] [i_1] [i_1] [i_0])));
                    }
                    /* vectorizable */
                    for (short i_12 = 2; i_12 < 17; i_12 += 1) 
                    {
                        arr_50 [i_1] [i_1] [(signed char)1] [17] [i_1] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_34 [i_2] [4] [i_0])) ? (1536155796U) : (1390303588U))));
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            var_25 -= ((var_6) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((2387478900483041346ULL) >> (((var_2) - (932958976U))))));
                            arr_53 [i_1] [i_1] [(short)0] [(short)0] [(short)0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_20 [i_1] [i_1 + 1] [i_1] [i_1 - 1] [i_1]))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) var_11)) >> (((((((arr_28 [i_2]) + (9223372036854775807LL))) >> (((2868093561065525537ULL) - (2868093561065525509ULL))))) - (11040903560LL))))))));
                        }
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            var_27 = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) arr_7 [i_1])) + (19635)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) var_10)) >> (((((((/* implicit */int) arr_7 [i_1])) + (19635))) - (36874))))));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) arr_48 [i_1 + 2] [i_1 + 2])) >> (((-993271090) + (993271091))))))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_29 = ((/* implicit */int) arr_10 [i_0] [i_1]);
                            arr_62 [i_0] [0ULL] [i_15] &= ((/* implicit */short) ((((/* implicit */_Bool) -1053812888)) ? (252) : (((/* implicit */int) (_Bool)1))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_28 [i_0])) ? (((/* implicit */int) arr_43 [i_15] [i_12 - 2] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_8)))) >> (((/* implicit */int) var_11)))))));
                        }
                        var_31 = ((/* implicit */short) (+((+(arr_56 [i_12] [(signed char)14] [i_1 - 1] [i_1] [i_0] [i_0])))));
                        var_32 ^= ((/* implicit */unsigned char) arr_35 [i_12] [i_2] [15] [i_1 + 1] [i_0] [(_Bool)1]);
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_65 [i_0] [i_1 + 2] [i_1] [i_1 + 2] = ((/* implicit */unsigned long long int) var_4);
                        arr_66 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((_Bool) var_10))) >> (((((/* implicit */int) arr_40 [i_0])) + (10670))))) >> (((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1]))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_33 = ((/* implicit */unsigned int) ((long long int) (short)-28478));
        var_34 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_17] [i_17])) ? (arr_67 [i_17] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [(short)8] [i_17])))));
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))) ? (((var_6) ? (arr_67 [15U] [15U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_17] [i_17]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [(_Bool)1])))));
    }
    var_36 = ((/* implicit */unsigned long long int) var_9);
    var_37 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3905130141U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3872641265U)));
}
