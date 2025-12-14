/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110840
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
    var_13 = ((/* implicit */unsigned long long int) ((signed char) max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)65)) & (((/* implicit */int) (unsigned short)51212))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) var_10);
                    var_15 *= ((/* implicit */short) (-(arr_2 [i_0])));
                    var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) 535838753)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))) : (16608895837073647850ULL)))));
                    var_17 = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_2] [(_Bool)1]);
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+(max((-535838770), (((/* implicit */int) ((short) arr_0 [i_3]))))))))));
        var_19 = ((((arr_6 [i_3] [i_3]) ? (((/* implicit */int) ((_Bool) 535838770))) : (((((/* implicit */_Bool) var_11)) ? (-1110831503) : (-1110831503))))) <= (((((/* implicit */_Bool) ((signed char) 1110831503))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (var_11)))))));
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_8 [i_3]) ? ((+(1787917200))) : (((/* implicit */int) ((unsigned char) var_2))))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 13; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) (short)-3569);
                                var_22 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)504))))) ? ((~(arr_18 [i_7] [i_7] [i_7] [i_7] [i_7 + 2] [i_7] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
                                var_23 = (+(((var_12) & (((((/* implicit */_Bool) var_0)) ? (var_9) : (var_9))))));
                                var_24 = ((/* implicit */_Bool) arr_0 [i_3]);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) var_8);
                    var_26 = ((/* implicit */unsigned char) var_11);
                    var_27 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((-535838780), (((/* implicit */int) arr_8 [i_4]))))) ? (0ULL) : (arr_0 [i_3]))), (max(((~(var_11))), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned short) var_5)))))))));
                }
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_8] [i_9] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (var_1))))));
                    var_29 = ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((-1110831512) + (1110831539)))))) == (((unsigned long long int) var_12)));
                    var_30 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))) == (arr_7 [i_9]));
                    var_31 ^= 18446744073709551615ULL;
                }
                /* LoopNest 2 */
                for (short i_12 = 4; i_12 < 11; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 1; i_13 < 12; i_13 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */short) ((unsigned long long int) min((535838753), (((/* implicit */int) var_3)))));
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_0)))) ? ((~(((/* implicit */int) ((((/* implicit */int) (short)-3589)) <= (((/* implicit */int) (unsigned char)121))))))) : ((~(((/* implicit */int) ((((/* implicit */int) arr_5 [i_8] [i_9] [i_10] [15ULL])) == (((/* implicit */int) var_3)))))))));
                        }
                    } 
                } 
            }
            var_34 = ((/* implicit */short) (+(((/* implicit */int) (short)(-32767 - 1)))));
            var_35 *= ((/* implicit */short) arr_8 [i_8]);
            var_36 = ((/* implicit */unsigned char) var_12);
        }
        for (unsigned char i_14 = 2; i_14 < 12; i_14 += 4) 
        {
            var_37 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((_Bool) arr_35 [i_8]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8]))) : (18136154008274768760ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3569)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_33 [i_8] [i_8] [i_8] [(_Bool)1] [i_8] [11ULL] [i_14]))))) : (var_0)))));
            /* LoopSeq 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_38 = ((/* implicit */short) ((unsigned long long int) var_5));
                var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-5543)) & (-535838770)));
            }
            for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                var_40 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_29 [i_16] [(unsigned char)4] [(unsigned char)4]), (((/* implicit */unsigned char) (signed char)74)))))))) | (((((/* implicit */_Bool) arr_40 [i_8] [i_8] [i_8])) ? (((((/* implicit */_Bool) arr_18 [i_8] [1ULL] [i_16] [i_8] [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (7676108392168413987ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_8] [i_8])) == (((/* implicit */int) arr_12 [i_8] [12ULL] [i_16])))))))));
                var_41 = ((/* implicit */int) ((unsigned char) ((-1110831493) <= (((/* implicit */int) (_Bool)0)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 4) 
                {
                    var_42 = ((/* implicit */int) arr_11 [2ULL] [14] [i_17]);
                    var_43 = ((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_8])) ? (((/* implicit */int) (short)5543)) : (((/* implicit */int) (_Bool)1))))));
                }
                /* vectorizable */
                for (unsigned char i_18 = 3; i_18 < 12; i_18 += 4) 
                {
                    var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)190)))))));
                    var_45 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (short)-5555)) ? (((/* implicit */int) arr_30 [i_8] [i_8] [(unsigned char)6] [i_8])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_12 [i_16] [i_16] [i_16]))));
                }
                for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 4) 
                {
                    var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) arr_26 [i_8]))));
                    /* LoopSeq 3 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned long long int) 1919921314);
                        var_48 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((((/* implicit */_Bool) arr_22 [i_8] [i_8])) ? (arr_41 [i_16] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))))) : (((/* implicit */unsigned long long int) ((-535838774) & (((/* implicit */int) var_8))))))));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        var_49 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))))));
                        var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) min(((~(((((/* implicit */_Bool) arr_2 [i_14])) ? (var_9) : (arr_1 [i_16]))))), (((arr_13 [i_14] [i_16] [i_19] [(_Bool)1]) ? (((unsigned long long int) arr_24 [i_8])) : (((((/* implicit */_Bool) (short)-5543)) ? (var_11) : (((/* implicit */unsigned long long int) var_6)))))))))));
                    }
                    for (unsigned long long int i_22 = 1; i_22 < 11; i_22 += 4) 
                    {
                        var_51 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))));
                        var_52 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    }
                }
                var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) arr_45 [i_8] [(unsigned char)0] [i_16] [i_14] [i_8] [i_8]))));
                var_54 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -535838792)) ? (-11) : (((/* implicit */int) (unsigned short)14841))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8] [i_8] [i_8]))) : ((~(9214639682836392883ULL))))));
            }
            for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 0; i_24 < 13; i_24 += 4) 
                {
                    for (unsigned short i_25 = 0; i_25 < 13; i_25 += 4) 
                    {
                        {
                            var_55 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3569)) ? (((((unsigned long long int) 10)) << (((((unsigned long long int) -535838794)) - (18446744073173712820ULL))))) : (((unsigned long long int) ((signed char) arr_56 [(_Bool)1] [i_8] [i_14] [i_23] [i_24] [(_Bool)1])))));
                            var_56 = ((/* implicit */int) max((var_56), ((-((+(((/* implicit */int) ((short) var_0)))))))));
                        }
                    } 
                } 
                var_57 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_60 [i_14 - 2] [i_14] [i_14 - 2] [6ULL])))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) ((signed char) arr_49 [i_14 - 1] [(short)4] [i_14 + 1] [i_23] [i_23])))));
                var_58 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) 5876919973320210502ULL)));
            }
        }
        var_59 = (~((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (var_12))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_31 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))));
        var_60 = ((((/* implicit */_Bool) min(((unsigned char)127), (((/* implicit */unsigned char) (!((_Bool)1))))))) && (((/* implicit */_Bool) var_11)));
        /* LoopNest 3 */
        for (int i_26 = 0; i_26 < 13; i_26 += 4) 
        {
            for (unsigned long long int i_27 = 0; i_27 < 13; i_27 += 4) 
            {
                for (unsigned long long int i_28 = 0; i_28 < 13; i_28 += 4) 
                {
                    {
                        var_61 = (~((-(var_1))));
                        var_62 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)170)))) % (((/* implicit */int) arr_26 [i_8]))))) ? (((max((((/* implicit */unsigned long long int) var_7)), (9214639682836392890ULL))) | (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_50 [i_8] [i_26] [i_27]))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_29 = 0; i_29 < 13; i_29 += 4) /* same iter space */
    {
        var_63 &= ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (3483918937561010779ULL))))));
        var_64 ^= ((max((((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_29] [i_29] [11ULL]))))), (((/* implicit */unsigned long long int) arr_30 [i_29] [i_29] [i_29] [i_29])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31134))));
    }
    for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
    {
        var_65 = ((/* implicit */int) min((var_65), (((/* implicit */int) max((min((var_1), (((/* implicit */unsigned long long int) arr_74 [(_Bool)1] [i_30])))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_75 [i_30] [4])) : (((/* implicit */int) arr_75 [i_30] [4ULL]))))) ? (var_11) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)7085))))))))))));
        var_66 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_30] [i_30]))) : (var_1))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_11))))))), (((((-1245550717) + (2147483647))) >> (((18446744073709551615ULL) - (18446744073709551613ULL)))))));
        var_67 = ((/* implicit */unsigned long long int) arr_74 [i_30] [i_30]);
        var_68 = ((((/* implicit */_Bool) min(((-(((/* implicit */int) (short)11679)))), (((/* implicit */int) ((var_6) < (((/* implicit */int) arr_75 [i_30] [i_30])))))))) ? (((/* implicit */int) ((var_12) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */int) arr_74 [i_30] [i_30 + 1])) + (((/* implicit */int) arr_75 [i_30] [i_30])))));
    }
}
