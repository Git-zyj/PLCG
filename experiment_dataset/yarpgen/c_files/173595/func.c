/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173595
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_18 |= arr_0 [i_0] [i_0];
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)52458)))) : (((/* implicit */int) var_17))))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (1373618771039542252LL))))));
        var_20 = ((/* implicit */unsigned short) 3336734936649754689LL);
        var_21 ^= (~(((/* implicit */int) (unsigned char)0)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [(short)2]);
                        var_23 -= ((/* implicit */long long int) (-(((/* implicit */int) min((arr_4 [i_2 + 3] [i_2 + 1] [i_2 + 3]), (var_6))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 3; i_4 < 9; i_4 += 4) 
                    {
                        var_24 ^= ((/* implicit */_Bool) var_6);
                        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_0] [i_4 + 2]))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1] [(short)9]))) : (486790074U)));
                    }
                    var_27 ^= ((/* implicit */unsigned char) ((((arr_11 [i_0] [i_1] [i_2 + 1] [i_0] [i_0] [i_1]) ^ (arr_11 [i_0] [i_0] [i_2 + 1] [i_2] [(short)10] [i_1]))) & (((/* implicit */int) arr_4 [i_0] [7LL] [i_2 - 1]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        arr_17 [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (short)32660);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            var_28 -= ((/* implicit */unsigned char) arr_8 [i_0] [i_1]);
                            var_29 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_18 [i_0] [(unsigned char)3] [i_2] [i_5 - 2] [i_6] [i_1])) : ((~((-2147483647 - 1))))));
                            var_30 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)44208)) : (((/* implicit */int) (signed char)38))));
                            arr_20 [i_5] [i_5 - 1] [i_2 - 2] [i_0] [i_5] |= ((((/* implicit */_Bool) arr_10 [i_2])) ? (var_13) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1]))))));
                        }
                        var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)224))));
                        /* LoopSeq 3 */
                        for (long long int i_7 = 3; i_7 < 10; i_7 += 2) 
                        {
                            var_32 = ((/* implicit */_Bool) ((var_15) ? (((((((/* implicit */int) arr_7 [i_2] [i_5] [i_2] [i_5])) + (2147483647))) >> ((((~(((/* implicit */int) var_5)))) + (266))))) : (((/* implicit */int) (short)6185))));
                            var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)108)), (var_12)))) : (((/* implicit */int) var_10)))) > ((~(16383)))));
                            var_34 |= ((/* implicit */unsigned int) max((arr_9 [i_7] [i_0] [i_2 - 2] [i_2] [i_0]), (min((arr_9 [i_7] [i_5] [i_2 + 3] [(unsigned short)4] [i_2]), (arr_9 [i_5] [i_5 + 1] [i_2 + 2] [i_2 + 3] [i_0])))));
                            var_35 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)25)), ((unsigned char)255)))))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned long long int) var_14);
                            var_37 = ((/* implicit */short) arr_3 [i_2] [i_2] [i_2]);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned short)21328)) << (((((((/* implicit */int) arr_16 [i_5 + 2] [i_5 + 1] [i_5 + 1])) + (45))) - (18)))))));
                            var_39 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)21328)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)14)))) <= (min((((/* implicit */int) var_14)), ((-(((/* implicit */int) arr_8 [i_0] [i_0]))))))));
                        }
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
    {
        var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_10] [i_10] [i_10]))) : (arr_0 [i_10] [i_10]))))));
        var_41 = ((/* implicit */int) arr_7 [i_10] [i_10] [i_10] [i_10]);
    }
    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) /* same iter space */
    {
        var_42 = min((((/* implicit */short) arr_28 [i_11] [i_11])), (arr_10 [i_11]));
        var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_27 [(unsigned char)5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))) : (var_13))), (((/* implicit */unsigned long long int) arr_4 [i_11] [i_11] [i_11]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_11] [i_11] [i_11])))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (min((((/* implicit */unsigned short) arr_4 [i_11] [i_11] [i_11])), (var_12)))))))))));
        var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)176)))))));
        /* LoopSeq 2 */
        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            var_45 = ((/* implicit */_Bool) max((var_45), (((min((arr_14 [i_11] [i_12] [i_12] [i_11]), (((/* implicit */int) max(((unsigned short)5764), (((/* implicit */unsigned short) arr_19 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))))))) > (((/* implicit */int) var_0))))));
            /* LoopNest 3 */
            for (unsigned char i_13 = 3; i_13 < 8; i_13 += 2) 
            {
                for (short i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    for (short i_15 = 3; i_15 < 10; i_15 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_11] [i_12] [i_13 - 1] [i_13 - 1] [i_14] [(_Bool)1])) ? (((/* implicit */int) arr_18 [i_11] [i_12] [i_13 + 2] [i_14] [i_15] [i_11])) : (((/* implicit */int) arr_18 [i_15] [i_15] [i_13] [i_14] [i_15 + 1] [i_13 + 1]))))) ^ (arr_15 [i_13] [i_13] [i_13] [i_14] [i_15])));
                            var_47 = arr_1 [i_11];
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_16 = 3; i_16 < 10; i_16 += 1) 
            {
                var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) arr_21 [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_16 - 1] [i_12] [i_11])) ? (((/* implicit */int) arr_42 [i_11] [i_11] [(_Bool)1])) : (arr_35 [i_11] [i_12] [i_16] [i_11])))))))));
                var_49 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_16 - 3] [i_16] [i_16] [i_16 - 1])) >= (((/* implicit */int) arr_28 [1] [i_11]))));
                arr_45 [10] [i_12] [10] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-109))));
                /* LoopSeq 2 */
                for (long long int i_17 = 3; i_17 < 7; i_17 += 3) 
                {
                    var_50 = ((((/* implicit */int) arr_16 [i_16 - 2] [i_17 - 2] [i_17])) > (((/* implicit */int) arr_5 [i_11] [i_12] [i_16 + 1])));
                    var_51 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27130)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) arr_43 [i_17] [i_17 - 1] [i_17 - 1]))));
                    var_52 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)254))));
                    var_53 |= ((/* implicit */long long int) var_0);
                    var_54 = ((/* implicit */unsigned char) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                }
                for (unsigned char i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    arr_52 [i_11] [i_11] [i_16] [i_18] = ((/* implicit */short) (~(((/* implicit */int) arr_43 [i_16 - 1] [i_16 - 2] [i_16 - 1]))));
                    arr_53 [i_11] [i_11] [i_11] [i_11] [0LL] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_16] [i_16 - 2] [i_16] [i_18] [(short)9] [i_12])) ? (((/* implicit */int) arr_19 [i_11] [i_11] [(unsigned char)2] [i_11] [(unsigned char)2] [i_11] [(unsigned char)2])) : (((/* implicit */int) (unsigned char)177))));
                    /* LoopSeq 3 */
                    for (short i_19 = 0; i_19 < 11; i_19 += 1) 
                    {
                        var_55 = ((/* implicit */long long int) (_Bool)1);
                        var_56 |= ((/* implicit */unsigned char) arr_3 [i_19] [i_12] [i_11]);
                    }
                    for (unsigned short i_20 = 0; i_20 < 11; i_20 += 2) 
                    {
                        var_57 = ((/* implicit */unsigned short) min((var_57), (((/* implicit */unsigned short) var_0))));
                        var_58 = ((/* implicit */unsigned char) var_8);
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_59 = ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
                        var_60 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (_Bool)1))));
                        var_61 |= ((/* implicit */unsigned short) var_3);
                    }
                    var_62 = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (1073709056LL)))));
                    var_63 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_33 [(unsigned char)0] [i_12] [i_16]))));
                }
            }
            for (unsigned long long int i_22 = 1; i_22 < 10; i_22 += 1) 
            {
                var_64 = arr_18 [i_11] [i_12] [i_22] [i_11] [i_11] [i_22];
                var_65 = ((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_22 + 1] [i_22 + 1] [i_22] [i_22])) % ((~(((/* implicit */int) (_Bool)0))))));
                var_66 -= ((/* implicit */unsigned char) var_3);
                var_67 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_11] [i_12] [i_12] [i_22] [i_22 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_37 [i_11] [i_11] [i_11] [i_11] [i_22 + 1])))) ? (var_13) : (((/* implicit */unsigned long long int) arr_37 [i_11] [i_12] [i_12] [i_12] [i_22 - 1]))));
            }
            var_68 = ((/* implicit */unsigned char) arr_47 [i_11] [i_11] [i_11] [i_11]);
        }
        /* vectorizable */
        for (short i_23 = 3; i_23 < 8; i_23 += 3) 
        {
            arr_68 [(signed char)7] [(signed char)7] = ((/* implicit */unsigned int) arr_61 [i_11] [i_11] [i_23] [i_23]);
            /* LoopSeq 3 */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                var_69 = ((/* implicit */unsigned char) (short)20428);
                var_70 = ((/* implicit */unsigned short) max((var_70), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_11] [i_23] [i_24] [i_24]))) - ((-(1434484582U))))))));
            }
            for (unsigned int i_25 = 0; i_25 < 11; i_25 += 4) 
            {
                var_71 -= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_14)))))));
                var_72 = ((/* implicit */unsigned short) arr_30 [i_11] [(short)2]);
                /* LoopSeq 2 */
                for (unsigned char i_26 = 3; i_26 < 8; i_26 += 4) /* same iter space */
                {
                    var_73 |= ((/* implicit */short) arr_61 [i_11] [i_11] [i_11] [i_11]);
                    var_74 = ((/* implicit */long long int) (unsigned char)2);
                    var_75 |= ((/* implicit */short) (unsigned char)192);
                    var_76 = ((/* implicit */short) (unsigned char)202);
                }
                for (unsigned char i_27 = 3; i_27 < 8; i_27 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_28 = 0; i_28 < 11; i_28 += 4) 
                    {
                        var_77 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)20829))));
                        arr_82 [i_11] [i_28] |= ((/* implicit */signed char) var_1);
                    }
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
                    {
                        var_78 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)108)) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned char)14))));
                        var_79 = ((/* implicit */_Bool) min((var_79), (((/* implicit */_Bool) ((((/* implicit */int) arr_57 [i_23 - 3] [i_23 - 1] [i_23 - 2] [i_23] [i_23 + 3] [i_23])) & (((/* implicit */int) (_Bool)1)))))));
                        var_80 = ((/* implicit */short) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_3))));
                    }
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) /* same iter space */
                    {
                        var_81 |= ((/* implicit */unsigned char) (~(arr_14 [i_11] [i_27 - 1] [i_27 - 3] [i_27 + 1])));
                        var_82 = ((/* implicit */_Bool) var_6);
                        arr_87 [i_11] [i_11] [i_25] [i_11] [i_11] |= ((/* implicit */_Bool) 4132245061U);
                    }
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) /* same iter space */
                    {
                        var_83 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) arr_36 [i_11] [i_27]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_27 - 3]))) : (arr_39 [(_Bool)1] [i_23 + 2] [i_25] [i_27] [(_Bool)1] [i_23 + 2])));
                        var_84 = ((/* implicit */unsigned char) min((var_84), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_42 [i_11] [i_11] [i_11]))))))))));
                        var_85 -= ((/* implicit */signed char) arr_14 [i_25] [i_23 + 1] [i_11] [i_27 - 2]);
                        arr_90 [i_27] [i_27 + 3] [i_27] [i_23] [i_27] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_57 [i_27 + 1] [(short)6] [i_27 - 2] [i_23 + 1] [i_23 - 2] [i_23 - 3]))));
                        var_86 = ((/* implicit */short) (-(((/* implicit */int) var_15))));
                    }
                    /* LoopSeq 1 */
                    for (short i_32 = 1; i_32 < 10; i_32 += 2) 
                    {
                        var_87 = ((/* implicit */unsigned int) min((var_87), (((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_32 - 1] [i_27 + 1] [i_23 - 1] [i_23])) >= (((/* implicit */int) var_11)))))));
                        var_88 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-20263)) / (((/* implicit */int) arr_46 [i_11] [9] [i_25] [9])))) * (((((/* implicit */int) var_15)) * (((/* implicit */int) (unsigned short)57913))))));
                        var_89 = ((/* implicit */signed char) arr_37 [i_32] [(_Bool)1] [i_27 + 1] [i_23 + 3] [i_11]);
                    }
                }
            }
            for (short i_33 = 3; i_33 < 9; i_33 += 4) 
            {
                var_90 = ((/* implicit */int) (+(((((/* implicit */_Bool) -918287047)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (5261059727869272749LL)))));
                arr_97 [i_11] [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_38 [i_11] [5LL] [i_33] [i_23 + 2]))))) ? (((((/* implicit */int) (short)-19088)) & (((/* implicit */int) (unsigned char)93)))) : ((~(((/* implicit */int) (unsigned short)38904))))));
                var_91 -= ((/* implicit */unsigned long long int) (signed char)108);
                var_92 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-66)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_23 - 1] [i_23 + 1]))) : (var_7)));
            }
        }
    }
    var_93 = ((/* implicit */int) max((var_13), (((/* implicit */unsigned long long int) var_6))));
    var_94 = var_10;
}
