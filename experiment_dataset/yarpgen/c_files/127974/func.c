/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127974
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
    var_14 = ((/* implicit */signed char) var_12);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) (!((((-2147483647 - 1)) != (var_10)))));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_3])) & (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (var_1))))));
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_2] [i_1] [i_0])) * (((/* implicit */int) arr_5 [5LL] [i_1] [i_3])))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-99))));
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((2559446341U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))))));
        }
        for (int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
        {
            arr_14 [i_0] [i_4] [i_0] = ((/* implicit */int) arr_9 [i_0] [i_4]);
            var_19 ^= ((/* implicit */short) ((((arr_13 [i_0] [i_4]) % (((/* implicit */long long int) arr_8 [(_Bool)1] [i_0] [i_4] [i_0])))) * (((((/* implicit */_Bool) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)98))) & (arr_0 [14LL]))) : (((/* implicit */long long int) ((arr_5 [i_0] [i_4] [i_0]) ? (((/* implicit */int) (unsigned short)32256)) : (((/* implicit */int) (signed char)-99)))))))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_2 [(unsigned char)14] [i_4]))));
        }
        for (int i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
        {
            arr_18 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)504)))) <= (((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (signed char)93)))))))));
            var_21 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)128)) < (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_5] [i_0] [i_5] [i_0])) & (((/* implicit */int) arr_17 [i_0] [4] [i_5]))))) ? (((/* implicit */int) arr_5 [11LL] [i_0] [i_0])) : (((((/* implicit */int) var_6)) + (((/* implicit */int) (short)31517))))))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_5] [i_5]))));
        }
        arr_19 [i_0] = ((/* implicit */signed char) ((arr_11 [i_0] [i_0]) << (((arr_11 [i_0] [i_0]) - (2374835552U)))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */int) (signed char)-59);
        arr_23 [i_6] [10U] |= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)33266))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        var_23 = ((/* implicit */long long int) arr_15 [i_7] [i_7]);
        var_24 = ((/* implicit */unsigned short) arr_6 [i_7] [i_7] [i_7] [i_7]);
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                {
                    arr_33 [i_7] [i_8] [i_8] [5LL] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_2)) > (1029026168)))) >> (((/* implicit */int) var_1))));
                    var_25 = ((/* implicit */signed char) -7122369562635557192LL);
                }
            } 
        } 
    }
    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_11 = 1; i_11 < 20; i_11 += 3) 
        {
            for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                    /* LoopSeq 1 */
                    for (signed char i_13 = 1; i_13 < 21; i_13 += 3) 
                    {
                        arr_42 [i_10] [i_11] = ((/* implicit */long long int) (((((-(((/* implicit */int) (unsigned char)255)))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [5LL] [5LL] [i_13] [i_12] [i_13] [i_13]))))))) == (((((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) != (((/* implicit */int) arr_37 [i_12]))))) >> (((((7122369562635557191LL) >> (((-7122369562635557208LL) + (7122369562635557222LL))))) - (434714939125685LL)))))));
                        var_27 -= arr_38 [i_10] [i_13 + 1];
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            for (unsigned short i_15 = 1; i_15 < 19; i_15 += 1) 
            {
                for (unsigned short i_16 = 0; i_16 < 22; i_16 += 2) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_15] [i_15] [i_14] [i_15]))) != (var_8)));
                        var_29 = ((((/* implicit */_Bool) ((arr_36 [i_10]) ^ (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (unsigned short)16128)) ? (arr_34 [i_15 + 3]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (arr_40 [i_10] [i_10] [10LL] [i_10] [i_10] [i_10]));
                    }
                } 
            } 
        } 
        var_30 &= ((/* implicit */unsigned short) (short)29718);
        /* LoopNest 2 */
        for (unsigned int i_17 = 1; i_17 < 21; i_17 += 3) 
        {
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 3) 
                    {
                        for (int i_20 = 0; i_20 < 22; i_20 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) arr_49 [i_10] [i_17] [(unsigned short)14] [i_10] [i_19] [i_17]))));
                                arr_59 [i_17] [i_18] = ((/* implicit */signed char) ((0LL) != (((/* implicit */long long int) ((arr_35 [i_18 + 1]) | (arr_35 [i_18 + 1]))))));
                                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (_Bool)1))));
                                var_33 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) | (var_4)))) ? (arr_49 [i_17] [i_17] [i_17] [i_17 - 1] [i_17 - 1] [i_18 + 1]) : (((((/* implicit */_Bool) (unsigned char)144)) ? (var_12) : (arr_40 [i_10] [i_10] [i_17] [i_18] [i_19] [i_10]))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_17])))));
                                arr_60 [i_20] [i_20] [(unsigned char)17] [i_18] [(unsigned char)17] [i_10] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)124)) || (((/* implicit */_Bool) 2325501802U)))) || (((/* implicit */_Bool) (unsigned char)3))));
                            }
                        } 
                    } 
                    var_34 ^= ((/* implicit */long long int) arr_48 [i_10] [i_17] [i_18] [(short)18]);
                    var_35 += ((/* implicit */int) -7122369562635557209LL);
                    /* LoopSeq 1 */
                    for (unsigned char i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        arr_64 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) (!(arr_51 [i_10] [i_10])))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_21]))) != (((var_12) & (arr_49 [i_10] [i_17] [i_17] [i_17 + 1] [i_18] [i_21]))))))));
                        var_36 = ((/* implicit */unsigned char) arr_57 [i_10] [i_10] [i_17 + 1] [i_17] [i_18] [i_18] [i_21]);
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_56 [i_10] [i_17] [i_18] [i_21])) ? (((((/* implicit */_Bool) arr_35 [i_18 + 1])) ? (((/* implicit */int) arr_41 [i_17] [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_17 + 1] [i_17])) : (arr_44 [i_10] [i_17 + 1] [i_18]))) : (((/* implicit */int) var_0))));
                    }
                    var_38 += ((/* implicit */long long int) ((((arr_63 [i_10] [i_18 + 1] [i_18 + 1] [i_17] [i_17 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_17 - 1]))))) ? (((((((/* implicit */_Bool) arr_56 [i_10] [i_17] [i_18] [i_18])) ? (arr_62 [i_18] [i_17] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_10] [i_10]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(2325501802U)))) && (((/* implicit */_Bool) ((arr_45 [i_17] [i_18]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))))))))))));
                }
            } 
        } 
        var_39 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_58 [i_10])) != (((/* implicit */int) arr_58 [i_10])))))) | (((((/* implicit */_Bool) ((16777152) / (((/* implicit */int) var_13))))) ? (((arr_49 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) / (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_10])))))));
    }
    for (unsigned char i_22 = 0; i_22 < 22; i_22 += 2) /* same iter space */
    {
        arr_68 [i_22] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32291))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [9U] [i_22]))) : (((((/* implicit */_Bool) arr_37 [i_22])) ? (arr_62 [i_22] [i_22] [i_22]) : (((/* implicit */unsigned long long int) var_3)))))) + (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) (unsigned short)25050)))) ? (((((/* implicit */_Bool) (unsigned short)40245)) ? (((/* implicit */int) arr_39 [i_22] [i_22] [i_22] [i_22])) : (((/* implicit */int) var_9)))) : (((((/* implicit */int) var_9)) * (((/* implicit */int) arr_53 [i_22])))))))));
        var_40 += ((/* implicit */unsigned short) arr_58 [i_22]);
        var_41 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_22]))) < (((((/* implicit */unsigned int) arr_44 [i_22] [i_22] [i_22])) & (arr_63 [i_22] [i_22] [i_22] [i_22] [i_22])))))) != (((/* implicit */int) ((((((/* implicit */_Bool) arr_36 [i_22])) ? (-1634845275316088385LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) < (((var_12) / (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-1936730315) - (((/* implicit */int) arr_65 [i_22]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_58 [i_22])) - (var_3)))) ? ((-(((/* implicit */int) var_13)))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_13))));
    }
    for (unsigned char i_23 = 0; i_23 < 22; i_23 += 2) /* same iter space */
    {
        var_43 = (+(var_10));
        var_44 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-25)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131)))));
    }
}
