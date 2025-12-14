/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157883
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
    var_13 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) ((long long int) arr_3 [i_1]));
                        var_14 = ((/* implicit */signed char) ((((arr_8 [i_0] [i_0] [i_0] [i_1]) + (2147483647))) << (((((arr_8 [(_Bool)1] [19LL] [i_2] [i_2]) + (1884128669))) - (13)))));
                    }
                    for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_15 += ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_4] [i_2] [i_1] [i_0])) == (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [8LL]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_4] [i_4] [i_2] [(short)8] [(short)8])) | (((/* implicit */int) (_Bool)1))));
                            var_17 = ((((/* implicit */_Bool) arr_12 [i_5] [6LL] [i_2] [i_1] [8])) && (((/* implicit */_Bool) arr_1 [i_4])));
                        }
                        for (unsigned int i_6 = 2; i_6 < 23; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_12 [22] [i_6 + 1] [i_6] [i_6 - 1] [i_6])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_12 [i_2] [i_6 - 2] [i_6] [i_6 - 2] [i_6 - 2])))))));
                            var_19 = ((/* implicit */int) min((var_19), (arr_4 [16LL])));
                        }
                    }
                    arr_19 [11U] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(unsigned char)7] [i_2])) || (((/* implicit */_Bool) var_5))));
                    arr_20 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned char)3)))) : (arr_4 [i_1])));
                    var_20 *= ((/* implicit */_Bool) var_1);
                    /* LoopSeq 3 */
                    for (short i_7 = 1; i_7 < 22; i_7 += 2) 
                    {
                        arr_23 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [(_Bool)1] = (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(_Bool)1] [i_0] [(_Bool)1] [8U] [8U]))) : (arr_22 [i_0] [i_2] [1] [1] [i_0] [2]))));
                        arr_24 [(unsigned char)9] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((short) 647706692U));
                        var_21 = ((/* implicit */unsigned int) var_9);
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            arr_29 [8LL] [i_1] [i_1] [i_2] [i_1] [i_1] [10U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((-9223372036854775807LL - 1LL))))) || (((/* implicit */_Bool) (unsigned char)7)));
                            var_22 -= ((/* implicit */unsigned char) ((short) arr_18 [i_1] [(short)2] [i_2] [i_7 + 1] [(short)2]));
                            var_23 = ((/* implicit */unsigned int) arr_8 [i_2] [i_1] [i_7] [i_7]);
                        }
                        var_24 = ((/* implicit */_Bool) min((var_24), ((!(((/* implicit */_Bool) arr_18 [i_1] [9U] [i_7 + 2] [i_7 + 2] [4U]))))));
                    }
                    for (short i_9 = 3; i_9 < 20; i_9 += 4) /* same iter space */
                    {
                        var_25 -= ((/* implicit */short) ((arr_14 [i_9 - 3] [i_9 - 2] [i_9 - 3]) || (var_7)));
                        var_26 = ((/* implicit */_Bool) ((((1956822790U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158))))) >> (((arr_6 [i_0] [i_2] [i_2] [i_0]) - (4234519263U)))));
                        var_27 += ((/* implicit */signed char) ((int) ((unsigned char) var_11)));
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9]))) & (arr_22 [i_9 - 1] [i_9] [i_9 + 1] [i_9 + 4] [i_9 + 3] [18LL]))))));
                        arr_32 [i_2] [20] [10LL] [i_2] [i_2] [i_2] |= ((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_0] [i_0] [i_2] [i_9] [i_9 - 2] [i_0] [i_2]))));
                    }
                    for (short i_10 = 3; i_10 < 20; i_10 += 4) /* same iter space */
                    {
                        arr_35 [i_0] [(_Bool)1] [i_2] [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_10 + 4] [i_10 - 3] [i_10 - 1] [i_10 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_31 [i_10 - 1] [i_10 + 4] [i_10] [i_10 - 3])));
                        var_29 = (unsigned char)249;
                        arr_36 [(unsigned short)8] [i_1] [22U] [i_1] = ((/* implicit */_Bool) ((unsigned char) arr_13 [i_0] [i_0] [i_1] [i_2] [i_2]));
                        var_30 = (signed char)-117;
                    }
                }
                /* LoopNest 3 */
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    for (long long int i_12 = 3; i_12 < 23; i_12 += 4) 
                    {
                        for (short i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            {
                                arr_45 [i_1] [i_1] [(_Bool)1] [(unsigned char)15] = ((/* implicit */_Bool) ((((unsigned int) (+(((/* implicit */int) var_12))))) << (((/* implicit */int) ((short) arr_10 [i_0] [i_1] [i_11] [i_12] [i_13])))));
                                arr_46 [i_12 - 1] [6] [i_1] [i_12 - 1] [9U] = var_12;
                                var_31 = ((/* implicit */int) var_1);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_14 = 1; i_14 < 21; i_14 += 2) 
    {
        for (int i_15 = 3; i_15 < 19; i_15 += 3) 
        {
            for (unsigned short i_16 = 2; i_16 < 21; i_16 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_43 [i_15 - 3] [i_15] [(short)4] [i_16 + 1])) ? (arr_39 [i_15 + 2]) : (((/* implicit */int) ((short) 1956822783U))))));
                        var_33 = ((((/* implicit */_Bool) ((arr_5 [i_14 + 1] [i_14 + 1]) - (arr_5 [i_14 - 1] [i_14 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_37 [i_16 + 1] [i_17] [i_17])))) : (max((arr_37 [i_16 - 2] [13LL] [i_16]), (((/* implicit */long long int) arr_5 [i_14 + 1] [i_14 + 1])))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_18 [i_14] [i_15 - 3] [i_14] [i_16 - 1] [i_15 - 3]) * (arr_18 [i_15] [(_Bool)1] [i_15] [i_16 - 1] [i_15])))) || (((((((/* implicit */int) var_7)) & (var_4))) < (arr_4 [7U])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            arr_61 [(unsigned char)17] [i_15] [(unsigned char)17] [11LL] [i_15 - 1] [i_15] [(signed char)1] = ((/* implicit */unsigned short) ((arr_25 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 2]) | (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_16 - 1])))));
                            var_35 = ((/* implicit */unsigned int) ((var_4) < (arr_27 [i_19 - 1] [i_19] [i_19 - 1] [i_19] [i_19] [i_19] [i_19])));
                            var_36 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_22 [i_19 - 1] [i_19 - 1] [i_19 - 1] [(unsigned char)6] [4U] [i_14 - 1]));
                            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((long long int) arr_30 [i_14 + 1])))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (short i_20 = 0; i_20 < 22; i_20 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) -3447610596256210965LL)) ? (5440044241209217019LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))));
                        var_39 = ((/* implicit */unsigned int) arr_41 [i_16] [i_14] [i_15 - 2] [i_14] [i_16]);
                        var_40 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_62 [i_20] [21] [21])) ? (((/* implicit */int) var_9)) : (var_4)))) : ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [19U] [16LL] [i_16 + 1] [16LL] [16LL]))) : (var_8))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28)))));
                        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_16])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_14] [i_16 - 1] [i_20])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)23279))))) : (arr_31 [i_20] [i_16 + 1] [(short)3] [i_14 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_25 [i_16 - 1] [i_15] [i_16] [23U])) ? (max((2670742362U), (((/* implicit */unsigned int) (signed char)82)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [(unsigned char)11] [i_14 - 1] [i_16 - 2])))))));
                    }
                    for (int i_21 = 0; i_21 < 22; i_21 += 2) 
                    {
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((arr_38 [i_14] [i_15 - 2] [i_15] [i_15]) != (((/* implicit */long long int) ((/* implicit */int) var_12)))))), (var_6)))) ? (((/* implicit */long long int) min((((((/* implicit */int) var_6)) << (((((/* implicit */int) (signed char)120)) - (112))))), (((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_11))))))) : (((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_14])) & (((/* implicit */int) (unsigned char)231))))) & (((long long int) var_6))))));
                        var_43 ^= (((+(min((1861152375U), (((/* implicit */unsigned int) var_11)))))) | (((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [i_15] [i_15] [i_21]))))));
                        var_44 &= ((/* implicit */int) ((((/* implicit */long long int) ((int) arr_43 [i_14 - 1] [i_15 - 2] [i_16 - 1] [i_16 + 1]))) / ((~(9223372036854775803LL)))));
                        var_45 = ((/* implicit */signed char) ((((min((((/* implicit */unsigned int) var_2)), (arr_3 [i_21]))) != (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (225139928U))))) ? (((/* implicit */int) (signed char)0)) : ((+(((/* implicit */int) (short)-1))))));
                        var_46 *= ((/* implicit */unsigned char) arr_22 [i_14] [i_14 - 1] [i_14 - 1] [(short)8] [i_14 - 1] [i_14]);
                    }
                }
            } 
        } 
    } 
}
