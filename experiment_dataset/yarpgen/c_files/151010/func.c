/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151010
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (unsigned short)40866))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        var_21 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)24670)) : (((/* implicit */int) (signed char)-12))))) > (var_2)));
                        var_22 ^= ((/* implicit */signed char) ((2147483647ULL) & (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
                    }
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) var_12);
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_10))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((short) ((int) var_7))))));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (var_3)));
                    }
                    var_27 = ((/* implicit */int) ((_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */short) var_1)))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        var_28 = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1]))) : (var_4)))) ? (((var_12) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)21449)))) : (((/* implicit */int) var_8))))) >= (max((((((/* implicit */long long int) ((/* implicit */int) (signed char)108))) ^ (68719476735LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)36)) * (((/* implicit */int) var_11))))))));
                        var_29 = var_4;
                        arr_12 [i_0] [i_1] [(short)19] [i_5] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) ((unsigned char) var_3))) * (((((/* implicit */int) var_17)) / (((/* implicit */int) var_1)))))) * (((/* implicit */int) var_17))));
                        var_30 = ((((/* implicit */int) ((signed char) (unsigned char)242))) * (((((/* implicit */_Bool) (unsigned short)40866)) ? (((/* implicit */int) (unsigned short)34418)) : (((/* implicit */int) (unsigned short)24669)))));
                        arr_13 [i_1] [i_0] [18ULL] [i_5] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_5)))) << (((((((/* implicit */_Bool) ((arr_1 [i_0] [i_2]) & (((/* implicit */int) var_16))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)-116)))) + (31295)))));
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            arr_20 [i_1] [i_1] [i_2] [i_6] [i_7] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_6 + 1] [i_6 + 2])) ? (((/* implicit */int) arr_0 [i_6 - 1] [i_6 + 1])) : (((/* implicit */int) arr_18 [i_1]))))));
                            var_31 += ((/* implicit */unsigned char) ((((min((var_3), (((/* implicit */unsigned long long int) var_4)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)62)) & (((/* implicit */int) (unsigned short)50067))))) : (((arr_16 [i_2] [i_1] [i_1] [(_Bool)1] [i_7]) << (((arr_1 [i_0] [i_1]) + (768235617))))))))));
                        }
                        arr_21 [i_1] = ((/* implicit */int) ((((((/* implicit */int) arr_0 [i_6 + 3] [i_6 + 1])) == (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6 - 1] [i_6 + 3]))) : (((unsigned long long int) var_13))));
                    }
                    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0] [i_1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [(_Bool)1] [10ULL] [(unsigned char)0])) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) > (var_4))))))) : (((3289703410823790217ULL) >> (((((15157040662885761404ULL) | (((/* implicit */unsigned long long int) 2995413431U)))) - (15157040665344303608ULL))))))))));
                }
                for (int i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    arr_26 [i_0] [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((((((((/* implicit */int) arr_0 [i_0] [i_0])) + (2147483647))) << (((((/* implicit */int) var_0)) - (1))))) >> (((max((((/* implicit */int) arr_14 [i_0] [i_0])), (arr_8 [i_1]))) - (51679479))))) > (((((/* implicit */_Bool) ((unsigned char) arr_9 [i_0] [i_1] [i_8] [i_0]))) ? (((/* implicit */int) ((short) arr_24 [i_0]))) : (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_9)))))))))) : (((/* implicit */unsigned short) ((((((((((/* implicit */int) arr_0 [i_0] [i_0])) + (2147483647))) << (((((/* implicit */int) var_0)) - (1))))) >> (((((max((((/* implicit */int) arr_14 [i_0] [i_0])), (arr_8 [i_1]))) - (51679479))) - (560255962))))) > (((((/* implicit */_Bool) ((unsigned char) arr_9 [i_0] [i_1] [i_8] [i_0]))) ? (((/* implicit */int) ((short) arr_24 [i_0]))) : (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_9))))))))));
                    var_33 -= (-(((/* implicit */int) (unsigned short)24696)));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            {
                                var_34 *= ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */short) var_14)), (var_7)))) ? (10615301293799245173ULL) : (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51962))))))) > (((/* implicit */unsigned long long int) ((((15157040662885761415ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) ? (((/* implicit */int) (unsigned short)38711)) : (((/* implicit */int) max((arr_15 [(signed char)2] [(signed char)2] [i_10] [i_8]), (((/* implicit */short) var_16))))))))));
                                var_35 = ((/* implicit */int) var_14);
                                var_36 ^= ((((/* implicit */_Bool) arr_17 [i_0] [i_9])) ? (((/* implicit */int) ((_Bool) ((var_15) || (((/* implicit */_Bool) (unsigned short)24694)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)40859)) || (((/* implicit */_Bool) var_13)))) || (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 1536937691))))))));
                                var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_0])) ? (((/* implicit */unsigned int) arr_27 [i_1])) : (2607111100U)))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)63))) ^ (arr_31 [i_0] [(unsigned short)1] [i_9] [(unsigned short)1] [i_10])))));
                                var_38 ^= ((/* implicit */unsigned long long int) (_Bool)0);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        var_39 += ((/* implicit */signed char) ((((/* implicit */_Bool) 16367770408902760135ULL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (short)-23223)))))) & (((((/* implicit */_Bool) 15157040662885761396ULL)) ? (arr_16 [i_0] [i_0] [i_1] [(signed char)0] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_11] [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_0]) > (((((-2147483638) + (2147483647))) >> (((/* implicit */int) (unsigned char)24))))))))));
                        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) (unsigned short)26838))), (((-18LL) - (-38LL))))))));
                        arr_36 [i_1] [i_1] [i_1] = ((int) (unsigned char)30);
                    }
                    for (unsigned int i_12 = 1; i_12 < 19; i_12 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (short)-63))) - (((-1303894980797537543LL) & (((/* implicit */long long int) arr_35 [i_12 + 1] [i_1] [i_1] [i_0]))))))));
                        var_42 *= ((/* implicit */short) var_3);
                    }
                    for (short i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_35 [i_8] [i_1] [i_13] [i_13]) + (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_1])) > (((/* implicit */int) var_17)))))))))))));
                        var_44 -= ((/* implicit */unsigned short) ((int) (short)43));
                    }
                    for (long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (unsigned char)231)) ? (10113345627228702257ULL) : (arr_24 [i_0]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)24))))))) | (((/* implicit */unsigned long long int) ((((var_17) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_14])) : (((/* implicit */int) (signed char)-102)))) & (((((/* implicit */int) var_15)) & (((/* implicit */int) var_5))))))))))));
                        var_46 += ((((/* implicit */int) (short)60)) == (((/* implicit */int) var_6)));
                        var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-32752), ((short)63))))) + (((arr_23 [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) var_4)))))))));
                        var_48 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) var_6))) - (((((1649456499100979746ULL) & (((/* implicit */unsigned long long int) arr_30 [i_0] [i_1] [i_0] [i_0] [i_0] [i_8])))) >> (((((long long int) var_11)) + (41LL)))))));
                        var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) arr_34 [i_0]))))));
                    }
                }
                /* LoopSeq 2 */
                for (signed char i_15 = 3; i_15 < 20; i_15 += 2) 
                {
                    var_50 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3356399750640778157ULL)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-32757)) & (((/* implicit */int) (signed char)(-127 - 1)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((7864320U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)32766))) ^ (0LL)))))));
                    var_51 ^= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_19)))) | (arr_16 [i_0] [(_Bool)1] [i_15] [i_15 - 3] [i_15 - 3]))));
                    /* LoopSeq 2 */
                    for (int i_16 = 0; i_16 < 21; i_16 += 3) 
                    {
                        var_52 = ((/* implicit */_Bool) ((((var_19) ? (((/* implicit */unsigned long long int) 2385591989U)) : (var_13))) + (((((((/* implicit */unsigned long long int) -18LL)) * (var_3))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) + (((/* implicit */int) (unsigned char)172)))))))));
                        var_53 = ((/* implicit */unsigned long long int) max((var_53), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_41 [i_0] [4LL] [i_15 + 1] [i_15 + 1]), (arr_41 [i_0] [i_1] [i_15 + 1] [i_1])))) - (((((/* implicit */int) arr_41 [i_1] [i_1] [i_15 + 1] [i_1])) >> (((((/* implicit */int) (signed char)89)) - (71))))))))));
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_19))) & (1909375306U))) & (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_54 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 4009724737U)) ? (((/* implicit */int) (short)-24497)) : (((/* implicit */int) (short)-63)))));
                        var_55 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15090344323068773433ULL)) ? (arr_23 [i_1] [9] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (var_18))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 3) 
                        {
                            var_56 ^= ((/* implicit */unsigned int) var_18);
                            var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(arr_48 [i_0] [i_1] [i_1] [i_0] [(signed char)10] [(signed char)10])))) ? (((/* implicit */int) ((unsigned short) 1909375307U))) : ((-(((/* implicit */int) (unsigned char)249)))))) < (((/* implicit */int) (unsigned short)0)))))));
                            var_58 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_15 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_15 + 1] [i_1]))) : (var_18)))));
                            var_59 = ((/* implicit */short) min((((/* implicit */int) (signed char)-87)), (((((/* implicit */int) (unsigned char)128)) % (((/* implicit */int) var_5))))));
                            var_60 += ((/* implicit */short) max((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_45 [i_0] [i_0])) & (((/* implicit */int) arr_42 [i_18] [i_1] [i_15 - 2] [i_17])))))), (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 1909375306U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (arr_44 [i_17] [i_0] [i_0]))) : (((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_0] [i_0] [i_0])))))))));
                        }
                        var_61 = (unsigned char)241;
                    }
                }
                for (unsigned short i_19 = 0; i_19 < 21; i_19 += 4) 
                {
                    var_62 = ((/* implicit */signed char) ((((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0]))))))))) & (((/* implicit */int) ((((((/* implicit */_Bool) 418426360)) ? (arr_34 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) > (((/* implicit */long long int) arr_2 [i_1])))))));
                    /* LoopNest 2 */
                    for (long long int i_20 = 2; i_20 < 19; i_20 += 4) 
                    {
                        for (int i_21 = 0; i_21 < 21; i_21 += 2) 
                        {
                            {
                                arr_66 [i_0] [i_1] [i_19] [(short)7] [i_20 + 1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) (signed char)126))))) == (((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((((/* implicit */int) var_19)) >= (((/* implicit */int) var_0))))) : ((~(((/* implicit */int) (short)-21634))))))));
                                var_63 -= ((/* implicit */short) (signed char)30);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (short i_22 = 2; i_22 < 20; i_22 += 4) 
                {
                    for (unsigned char i_23 = 3; i_23 < 20; i_23 += 4) 
                    {
                        {
                            var_64 -= ((/* implicit */int) var_11);
                            /* LoopSeq 2 */
                            for (unsigned long long int i_24 = 0; i_24 < 21; i_24 += 3) 
                            {
                                arr_74 [i_0] [i_1] [i_0] [i_1] = ((((((/* implicit */_Bool) (short)-63)) && (((/* implicit */_Bool) max((18446744073709551613ULL), (((/* implicit */unsigned long long int) 4287102990U))))))) || (((/* implicit */_Bool) (signed char)-118)));
                                var_65 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) (short)-1564)), (((2385591990U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                                var_66 = ((/* implicit */unsigned char) max((var_66), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((arr_46 [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_25 [i_0] [i_23 + 1] [i_22 - 1] [i_0])))))))));
                            }
                            for (int i_25 = 1; i_25 < 18; i_25 += 4) 
                            {
                                var_67 &= ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) << (((/* implicit */int) ((unsigned char) var_6))))) == (((((/* implicit */_Bool) ((int) (signed char)96))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_68 [i_22] [14U] [i_22] [i_25])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)127))))))));
                                var_68 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_68 [i_1] [i_0] [i_0] [18ULL])) & (((/* implicit */int) arr_47 [i_25 + 2] [i_25] [i_25] [i_25 + 3]))))))));
                                var_69 = ((/* implicit */unsigned short) ((long long int) ((signed char) arr_47 [i_0] [i_0] [i_22 - 2] [i_23])));
                                var_70 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_24 [i_25 + 2])) ? (arr_24 [i_25 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50236))))), (((arr_24 [i_25 + 3]) / (arr_24 [i_25 + 2])))));
                            }
                            var_71 = ((/* implicit */unsigned long long int) min((var_71), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 576460752303423488LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_17) && (((/* implicit */_Bool) var_14)))))) : (var_4))))));
                        }
                    } 
                } 
                var_72 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_71 [i_0] [i_1] [i_1])) || (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (((var_13) % (((/* implicit */unsigned long long int) 144708040))))))));
            }
        } 
    } 
    var_73 *= ((/* implicit */unsigned char) var_13);
    var_74 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) % (var_18)));
}
