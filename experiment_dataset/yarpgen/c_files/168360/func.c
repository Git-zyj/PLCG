/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168360
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)15483))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) min((2712830604951092381LL), (((/* implicit */long long int) (_Bool)1)))))));
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_1 [i_0]) / (((/* implicit */long long int) max((-1195865468), (((/* implicit */int) (short)31995))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_10 [i_1] [i_1 + 3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1 + 3])) ? (var_9) : (((/* implicit */long long int) arr_9 [i_1 + 3]))));
            var_13 = ((/* implicit */short) (+(arr_7 [i_2] [i_2] [i_1])));
        }
        for (short i_3 = 4; i_3 < 16; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                arr_16 [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 2047LL)) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) 4192888043U))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_23 [i_1 + 2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) > (var_2)))) : (((/* implicit */int) ((arr_7 [i_1 + 1] [i_4] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) (short)15483))))))));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_15 [i_5] [i_5] [i_5] [i_1])))) ? ((-(2712830604951092360LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-22229))) + (var_7))))));
                            var_15 = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) ((var_4) >> (((((/* implicit */int) arr_8 [i_1])) + (26256)))))) : (((/* implicit */unsigned long long int) ((var_4) >> (((((((/* implicit */int) arr_8 [i_1])) + (26256))) - (1218))))));
                            arr_24 [i_1] [i_5] [i_4] [i_3] [i_3] [i_1] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) -2712830604951092360LL)) - (18446744073709551615ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_1]))))));
                            var_16 = ((/* implicit */unsigned char) var_4);
                        }
                    } 
                } 
                var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)31))) <= (0U)));
                var_18 = ((((/* implicit */int) arr_21 [i_4] [i_3 + 1] [i_3 - 2] [i_3] [i_1])) < (((/* implicit */int) (!(var_10)))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 1; i_7 < 17; i_7 += 3) 
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_7]) < (((/* implicit */int) arr_22 [i_7] [i_4] [i_1] [i_1] [i_1] [i_1 + 3])))))) + (((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */long long int) var_0)) : (var_9)))));
                    var_20 = ((/* implicit */_Bool) (+(arr_26 [i_3 + 2])));
                    var_21 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_8) : (var_7))));
                    var_22 = ((/* implicit */_Bool) ((int) arr_11 [i_1] [i_3] [i_1]));
                    var_23 |= ((/* implicit */long long int) arr_5 [i_3] [i_3 - 1]);
                }
            }
            for (int i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                var_24 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1 - 3] [i_3] [i_8]))))));
                var_25 ^= ((/* implicit */unsigned char) var_5);
                var_26 = ((arr_5 [i_3] [i_1]) != (((/* implicit */unsigned long long int) (-(arr_27 [i_8])))));
            }
            var_27 = ((/* implicit */int) ((var_9) >= (((/* implicit */long long int) var_2))));
            var_28 ^= ((/* implicit */unsigned long long int) var_1);
        }
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (+(((/* implicit */int) (short)127)))))));
        var_30 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (var_3) : (((arr_9 [i_1]) ^ (var_0)))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 3; i_9 < 15; i_9 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned int) (((-(arr_32 [i_9] [i_9 + 2]))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)15483)))))));
        /* LoopSeq 4 */
        for (unsigned int i_10 = 3; i_10 < 17; i_10 += 4) 
        {
            var_32 = ((/* implicit */unsigned int) arr_17 [i_9 - 3] [(unsigned short)6] [(unsigned short)6] [i_9 + 2]);
            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_4)) : (arr_35 [i_10 + 1])));
            var_34 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((3583498328U) >> (((((/* implicit */int) arr_13 [i_10])) - (57523)))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_35 = ((/* implicit */unsigned char) (~(arr_28 [16U])));
            var_36 ^= ((/* implicit */long long int) ((((/* implicit */int) ((114688) < (((/* implicit */int) (unsigned short)0))))) & (var_0)));
        }
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
        {
            arr_46 [i_12] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) == (var_0)));
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U))) : (((/* implicit */unsigned int) arr_9 [i_9 - 3]))));
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 3) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 0U)))) * (arr_34 [i_9 + 2] [i_9 + 3])));
                            var_39 = ((/* implicit */short) ((((/* implicit */long long int) var_2)) <= (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) var_3)) : (var_5)))));
                            var_40 = var_6;
                            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_25 [i_12 - 1] [i_12] [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned int) var_3)) : (var_8)));
                        }
                        for (unsigned int i_16 = 0; i_16 < 18; i_16 += 3) /* same iter space */
                        {
                            var_42 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_13] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_44 [i_13] [i_12 - 1] [i_13])))) ? (var_0) : (((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */int) (unsigned short)65530))))));
                            arr_59 [i_12] [i_14] [i_13] [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65505))) / (-2712830604951092361LL)));
                        }
                        for (unsigned char i_17 = 0; i_17 < 18; i_17 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_26 [i_9])) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_28 [i_12])))));
                            var_44 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_49 [i_9] [i_12 - 1] [i_13] [i_13])) + (((/* implicit */int) (unsigned char)250)))));
                            var_45 = ((/* implicit */int) 18446744073709551615ULL);
                        }
                        var_46 ^= ((/* implicit */unsigned char) ((((arr_47 [i_14] [i_13] [i_13] [i_9]) || (((/* implicit */_Bool) arr_58 [i_13] [i_13] [i_12] [i_12] [i_12] [i_13])))) ? (((/* implicit */int) (unsigned short)43144)) : (((/* implicit */int) arr_49 [i_12] [i_12 - 1] [i_12] [i_12 - 1]))));
                        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 0U)))) : (var_8)));
                    }
                } 
            } 
        }
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_19 = 0; i_19 < 18; i_19 += 2) 
            {
                for (long long int i_20 = 0; i_20 < 18; i_20 += 1) 
                {
                    for (long long int i_21 = 0; i_21 < 18; i_21 += 4) 
                    {
                        {
                            var_48 = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */int) arr_19 [i_9] [i_18] [i_19])))) << (((((/* implicit */int) (unsigned short)42192)) - (42192)))));
                            var_49 = arr_5 [i_20] [i_19];
                        }
                    } 
                } 
            } 
            var_50 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_32 [i_9] [i_9 + 3]))));
            var_51 = ((/* implicit */int) max((var_51), (((/* implicit */int) ((((/* implicit */_Bool) arr_57 [i_18] [i_18 - 1] [i_18 - 1] [i_9 - 3] [i_9])) ? (18437736874454810624ULL) : (((/* implicit */unsigned long long int) arr_65 [i_9 - 2] [i_9] [i_9] [i_9])))))));
            /* LoopNest 2 */
            for (unsigned int i_22 = 2; i_22 < 16; i_22 += 4) 
            {
                for (unsigned short i_23 = 2; i_23 < 16; i_23 += 1) 
                {
                    {
                        var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) (+(((/* implicit */int) ((72057594037403648ULL) >= (((/* implicit */unsigned long long int) var_3))))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_24 = 2; i_24 < 17; i_24 += 2) 
                        {
                            var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) arr_34 [i_23] [i_23]))));
                            var_54 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_68 [i_24] [i_22] [i_18] [i_9])) : (((/* implicit */int) var_6))))) / (arr_65 [i_23] [i_22] [i_18 - 1] [i_9])));
                        }
                    }
                } 
            } 
            var_55 = ((/* implicit */unsigned int) ((var_0) / (((var_3) / (((/* implicit */int) var_6))))));
        }
        var_56 = ((/* implicit */unsigned short) (-(var_2)));
    }
    /* LoopSeq 2 */
    for (unsigned int i_25 = 0; i_25 < 19; i_25 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_26 = 2; i_26 < 18; i_26 += 4) 
        {
            for (unsigned short i_27 = 0; i_27 < 19; i_27 += 2) 
            {
                {
                    var_57 = ((/* implicit */unsigned long long int) max((var_57), (((/* implicit */unsigned long long int) ((min((248141736), (((/* implicit */int) (short)-6)))) + (((/* implicit */int) arr_83 [i_26 + 1])))))));
                    var_58 = ((/* implicit */short) (+(((arr_83 [i_25]) ? (((((/* implicit */_Bool) var_5)) ? (18437736874454810624ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_82 [i_26] [i_25]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_86 [i_25] [i_25] [i_26] [i_27]) <= (((/* implicit */int) arr_83 [i_26]))))))))));
                }
            } 
        } 
        var_59 = ((/* implicit */short) min((var_59), (((/* implicit */short) ((((/* implicit */_Bool) arr_84 [i_25] [i_25] [i_25])) ? (((/* implicit */int) arr_83 [i_25])) : (((/* implicit */int) ((unsigned char) ((unsigned long long int) var_2)))))))));
        arr_89 [i_25] = ((/* implicit */unsigned short) var_6);
    }
    for (long long int i_28 = 3; i_28 < 11; i_28 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_29 = 0; i_29 < 12; i_29 += 4) 
        {
            var_60 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (short)7168)) < (min((arr_87 [i_28 + 1]), (((/* implicit */int) (_Bool)0))))))), (((((/* implicit */_Bool) (short)127)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22229)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (arr_64 [i_28] [i_28] [i_29])))));
            var_61 = ((/* implicit */unsigned char) arr_63 [i_28] [i_28]);
            arr_95 [i_28] [i_29] = ((((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) var_11)))))) != (max((72057594037403648ULL), (((/* implicit */unsigned long long int) -1478561135)))));
            /* LoopSeq 1 */
            for (short i_30 = 4; i_30 < 11; i_30 += 2) 
            {
                var_62 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_42 [i_28 - 1]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_90 [i_28 + 1] [i_30 - 1])) && (((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_52 [i_29]))) - ((+(var_5)))))) : ((-(3688104021971946320ULL)))));
                /* LoopSeq 1 */
                for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
                {
                    var_63 = ((/* implicit */int) (!(((/* implicit */_Bool) min((min((4353310274275453639ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) arr_78 [i_28] [i_29] [i_30] [i_30] [i_31])))))));
                    var_64 |= ((/* implicit */unsigned int) (~(((int) ((((/* implicit */_Bool) arr_28 [i_30])) || (((/* implicit */_Bool) arr_96 [i_28] [i_29] [i_30])))))));
                    var_65 = ((/* implicit */unsigned long long int) var_3);
                    arr_101 [i_31 - 1] [i_30 - 2] [i_29] [i_29] [i_28] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
                    var_66 = ((/* implicit */unsigned long long int) (((!(((((/* implicit */_Bool) (unsigned short)42182)) || (((/* implicit */_Bool) -1551002150)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0))))) : (((/* implicit */int) (_Bool)0))));
                }
                var_67 = ((/* implicit */unsigned char) ((((min((var_2), (((/* implicit */unsigned int) arr_9 [i_29])))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)9649))))))) * (((min((arr_99 [i_28 - 1] [i_28] [i_29] [i_29] [i_30 - 2]), (arr_34 [i_28] [i_28]))) * (((/* implicit */unsigned int) min((var_3), (((/* implicit */int) var_11)))))))));
                arr_102 [i_28] [i_28 + 1] [i_28] = ((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) arr_77 [i_28 - 3] [i_28] [i_28])))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_32 = 0; i_32 < 12; i_32 += 2) /* same iter space */
        {
            var_68 = ((_Bool) (unsigned short)0);
            var_69 += ((/* implicit */short) ((((/* implicit */int) (!((_Bool)1)))) + (((/* implicit */int) var_11))));
        }
        /* vectorizable */
        for (unsigned long long int i_33 = 0; i_33 < 12; i_33 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_34 = 1; i_34 < 8; i_34 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_35 = 0; i_35 < 12; i_35 += 1) 
                {
                    arr_112 [i_35] [i_34 + 2] [i_33] [i_33] [i_28] = ((((/* implicit */int) (short)-127)) >= (((/* implicit */int) ((18374686479672147967ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_28 - 1] [i_33] [i_33] [i_34] [i_34] [i_35])))))));
                    var_70 = ((long long int) (_Bool)1);
                }
                var_71 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)42192)) ? (((/* implicit */unsigned long long int) arr_11 [i_33] [i_33] [i_33])) : (arr_58 [i_33] [i_33] [i_34 + 1] [i_28] [i_33] [i_34 + 1])));
            }
            for (unsigned short i_36 = 1; i_36 < 8; i_36 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                {
                    for (unsigned int i_38 = 0; i_38 < 12; i_38 += 4) 
                    {
                        {
                            var_72 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((unsigned int) var_7))) ^ (((((/* implicit */_Bool) 18437736874454810624ULL)) ? (31ULL) : (((/* implicit */unsigned long long int) var_9))))));
                            arr_120 [i_38] [i_38] [i_37] [i_36 + 2] [i_33] [i_33] [i_28 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 576568440U)) ? (((/* implicit */int) var_10)) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_4) == (576568460U))))) : (((var_9) / (((/* implicit */long long int) ((/* implicit */int) arr_115 [i_28]))))));
                            arr_121 [i_28] [i_33] [i_36 + 4] [i_37] [i_38] [i_38] = ((/* implicit */long long int) arr_100 [i_36 + 2] [i_28 - 3] [i_28]);
                            var_73 = ((/* implicit */unsigned short) (+(var_7)));
                            var_74 = ((/* implicit */long long int) (short)22228);
                        }
                    } 
                } 
                var_75 = ((/* implicit */short) ((((/* implicit */long long int) arr_108 [i_36 - 1])) | (arr_88 [i_28 - 1] [i_36 - 1] [i_36 - 1])));
            }
            arr_122 [i_28 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
            var_76 = ((/* implicit */short) ((((((/* implicit */long long int) var_0)) ^ (arr_1 [i_33]))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 14093433799434097976ULL)) ? (((/* implicit */int) (short)22201)) : (var_3))))));
        }
        arr_123 [i_28] = ((/* implicit */unsigned short) ((((_Bool) arr_14 [i_28 - 1] [i_28 + 1] [i_28 - 2] [i_28 - 1])) || (((((((/* implicit */_Bool) var_7)) ? (arr_80 [i_28 - 3] [i_28] [(unsigned char)6] [i_28] [i_28]) : (((/* implicit */int) (short)-22223)))) < (arr_87 [i_28 - 1])))));
        var_77 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_25 [i_28 - 3] [i_28 - 2] [i_28 - 2] [i_28 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((long long int) 18437736874454810617ULL))));
    }
}
