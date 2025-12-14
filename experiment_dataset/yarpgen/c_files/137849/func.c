/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137849
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) 2153383653098055637ULL)))))) != (arr_3 [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1] [i_1]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                arr_11 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((arr_2 [i_0] [i_2]) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [2] [i_0]))))) == (((/* implicit */long long int) ((/* implicit */int) ((var_2) || (((/* implicit */_Bool) var_7))))))));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) arr_10 [i_1] [0LL] [i_0] [i_1]))))) ? (arr_8 [i_1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                arr_12 [i_1] [i_2] = ((/* implicit */signed char) (+(arr_8 [i_1] [i_1])));
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
    {
        var_18 |= ((/* implicit */unsigned int) arr_6 [i_3] [i_3]);
        arr_16 [8U] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3])) ? (arr_7 [i_3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 16293360420611495998ULL)) ? (((/* implicit */int) arr_15 [i_3] [i_3])) : (((/* implicit */int) arr_4 [i_3] [i_3] [i_3])))))));
        var_19 *= ((/* implicit */signed char) var_13);
    }
    var_20 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        for (int i_5 = 4; i_5 < 20; i_5 += 4) 
        {
            {
                var_21 = var_0;
                arr_22 [i_4] [i_5] = ((/* implicit */unsigned char) var_9);
                var_22 &= ((/* implicit */unsigned int) ((short) max((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_18 [i_4])))), ((~(var_8))))));
                var_23 = ((/* implicit */unsigned short) (~(((((16293360420611495967ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) & (((((/* implicit */_Bool) 2153383653098055621ULL)) ? (((/* implicit */unsigned long long int) 139814480)) : (16293360420611496016ULL)))))));
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    var_24 = ((/* implicit */unsigned long long int) arr_21 [i_4] [i_5] [i_6]);
                    /* LoopSeq 3 */
                    for (int i_7 = 3; i_7 < 21; i_7 += 2) /* same iter space */
                    {
                        var_25 = min((((arr_23 [i_5 - 4]) | (arr_23 [i_5 - 1]))), (((/* implicit */int) ((unsigned short) var_14))));
                        var_26 = ((/* implicit */long long int) arr_17 [i_4]);
                        var_27 |= ((((((/* implicit */int) arr_18 [i_5 + 2])) >> (((((/* implicit */int) arr_18 [i_5 + 2])) - (61))))) | (((/* implicit */int) ((signed char) -1652271515073657561LL))));
                        var_28 += ((/* implicit */_Bool) (+(min((max((2153383653098055620ULL), (((/* implicit */unsigned long long int) arr_19 [i_6])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [(signed char)4])) ? (arr_23 [i_5]) : (var_9))))))));
                    }
                    for (int i_8 = 3; i_8 < 21; i_8 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)111))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_20 [10LL] [10LL] [i_6])))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (arr_28 [i_8] [i_5] [i_6] [i_5 - 1] [i_5]))))))) : (((/* implicit */int) ((unsigned short) arr_23 [i_5 - 4])))));
                        arr_29 [i_4] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_5 - 3] [9U] [i_8 - 2] [i_8] [i_8 - 2])) ? (arr_28 [i_5 - 2] [i_6] [i_8 - 1] [i_8] [i_8 - 2]) : (((/* implicit */long long int) arr_24 [i_5 + 2] [i_6] [i_8 - 1]))))), (((var_1) | (((/* implicit */unsigned long long int) (~(var_14))))))));
                    }
                    for (short i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_10 = 2; i_10 < 19; i_10 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4])) ? (arr_20 [i_6] [i_9] [i_10]) : (((/* implicit */long long int) arr_25 [i_4]))))))))))));
                            arr_34 [i_10] [(signed char)3] [i_6] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_27 [i_5 - 1] [i_5 - 4] [i_10] [i_10 + 1] [i_10 + 1]))))) >= (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_31 [i_4] [i_4] [(signed char)9] [i_9] [i_10])))))))));
                        }
                        for (unsigned char i_11 = 2; i_11 < 19; i_11 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_31 [i_11] [i_9] [i_6] [i_5] [i_4])) ? (var_4) : (((/* implicit */int) var_12)))) << (((((/* implicit */int) ((unsigned char) var_1))) - (58))))) >> (((var_14) - (4227121306U)))));
                            var_32 -= var_10;
                            arr_37 [i_4] [i_5 + 2] [(short)16] [i_6] [i_9] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_28 [i_11 + 3] [i_5 - 2] [i_5] [i_5 - 1] [i_5 + 2])) ? (((/* implicit */long long int) var_8)) : (arr_28 [i_11 - 2] [i_5 - 3] [i_5 + 2] [i_5 - 3] [i_5 + 2]))) | (((/* implicit */long long int) ((unsigned int) arr_28 [i_11 - 1] [i_5 - 4] [i_5] [i_5 - 3] [i_5 - 1])))));
                            arr_38 [i_11] [i_9] [i_9] [i_6] [13LL] [i_4] [i_4] = ((/* implicit */signed char) arr_30 [i_9] [i_6] [i_5] [i_4]);
                        }
                        /* vectorizable */
                        for (unsigned char i_12 = 2; i_12 < 19; i_12 += 4) /* same iter space */
                        {
                            var_33 = ((((long long int) arr_24 [i_4] [i_4] [i_6])) ^ (((/* implicit */long long int) arr_25 [i_5 - 3])));
                            arr_42 [i_12] [4LL] [i_6] [i_5] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_21 [i_12] [i_6] [i_4])) : (arr_30 [i_4] [1] [i_6] [i_9]))))));
                        }
                        for (long long int i_13 = 1; i_13 < 18; i_13 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) min((((/* implicit */long long int) var_9)), (arr_19 [i_4])))))));
                            var_35 = ((/* implicit */unsigned short) (((-(((arr_31 [i_13] [i_9] [i_6] [i_5] [i_4]) / (((/* implicit */int) (unsigned short)19333)))))) > (((/* implicit */int) ((((/* implicit */int) var_2)) <= (arr_31 [i_9] [i_9] [i_9] [i_6] [i_5 + 2]))))));
                        }
                        var_36 ^= ((/* implicit */int) arr_43 [i_9] [i_9] [(short)10] [(short)10] [i_4]);
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_19 [i_5 + 1]) / (((/* implicit */long long int) ((((var_13) + (2147483647))) >> (((arr_30 [i_6] [i_6] [i_5] [i_4]) - (857729604))))))))) < ((+(max((2153383653098055622ULL), (((/* implicit */unsigned long long int) (short)16847))))))));
                        arr_45 [i_4] [i_5] [i_6] [i_9] [i_4] = ((/* implicit */unsigned short) arr_18 [i_9]);
                        var_38 = ((/* implicit */long long int) ((16293360420611495996ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_27 [i_9] [i_9] [i_6] [0] [i_4]))))));
                    }
                    arr_46 [i_6] [i_5] [i_4] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((((/* implicit */unsigned int) arr_24 [i_6] [i_5 - 3] [i_4])) & (var_11))), (((/* implicit */unsigned int) var_8))))), (max((((long long int) arr_31 [i_4] [i_5 + 1] [i_5 + 1] [i_5] [i_4])), (((/* implicit */long long int) arr_36 [(_Bool)1] [i_5 + 2] [i_5 - 1] [i_5 - 3] [i_5] [i_6]))))));
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        var_39 = ((/* implicit */signed char) ((long long int) (short)30761));
                        var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((long long int) var_12)), (((/* implicit */long long int) var_8)))))));
                    }
                    for (int i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        var_41 += ((arr_28 [i_5 - 1] [i_5 + 2] [i_5 - 4] [i_5 + 2] [i_5 - 3]) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_28 [i_5 - 2] [i_5 + 2] [i_5 + 1] [i_5 - 3] [i_5 - 3])) == (var_3))))));
                        var_42 = ((/* implicit */signed char) ((var_2) || (var_10)));
                        arr_53 [9LL] [i_6] [i_5] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) 2126812017))), (var_3)));
                    }
                }
                for (unsigned char i_16 = 1; i_16 < 20; i_16 += 4) 
                {
                    var_43 = ((/* implicit */unsigned char) ((arr_20 [i_5 - 3] [5U] [i_16]) ^ (arr_20 [i_5 + 1] [i_5] [i_5])));
                    /* LoopSeq 2 */
                    for (long long int i_17 = 2; i_17 < 18; i_17 += 4) 
                    {
                        var_44 ^= ((/* implicit */int) (((+(arr_33 [i_4] [20U] [i_5 + 1] [i_5] [i_16 + 1]))) + (((/* implicit */unsigned long long int) arr_52 [(unsigned short)21] [20LL] [i_17 + 1]))));
                        var_45 -= ((/* implicit */long long int) var_4);
                    }
                    /* vectorizable */
                    for (short i_18 = 0; i_18 < 22; i_18 += 3) 
                    {
                        var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_18] [i_18] [i_16] [i_5] [i_5] [i_4])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4])))))) || (((((/* implicit */int) arr_43 [i_4] [i_5] [i_16] [i_4] [i_16])) > (((/* implicit */int) var_0))))));
                        var_47 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)6))))) <= (var_14)));
                        var_48 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_54 [i_18] [i_16 + 2] [i_5 + 2]))));
                        /* LoopSeq 1 */
                        for (signed char i_19 = 0; i_19 < 22; i_19 += 1) 
                        {
                            arr_66 [i_4] [i_5] [(_Bool)1] [i_18] [i_19] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_5 - 4] [i_5 - 4] [i_16] [i_16 - 1] [i_16 - 1])) ? (arr_52 [i_5 - 1] [i_5] [i_5]) : (arr_52 [i_5 - 2] [i_5 - 2] [i_5])));
                            var_49 &= ((/* implicit */unsigned long long int) arr_41 [i_5 - 4] [i_5 + 2] [i_5 - 2] [i_5 - 4] [i_5 - 4]);
                            var_50 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (2153383653098055627ULL)))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_20 = 0; i_20 < 22; i_20 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_21 = 0; i_21 < 22; i_21 += 4) 
                        {
                            var_51 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned int) var_3))) ? (max((14336U), (((/* implicit */unsigned int) (signed char)-8)))) : (((/* implicit */unsigned int) max((arr_65 [i_4] [i_5] [i_16] [i_20] [i_21]), (var_9)))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_65 [i_4] [i_5] [i_16 + 2] [i_20] [i_21]), (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) arr_51 [i_20] [i_16 - 1]))))))));
                            var_52 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)17355), (((/* implicit */unsigned short) (short)30764)))))) ^ (((((/* implicit */_Bool) var_9)) ? (arr_39 [i_5 - 4] [i_5] [i_5 + 1] [i_5] [i_5 - 3] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_4] [i_16] [i_5] [i_4])))))));
                        }
                        var_53 = ((/* implicit */unsigned int) (+(min((max((((/* implicit */unsigned long long int) arr_59 [i_4] [(signed char)10] [i_16] [i_5] [i_4])), (var_1))), (max((var_1), (((/* implicit */unsigned long long int) var_0))))))));
                    }
                    /* vectorizable */
                    for (signed char i_22 = 0; i_22 < 22; i_22 += 1) 
                    {
                        arr_73 [i_5 - 1] [i_16] = ((((/* implicit */int) arr_40 [i_16 + 1] [i_16] [i_5 + 1] [i_5 + 2] [i_5 - 1] [i_4])) + (((((/* implicit */int) var_7)) - (var_13))));
                        arr_74 [i_4] [i_5] [i_4] [i_22] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                    }
                    /* vectorizable */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_54 = ((/* implicit */_Bool) arr_19 [i_16]);
                        /* LoopSeq 2 */
                        for (int i_24 = 3; i_24 < 21; i_24 += 3) 
                        {
                            var_55 = ((/* implicit */signed char) ((((/* implicit */int) arr_58 [i_5 + 2] [i_5] [i_23] [i_24 - 1] [i_24] [i_24 - 2])) | (((/* implicit */int) arr_58 [i_5 - 4] [i_23] [i_23] [i_24 - 3] [i_24] [i_24]))));
                            arr_80 [i_4] [i_5] [i_5] [i_5] [i_24] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_14))) ? (arr_70 [i_4] [i_5 - 4] [i_24 + 1] [i_4] [i_23] [i_23]) : (((/* implicit */unsigned int) ((var_9) >> (((((/* implicit */int) arr_44 [i_4] [i_16] [i_4] [i_24])) - (15583))))))));
                            var_56 = ((/* implicit */unsigned char) ((_Bool) var_7));
                        }
                        for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                        {
                            arr_83 [i_25] [i_23] [12U] [i_5] [i_5] [i_4] = ((/* implicit */long long int) (((!(arr_76 [i_23] [i_16] [i_5] [i_4]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_4] [i_5 - 2] [i_16] [i_5 - 2])) ? (((/* implicit */int) var_5)) : (var_13)))) : (((unsigned long long int) arr_79 [i_4] [i_4] [i_4] [i_4] [i_4]))));
                            arr_84 [i_4] [(unsigned char)13] [i_16] [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_16 - 1] [i_25 + 1] [i_16] [i_23] [i_25])) ? (((/* implicit */int) arr_63 [i_16 + 1] [i_25 + 1] [i_25 + 1] [i_5] [i_23])) : (((/* implicit */int) arr_63 [i_16 - 1] [i_25 + 1] [i_16] [i_16] [i_25]))));
                        }
                        arr_85 [i_23] [i_16] [i_16] [i_16] [i_5] [i_4] &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (signed char)70)))))));
                        var_57 = ((/* implicit */signed char) arr_27 [i_23] [i_16] [i_5] [i_4] [i_4]);
                    }
                }
                for (unsigned int i_26 = 2; i_26 < 19; i_26 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_27 = 0; i_27 < 22; i_27 += 3) 
                    {
                        var_58 = ((/* implicit */int) ((unsigned long long int) 134215680));
                        arr_90 [i_27] [i_27] [i_26] [i_5] [i_4] [i_4] = ((/* implicit */_Bool) arr_75 [20ULL] [i_5] [i_5] [i_26] [i_27]);
                        var_59 = ((/* implicit */unsigned int) (-(2153383653098055604ULL)));
                    }
                    var_60 += ((((/* implicit */_Bool) arr_20 [19] [i_26] [i_26])) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) arr_59 [i_4] [i_4] [i_4] [i_4] [1ULL])))));
                    arr_91 [i_26] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_5)) << (((((((/* implicit */_Bool) arr_63 [i_4] [i_4] [i_5 + 1] [i_26] [i_26])) ? (((/* implicit */int) arr_54 [i_26] [i_5] [i_4])) : (var_8))) - (60))))), (((/* implicit */int) ((((/* implicit */int) arr_36 [i_26 - 1] [i_26] [i_26] [i_26 + 1] [i_5 + 2] [i_5 + 2])) == (((/* implicit */int) ((var_10) && (((/* implicit */_Bool) arr_23 [i_4]))))))))));
                }
            }
        } 
    } 
}
