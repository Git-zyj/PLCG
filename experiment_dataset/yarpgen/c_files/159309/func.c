/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159309
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((min((2593641376U), (((var_18) ? (arr_1 [i_0]) : (arr_0 [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5111210895628826619ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        var_20 = ((/* implicit */int) ((var_18) ? ((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) var_0)) : (arr_0 [i_0])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) -411619013)) : (var_4))))) : (((/* implicit */long long int) ((arr_0 [i_0 + 1]) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)172))))))))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_21 = ((/* implicit */short) ((signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) ^ ((+(((/* implicit */int) (_Bool)1)))))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned short) (_Bool)1)), (arr_4 [(unsigned char)6]))), (((/* implicit */unsigned short) ((_Bool) (signed char)-43)))))) ? (min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [6])))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_4 [2U])))))) : (((((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */unsigned short) (short)-27400))))) ? ((~(((/* implicit */int) (short)14138)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-87)), (var_13)))))))))));
        /* LoopSeq 1 */
        for (int i_2 = 3; i_2 < 13; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)101)) & (((/* implicit */int) (signed char)-96)))), (((/* implicit */int) max((arr_5 [i_1] [i_2 - 1]), (arr_5 [i_1] [i_2 - 1]))))));
            var_24 = min((((short) ((((/* implicit */int) arr_4 [i_1])) > (((/* implicit */int) arr_4 [i_1]))))), (((/* implicit */short) ((((/* implicit */int) arr_4 [i_1])) > (((/* implicit */int) arr_4 [i_1]))))));
            arr_8 [i_1] [i_1] = ((/* implicit */signed char) max(((!((!(((/* implicit */_Bool) (short)0)))))), ((!(((/* implicit */_Bool) arr_6 [i_1] [i_2 - 2] [i_2 + 1]))))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (unsigned short i_4 = 1; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (signed char)46)))) + (((/* implicit */int) (!(((/* implicit */_Bool) (short)32748)))))));
                            var_26 = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_4]))) < (arr_10 [i_2 - 2] [i_3]))) ? (min((((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_4] [i_5])), (arr_10 [i_1] [i_4 - 1]))) : (((/* implicit */unsigned int) arr_13 [i_1] [i_2 - 2] [i_3] [8ULL] [i_1] [i_1])));
                        }
                    } 
                } 
            } 
            var_27 ^= ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(_Bool)0]))) > (min(((-(var_17))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (signed char)5))))))));
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)79))));
            var_29 ^= ((/* implicit */unsigned char) arr_20 [i_6]);
            var_30 = ((/* implicit */_Bool) ((signed char) ((unsigned short) arr_18 [i_6])));
        }
        /* LoopSeq 1 */
        for (unsigned short i_8 = 4; i_8 < 14; i_8 += 4) 
        {
            var_31 = ((/* implicit */unsigned char) arr_21 [i_6] [i_6] [14]);
            /* LoopSeq 1 */
            for (signed char i_9 = 2; i_9 < 12; i_9 += 3) 
            {
                var_32 = ((/* implicit */short) (signed char)-120);
                var_33 ^= ((((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) 9223372036854775789LL)))) ? (min((arr_22 [i_8 + 1] [i_9 + 1]), (((/* implicit */int) var_13)))) : (((/* implicit */int) var_10)));
            }
        }
        var_34 = ((/* implicit */unsigned char) ((_Bool) max((var_11), (((/* implicit */unsigned long long int) arr_24 [i_6] [i_6] [i_6])))));
    }
    /* LoopNest 2 */
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    var_35 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((-1203974103), (((/* implicit */int) var_14))))), (-9223372036854775780LL)))) ? ((+(arr_34 [i_10 - 1] [i_12] [i_12]))) : (((/* implicit */long long int) max((((/* implicit */int) arr_31 [i_10 - 1] [i_11] [i_12])), ((+(arr_32 [i_10] [i_10] [i_10 - 1]))))))));
                    var_36 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (var_11));
                    arr_36 [i_10] [i_11] [i_11] = ((/* implicit */unsigned long long int) (+(((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_31 [i_12] [i_12] [i_12])))) * (arr_32 [i_10] [i_10 - 1] [i_10])))));
                    /* LoopNest 2 */
                    for (signed char i_13 = 2; i_13 < 17; i_13 += 3) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            {
                                arr_41 [i_11] [i_13 + 4] [i_10] = ((/* implicit */signed char) max((((/* implicit */long long int) (short)15064)), (((long long int) arr_38 [i_10] [i_10 - 1]))));
                                var_37 ^= ((/* implicit */_Bool) arr_39 [i_10 - 1] [i_10] [i_11] [i_11] [i_12] [i_13] [i_14]);
                                var_38 ^= ((/* implicit */unsigned short) min(((((~(2147483647))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))))))), (((/* implicit */int) (!(((var_1) > (((/* implicit */int) (unsigned char)255)))))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 4 */
                for (unsigned int i_15 = 2; i_15 < 17; i_15 += 4) 
                {
                    var_39 ^= (-((+(((/* implicit */int) arr_31 [i_15 + 4] [i_15] [i_15])))));
                    /* LoopSeq 1 */
                    for (int i_16 = 4; i_16 < 18; i_16 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned long long int) ((int) var_5))), (5626894721378494598ULL)))))));
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_35 [i_10] [i_10] [i_10] [(short)16]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)244)), (arr_45 [i_10] [i_11] [i_15] [i_15])))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_35 [i_16] [i_16] [i_10] [i_16])) : (var_0)))))) ? (((/* implicit */int) arr_37 [i_10] [i_11] [i_11])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_10])) && ((_Bool)0))))));
                        arr_46 [i_10] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) max((max((15730941985205984072ULL), (((/* implicit */unsigned long long int) ((unsigned short) arr_33 [i_10] [i_10]))))), (arr_44 [i_10] [i_10] [i_10] [i_10] [i_10])));
                    }
                }
                for (unsigned char i_17 = 0; i_17 < 21; i_17 += 1) /* same iter space */
                {
                    var_42 = (!(((((/* implicit */_Bool) max(((unsigned short)62996), (((/* implicit */unsigned short) arr_43 [i_11] [i_11] [i_11] [i_11]))))) || ((_Bool)1))));
                    var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) (-(max(((~(((/* implicit */int) arr_43 [i_10] [i_11] [i_17] [i_17])))), ((~(((/* implicit */int) var_3)))))))))));
                }
                for (unsigned char i_18 = 0; i_18 < 21; i_18 += 1) /* same iter space */
                {
                    arr_53 [i_10] [i_11] [i_10] = ((/* implicit */unsigned char) (-(((((_Bool) arr_35 [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)136)))) : ((~(((/* implicit */int) var_2))))))));
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), ((+(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) arr_44 [i_10] [2ULL] [i_11] [i_18] [i_11])) ? (((/* implicit */unsigned long long int) arr_47 [i_10] [i_11])) : (18446744073709551615ULL)))))))));
                    var_45 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (~(-1663456651)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_34 [i_10] [i_10] [i_10])) : (5626894721378494599ULL))))), (((/* implicit */unsigned long long int) (+(min((((/* implicit */int) var_7)), (arr_32 [i_10] [i_11] [i_10 - 1]))))))));
                    var_46 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 2147483647)), (((unsigned long long int) 17))));
                }
                for (unsigned char i_19 = 2; i_19 < 19; i_19 += 4) 
                {
                    arr_57 [i_10] [i_11] [i_19] [i_10] = arr_35 [i_10] [i_10] [i_10] [i_10];
                    var_47 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? (((/* implicit */int) max((arr_48 [i_11] [i_19 - 2] [i_11]), (arr_48 [i_19] [i_19 + 1] [i_19])))) : (var_1)));
                    var_48 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) | (2147483646)))), (((unsigned int) var_11))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_20 = 0; i_20 < 18; i_20 += 4) 
    {
        var_49 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_42 [i_20] [i_20] [i_20]), (var_8)))) | (((((((/* implicit */int) (signed char)-87)) + (2147483647))) << (((arr_55 [i_20] [i_20] [i_20] [i_20]) - (3569975134U)))))));
        arr_60 [i_20] [i_20] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_20] [i_20])) ? (-9223372036854775801LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)86)))))) ? (((((/* implicit */int) (short)8125)) ^ (arr_51 [i_20]))) : (((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_49 [i_20] [i_20] [i_20] [(_Bool)1]))))))));
    }
    for (signed char i_21 = 1; i_21 < 18; i_21 += 3) 
    {
        var_50 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)8120))))), (5626894721378494605ULL)));
        /* LoopSeq 4 */
        for (unsigned short i_22 = 0; i_22 < 21; i_22 += 4) 
        {
            arr_65 [i_21] = ((/* implicit */unsigned char) arr_55 [i_21] [i_21] [i_21] [i_21]);
            var_51 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_31 [i_21 + 2] [i_21] [i_21])) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1973062117466192648ULL)) || ((!(((/* implicit */_Bool) var_0)))))))));
            var_52 = (_Bool)1;
        }
        /* vectorizable */
        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
        {
            var_53 = ((/* implicit */unsigned long long int) max((var_53), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_52 [i_21] [19] [i_23])))))));
            var_54 = ((/* implicit */signed char) (-(4955509943679711871ULL)));
        }
        /* vectorizable */
        for (short i_24 = 0; i_24 < 21; i_24 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                var_55 = ((/* implicit */short) arr_73 [i_21 - 1] [i_21]);
                var_56 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_71 [i_21] [4] [i_21 + 2]))));
                var_57 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_67 [i_21])) ? (((/* implicit */int) arr_49 [(unsigned char)0] [(unsigned char)0] [i_21 - 1] [i_21])) : (((/* implicit */int) var_14))));
                var_58 = ((/* implicit */unsigned char) min((var_58), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-87))) : (arr_74 [i_24])))))));
            }
            var_59 ^= ((/* implicit */unsigned char) ((int) arr_68 [i_21 + 1] [i_24] [i_24]));
        }
        for (short i_26 = 0; i_26 < 21; i_26 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_27 = 1; i_27 < 18; i_27 += 4) 
            {
                for (signed char i_28 = 0; i_28 < 21; i_28 += 1) 
                {
                    {
                        arr_81 [i_21] [i_26] [i_21] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned char)0))))), (arr_79 [i_21] [i_21] [(unsigned char)4] [i_28] [i_28]))), (((/* implicit */unsigned long long int) ((int) ((unsigned long long int) var_15))))));
                        arr_82 [i_21] [i_27 + 2] [i_21] = ((/* implicit */short) arr_50 [i_21] [i_21] [i_21] [i_21]);
                        var_60 = ((/* implicit */short) min((var_60), (((/* implicit */short) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) (short)-8113)) && (((/* implicit */_Bool) (signed char)19)))))))) | (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)8130))) | (var_19)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((12819849352331057016ULL) >> (((/* implicit */int) (unsigned char)0)))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_29 = 3; i_29 < 19; i_29 += 4) 
            {
                for (signed char i_30 = 0; i_30 < 21; i_30 += 3) 
                {
                    {
                        var_61 = ((/* implicit */unsigned int) arr_28 [i_21]);
                        var_62 = ((/* implicit */unsigned char) (short)-8106);
                    }
                } 
            } 
            var_63 ^= ((/* implicit */int) arr_33 [i_21] [i_21]);
            var_64 = ((((/* implicit */_Bool) 11994243624061453186ULL)) && (((/* implicit */_Bool) ((unsigned char) ((12819849352331057011ULL) | (((/* implicit */unsigned long long int) var_1)))))));
        }
        var_65 = ((/* implicit */unsigned short) max((((/* implicit */short) var_12)), (((short) (unsigned short)33081))));
    }
}
