/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167135
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
    var_12 = ((/* implicit */int) ((((((/* implicit */int) (short)7116)) < (-1990165223))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_6)) ? (3097183207U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) <= (var_5)))))))));
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_13 |= ((/* implicit */int) (~(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((11774246022585116952ULL) & (11774246022585116952ULL))) : (((/* implicit */unsigned long long int) 1885853660U))))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) && (((((/* implicit */_Bool) arr_0 [i_0 + 1])) && (((/* implicit */_Bool) var_6))))));
        var_15 = ((/* implicit */unsigned int) min((11774246022585116952ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 + 2]))));
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
    }
    for (short i_1 = 2; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32767)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)3), (((/* implicit */unsigned char) arr_2 [i_1 - 2]))))))))) ? (min((min((var_6), (((/* implicit */unsigned int) 16777215)))), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)28)))))))))));
        var_18 &= ((/* implicit */unsigned char) (unsigned short)23979);
        var_19 = ((/* implicit */unsigned long long int) 2409113643U);
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13))) % (1885853660U)));
    }
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 18; i_2 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [i_2 - 2])) : (((/* implicit */int) arr_7 [i_2 - 2])))))));
        var_22 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 6672498051124434664ULL))));
        var_23 = ((/* implicit */unsigned int) arr_7 [i_2 - 1]);
        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_2 - 2]))));
    }
    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [i_3 + 1] [i_3]))));
        var_25 ^= ((/* implicit */short) var_9);
        /* LoopSeq 2 */
        for (unsigned short i_4 = 3; i_4 < 13; i_4 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) arr_11 [i_3 + 1]))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (6672498051124434663ULL)))))), ((-(((/* implicit */int) arr_14 [i_4] [i_3 - 2] [i_3]))))));
            var_27 *= ((/* implicit */unsigned long long int) min(((unsigned char)3), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 14640730593831319720ULL)))))));
            /* LoopSeq 3 */
            for (int i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_6 = 1; i_6 < 13; i_6 += 1) 
                {
                    arr_20 [i_3] [i_6] [i_3] [i_6] = ((/* implicit */unsigned int) arr_19 [i_5 + 1] [i_5 - 1]);
                    var_28 *= ((/* implicit */_Bool) arr_16 [i_3] [i_3 - 1] [i_3 + 2]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 1) /* same iter space */
                    {
                        arr_24 [11ULL] [i_4] [i_5] [i_6] [(unsigned char)4] = ((/* implicit */signed char) 1885853659U);
                        var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-45)) <= (var_5))))));
                        var_30 = ((/* implicit */unsigned short) ((3806013479878231903ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_19 [(unsigned short)9] [i_7 - 1])) : (((/* implicit */int) (unsigned short)46487)))))));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3806013479878231895ULL))));
                        var_32 = ((/* implicit */signed char) arr_25 [i_3] [i_3 + 2] [i_5 + 2] [i_8 - 1]);
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (var_6))))) <= (var_6))))));
                        var_34 = ((/* implicit */unsigned char) var_7);
                        var_35 &= ((short) 1885853659U);
                    }
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 1) 
                    {
                        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) var_8))));
                        arr_34 [i_3 - 1] [i_4 + 2] [i_4 - 2] [i_5 + 3] [i_5 + 1] [i_4 + 2] [i_5 + 1] |= ((/* implicit */unsigned short) var_2);
                        var_37 = ((/* implicit */_Bool) min((var_37), ((!(((/* implicit */_Bool) 11774246022585116953ULL))))));
                    }
                    for (unsigned long long int i_11 = 4; i_11 < 14; i_11 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_29 [i_11] [i_11] [i_9 + 1] [i_3 - 2] [(unsigned char)7]))));
                        var_39 = ((/* implicit */unsigned short) 14640730593831319720ULL);
                    }
                    var_40 = ((/* implicit */signed char) 2409113637U);
                }
                /* vectorizable */
                for (signed char i_12 = 2; i_12 < 13; i_12 += 1) /* same iter space */
                {
                    var_41 = ((/* implicit */int) var_11);
                    arr_42 [(signed char)6] [i_5 - 1] [i_12 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6)));
                }
                for (signed char i_13 = 2; i_13 < 13; i_13 += 1) /* same iter space */
                {
                    var_42 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) arr_7 [18ULL])))) ? (((/* implicit */unsigned long long int) 2409113643U)) : (((((/* implicit */_Bool) 3806013479878231896ULL)) ? (max((((/* implicit */unsigned long long int) var_3)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)61)) <= (((/* implicit */int) (unsigned short)23979))))))))));
                    var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) (unsigned short)23979))));
                }
                arr_46 [i_3] [i_3 + 1] [i_3 + 1] [i_5 + 3] &= ((/* implicit */short) 2147483647);
                var_44 -= ((/* implicit */unsigned char) arr_27 [i_3 + 2] [i_4] [i_5] [i_5] [i_4 - 3] [i_3] [i_3]);
                arr_47 [i_3 - 3] [i_4] [15ULL] &= ((/* implicit */short) ((((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 14640730593831319720ULL)))))) : (var_2))) | (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_15 [i_3 + 1] [i_4 - 1])), (var_5))))));
            }
            for (signed char i_14 = 1; i_14 < 15; i_14 += 1) 
            {
                var_45 *= ((/* implicit */unsigned long long int) var_4);
                var_46 -= ((/* implicit */unsigned long long int) var_11);
                /* LoopSeq 2 */
                for (unsigned int i_15 = 1; i_15 < 15; i_15 += 1) 
                {
                    arr_54 [8ULL] [i_3 + 2] [i_4] [i_14 + 1] [i_14] [i_15] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_3] [i_14 + 1])) % (((/* implicit */int) var_1))))), (min((((/* implicit */unsigned long long int) var_0)), (11774246022585116952ULL)))))) ? ((-(((/* implicit */int) (unsigned char)214)))) : ((-(((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_4)))))))));
                    arr_55 [i_3] [i_4] [i_14] [1U] [(unsigned short)6] [i_15 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((unsigned int) ((((/* implicit */_Bool) arr_17 [i_3] [(_Bool)1] [i_3])) ? (109669541U) : (var_10))))));
                    arr_56 [i_14 + 1] [i_4] [i_14 - 1] [i_15] [(signed char)3] [i_14] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) 1000309701)), (12315687494830318975ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                }
                for (unsigned int i_16 = 4; i_16 < 15; i_16 += 1) 
                {
                    var_47 = ((/* implicit */signed char) ((unsigned long long int) 11774246022585116953ULL));
                    var_48 = ((/* implicit */short) (unsigned short)65535);
                    var_49 |= ((/* implicit */long long int) ((((/* implicit */int) (signed char)13)) >> (((min((((/* implicit */unsigned long long int) var_10)), (((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31831))))))) - (4121646578ULL)))));
                    /* LoopSeq 3 */
                    for (short i_17 = 3; i_17 < 15; i_17 += 1) 
                    {
                        var_50 |= min((var_2), (arr_21 [(signed char)7] [(unsigned char)12] [i_14 - 1] [i_16] [i_17 + 1]));
                        var_51 = max((((/* implicit */unsigned long long int) (unsigned char)112)), (14002197225083985650ULL));
                        arr_62 [i_14] [(short)6] &= ((/* implicit */unsigned char) (_Bool)0);
                    }
                    for (int i_18 = 1; i_18 < 13; i_18 += 1) 
                    {
                        arr_66 [i_3 + 1] [10ULL] [i_14 + 1] [i_16 + 1] [i_14 + 1] |= ((/* implicit */unsigned int) ((1349809938) <= (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_0)) : (2409113620U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) < (((/* implicit */int) arr_29 [i_3 - 1] [i_4 - 3] [i_14 - 1] [i_16 - 1] [i_18])))))))))));
                        var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) max((var_3), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)249)), ((unsigned short)63))))))))))));
                        arr_67 [i_3 + 1] [i_4] [i_4 - 3] [i_14] [i_14] [i_18 + 2] = ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned long long int) 4294967295U)), (var_2))));
                    }
                    for (signed char i_19 = 1; i_19 < 13; i_19 += 1) 
                    {
                        arr_71 [i_14] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((var_2) ^ (((/* implicit */unsigned long long int) var_5))))) ? (arr_21 [(unsigned short)4] [i_4 - 2] [15] [i_16 - 4] [i_19 + 2]) : (arr_61 [i_19 + 3] [i_4 + 2] [0ULL] [i_4 + 2] [i_16 - 1]))), (((/* implicit */unsigned long long int) arr_49 [i_3 - 3]))));
                        var_53 = ((/* implicit */long long int) max((var_53), (((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (~(var_11)))), (min((13928299678353078323ULL), (((/* implicit */unsigned long long int) var_6)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((arr_12 [i_3] [i_19 + 1]), (((/* implicit */unsigned short) arr_37 [i_3 - 2] [i_3] [i_4 + 2] [i_4 + 2] [i_16] [i_19]))))))))))));
                    }
                }
                arr_72 [i_3 + 1] [i_4] [i_14 - 1] [i_14] = ((/* implicit */unsigned short) ((short) arr_32 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 + 1]));
            }
            /* vectorizable */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_3])))))));
                arr_76 [i_20] [i_4 - 1] [i_20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_27 [i_20] [i_20] [i_20] [i_20] [i_4 + 3] [i_4 + 3] [i_3 - 3]))));
                var_55 |= ((/* implicit */unsigned char) (unsigned short)65473);
            }
            var_56 = ((/* implicit */signed char) ((((/* implicit */unsigned int) -1059489882)) % (((((/* implicit */_Bool) arr_74 [i_3] [(short)6])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
        }
        for (unsigned short i_21 = 3; i_21 < 13; i_21 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_22 = 3; i_22 < 13; i_22 += 1) 
            {
                arr_83 [i_3 + 1] [i_21 - 1] [i_21] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_22 + 1]))));
                arr_84 [i_21] = ((/* implicit */_Bool) 351292630U);
            }
            for (unsigned char i_23 = 4; i_23 < 14; i_23 += 1) 
            {
                var_57 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) var_3))))) ? (max((11016710160337893948ULL), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) % (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) var_0)) : (var_10))))));
                arr_88 [i_21] [i_21] [i_21] = ((/* implicit */unsigned long long int) min((min((1U), (((/* implicit */unsigned int) arr_27 [i_3] [i_21 + 3] [i_23] [i_3] [i_21] [i_21] [(signed char)4])))), (min((var_10), (((/* implicit */unsigned int) arr_27 [i_23] [i_21 + 3] [i_23 + 1] [14ULL] [(signed char)8] [i_3 - 3] [i_23]))))));
            }
            for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
            {
                var_58 = ((/* implicit */unsigned int) var_7);
                var_59 = ((/* implicit */unsigned short) min((4648722730909337877ULL), (((/* implicit */unsigned long long int) (signed char)64))));
            }
            /* LoopNest 2 */
            for (signed char i_25 = 2; i_25 < 14; i_25 += 1) 
            {
                for (short i_26 = 2; i_26 < 15; i_26 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_27 = 1; i_27 < 12; i_27 += 1) 
                        {
                            arr_100 [6ULL] [i_26 - 1] [i_21] [i_21] [i_3 - 1] [i_3] = ((/* implicit */_Bool) max((max((max((var_6), (3943674666U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3806013479878231909ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_75 [i_3] [i_21 - 1] [i_26 + 1]))))))), (var_10)));
                            var_60 = ((/* implicit */unsigned long long int) ((unsigned short) var_4));
                            var_61 = ((/* implicit */signed char) (_Bool)1);
                        }
                        for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                        {
                            var_62 = ((/* implicit */unsigned long long int) 2754385446U);
                            var_63 = ((/* implicit */int) max((var_63), (((/* implicit */int) max(((-(var_10))), (((/* implicit */unsigned int) var_0)))))));
                        }
                        var_64 |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 416994433U)))) ? (((/* implicit */int) ((unsigned char) ((unsigned short) var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_8)))))));
                    }
                } 
            } 
        }
        arr_103 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_80 [i_3 + 2]), (((/* implicit */unsigned long long int) ((signed char) var_6)))))) || (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) arr_92 [i_3] [i_3] [i_3] [i_3])))))));
        arr_104 [i_3 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (min((((/* implicit */unsigned int) var_8)), (var_10))))))));
    }
}
