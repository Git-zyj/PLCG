/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171958
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) arr_3 [i_1] [i_0]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0])))))) / (arr_1 [10ULL]))))));
                            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (~((~(((/* implicit */int) arr_13 [i_0] [i_0])))))))));
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-1)))) : ((~((-9223372036854775807LL - 1LL))))));
                            var_13 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) 1663702013U)) != (arr_11 [10ULL] [i_1] [10ULL] [i_3] [10ULL] [i_0])))) == (((/* implicit */int) var_3))));
                            var_14 &= ((/* implicit */signed char) arr_3 [i_0] [i_4]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((((/* implicit */int) (signed char)7)) + (((/* implicit */int) var_3)))) : ((~(((/* implicit */int) (_Bool)1))))));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 3] [i_2])) ? (((8LL) ^ (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_0] [i_5] [i_0])))) : (((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8580))) : (9223372036854775807LL))))))));
                        }
                    } 
                } 
                var_17 |= ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 3] [i_1 + 1]))));
            }
            for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((5894302182557780305ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))))))));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((1LL) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)53283)), (0)))))))))))));
                /* LoopNest 2 */
                for (long long int i_8 = 1; i_8 < 11; i_8 += 2) 
                {
                    for (signed char i_9 = 1; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 3] [i_1])) ? (arr_12 [i_1 - 1] [i_1 - 1] [i_8 + 1] [i_1 - 1] [i_9 + 1]) : (((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1] [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned int) arr_9 [i_1 + 1] [2] [i_1] [i_1 - 2] [(signed char)4])) : (arr_12 [i_1 - 2] [i_8] [i_8 + 1] [i_1 - 2] [i_9 + 2])))));
                            var_21 = ((/* implicit */unsigned long long int) (((~(arr_21 [i_1] [i_1 - 3] [i_8 + 1] [i_9 - 1]))) - (((((/* implicit */int) (signed char)-81)) + (-18)))));
                            var_22 = ((/* implicit */unsigned int) arr_4 [i_9] [i_1]);
                        }
                    } 
                } 
            }
            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 8LL)) ? (((/* implicit */unsigned long long int) arr_21 [i_0] [i_1] [i_0] [i_1])) : (var_1))) >> (((var_8) - (344363954U)))))) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) (unsigned short)12299))));
        }
        for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) min((((_Bool) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) var_6))))), ((((!(((/* implicit */_Bool) (signed char)-90)))) && (((/* implicit */_Bool) 0U)))))))));
            arr_29 [i_0] [i_0] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) ((_Bool) var_5)))))));
        }
        arr_30 [i_0] [i_0] = ((((/* implicit */_Bool) arr_25 [(signed char)1] [i_0] [i_0] [(signed char)7] [i_0])) || ((!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))));
    }
    for (short i_11 = 0; i_11 < 16; i_11 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) * (((/* implicit */int) (unsigned short)12270))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 16; i_12 += 2) 
        {
            var_26 = ((arr_34 [i_12]) | ((-(arr_34 [i_11]))));
            var_27 = ((/* implicit */unsigned long long int) arr_31 [i_11]);
            var_28 = ((/* implicit */unsigned int) max((var_28), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-98)) && (((/* implicit */_Bool) (unsigned char)106)))))) | (((((/* implicit */_Bool) -4LL)) ? (arr_31 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_11])))))))));
            /* LoopNest 2 */
            for (unsigned char i_13 = 3; i_13 < 15; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    {
                        var_29 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_39 [i_11] [i_13 - 3] [i_11] [i_11])) : (((/* implicit */int) arr_39 [i_11] [i_13 + 1] [i_13 - 1] [i_14])));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)53236)) / (((/* implicit */int) (signed char)-85))));
                    }
                } 
            } 
        }
        for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
        {
            var_31 &= ((/* implicit */unsigned short) ((-1LL) ^ (max((((/* implicit */long long int) (signed char)65)), (7173155497489957282LL)))));
            /* LoopNest 2 */
            for (long long int i_16 = 0; i_16 < 16; i_16 += 4) 
            {
                for (signed char i_17 = 0; i_17 < 16; i_17 += 3) 
                {
                    {
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((short) (signed char)-127)))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_18 = 0; i_18 < 16; i_18 += 3) 
                        {
                            arr_50 [i_18] [i_17] [i_16] [i_15] [i_17] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_11])) || (((((/* implicit */int) arr_42 [(signed char)6] [i_16])) == (((/* implicit */int) (short)16352))))));
                            arr_51 [i_11] [i_15] [i_15] [i_15] [i_17] [i_15] &= ((/* implicit */signed char) arr_32 [i_18]);
                            var_33 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)(-127 - 1)))))));
                            arr_52 [i_11] [i_15] [i_11] [i_17] [i_15] = ((/* implicit */int) var_0);
                        }
                        for (int i_19 = 3; i_19 < 14; i_19 += 2) 
                        {
                            arr_55 [i_11] [i_11] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(-17)))) + (min((arr_53 [i_11] [i_17] [i_16] [i_16] [i_19 - 3] [i_11] [9ULL]), (((/* implicit */unsigned int) var_0))))));
                            arr_56 [i_17] [i_17] [i_16] [i_17] [i_11] = ((/* implicit */_Bool) max((((((1161555525646670819ULL) * (524287ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_15])) ? (((/* implicit */int) (unsigned short)12299)) : (arr_46 [i_19 - 3] [i_17] [i_17] [i_17] [i_15] [i_11])))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-79)) && (((/* implicit */_Bool) 0))))), (var_2)))));
                            var_34 = ((/* implicit */short) var_3);
                        }
                        for (signed char i_20 = 0; i_20 < 16; i_20 += 4) 
                        {
                            var_35 = (signed char)26;
                            var_36 = ((/* implicit */short) max(((~(((/* implicit */int) var_0)))), ((+(((/* implicit */int) (signed char)-81))))));
                            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) max((((/* implicit */long long int) var_6)), (var_4))))));
                        }
                        for (unsigned short i_21 = 0; i_21 < 16; i_21 += 3) 
                        {
                            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_45 [i_15] [i_11]) | (((/* implicit */int) (signed char)30))))) ? (arr_58 [i_11] [i_15]) : (arr_58 [i_11] [i_21]))))));
                            var_39 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -22)) ? (((/* implicit */int) (unsigned short)11287)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) arr_61 [i_21] [i_17] [i_16] [i_15] [i_11])))) ? (((/* implicit */long long int) (~(arr_44 [i_16] [i_17] [i_21])))) : (min((((/* implicit */long long int) arr_45 [i_11] [i_15])), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (var_4)))))));
                            var_40 = ((/* implicit */short) ((((/* implicit */long long int) (~((~(((/* implicit */int) var_3))))))) & (((((((-9211017115736457802LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (9223372036854775807LL))) >> (((524287) - (524230)))))));
                        }
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_22 = 2; i_22 < 15; i_22 += 2) 
        {
            for (long long int i_23 = 0; i_23 < 16; i_23 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_24 = 0; i_24 < 16; i_24 += 3) 
                    {
                        for (signed char i_25 = 2; i_25 < 15; i_25 += 2) 
                        {
                            {
                                var_41 |= ((/* implicit */short) min((max((((/* implicit */unsigned long long int) max(((unsigned short)57134), (((/* implicit */unsigned short) arr_37 [i_23]))))), (min((((/* implicit */unsigned long long int) arr_67 [i_11] [i_11])), (arr_58 [i_11] [i_11]))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)62)) * (((/* implicit */int) var_5)))))))));
                                arr_76 [i_23] [i_24] [i_23] [(signed char)0] [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_71 [i_25 - 1] [i_22] [i_23] [i_25]))))) && (((/* implicit */_Bool) max((min((18052791911732106955ULL), (((/* implicit */unsigned long long int) arr_33 [i_11])))), (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
                            }
                        } 
                    } 
                    var_42 |= ((/* implicit */int) (signed char)10);
                    arr_77 [i_11] [i_11] [i_22] [i_22] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((2157684248U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) ^ (max((-1LL), (((/* implicit */long long int) (signed char)80))))))) ? (((/* implicit */int) (short)5652)) : (((/* implicit */int) (unsigned short)23))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_26 = 0; i_26 < 16; i_26 += 3) 
        {
            for (unsigned short i_27 = 0; i_27 < 16; i_27 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_28 = 0; i_28 < 16; i_28 += 1) 
                    {
                        for (unsigned long long int i_29 = 0; i_29 < 16; i_29 += 2) 
                        {
                            {
                                var_43 = ((/* implicit */signed char) var_2);
                                var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) arr_64 [i_11] [i_11]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_30 = 0; i_30 < 16; i_30 += 3) 
                    {
                        for (short i_31 = 0; i_31 < 16; i_31 += 4) 
                        {
                            {
                                var_45 = ((/* implicit */signed char) min((var_45), ((signed char)-83)));
                                var_46 = ((/* implicit */int) ((unsigned int) ((9579417327490491954ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((134217728) >= (((/* implicit */int) (unsigned char)242)))))))));
                                arr_95 [i_30] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_89 [i_11] [(short)4] [(short)4] [i_30] [i_30])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_86 [i_30] [i_26] [i_30] [i_31]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (1493411941) : (((/* implicit */int) arr_79 [i_26] [i_27] [i_32]))))) && (((/* implicit */_Bool) ((unsigned long long int) (short)-26138))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (var_7))) >> (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) arr_60 [i_11] [i_26] [i_27] [8LL] [i_32] [(short)2])))) - (54)))))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_75 [i_11]))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_32] [i_27] [i_26]))) + (var_2))))))))));
                        var_48 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((((((/* implicit */int) var_6)) + (2147483647))) >> (((4294967295U) - (4294967292U)))))))) + (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-85))))) / (((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_92 [i_26] [i_26] [i_11] [i_26] [i_27] [i_27])))))))));
                        var_49 = ((/* implicit */long long int) max(((unsigned short)55032), (((/* implicit */unsigned short) (unsigned char)136))));
                        /* LoopSeq 3 */
                        for (unsigned short i_33 = 2; i_33 < 13; i_33 += 1) 
                        {
                            var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-96)) & (((/* implicit */int) (signed char)-87))))) || (((/* implicit */_Bool) var_5))))) >= ((~((+(((/* implicit */int) (signed char)84)))))))))));
                            arr_104 [i_11] [i_32] [i_33 + 2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((((/* implicit */int) arr_99 [i_32] [i_26] [i_27] [i_27] [i_33])) << (((arr_62 [i_32] [i_32] [i_32] [i_32] [i_32] [i_32]) - (1551371375U)))))))) / (var_4)));
                            var_51 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-32766)))))));
                        }
                        for (short i_34 = 1; i_34 < 15; i_34 += 4) 
                        {
                            var_52 = ((/* implicit */short) (+(((((/* implicit */_Bool) 3235431334U)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (short)28893))))));
                            var_53 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)16542))));
                            var_54 = ((/* implicit */short) (~(((/* implicit */int) max((arr_48 [i_34] [i_34] [i_32] [i_32] [i_34] [i_34 - 1]), (arr_54 [i_34 - 1] [i_34] [i_34 + 1] [i_34] [i_34 + 1]))))));
                            var_55 = ((((/* implicit */_Bool) arr_83 [i_26] [i_11])) ? (arr_91 [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_34] [i_11] [i_27] [i_26] [i_11])) || (((/* implicit */_Bool) (signed char)-85)))))));
                        }
                        for (long long int i_35 = 2; i_35 < 14; i_35 += 3) 
                        {
                            arr_110 [(short)15] [(short)15] [i_32] [i_35] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_94 [i_32] [i_35] [9] [i_35 + 1] [i_35])) + (((/* implicit */int) max(((short)-16557), (((/* implicit */short) arr_47 [i_35] [i_35 - 1] [i_35] [(unsigned short)10] [i_32] [i_35 - 2])))))));
                            var_56 = ((/* implicit */unsigned int) ((unsigned long long int) (((!(((/* implicit */_Bool) (signed char)87)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_98 [i_26] [i_27] [i_35])) : (((/* implicit */int) arr_82 [i_32] [i_35]))))))));
                            var_57 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)-16543)), ((unsigned short)8379)));
                        }
                        var_58 = (((-(((((/* implicit */_Bool) arr_40 [i_11] [i_11])) ? (((/* implicit */int) (short)-28894)) : (((/* implicit */int) (signed char)-124)))))) / (((/* implicit */int) ((signed char) ((arr_63 [i_11]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-28894))))))));
                    }
                }
            } 
        } 
    }
    var_59 = ((/* implicit */unsigned long long int) var_5);
    var_60 = ((/* implicit */long long int) var_8);
    var_61 = ((/* implicit */unsigned short) var_8);
}
