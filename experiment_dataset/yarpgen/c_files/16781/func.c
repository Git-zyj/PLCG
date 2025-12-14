/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16781
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
    var_10 = var_6;
    var_11 = ((/* implicit */signed char) var_3);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) arr_1 [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_13 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (2987423240U))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_0] [i_1])))))));
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) -6830000949288924480LL))));
            var_15 = ((/* implicit */short) arr_1 [i_1]);
        }
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_16 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-30375)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))))))))));
            var_17 ^= ((/* implicit */unsigned long long int) arr_4 [i_0] [i_2]);
            var_18 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (+(arr_5 [5LL])))) ? (arr_0 [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))));
            var_19 += ((arr_0 [i_0] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_0] [i_2]), (((/* implicit */short) (signed char)-86)))))));
            arr_9 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_7 [i_2]);
        }
        arr_10 [i_0] |= ((/* implicit */unsigned int) ((arr_8 [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775793LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-92)))))));
        /* LoopSeq 2 */
        for (int i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_4 [i_0] [i_3 - 1])))))));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((((/* implicit */int) (signed char)116)), (arr_12 [4U] [6])))) ? ((~(((/* implicit */int) arr_4 [i_0] [4U])))) : (((((/* implicit */_Bool) arr_3 [i_4] [i_4])) ? (((/* implicit */int) (short)30394)) : (((/* implicit */int) var_6))))))));
                var_22 |= ((/* implicit */short) (signed char)-110);
            }
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_19 [9ULL] [0] [(unsigned char)3] = ((/* implicit */short) arr_15 [i_0] [i_0] [i_0] [i_0]);
                /* LoopSeq 1 */
                for (unsigned int i_6 = 1; i_6 < 8; i_6 += 1) 
                {
                    var_23 *= ((/* implicit */unsigned long long int) (+(6830000949288924479LL)));
                    arr_23 [i_0] [i_3] [i_5] |= ((/* implicit */long long int) ((((/* implicit */int) arr_15 [6ULL] [i_3 - 1] [i_6 - 1] [i_3 - 1])) != (((/* implicit */int) arr_17 [i_0] [i_3 + 1] [i_6 - 1]))));
                }
            }
        }
        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            arr_26 [i_7] [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) arr_2 [i_0] [i_7]))))) ? ((~(((/* implicit */int) (signed char)116)))) : (((((/* implicit */int) var_0)) >> (((((/* implicit */int) arr_22 [i_7] [7ULL] [i_7] [0LL] [i_0])) - (41)))))))), (min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0])) : (arr_8 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [9LL] [4])) * (((/* implicit */int) arr_16 [i_0] [(short)5] [(short)5])))))))));
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((arr_7 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (18446744073709551615ULL)))) || (((/* implicit */_Bool) arr_22 [i_7] [i_7] [i_7] [i_0] [(signed char)0])))))))))));
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (!(var_2))))));
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-16)))))))), ((unsigned char)8))))));
            var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [(short)9])) ? (arr_12 [i_7] [i_0]) : (((/* implicit */int) (signed char)116))));
        }
    }
    for (int i_8 = 0; i_8 < 23; i_8 += 2) 
    {
        var_28 |= ((/* implicit */unsigned char) var_4);
        var_29 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -586389798)) ? (arr_27 [i_8] [(short)21]) : (arr_27 [i_8] [i_8]))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        var_30 = ((/* implicit */long long int) max((var_30), (((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_3)), (var_8))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_28 [i_9]))))))) ? (((/* implicit */long long int) max((arr_30 [i_9] [i_9]), (arr_31 [i_9])))) : (((((((/* implicit */_Bool) arr_27 [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9]))) : (6830000949288924488LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) : (arr_30 [(short)6] [i_9]))))))))));
        /* LoopSeq 4 */
        for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                arr_37 [i_9] [i_9] [i_9] = ((/* implicit */int) var_0);
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) min((arr_30 [i_11] [i_9]), (((/* implicit */unsigned int) (signed char)37)))))) ? (max((((/* implicit */long long int) max((arr_29 [i_9] [i_10]), (((/* implicit */int) arr_32 [i_10] [i_10]))))), (((((/* implicit */_Bool) arr_35 [4LL] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_27 [i_11] [i_11]))))) : (((/* implicit */long long int) var_8))));
            }
            for (short i_12 = 1; i_12 < 9; i_12 += 4) 
            {
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) min((12ULL), (((/* implicit */unsigned long long int) 9223372036854775792LL))))))))))));
                /* LoopSeq 3 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_33 ^= ((/* implicit */long long int) (((-(((/* implicit */int) arr_39 [i_12 + 1] [i_9])))) >> (((((((/* implicit */_Bool) arr_29 [i_12 - 1] [i_12 - 1])) ? (arr_29 [i_12 - 1] [i_12 + 2]) : (arr_29 [i_12 + 1] [i_12 + 1]))) + (774706364)))));
                    var_34 -= ((/* implicit */int) (signed char)-119);
                    arr_43 [i_13] [i_12] [i_10] [i_13] = ((/* implicit */unsigned int) arr_34 [i_13] [1U] [0U]);
                }
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    arr_46 [i_9] [i_10] [(_Bool)1] [i_14 - 1] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) var_7)) % (arr_36 [(short)5] [i_12] [i_10] [i_9]))), (((/* implicit */int) arr_39 [i_9] [i_10]))))) ? ((~(arr_41 [i_9] [i_10] [i_9] [i_9]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_12 + 1] [i_14 - 1] [3U])) ? (arr_44 [i_12 + 2] [i_14 - 1] [i_14]) : (2734979294U))))));
                    arr_47 [i_9] [i_9] [i_10] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_14 - 1] [i_12 + 2])) ? ((-(((/* implicit */int) min((var_7), (var_1)))))) : (((/* implicit */int) arr_39 [i_12 - 1] [i_14]))));
                }
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned long long int) (-(min((((arr_27 [i_10] [(unsigned short)16]) / (arr_27 [(signed char)21] [13LL]))), (arr_27 [i_12 + 1] [i_10])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 2; i_16 < 10; i_16 += 4) 
                    {
                        arr_52 [(short)6] [i_15] = ((/* implicit */long long int) ((16130291036082319599ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_16] [i_15 - 1] [i_12 + 2] [i_10] [i_9])))));
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_15] [3LL])) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [16U] [i_10])) ? (((/* implicit */int) (unsigned short)21817)) : (var_4)))), (4397778075648ULL))))));
                    }
                }
                var_37 = min((((/* implicit */int) ((arr_51 [i_12 - 1] [5U] [i_12] [i_12] [i_12 + 1] [i_12]) != (arr_51 [i_12 + 2] [i_12] [i_12] [(short)9] [i_12] [(signed char)5])))), (max((((((/* implicit */_Bool) -3642475031039585061LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))), (((int) (signed char)-110)))));
                /* LoopSeq 1 */
                for (int i_17 = 0; i_17 < 11; i_17 += 1) 
                {
                    arr_55 [i_17] [i_17] [i_12] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)85)) && (((/* implicit */_Bool) min((arr_39 [i_9] [i_10]), (((/* implicit */short) var_0)))))));
                    var_38 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_32 [i_10] [i_17])), (arr_40 [i_9] [i_9] [i_10] [i_10] [i_9] [i_17])))) > (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_7)))))))), ((-(((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_1))))))));
                    var_39 += ((/* implicit */unsigned char) arr_44 [i_10] [i_10] [i_9]);
                    var_40 += ((/* implicit */signed char) arr_54 [i_9] [i_10] [10U] [i_17]);
                }
                var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) min(((-(-41264002))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_54 [i_12 - 1] [i_12] [i_10] [i_9])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17216))))) > (((arr_30 [i_10] [i_10]) >> (((/* implicit */int) arr_42 [i_9] [i_9] [i_9] [i_12] [i_12] [i_12]))))))))))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 4) 
            {
                arr_59 [i_9] [i_10] [i_18] [i_18] = (~(((max((-6830000949288924480LL), (((/* implicit */long long int) 586389798)))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 766429479853071311ULL)))))))));
                var_42 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_58 [i_9] [i_9] [i_9])) < (((/* implicit */int) var_6)))))));
                var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) (((+((+(((/* implicit */int) var_9)))))) + (((/* implicit */int) arr_39 [i_9] [i_10])))))));
                var_44 -= ((/* implicit */_Bool) arr_27 [i_9] [12U]);
                var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) arr_56 [i_9] [i_10] [i_10]))));
            }
            for (int i_19 = 3; i_19 < 8; i_19 += 2) 
            {
                arr_64 [i_9] = ((((/* implicit */_Bool) arr_48 [4U] [i_10] [i_10] [i_10] [i_10])) ? (min((((var_2) ? (arr_38 [i_9] [i_9] [i_9]) : (((/* implicit */long long int) arr_30 [i_9] [i_9])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_9] [i_10] [i_10])) ? (arr_44 [i_9] [i_10] [(short)2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))));
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 11; i_20 += 2) 
                {
                    for (short i_21 = 1; i_21 < 8; i_21 += 4) 
                    {
                        {
                            var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */short) arr_32 [i_19] [i_9])))))) >= ((~(9223372036854775792LL)))))), ((+(max((((/* implicit */unsigned long long int) 9223372036854775792LL)), (arr_33 [i_21 - 1]))))))))));
                            var_47 = ((/* implicit */unsigned int) arr_67 [i_9] [i_9] [(signed char)8] [i_9]);
                        }
                    } 
                } 
            }
            var_48 ^= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) != (arr_33 [i_10]))) ? (max((arr_33 [i_9]), (((/* implicit */unsigned long long int) (unsigned char)224)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_63 [i_10] [i_10] [i_9])), (9223372036854775766LL))))));
        }
        for (long long int i_22 = 0; i_22 < 11; i_22 += 2) 
        {
            var_49 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_28 [i_22])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-96)), ((unsigned char)0))))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
            arr_73 [4LL] [i_9] [i_22] = ((/* implicit */int) arr_44 [i_22] [i_22] [i_9]);
            var_50 = ((/* implicit */signed char) max((((/* implicit */long long int) min((arr_28 [i_9]), (arr_54 [(signed char)9] [i_22] [i_22] [i_9])))), (max((((/* implicit */long long int) 0U)), (2299461384535874378LL)))));
        }
        for (long long int i_23 = 0; i_23 < 11; i_23 += 2) 
        {
            var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) (((((~(((/* implicit */int) (signed char)(-127 - 1))))) >> ((((~(((/* implicit */int) var_5)))) + (60))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_23] [i_23]))) == (arr_77 [i_9] [i_23])))))))));
            var_52 |= ((/* implicit */short) arr_28 [i_23]);
        }
        for (unsigned long long int i_24 = 2; i_24 < 8; i_24 += 2) 
        {
            arr_80 [i_9] [i_9] [i_9] = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned char) arr_58 [i_24] [i_24 + 2] [i_9]))), (((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_41 [i_24] [i_9] [i_9] [i_9])))));
            arr_81 [i_9] = ((/* implicit */unsigned int) arr_41 [i_9] [10ULL] [i_9] [i_24]);
        }
        var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) (((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)200)) : (arr_67 [i_9] [i_9] [i_9] [i_9]))))) < (((/* implicit */int) arr_28 [i_9])))))));
        arr_82 [i_9] [i_9] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_78 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147))) : (0U)))));
        var_54 += ((/* implicit */unsigned int) arr_58 [i_9] [i_9] [i_9]);
    }
}
