/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154403
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
    var_11 += ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max(((_Bool)0), ((_Bool)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8)))) ? (((/* implicit */unsigned long long int) ((long long int) var_3))) : (max((var_9), (var_5))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [0LL] &= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3420621582U)) * (arr_2 [i_2 + 1])))) ? (((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (arr_2 [i_2 - 1]) : (arr_2 [i_2 - 1]))) : (arr_2 [i_2 + 1]));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2)))) : (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) var_4))))));
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) arr_13 [8ULL] [i_1] [i_2] [i_2] [i_3] [i_4]))));
                            arr_14 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */long long int) ((unsigned char) arr_1 [i_3] [i_4]));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_3] [i_5]);
                            arr_17 [i_0] [i_3] [i_2] [i_0] [(unsigned short)4] [i_1] &= ((/* implicit */unsigned short) var_6);
                        }
                        arr_18 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) var_5);
                    }
                    var_15 = ((/* implicit */int) var_3);
                    arr_19 [i_1] [i_1] = ((/* implicit */int) var_6);
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_6 = 1; i_6 < 9; i_6 += 1) 
        {
            for (unsigned char i_7 = 2; i_7 < 10; i_7 += 1) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_28 [i_6] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((var_7) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_16 [i_6] [i_6] [i_7] [i_8] [i_8] [i_6])))), (((/* implicit */int) ((_Bool) 7114351903321043689ULL))))))));
                        var_16 &= ((/* implicit */unsigned long long int) max((arr_11 [i_0] [i_8] [i_7] [i_8] [i_6] [i_6] [i_6]), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_5 [i_6] [i_6])) : (var_9)))))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_21 [i_0])))) / (((/* implicit */int) var_3))))))))));
    }
    for (unsigned long long int i_9 = 3; i_9 < 17; i_9 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (unsigned char)218))));
        /* LoopSeq 1 */
        for (unsigned char i_10 = 2; i_10 < 20; i_10 += 3) 
        {
            var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_10])) ? (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_30 [i_9]))) : (((/* implicit */long long int) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((arr_31 [i_9]) - (1516468995U))))))))), ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3925523426498529384ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_30 [i_9]) : (arr_30 [i_10]))))))));
            /* LoopSeq 3 */
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_12 = 3; i_12 < 18; i_12 += 3) 
                {
                    var_20 = ((/* implicit */int) var_3);
                    var_21 *= ((/* implicit */unsigned long long int) ((((_Bool) ((long long int) var_7))) ? (((/* implicit */int) max((((/* implicit */short) var_3)), (var_2)))) : (((/* implicit */int) ((_Bool) var_8)))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) (unsigned short)8741)), (var_9))))) >= (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_7)), ((unsigned char)183))))))))))));
                    arr_39 [i_10] = ((/* implicit */signed char) ((unsigned short) min((((var_10) * (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_9] [i_10] [i_11] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_31 [i_9])))) ? (var_5) : (((((/* implicit */_Bool) 6802043943086467577LL)) ? (13691804285125897576ULL) : (((/* implicit */unsigned long long int) 1461941038U))))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_34 [i_12] [i_10] [i_10] [i_9])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) ((signed char) var_9)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_13 = 2; i_13 < 20; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) (unsigned char)253);
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-22814)) >= (arr_33 [4] [i_11] [i_11]))))) : (((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_10] [i_13]))))))))));
                        var_26 = ((/* implicit */unsigned int) var_5);
                        var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((9223372036854775807LL) / (arr_45 [(signed char)18])))));
                        var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [(_Bool)1])) ? (((/* implicit */int) arr_34 [i_9] [16LL] [i_13 - 2] [i_13])) : (((/* implicit */int) arr_34 [i_9] [6ULL] [i_13 - 1] [i_13]))));
                    }
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_41 [i_9] [i_11]))));
                }
                for (unsigned long long int i_15 = 1; i_15 < 20; i_15 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 2; i_16 < 20; i_16 += 3) 
                    {
                        var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)32)) - (3)))))));
                        arr_53 [i_9] [i_10] [i_10] [i_11] [i_15] [i_10] = ((/* implicit */long long int) ((unsigned short) (unsigned short)12024));
                        var_31 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9] [(unsigned short)2] [i_11] [i_15])))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) ? (var_5) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))) ^ (var_9)))));
                        var_32 += ((/* implicit */short) (-(((unsigned long long int) -1843514002))));
                        arr_54 [i_10] [i_10] = ((/* implicit */unsigned short) max((((/* implicit */int) (short)6841)), (((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_47 [i_10])))) ? (((((/* implicit */_Bool) arr_50 [i_9] [i_10] [i_11] [i_15] [i_16])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_38 [i_9] [i_10] [i_11] [i_9])))) : (((/* implicit */int) ((_Bool) var_1)))))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        arr_59 [i_10] = ((/* implicit */unsigned char) var_9);
                        var_33 = 15555100096975854402ULL;
                        var_34 += ((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_51 [i_9] [i_10] [i_11] [i_15] [18])), (var_6)))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-1)))) : (((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) arr_32 [i_9] [i_9])) : (((/* implicit */int) arr_51 [i_9] [i_11] [i_11] [i_15] [(unsigned short)14]))))))) ^ (((((_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_9] [i_10]))) : (((var_0) ? (((/* implicit */long long int) 1244086352U)) : (var_4))))));
                    }
                    var_35 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_31 [i_9 - 3]) * (arr_31 [i_15 + 1])))), (((arr_36 [i_9] [i_15]) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_9] [i_10] [i_9] [i_15] [i_11])))))));
                    arr_60 [i_9] [i_10] [i_11] [i_15] = var_1;
                }
                for (unsigned char i_18 = 1; i_18 < 19; i_18 += 3) 
                {
                    var_36 = ((/* implicit */long long int) (_Bool)0);
                    var_37 *= ((/* implicit */unsigned long long int) ((int) (short)-1));
                }
                arr_63 [i_10] [i_10] [i_11] [i_10] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_1)), ((((_Bool)1) ? (((3804421100318877864ULL) / (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46788)))))));
                var_38 += ((/* implicit */unsigned char) max((((long long int) max((arr_44 [i_9] [14LL] [i_9] [i_9] [i_9]), (((/* implicit */unsigned int) (short)-2048))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)34032)) / (((/* implicit */int) (unsigned char)243)))))));
            }
            for (unsigned int i_19 = 1; i_19 < 18; i_19 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_20 = 2; i_20 < 20; i_20 += 1) 
                {
                    var_39 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_4)), (max((((unsigned long long int) arr_32 [i_19] [i_10])), (((/* implicit */unsigned long long int) ((_Bool) var_0)))))));
                    var_40 *= ((((/* implicit */_Bool) ((short) 2864609419328739525ULL))) && (((/* implicit */_Bool) (unsigned char)193)));
                    var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) var_7))));
                }
                var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) arr_56 [i_9] [i_10] [i_10] [i_10] [i_19] [i_19] [i_19]))));
                /* LoopNest 2 */
                for (int i_21 = 2; i_21 < 19; i_21 += 1) 
                {
                    for (unsigned int i_22 = 1; i_22 < 20; i_22 += 1) 
                    {
                        {
                            arr_76 [i_10] [i_19] [i_10] [i_22] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) (unsigned short)26184))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_22] [i_21] [i_19] [i_10] [i_9]))) : (arr_70 [i_9] [i_10] [i_10] [i_19] [i_21] [i_22]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (var_6)))))));
                            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (_Bool)1))));
                            var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)3738))) + (var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)55873)) ? (((/* implicit */int) arr_51 [i_9] [i_9] [i_19] [i_21] [(unsigned short)2])) : (((/* implicit */int) (unsigned short)63816))))))) : (max((((/* implicit */unsigned long long int) (unsigned short)9662)), (max((((/* implicit */unsigned long long int) var_7)), (var_5))))))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 3) 
            {
                var_45 = ((/* implicit */_Bool) arr_71 [i_9] [i_23] [i_23] [i_9] [i_10]);
                var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) ? (((unsigned long long int) max((((/* implicit */unsigned long long int) (short)3708)), (var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1)))) : (var_8)))))))));
                /* LoopSeq 4 */
                for (long long int i_24 = 0; i_24 < 21; i_24 += 3) 
                {
                    arr_83 [i_9] [i_10] [i_10] [i_24] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65514)) ? (((/* implicit */unsigned long long int) 3513901833U)) : (8340018786148476531ULL))));
                    arr_84 [i_9] [i_10] [i_23] [i_10] = ((((((/* implicit */_Bool) var_10)) ? (arr_66 [i_9 - 3] [i_10 - 1]) : (((/* implicit */unsigned long long int) -547132808)))) / (arr_66 [i_9 + 4] [i_10 - 1]));
                }
                for (long long int i_25 = 4; i_25 < 17; i_25 += 3) /* same iter space */
                {
                    var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_82 [i_9] [i_9] [i_10] [i_10] [i_23] [i_25])) & (((/* implicit */int) var_2))))) : (var_6)))) ? (-8108435654446103137LL) : (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_43 [i_9] [i_10] [i_25])), ((unsigned short)55862))))) : (arr_67 [i_25 - 2] [i_25] [i_10 - 2] [i_9 + 1]))))))));
                    var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) 1580239708509794405ULL))));
                }
                /* vectorizable */
                for (long long int i_26 = 4; i_26 < 17; i_26 += 3) /* same iter space */
                {
                    var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_89 [18LL] [i_10] [i_23] [i_26])) | (2304717109306851328LL)))) : (arr_62 [i_10 - 1] [i_23] [i_9 - 3] [i_26]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        var_50 += (unsigned short)65527;
                        var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 781065462U)) ? (16904672863942778722ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 4397286942287369983ULL)))))))));
                    }
                    for (unsigned int i_28 = 0; i_28 < 21; i_28 += 3) 
                    {
                        var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */unsigned long long int) arr_30 [i_10])) : (var_10)));
                        var_53 = ((/* implicit */unsigned short) var_2);
                    }
                }
                for (long long int i_29 = 4; i_29 < 17; i_29 += 3) /* same iter space */
                {
                    var_54 |= ((/* implicit */unsigned long long int) arr_51 [i_9] [i_10] [i_10] [i_23] [12LL]);
                    arr_100 [i_9] [i_10] [i_23] [i_10] [i_29] = ((/* implicit */unsigned char) ((unsigned short) 3513901852U));
                    var_55 *= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_47 [18LL])) ? ((((_Bool)1) ? (((/* implicit */int) arr_41 [i_9] [i_10])) : (arr_98 [i_9] [i_9] [i_10] [i_23] [i_29]))) : (((/* implicit */int) ((unsigned short) (_Bool)1))))));
                }
            }
        }
        var_56 = ((/* implicit */unsigned char) max((var_56), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 69805794224242688LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)234)))))));
    }
}
