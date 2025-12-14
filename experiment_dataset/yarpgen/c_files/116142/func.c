/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116142
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (+(((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((unsigned char) arr_4 [1LL] [i_1] [i_2])), (((/* implicit */unsigned char) var_2))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) var_3))))) < (2802420595U)))) : (min((arr_4 [i_2 + 3] [i_2] [i_2 + 4]), (arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 2])))));
                    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1492546710U)) ? (((/* implicit */unsigned long long int) var_4)) : ((+(var_13))))))));
                }
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    var_17 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_3]);
                    var_18 = ((short) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (1148417904979476480LL) : (((/* implicit */long long int) arr_6 [i_3] [i_3] [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) (_Bool)1);
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_4))) : (((144115188075855871LL) | (-144115188075855876LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0])))))) : (min(((~(var_13))), (((/* implicit */unsigned long long int) (~(var_5))))))));
                        /* LoopSeq 4 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_10)) ? (max((var_0), (((/* implicit */unsigned long long int) 2802420590U)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)28693)))))))));
                            var_22 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_5])) ? (arr_4 [i_0] [(_Bool)1] [i_0]) : (((/* implicit */int) (unsigned char)255))))));
                            var_23 = ((/* implicit */_Bool) (+(var_5)));
                        }
                        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) -1148417904979476490LL))));
                            var_25 = ((((_Bool) max((arr_4 [i_6] [i_4] [i_3]), (((/* implicit */int) var_10))))) ? (1148417904979476501LL) : ((+(max((var_5), (((/* implicit */long long int) arr_7 [i_0] [i_3] [i_3] [i_3])))))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)113)) ? (min((var_13), (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (arr_11 [i_3] [i_4] [19LL] [18] [i_1] [i_3])));
                        }
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) var_10);
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) arr_6 [i_1] [i_3] [i_4] [i_7]))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) (-(((unsigned int) ((((/* implicit */_Bool) 1148417904979476495LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))))));
                            var_30 *= ((/* implicit */short) max((((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_1] [i_3] [i_4] [i_8])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [(_Bool)1] [(_Bool)1] [i_8])) : (var_13))), (((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0] [i_4] [i_8]) - (((/* implicit */int) var_1)))))));
                        }
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? ((+(((((/* implicit */_Bool) arr_16 [i_0] [i_4] [(short)1] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3]))) : (arr_1 [i_1]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [i_3] [i_0] [i_3] [i_0])))))));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) 2802420590U))));
                    }
                }
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    for (short i_10 = 2; i_10 < 21; i_10 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                            {
                                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (+(5299137075394903418LL))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) 3561718651760689966LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65384))) : (2802420595U)))))) : (min((1148417904979476487LL), (((/* implicit */long long int) (unsigned short)36824))))));
                                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) -1148417904979476481LL)) : (var_13)))) ? (arr_12 [i_0] [i_10 + 3] [i_9] [i_10] [i_10]) : (((/* implicit */long long int) arr_16 [i_0] [i_1] [(unsigned short)9] [i_10] [i_11]))))) ? (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_21 [i_11] [i_10 + 1] [i_9])))), (((/* implicit */int) arr_20 [(short)12] [i_1] [i_10]))))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_0] [i_1] [i_9] [18] [i_10] [i_11]))))), (var_13)))));
                            }
                            for (long long int i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                            {
                                var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((_Bool) ((((/* implicit */_Bool) 3561718651760689940LL)) ? (((/* implicit */unsigned long long int) -3561718651760689949LL)) : (var_8)))) ? ((~(((/* implicit */int) ((unsigned char) var_12))))) : (((/* implicit */int) var_1)))))));
                                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_10] [i_12] [i_10 + 2] [i_10 + 1] [i_10 - 2] [i_10])) ? (arr_11 [i_10] [i_10 - 2] [i_10 - 2] [i_10 + 1] [i_10] [i_10]) : (arr_11 [i_10] [i_10] [i_10 + 2] [i_10 - 1] [i_10] [i_10])))) ? (((/* implicit */unsigned long long int) 0U)) : ((~(arr_11 [i_10] [22U] [i_10 - 2] [i_10 + 3] [i_10 + 2] [i_10])))));
                                var_37 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -3561718651760689937LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_0))), (arr_11 [i_10] [i_10] [i_10 + 3] [i_10 + 3] [i_10] [i_10])))) ? (((/* implicit */long long int) arr_5 [18])) : (max((1148417904979476487LL), (((/* implicit */long long int) arr_9 [i_10] [i_12] [i_9] [i_10]))))));
                                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2794605334U)) ? (1492546716U) : (var_6)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (-144115188075855894LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_10] [i_10] [i_10 + 3] [i_10 - 2] [0U]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3643493749U)) ? (2147483647) : (((/* implicit */int) var_1)))))));
                            }
                            var_39 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [16])) | ((~(((/* implicit */int) arr_17 [11] [i_1] [i_10 + 1] [i_1] [i_9] [i_0]))))));
                            var_40 = ((/* implicit */unsigned char) ((short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))), (((var_3) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                            var_41 = ((/* implicit */int) (!(var_3)));
                            /* LoopSeq 2 */
                            for (unsigned int i_13 = 0; i_13 < 24; i_13 += 4) 
                            {
                                var_42 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [(unsigned char)9] [i_9] [(_Bool)1] [i_0] [i_13] [i_0]))) : (3643493749U)))) ? (1148417904979476471LL) : (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))))));
                                var_43 -= ((((/* implicit */_Bool) ((arr_24 [i_0] [1] [i_9] [i_13] [2]) ? (((/* implicit */long long int) ((arr_31 [i_0] [i_1] [i_0] [i_10] [i_13]) ? (((/* implicit */int) arr_9 [i_13] [i_1] [i_9] [i_9])) : (((/* implicit */int) arr_21 [(short)9] [4LL] [(unsigned char)20]))))) : (((((/* implicit */_Bool) var_9)) ? (-144115188075855882LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_9] [i_1] [i_10] [i_13])) | ((~(var_9)))))) : (((((/* implicit */_Bool) ((var_2) ? (arr_16 [i_13] [i_10] [i_0] [i_0] [i_0]) : (((/* implicit */int) var_3))))) ? ((+(var_5))) : (((/* implicit */long long int) (~(var_6)))))));
                                var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_10] [i_9] [i_10])) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [21LL]))))))))));
                            }
                            for (unsigned char i_14 = 2; i_14 < 22; i_14 += 4) 
                            {
                                var_45 = ((/* implicit */short) (~(((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned char)114))))))));
                                var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_14 - 2] [(unsigned char)11] [i_9] [i_0] [i_0])))))) : ((((_Bool)1) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54683))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) arr_33 [i_0] [i_1] [i_9] [i_10] [(unsigned char)14])) : (((/* implicit */int) arr_9 [i_10] [i_0] [(unsigned char)16] [i_0]))))) ? (((/* implicit */int) (unsigned char)116)) : (var_9))))));
                                var_47 = var_5;
                                var_48 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_34 [i_10 + 1] [i_10] [i_0] [i_10 - 2] [i_14 - 1] [i_0])), (arr_14 [i_0] [i_1] [i_10 + 1] [i_10] [i_0] [(short)22] [i_10])))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0] [i_1] [13ULL] [(signed char)11] [i_14])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20499)))))) ? (arr_12 [i_14 - 1] [i_14] [i_14 + 1] [i_14] [i_14 - 1]) : (144115188075855878LL)))));
                                var_49 &= (!(((/* implicit */_Bool) var_8)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_15 = 1; i_15 < 17; i_15 += 2) 
    {
        var_50 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)511)))))) <= (((((/* implicit */_Bool) arr_32 [(_Bool)1] [(unsigned short)11] [i_15 - 1] [i_15] [i_15] [i_15 - 1] [i_15])) ? (((((/* implicit */_Bool) var_11)) ? (arr_0 [i_15] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_15] [(short)4]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_15] [i_15] [1LL] [(_Bool)1] [i_15])))))));
        var_51 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)44)), (var_0)))) ? (3643493749U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) arr_6 [i_15] [i_15] [i_15 - 1] [i_15 + 1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)-511))))) : (((((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19)))))) ? (min((((/* implicit */long long int) var_2)), (-144115188075855878LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -144115188075855882LL)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) (unsigned short)65535)))))))));
        var_52 ^= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) -2237759082960510928LL)) ? (((/* implicit */int) arr_13 [i_15 - 1])) : (((/* implicit */int) (unsigned char)253)))));
    }
    var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) ((-3561718651760689940LL) + (var_5)))) ? (((/* implicit */long long int) var_11)) : (((var_3) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))) : (-144115188075855867LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6))))));
    /* LoopSeq 1 */
    for (unsigned char i_16 = 0; i_16 < 21; i_16 += 2) 
    {
        var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)25), (((/* implicit */unsigned char) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18081))) : (arr_1 [i_16])))) ? (min((((/* implicit */unsigned long long int) arr_16 [i_16] [i_16] [i_16] [i_16] [i_16])), (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)212))) : (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_7 [i_16] [i_16] [(_Bool)1] [(unsigned short)10])) : (((/* implicit */int) arr_9 [i_16] [i_16] [i_16] [i_16]))))) : (min((-144115188075855882LL), (((/* implicit */long long int) arr_33 [i_16] [i_16] [i_16] [i_16] [i_16])))))))));
        var_55 = ((/* implicit */short) ((unsigned char) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) -144115188075855886LL)) : (2912949045888044158ULL)))));
    }
}
