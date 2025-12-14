/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161695
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
    var_14 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [(signed char)8] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((int) (+(var_6))))), (min((5489024445199390873ULL), (12957719628510160726ULL)))));
                    var_15 += ((/* implicit */unsigned short) arr_7 [i_0] [i_0 - 1]);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_16 -= ((/* implicit */long long int) (_Bool)0);
                                arr_14 [i_4] [i_1] [1U] [i_1] [i_1] [i_0] = ((/* implicit */int) var_7);
                                var_17 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))), (5489024445199390904ULL))), (((/* implicit */unsigned long long int) max(((+(var_10))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_8)))))))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_10 [i_0] [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3]))) : (max((((/* implicit */unsigned long long int) var_10)), (arr_0 [1ULL])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        arr_17 [(unsigned char)5] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) ? (5489024445199390904ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15832)))));
                    }
                    for (short i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */_Bool) (+(min((var_10), (((/* implicit */int) var_13))))));
                        arr_21 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (short)-11768);
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_5))));
        arr_22 [i_0] [i_0] = ((/* implicit */signed char) ((int) max((((/* implicit */unsigned long long int) var_4)), (281474976710640ULL))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_8 = 3; i_8 < 13; i_8 += 3) 
            {
                /* LoopSeq 4 */
                for (int i_9 = 1; i_9 < 11; i_9 += 4) 
                {
                    var_22 = ((/* implicit */int) (((_Bool)1) ? (5489024445199390904ULL) : (12957719628510160710ULL)));
                    arr_34 [(unsigned char)10] [i_7] [i_8] [(unsigned char)10] [i_9] [(unsigned short)5] = ((((/* implicit */_Bool) (~(var_4)))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) var_7)));
                    arr_35 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((((/* implicit */int) var_8)) - (31)))))) ? ((((_Bool)0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))) : (((var_9) ? (((/* implicit */int) arr_31 [i_0] [i_7] [i_0] [7ULL])) : (((/* implicit */int) (_Bool)1)))));
                }
                for (unsigned short i_10 = 3; i_10 < 12; i_10 += 2) 
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) * (((((/* implicit */unsigned long long int) var_10)) * (arr_23 [i_0 + 1])))));
                    var_24 &= ((/* implicit */int) ((((/* implicit */_Bool) (short)-15819)) ? ((((_Bool)1) ? (12957719628510160728ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [0] [3ULL]))))) : ((+(5489024445199390874ULL)))));
                }
                for (long long int i_11 = 1; i_11 < 13; i_11 += 4) 
                {
                    var_25 += ((/* implicit */int) (!(((/* implicit */_Bool) 7639587371259027ULL))));
                    arr_41 [i_11] [i_7] [2] [i_11 + 1] &= ((/* implicit */long long int) ((unsigned short) (unsigned short)21147));
                    var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                }
                for (unsigned long long int i_12 = 3; i_12 < 13; i_12 += 3) 
                {
                    var_27 &= ((/* implicit */int) ((_Bool) 16423755172456962208ULL));
                    arr_44 [i_0] [i_7] [i_7] [i_7] [5] [i_12] = ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) * (5489024445199390890ULL)))));
                    var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1048544LL))));
                    var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-81)) ? (arr_0 [i_12]) : (((/* implicit */unsigned long long int) 2147483639))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((16423755172456962208ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                }
                var_30 = (+(((/* implicit */int) (short)32767)));
                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
            }
            for (int i_13 = 1; i_13 < 12; i_13 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_14 = 0; i_14 < 14; i_14 += 4) 
                {
                    var_32 = ((/* implicit */short) arr_32 [i_0] [i_0] [i_13 + 2] [(_Bool)1]);
                    arr_51 [i_0] [i_0] [8ULL] [i_0] [i_13] [i_14] = (+((-(arr_2 [i_0] [i_7] [i_13]))));
                    arr_52 [i_0] [i_7] [i_7] [i_0] = ((/* implicit */unsigned long long int) arr_42 [i_14] [i_14] [i_0 + 3] [i_7] [(unsigned char)3] [i_0 + 3]);
                }
                arr_53 [i_13] [i_7] [i_13 + 1] = ((/* implicit */_Bool) var_11);
            }
            for (int i_15 = 0; i_15 < 14; i_15 += 1) 
            {
                /* LoopSeq 3 */
                for (int i_16 = 1; i_16 < 11; i_16 += 2) 
                {
                    arr_60 [i_7] [i_7] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)113))) > (var_4)));
                    var_33 = ((/* implicit */signed char) arr_0 [i_16]);
                }
                for (unsigned long long int i_17 = 2; i_17 < 11; i_17 += 4) 
                {
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned short)58064)) : (var_5)));
                    arr_63 [i_17] [i_7] [i_7] [i_0] = ((/* implicit */short) var_9);
                    var_35 -= ((/* implicit */signed char) (_Bool)1);
                    var_36 += ((/* implicit */unsigned short) var_11);
                    arr_64 [(short)12] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 2926522485756817968ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-85))))));
                }
                for (unsigned short i_18 = 2; i_18 < 13; i_18 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_72 [i_0 + 1] [i_7] [i_19] [3] [i_19] [i_19] [i_19] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)44390))))));
                        var_37 = ((/* implicit */_Bool) (signed char)85);
                    }
                    arr_73 [i_15] [i_7] [i_15] [i_18 + 1] &= ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                    /* LoopSeq 1 */
                    for (int i_20 = 1; i_20 < 10; i_20 += 4) 
                    {
                        arr_76 [i_0] [i_7] [i_15] [i_18] [i_18 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)32766))));
                        arr_77 [i_0] [i_0] [i_15] [i_18] [i_0] [i_20 + 3] = ((/* implicit */unsigned long long int) 2122367996886385767LL);
                        var_38 &= ((/* implicit */signed char) var_13);
                        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((unsigned char) 12957719628510160695ULL)))));
                    }
                    var_40 &= ((/* implicit */short) ((((/* implicit */_Bool) 8962231599939579923ULL)) ? (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-96)) + (2147483647))) << (((3769354991U) - (3769354991U)))))) : (var_4)));
                }
                arr_78 [i_0] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                for (unsigned char i_21 = 0; i_21 < 14; i_21 += 3) 
                {
                    arr_81 [i_21] [i_21] [i_21] [10] [(short)11] = ((/* implicit */long long int) (+(var_6)));
                    arr_82 [(unsigned char)5] [i_15] [i_7] [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_46 [i_7]))) ? (((/* implicit */int) var_9)) : ((+(1536917262)))));
                }
            }
            arr_83 [i_0 - 1] = (+(7958116496857717336ULL));
            var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [(unsigned short)11])) == (((/* implicit */int) var_7))));
            var_42 = ((/* implicit */short) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_12))));
        }
        for (unsigned char i_22 = 1; i_22 < 13; i_22 += 4) 
        {
            arr_87 [i_0 + 4] [i_0] [(_Bool)1] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((int) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            var_43 = ((/* implicit */short) var_9);
            arr_88 [i_0] = ((max(((!(((/* implicit */_Bool) (unsigned short)16368)))), (max((var_9), (var_9))))) ? (12957719628510160712ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 4915360107290311015ULL)) ? (((/* implicit */unsigned int) 0)) : (1071644672U))) == (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)8804))))))))));
        }
        for (unsigned long long int i_23 = 4; i_23 < 11; i_23 += 2) 
        {
            var_44 = ((/* implicit */short) max(((+(((/* implicit */int) (short)-2427)))), (((/* implicit */int) (short)-17295))));
            /* LoopNest 3 */
            for (signed char i_24 = 0; i_24 < 14; i_24 += 4) 
            {
                for (int i_25 = 3; i_25 < 12; i_25 += 3) 
                {
                    for (int i_26 = 0; i_26 < 14; i_26 += 3) 
                    {
                        {
                            arr_100 [7] [7] [i_24] [i_25] [(signed char)1] [i_26] = (-(var_6));
                            arr_101 [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) arr_62 [i_0] [i_23 - 4] [(short)7] [i_25] [(signed char)2])) ? (((((_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_74 [i_0] [(_Bool)1] [i_23] [i_24] [i_25 + 2] [i_25 - 1] [i_26]) : (((/* implicit */int) var_0))))) : (6102451506419590536ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_65 [(unsigned char)12] [i_24] [i_23] [i_0 + 3])))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_27 = 0; i_27 < 14; i_27 += 1) 
        {
            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) (-(2147483629))))));
            var_46 = ((/* implicit */short) max((var_46), (var_13)));
            /* LoopNest 2 */
            for (int i_28 = 1; i_28 < 12; i_28 += 4) 
            {
                for (int i_29 = 0; i_29 < 14; i_29 += 3) 
                {
                    {
                        arr_111 [i_0] [(short)11] [i_28] [i_28] [i_29] [i_29] = ((/* implicit */int) var_13);
                        var_47 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_28] [i_28] [i_28 + 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) arr_30 [i_29] [i_29] [i_28 - 1])))) : (max((((/* implicit */int) (signed char)108)), (var_5)))));
                        var_48 += ((/* implicit */short) var_4);
                        var_49 = ((/* implicit */short) 4503599090499584ULL);
                        /* LoopSeq 2 */
                        for (int i_30 = 4; i_30 < 13; i_30 += 4) 
                        {
                            var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) var_11))));
                            var_51 = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */short) (unsigned char)131)), (var_2))))))) > ((+(4230081524622283754LL)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_31 = 0; i_31 < 14; i_31 += 4) 
                        {
                            arr_116 [i_31] [i_29] [i_28] [i_27] [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3223322624U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))) : (((unsigned int) -2025619827))));
                            var_52 *= ((/* implicit */_Bool) (short)(-32767 - 1));
                        }
                    }
                } 
            } 
        }
    }
    for (int i_32 = 1; i_32 < 19; i_32 += 4) 
    {
        arr_119 [i_32 + 2] |= ((/* implicit */_Bool) 655863683);
        arr_120 [i_32] [i_32] = ((/* implicit */unsigned short) min((var_10), (-690021707)));
        var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_117 [i_32 + 2]) / (arr_117 [i_32 - 1])))) ? (max((arr_117 [i_32 - 1]), (((/* implicit */int) var_12)))) : (((/* implicit */int) ((arr_117 [i_32 + 2]) > (((/* implicit */int) var_7)))))));
    }
    for (long long int i_33 = 1; i_33 < 23; i_33 += 2) 
    {
        arr_123 [(unsigned char)22] |= ((/* implicit */_Bool) ((unsigned char) ((-671764685) + (var_11))));
        var_54 = ((/* implicit */short) 5489024445199390884ULL);
        arr_124 [(unsigned char)16] &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_34 = 0; i_34 < 25; i_34 += 3) 
    {
        arr_129 [i_34] [i_34] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_0))));
        var_55 *= ((_Bool) -657929785);
        var_56 *= ((/* implicit */unsigned char) var_13);
    }
    for (short i_35 = 0; i_35 < 21; i_35 += 3) 
    {
        var_57 = ((long long int) var_9);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_36 = 0; i_36 < 21; i_36 += 2) 
        {
            arr_136 [i_35] [(short)13] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)11))));
            var_58 = ((/* implicit */long long int) arr_122 [i_35]);
            arr_137 [i_35] [i_36] [(short)5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (arr_133 [i_36] [i_36])));
            var_59 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_125 [i_35] [i_36]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)148)) > (var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        }
        var_60 ^= ((/* implicit */unsigned char) ((868592710) | (1690364618)));
    }
}
