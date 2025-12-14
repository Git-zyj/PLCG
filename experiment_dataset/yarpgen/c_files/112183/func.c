/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112183
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 *= ((/* implicit */short) arr_2 [i_0]);
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) -29)) : (arr_1 [i_0])))) ? (arr_0 [i_0] [i_1]) : (((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0]) : (arr_2 [i_0]))))))));
            arr_5 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 5))));
        }
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((1616352109U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) (signed char)-70)) : (-623773015))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-3274)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) 4235560357U))))))));
        var_17 ^= ((/* implicit */_Bool) (short)17);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_6))));
        arr_8 [i_2] = ((/* implicit */signed char) 59406962U);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) ((unsigned char) arr_0 [i_3] [i_3]));
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            arr_13 [i_3] [i_4] [i_3] = ((/* implicit */long long int) arr_11 [i_3]);
            var_20 = ((/* implicit */unsigned int) ((((_Bool) arr_7 [i_3])) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (59406943U)))), (((((/* implicit */_Bool) arr_4 [i_3] [i_4])) ? (var_6) : (((/* implicit */unsigned long long int) arr_1 [i_3])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4])) ? (9746629324477184079ULL) : (((/* implicit */unsigned long long int) arr_12 [i_3] [(_Bool)1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_4]))) : (((unsigned int) var_10)))))));
        }
        for (short i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            arr_17 [20ULL] [20ULL] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
            var_21 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((signed char) arr_14 [i_5] [i_3] [i_3]))), (max((((/* implicit */unsigned long long int) (unsigned short)47592)), (arr_2 [i_3])))));
            var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((arr_2 [i_3]), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_4 [i_3] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) ? (max((((/* implicit */long long int) var_2)), (arr_4 [i_3] [i_3]))) : (((/* implicit */long long int) ((unsigned int) var_4)))));
            /* LoopSeq 3 */
            for (long long int i_6 = 1; i_6 < 20; i_6 += 4) 
            {
                arr_21 [(short)2] [i_3] = ((/* implicit */int) arr_19 [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1]);
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        {
                            var_23 -= ((/* implicit */unsigned int) min((min((var_10), (((/* implicit */unsigned long long int) arr_24 [i_3] [(unsigned short)18] [(_Bool)1] [i_7] [i_8] [7LL] [i_5])))), (((/* implicit */unsigned long long int) -296844562))));
                            var_24 = ((/* implicit */unsigned short) ((_Bool) (short)-25));
                            var_25 += ((/* implicit */unsigned long long int) var_12);
                            var_26 = (~(var_13));
                        }
                    } 
                } 
            }
            for (int i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                arr_29 [12U] [(unsigned short)18] [i_3] [12U] &= ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_16 [14LL])), (4294967286U)))), ((-(min((var_9), (((/* implicit */unsigned long long int) 112526096U))))))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 4; i_10 < 20; i_10 += 2) 
                {
                    for (short i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        {
                            arr_37 [i_3] [i_9] [i_10] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57))) : (2678615187U)))), (106726344178863320LL)));
                            arr_38 [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) arr_19 [i_3] [i_5] [i_3] [i_10]));
                        }
                    } 
                } 
                var_27 -= ((/* implicit */short) (~(((/* implicit */int) (signed char)63))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 2; i_12 < 20; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) arr_32 [i_3] [i_13] [i_12 - 2] [i_9] [i_3] [i_3]);
                            var_29 = ((/* implicit */short) var_2);
                            arr_46 [i_13] [i_12] [i_3] [i_5] [i_3] [i_5] [i_3] = ((/* implicit */unsigned long long int) var_2);
                            var_30 = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_14 [10ULL] [7] [i_12])), (arr_22 [i_3] [i_5] [i_9] [i_13])))) ? (arr_39 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) min((1870019288), (arr_31 [i_13] [i_13] [i_13] [i_12 - 1])))))) : (((/* implicit */unsigned int) var_13)));
                            arr_47 [16ULL] [i_5] [(unsigned short)0] [16ULL] [i_5] &= ((/* implicit */unsigned long long int) (short)22);
                        }
                    } 
                } 
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 4235560357U))) ? (((/* implicit */int) arr_14 [i_9] [i_5] [i_3])) : (((/* implicit */int) arr_9 [i_3]))))) ? (((unsigned long long int) arr_24 [(signed char)14] [(signed char)14] [i_5] [(signed char)14] [i_5] [i_9] [i_9])) : (((/* implicit */unsigned long long int) var_5))));
            }
            for (int i_14 = 4; i_14 < 20; i_14 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) min((-3644451951474156049LL), (((/* implicit */long long int) var_4)))))));
                    var_33 *= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_5] [i_14 - 2] [i_14]))) : (arr_22 [i_5] [i_3] [i_5] [i_3]))));
                }
                for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    var_34 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_19 [i_14] [i_14 - 1] [i_14 - 4] [i_14 - 3])) ? (arr_1 [i_3]) : (((/* implicit */long long int) arr_52 [i_14 - 1] [i_14] [4] [i_14 - 1])))), (((/* implicit */long long int) (unsigned short)65528))));
                    arr_54 [i_3] [i_5] [i_14] [i_5] &= ((/* implicit */unsigned short) (-(((arr_41 [i_14 - 4] [i_14] [i_14 + 1] [i_14 - 4] [i_14 - 1] [i_14]) ? (((/* implicit */int) arr_41 [i_14] [i_14] [i_14 - 4] [i_14 - 1] [i_14 - 1] [i_14])) : (((/* implicit */int) arr_30 [i_14 - 1] [i_14] [i_14]))))));
                    arr_55 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_14 - 3] [i_14 - 2])) ? (((/* implicit */unsigned long long int) arr_1 [i_14 - 1])) : (17642432445330422785ULL)))) ? (max((arr_44 [i_3] [(short)6] [(unsigned short)19] [i_14 - 3] [i_5] [i_16] [i_3]), (2040035249U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_14])))));
                    var_35 = ((/* implicit */int) var_12);
                }
                for (short i_17 = 0; i_17 < 21; i_17 += 4) 
                {
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-106726344178863320LL), (((/* implicit */long long int) 112526080U))))) ? (((/* implicit */int) arr_6 [i_14] [i_5])) : (((/* implicit */int) (short)25))));
                    arr_59 [i_3] [i_3] [i_5] [(unsigned char)20] [i_14] [i_17] = ((/* implicit */signed char) ((long long int) min((((/* implicit */long long int) arr_26 [(signed char)16] [19ULL] [19ULL] [i_5] [i_14 - 2] [(signed char)16] [i_17])), (((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */long long int) 3661078050U)) : (arr_51 [(short)4] [i_5] [14]))))));
                    arr_60 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_31 [i_14 - 3] [i_14 - 4] [i_14 - 2] [i_14])))) ? ((-(arr_31 [i_14 - 4] [i_14 - 1] [i_14] [i_14]))) : (arr_31 [i_14 - 3] [i_14 - 2] [i_14 - 2] [i_14])));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 1; i_18 < 19; i_18 += 3) 
                {
                    var_37 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((signed char) 288773287U))) ? (112526115U) : (2696145508U))));
                    var_38 &= ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 112526106U))))), (((((/* implicit */_Bool) 3663184839491052876ULL)) ? (82879924) : (((/* implicit */int) var_0)))))));
                    var_39 = ((/* implicit */unsigned int) max((var_39), (arr_56 [i_18] [(short)14] [(short)14] [i_3])));
                    var_40 = ((/* implicit */long long int) (+((~(min((((/* implicit */unsigned long long int) var_13)), (arr_0 [i_3] [(short)17])))))));
                }
            }
        }
        /* vectorizable */
        for (unsigned int i_19 = 1; i_19 < 17; i_19 += 3) 
        {
            arr_66 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)63)) ? (3663184839491052872ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)193)))));
            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) 4182441214U))));
            var_42 *= ((/* implicit */signed char) ((((/* implicit */_Bool) -1007634484)) ? (((long long int) arr_58 [(_Bool)1] [i_19] [i_19] [(short)6] [i_19 + 4] [i_19])) : (((/* implicit */long long int) ((/* implicit */int) arr_61 [(_Bool)1] [i_3])))));
            /* LoopSeq 2 */
            for (unsigned long long int i_20 = 1; i_20 < 18; i_20 += 4) 
            {
                var_43 += 112526098U;
                var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_20 + 3] [i_19 + 3] [i_19 - 1] [i_19 + 4])) ? (arr_56 [i_20 + 1] [i_19 + 2] [i_19 + 4] [i_19 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_19 + 2] [i_19 + 3] [20] [i_20 + 2] [i_20] [(unsigned short)16]))))))));
                var_45 = ((/* implicit */int) 7563404930747858020LL);
            }
            for (unsigned int i_21 = 0; i_21 < 21; i_21 += 2) 
            {
                arr_72 [i_3] [9U] [i_21] = ((/* implicit */short) arr_52 [i_19 + 3] [(_Bool)1] [i_19 + 4] [i_19 + 3]);
                var_46 = ((/* implicit */short) var_6);
            }
            var_47 = ((/* implicit */unsigned short) arr_44 [i_3] [i_3] [i_3] [i_19 + 1] [i_19 - 1] [i_19 + 4] [i_3]);
        }
        arr_73 [i_3] = ((short) min((24858661111457618ULL), (((/* implicit */unsigned long long int) arr_16 [i_3]))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_22 = 1; i_22 < 21; i_22 += 3) 
    {
        arr_76 [i_22] = ((/* implicit */unsigned long long int) var_3);
        arr_77 [(signed char)18] = ((/* implicit */int) var_1);
        var_48 -= ((/* implicit */unsigned long long int) var_5);
        var_49 -= ((/* implicit */unsigned int) ((unsigned short) ((unsigned long long int) 18446744073709551615ULL)));
        /* LoopNest 3 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (short i_24 = 2; i_24 < 22; i_24 += 2) 
            {
                for (short i_25 = 2; i_25 < 23; i_25 += 3) 
                {
                    {
                        var_50 += ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((long long int) arr_74 [i_25 - 1] [(unsigned char)6]))) ? (((long long int) arr_74 [i_22] [i_22])) : (((((/* implicit */_Bool) var_3)) ? (arr_84 [i_22] [i_22 + 3] [i_24] [i_25 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_78 [10U] [i_23] [i_23]))))))));
                        var_51 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_83 [i_25] [i_25] [i_25 + 1] [i_25] [i_25 - 1])), (var_5)));
                    }
                } 
            } 
        } 
    }
    for (long long int i_26 = 0; i_26 < 10; i_26 += 1) 
    {
        /* LoopNest 3 */
        for (int i_27 = 0; i_27 < 10; i_27 += 1) 
        {
            for (int i_28 = 4; i_28 < 8; i_28 += 1) 
            {
                for (short i_29 = 3; i_29 < 9; i_29 += 3) 
                {
                    {
                        var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) arr_94 [i_29] [9] [i_27] [i_26]))));
                        arr_96 [i_26] [i_26] [i_28 - 3] [i_28 - 3] = ((/* implicit */unsigned int) arr_22 [i_26] [i_28 - 2] [i_29 - 2] [i_29 + 1]);
                        var_53 += ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (2040035263U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_28])))));
                        var_54 &= ((/* implicit */_Bool) (short)25);
                    }
                } 
            } 
        } 
        arr_97 [i_26] = ((/* implicit */short) max((((unsigned int) arr_42 [i_26] [(short)19] [i_26])), (((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_95 [i_26])))), (((((/* implicit */_Bool) arr_84 [(_Bool)1] [i_26] [i_26] [i_26])) ? (-1238868488) : (((/* implicit */int) (_Bool)1)))))))));
        /* LoopSeq 1 */
        for (int i_30 = 0; i_30 < 10; i_30 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_31 = 3; i_31 < 9; i_31 += 2) 
            {
                var_55 = ((/* implicit */unsigned short) 18421885412598093997ULL);
                var_56 = arr_50 [16U] [i_31];
            }
            for (unsigned short i_32 = 1; i_32 < 8; i_32 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_33 = 0; i_33 < 10; i_33 += 3) 
                {
                    var_57 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_33] [i_33] [i_32 + 1] [i_33])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_26] [i_30] [i_32] [(short)8]))) : (arr_92 [i_26] [i_26] [i_32])));
                    var_58 = ((/* implicit */int) max((var_58), (((/* implicit */int) ((((/* implicit */_Bool) ((short) (short)-1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_26] [i_32]))) : (((long long int) 2040035249U)))))));
                }
                var_59 |= ((/* implicit */unsigned short) var_11);
                arr_107 [i_26] [i_26] [i_32] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) 1347576665))) ? (max(((~(var_6))), (((/* implicit */unsigned long long int) min(((short)35), (((/* implicit */short) arr_50 [i_26] [(unsigned short)20]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_32 + 2] [i_30] [i_26] [i_26] [2LL])))));
                arr_108 [i_26] [i_26] [i_26] = (short)-35;
            }
            var_60 -= ((/* implicit */short) ((arr_50 [i_26] [i_30]) ? ((+(((/* implicit */int) arr_50 [i_26] [i_26])))) : (((arr_50 [i_30] [i_26]) ? (((/* implicit */int) arr_50 [i_30] [i_26])) : (((/* implicit */int) arr_50 [i_26] [i_26]))))));
            /* LoopNest 2 */
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                for (int i_35 = 1; i_35 < 9; i_35 += 4) 
                {
                    {
                        arr_117 [i_30] &= ((/* implicit */unsigned int) arr_64 [i_30] [i_30]);
                        arr_118 [i_26] [i_34] [i_34] [2U] [i_26] = ((/* implicit */int) arr_39 [i_26] [i_26] [i_26]);
                    }
                } 
            } 
        }
    }
    for (unsigned int i_36 = 3; i_36 < 15; i_36 += 3) 
    {
        var_61 = (short)-1147;
        var_62 = ((/* implicit */signed char) min((var_62), (((/* implicit */signed char) -3644451951474156064LL))));
        arr_121 [i_36] [2LL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_36])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_36] [(unsigned short)0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_36] [14LL])) ? (((/* implicit */int) (unsigned short)12529)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */_Bool) arr_45 [i_36] [i_36] [i_36] [i_36] [i_36] [i_36])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_36 - 3] [i_36 - 3] [i_36] [i_36 - 3] [i_36] [i_36] [i_36]))) : (17857366618533200192ULL)))))));
    }
}
