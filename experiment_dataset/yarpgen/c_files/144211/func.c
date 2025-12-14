/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144211
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_12))));
    var_21 = ((/* implicit */_Bool) var_18);
    var_22 = ((/* implicit */unsigned short) min((4294967295U), (498090096U)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0 - 1] = ((/* implicit */unsigned int) arr_3 [8U]);
        arr_5 [i_0] [i_0] |= (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) arr_1 [i_0]))))) <= (((((/* implicit */_Bool) (unsigned short)32149)) ? (((/* implicit */int) (unsigned short)33387)) : (((/* implicit */int) (unsigned short)45726))))))) < (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) (unsigned short)36751)) - (36736)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_0])) < (((/* implicit */int) arr_3 [i_0]))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)33387)) : (((/* implicit */int) (unsigned char)134))))))));
            arr_8 [(unsigned short)11] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((4U), (arr_0 [i_0 + 2] [i_0 - 1])))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) min(((unsigned short)2), ((unsigned short)26775))))))) ? (((((/* implicit */_Bool) (unsigned short)33395)) ? (((/* implicit */int) ((_Bool) 1001933524U))) : ((~(((/* implicit */int) (unsigned char)240)))))) : (((/* implicit */int) arr_2 [i_0]))));
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [i_0 + 3]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned short)7693)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1]))))) : ((-(1088041090U)))))))))));
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))), ((-(((/* implicit */int) ((((/* implicit */int) arr_6 [i_4] [i_4])) != (((/* implicit */int) arr_9 [0U] [i_3 + 3] [i_3]))))))))))));
                        var_26 = ((/* implicit */unsigned char) (((-(min((var_5), (var_9))))) << (((((/* implicit */int) min((arr_17 [i_0 + 1] [(unsigned short)3] [i_3 + 1] [i_4] [i_5 - 1]), ((unsigned short)55398)))) - (8287)))));
                        arr_20 [i_0] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) arr_6 [i_0 - 2] [i_3 + 3]);
                        arr_21 [i_0] [i_2] [i_2] [i_4] [i_0] [10U] [i_0] = ((/* implicit */unsigned int) arr_9 [i_0 + 2] [i_3] [i_5 + 1]);
                        var_27 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) arr_3 [i_0 - 1])) ^ (((/* implicit */int) arr_3 [i_0 + 2])))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_28 += ((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_16))))) - (((unsigned int) ((var_9) % (var_10))))));
                        arr_25 [(_Bool)1] [i_2] [i_2] [i_6] [i_6] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_2])) || (((/* implicit */_Bool) var_14))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        arr_30 [11LL] [10U] = ((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned int) arr_13 [i_0 + 3] [i_0 + 3])), (var_18))));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_8))))) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0 - 2]))))))))));
                        arr_31 [i_0] [i_0] [(unsigned char)8] [i_7] = (~(((var_7) << (((((/* implicit */int) var_13)) - (36872))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_36 [i_4] [i_2] [i_2] [i_4] [i_2] [(_Bool)1] [i_2] &= ((/* implicit */unsigned int) min((((/* implicit */long long int) 232086191U)), (8611382606030799419LL)));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((unsigned int) arr_14 [i_0] [i_2] [i_3] [i_4])) << (((max((arr_12 [i_3 + 4] [i_8] [i_8]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)24432)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)1505))))))) - (530722401U))))))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0 + 2] [i_2] [i_3] [i_4] [i_8])) ? (((((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_0]), (arr_3 [i_2]))))) % (max((arr_28 [i_0] [i_0] [i_2] [i_3] [i_4] [i_8]), (arr_12 [i_0] [i_3 - 1] [i_8]))))) : (var_10)));
                    }
                    var_32 = ((/* implicit */long long int) var_6);
                    var_33 *= arr_16 [i_2];
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 1; i_9 < 11; i_9 += 2) 
                    {
                        arr_41 [i_9] = ((/* implicit */unsigned int) max((((/* implicit */long long int) 3948592939U)), (2550628012460026729LL)));
                        var_34 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((346374347U), (((/* implicit */unsigned int) (unsigned short)24441)))))));
                    }
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_2] [i_2] [i_4] [i_10] [i_10]))) ^ (min((((((/* implicit */_Bool) arr_40 [i_2] [i_2] [(_Bool)1] [i_2] [i_10])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [i_2] [i_3] [0LL] [i_2] [i_10]))))), (((unsigned int) var_6))))));
                        var_36 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_22 [(unsigned short)0] [i_3 - 1] [i_3] [i_0 - 2] [(unsigned short)0] [9LL])) ? (((/* implicit */int) arr_22 [i_0 - 2] [i_3 + 2] [i_3] [i_0 + 3] [i_10] [i_4])) : (((/* implicit */int) arr_22 [i_0] [i_3 + 4] [i_3] [i_0 - 2] [i_10] [i_3 + 4])))));
                        var_37 |= ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) ((4168241843U) < (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))));
                    }
                    var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0 + 3] [i_3 + 3] [i_3 + 3] [i_3 - 1] [i_3 + 1])))))) ? (((/* implicit */long long int) (-(1088041071U)))) : ((-(-2550628012460026736LL))))))));
                }
                var_39 = ((/* implicit */unsigned short) var_16);
                /* LoopSeq 3 */
                for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        arr_50 [(unsigned char)2] [i_11] [i_3 + 2] [i_11] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((arr_9 [(unsigned short)2] [i_11] [i_12]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_6)))) ? (((long long int) var_17)) : (((/* implicit */long long int) ((/* implicit */int) var_17))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_0] [i_0] [i_0 - 1] [i_0] [i_0])))))));
                        var_40 = min(((+((-(arr_28 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_35 [i_3] [i_2] [i_3] [i_3] [i_2] [i_0])) - (((/* implicit */int) arr_17 [(unsigned short)9] [i_2] [i_3 + 2] [(unsigned short)9] [i_3 + 2]))))))));
                    }
                    var_41 = ((/* implicit */long long int) max(((unsigned short)43361), ((unsigned short)33387)));
                    var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) (~(max((((/* implicit */long long int) arr_0 [i_0] [i_3 + 2])), (min((((/* implicit */long long int) var_15)), (arr_44 [i_0] [i_2] [i_0] [i_2] [i_11]))))))))));
                }
                for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
                {
                    arr_53 [i_13] [9LL] [i_0] [(unsigned short)5] [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_2 [i_3])) % (((/* implicit */int) var_14)))), (((((/* implicit */_Bool) (unsigned short)43382)) ? (((/* implicit */int) (unsigned short)24191)) : (((/* implicit */int) (unsigned short)11141))))));
                    arr_54 [i_0] [i_0] [i_0 - 2] [i_0] [(unsigned short)8] &= max((arr_11 [i_2]), (arr_49 [i_0 - 2] [(_Bool)1] [i_2] [i_0 + 3] [i_3 + 2] [i_3] [(unsigned short)8]));
                }
                /* vectorizable */
                for (unsigned short i_14 = 0; i_14 < 12; i_14 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 1; i_15 < 10; i_15 += 3) 
                    {
                        arr_60 [i_0] [i_15] [i_3 + 3] [i_14] [i_15] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_33 [0LL] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) << (((((/* implicit */_Bool) 3889865882U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_33 [i_0] [i_2] [i_2] [i_3] [i_14] [i_15] [i_15 + 2]))))));
                        arr_61 [i_15] [i_14] = ((/* implicit */_Bool) var_7);
                        arr_62 [i_3] [i_3] [i_3] [i_2] [2LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_17))));
                        var_43 = ((/* implicit */unsigned short) var_9);
                    }
                    for (unsigned int i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        arr_65 [i_0] [i_16] = ((/* implicit */unsigned int) ((_Bool) var_1));
                        var_44 = ((/* implicit */unsigned short) max((var_44), (var_14)));
                        arr_66 [i_0] [i_2] [i_0] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_0 - 1] [(unsigned char)8] [i_3 + 4] [i_16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [i_2] [i_3] [i_3 + 3]))) : (arr_63 [i_0 + 1] [i_3] [i_3 + 4] [i_16] [i_0 - 1])));
                    }
                    var_45 = ((/* implicit */unsigned char) var_7);
                }
                var_46 = var_5;
                var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_13))))) && (((/* implicit */_Bool) max((889067962U), (var_9)))))))));
            }
            var_48 = (-(((((/* implicit */_Bool) arr_42 [i_0 + 1] [i_0 - 1] [i_0 + 3] [i_0 + 1] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_2] [i_0] [i_0] [i_0 - 2] [i_0]))) : (((((/* implicit */_Bool) var_17)) ? (var_0) : (arr_58 [i_0 + 2] [i_2] [i_2] [i_0 + 2] [i_0 + 2] [i_0 + 3]))))));
            arr_67 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((unsigned int) var_7)) : ((+(1702736481U)))))), (min((((long long int) arr_43 [(unsigned short)10] [i_0] [i_0] [i_0] [(unsigned short)8] [i_0])), (((/* implicit */long long int) ((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17338))))))))));
            var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_2] [0LL] [i_0] [i_0])) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)39059)) << (((var_6) - (436610798U))))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (arr_49 [i_0] [i_0] [i_2] [i_0] [i_0 + 1] [i_0] [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
        }
        /* vectorizable */
        for (long long int i_17 = 0; i_17 < 12; i_17 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_18 = 0; i_18 < 12; i_18 += 4) 
            {
                arr_73 [i_0] [i_17] [i_17] [i_0] = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) var_6)))));
                var_50 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_71 [i_0] [i_0] [i_0] [i_18])) ? (arr_14 [i_0] [i_0] [i_18] [i_18]) : (var_4)))));
            }
            for (unsigned short i_19 = 0; i_19 < 12; i_19 += 2) 
            {
                var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_17] [i_17] [i_17] [i_17]))) : (var_5))))));
                var_52 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 3]))));
                var_53 = ((/* implicit */unsigned char) ((arr_37 [i_0 + 1] [i_0] [i_0 + 3] [i_0] [i_0]) != (arr_37 [i_0 - 2] [i_0] [i_0 + 1] [i_0] [i_0])));
            }
            var_54 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) & (var_6));
        }
    }
    /* vectorizable */
    for (unsigned char i_20 = 2; i_20 < 9; i_20 += 3) /* same iter space */
    {
        var_55 ^= ((/* implicit */unsigned short) (+(arr_7 [i_20 - 1])));
        var_56 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)19)) ? (((/* implicit */long long int) arr_58 [(unsigned short)8] [(unsigned short)7] [i_20 + 2] [i_20 + 2] [i_20 + 2] [i_20 + 1])) : (((((/* implicit */_Bool) var_5)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    }
}
