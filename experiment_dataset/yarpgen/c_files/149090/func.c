/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149090
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) var_18))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7602))) / (var_3)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_21 ^= var_19;
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 4; i_4 < 11; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(3844042184U))))));
                            var_23 = ((/* implicit */unsigned int) ((unsigned char) var_16));
                            arr_16 [i_4 + 1] [i_2] [i_2] [i_3] [i_4 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4 - 4] [i_4]))))) ? (((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33))) : (134217727U))) : ((~(4294967295U)))));
                        }
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (9523946162743176689ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))));
                        var_25 = ((/* implicit */unsigned int) arr_7 [i_2]);
                        arr_17 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))) < (var_8)));
                    }
                    for (short i_5 = 4; i_5 < 9; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 1; i_6 < 11; i_6 += 3) 
                        {
                            var_26 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (short)448)))) && ((!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_5] [i_5 + 3] [i_6 - 1] [i_5]))))));
                            arr_24 [i_0] [i_1] [i_0] [i_0] [i_5] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_5))));
                            arr_25 [i_0] [i_1] [i_2] [i_2] [i_5 - 4] [i_6 + 1] = ((/* implicit */unsigned char) ((var_17) < (var_14)));
                        }
                        var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 3943294014U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (13969914607990323107ULL)))));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 2) 
                    {
                        arr_29 [i_0] [i_1] [i_2] [i_7 - 2] [i_1] [i_0] |= ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_7 + 1] [i_7 + 1] [i_0]);
                        arr_30 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (-((-(200215574U)))));
                    }
                    /* LoopNest 2 */
                    for (short i_8 = 3; i_8 < 9; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 11; i_9 += 2) 
                        {
                            {
                                arr_36 [i_9] [i_1] [i_2] = arr_14 [i_8 - 2] [i_8 - 2] [i_9 + 1] [i_2] [i_9 + 1] [i_1] [i_8];
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((var_15) / ((+(var_15)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 1; i_10 < 10; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 1; i_11 < 9; i_11 += 1) 
                        {
                            {
                                arr_43 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((((/* implicit */int) var_11)) << (((arr_10 [i_0] [i_0]) - (1152315435U))))) : (((/* implicit */int) arr_13 [i_2] [i_10 - 1] [i_10 - 1] [i_10]))));
                                arr_44 [i_0] [i_1] [i_2] [i_2] [i_11] [i_11 - 1] [i_11 + 3] = (i_2 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-30708)) + (2147483647))) << (((arr_40 [i_2] [i_1] [i_2] [i_11 + 2] [i_10 - 1]) - (43762483U)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-30708)) + (2147483647))) << (((((arr_40 [i_2] [i_1] [i_2] [i_11 + 2] [i_10 - 1]) - (43762483U))) - (4133221873U))))));
                            }
                        } 
                    } 
                    var_29 = (+(((((/* implicit */_Bool) var_4)) ? (var_17) : (var_17))));
                }
            } 
        } 
    }
    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
    {
        arr_48 [i_12] |= 18446744073709551611ULL;
        /* LoopSeq 1 */
        for (unsigned int i_13 = 2; i_13 < 16; i_13 += 1) 
        {
            arr_51 [i_12] [i_13] [i_13] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_47 [i_13] [i_13 + 2]))) ? ((+(((/* implicit */int) arr_47 [i_13 + 1] [i_13 + 1])))) : (((((/* implicit */_Bool) (short)-3050)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_47 [i_13] [i_13 + 1]))))));
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) 
            {
                for (short i_15 = 0; i_15 < 18; i_15 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned int) var_12);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_16 = 0; i_16 < 18; i_16 += 4) 
                        {
                            arr_63 [i_12] [i_15] [i_14] = ((/* implicit */short) (~(1366950628U)));
                            arr_64 [i_16] [i_15] [i_15] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (arr_60 [i_12] [i_13] [i_14] [i_15] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_12] [i_13 + 1] [i_16]))))) < (((/* implicit */unsigned long long int) var_19))));
                        }
                        for (short i_17 = 0; i_17 < 18; i_17 += 4) 
                        {
                            var_31 *= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((2760832155U) - (var_19))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)149)) ? (var_17) : (var_14)))))))));
                            arr_67 [i_12] |= ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - ((-(arr_66 [i_13] [i_13 + 1] [i_13] [i_13] [i_13] [i_13 + 2] [i_13 - 2]))));
                        }
                        for (short i_18 = 2; i_18 < 14; i_18 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned int) ((min(((+(((/* implicit */int) var_16)))), ((+(((/* implicit */int) (unsigned char)42)))))) > (((/* implicit */int) (unsigned char)213))));
                            arr_72 [i_18] [i_18] [i_15] [i_12] [i_18] [i_12] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) var_0))))))) ^ ((~(((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201))))))));
                        }
                        for (unsigned char i_19 = 0; i_19 < 18; i_19 += 3) 
                        {
                            var_33 = ((/* implicit */short) arr_65 [i_12] [i_19] [i_14] [i_15] [i_19]);
                            arr_75 [i_12] [i_12] [i_14] [i_14] [i_15] [i_19] = ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) & (arr_59 [i_12] [i_13] [i_12] [i_14] [i_15] [i_15] [i_19]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) << ((((~(((/* implicit */int) arr_58 [i_12] [i_13 + 1] [i_13 + 1] [i_15] [i_19])))) + (219)))));
                            arr_76 [i_19] [i_15] [i_14] [i_13 - 1] [i_12] = ((/* implicit */short) (~((~(((/* implicit */int) min((var_16), ((short)-2389))))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_20 = 3; i_20 < 15; i_20 += 1) 
                        {
                            arr_80 [i_20] [i_13] [i_14] [i_14] [i_15] [i_15] [i_20] = ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_18)))))) : (((1222370610U) << (((((/* implicit */int) var_4)) - (2673))))));
                            var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_58 [i_13 - 1] [i_13 - 2] [i_13 - 2] [i_13 + 2] [i_13]))));
                        }
                        arr_81 [i_12] [i_13] [i_14] [i_15] [i_15] = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))))), (arr_69 [i_12] [i_13 + 2] [i_15] [i_13 + 2] [i_14] [i_13 + 2] [i_12])))));
                    }
                } 
            } 
            var_35 ^= ((/* implicit */short) arr_61 [i_12] [i_12] [i_12] [i_12] [i_13]);
        }
        /* LoopNest 2 */
        for (unsigned int i_21 = 0; i_21 < 18; i_21 += 2) 
        {
            for (unsigned int i_22 = 3; i_22 < 17; i_22 += 4) 
            {
                {
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) arr_52 [i_12] [i_22] [i_22])), (var_14)))))));
                    arr_88 [i_12] [i_21] [i_22 - 3] [i_22 - 1] = ((/* implicit */unsigned long long int) ((max((arr_65 [i_12] [i_22 - 3] [i_21] [i_22] [i_12]), (arr_65 [i_12] [i_22 - 3] [i_22] [i_12] [i_22 - 3]))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_23 = 2; i_23 < 15; i_23 += 1) 
    {
        for (unsigned long long int i_24 = 2; i_24 < 13; i_24 += 1) 
        {
            {
                arr_95 [i_23 - 2] [i_23 - 2] [i_24 + 2] = ((/* implicit */unsigned int) var_1);
                /* LoopNest 2 */
                for (unsigned long long int i_25 = 0; i_25 < 16; i_25 += 4) 
                {
                    for (unsigned long long int i_26 = 0; i_26 < 16; i_26 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_27 = 0; i_27 < 16; i_27 += 2) 
                            {
                                var_37 = ((/* implicit */unsigned int) ((15230825090467405264ULL) != (((/* implicit */unsigned long long int) 3184077800U))));
                                arr_102 [i_23] [i_27] [i_24] [i_27] [i_27] [i_23 + 1] = ((/* implicit */short) arr_93 [i_23 + 1] [i_23 + 1] [i_27]);
                            }
                            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) min((2164362020U), (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_100 [i_23] [i_24] [i_23] [i_25] [i_26]))) : (var_15))), (((/* implicit */unsigned int) var_6)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
