/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141564
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (int i_3 = 4; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (unsigned char)255)), (min((var_3), (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) ((int) (+(2047)))))));
                            /* LoopSeq 4 */
                            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                            {
                                arr_14 [i_1] [i_0] = ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) -802023253)) ? (-1425619870854045997LL) : (-1967501679660676328LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                                var_14 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) var_11)) / (-1967501679660676328LL))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                            {
                                var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_16 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) var_1)), (arr_17 [i_0 + 2])))));
                                var_17 |= ((/* implicit */signed char) ((unsigned int) (~((~(((/* implicit */int) var_4)))))));
                                var_18 = ((/* implicit */signed char) var_9);
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max(((+(var_9))), (((/* implicit */unsigned long long int) ((arr_10 [i_0 + 1] [i_3] [i_3 - 1] [i_5] [(_Bool)1] [i_5]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 1])))))))))));
                            }
                            for (int i_6 = 1; i_6 < 10; i_6 += 4) /* same iter space */
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_0 [i_0 - 2] [i_1])))))))));
                                var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_3)));
                            }
                            for (int i_7 = 1; i_7 < 10; i_7 += 4) /* same iter space */
                            {
                                arr_25 [i_0] [5LL] = ((/* implicit */unsigned int) (_Bool)1);
                                var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((402653184) - (402653158)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (_Bool)1)))))) : ((+(16983806556809898061ULL)))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-1)))) ? (((1073741824U) / (((/* implicit */unsigned int) -402653184)))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)18)) : (var_12))))));
                                arr_26 [i_0] [i_1] [i_2] [(_Bool)1] [i_7] = ((/* implicit */int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_0]))))), (max((((/* implicit */long long int) (unsigned char)122)), (-2951347206327035208LL)))));
                            }
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                            {
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (6131118562966841678ULL)))))))));
                                var_25 = ((/* implicit */unsigned short) ((var_5) != ((-(var_5)))));
                                var_26 = ((((/* implicit */unsigned long long int) 3603594544660579475LL)) * (14808390264764545410ULL));
                            }
                            for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 1) 
                            {
                                var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) (!(((/* implicit */_Bool) -1967501679660676328LL))))))));
                                arr_34 [i_3] [i_3] [i_0] [i_3] [i_9] [7] [i_0] = ((/* implicit */int) var_8);
                                var_28 = -1571426816130836283LL;
                                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (+(4095U))))));
                            }
                            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
                            {
                                var_30 *= ((/* implicit */short) (~(((((/* implicit */int) var_2)) & (((((/* implicit */int) var_0)) | (arr_19 [i_0])))))));
                                var_31 &= ((/* implicit */_Bool) -228925715);
                                var_32 = ((/* implicit */short) -409588033);
                                var_33 = ((/* implicit */unsigned short) ((int) (-(3204196409U))));
                            }
                            var_34 = ((/* implicit */signed char) (-(((5097235337896570458ULL) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535)))))))));
                            /* LoopSeq 3 */
                            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                            {
                                var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))));
                                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)238))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / ((+(-9055340810622663357LL)))))) : (((unsigned long long int) var_7))));
                                var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                            }
                            for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                            {
                                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-(var_11)))))) ? (((long long int) ((((/* implicit */_Bool) 16515072LL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14974)))))) : (((/* implicit */long long int) ((((int) arr_20 [0ULL] [10LL] [i_0] [i_2] [i_3] [i_12])) + ((-(402653184))))))));
                                arr_41 [i_12] [i_3] [i_2] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((unsigned long long int) var_3)) != (((/* implicit */unsigned long long int) (-(-402653185)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(-409588033)))), (var_6))))));
                                arr_42 [i_0] [i_1] [i_0] [i_3] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(var_12)))) % ((+(max((var_10), (var_3)))))));
                                var_39 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) -683791332)))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
                            {
                                var_40 = ((/* implicit */unsigned char) ((int) arr_30 [i_3 - 1]));
                                var_41 = ((int) (~(13674791655960932187ULL)));
                                var_42 &= ((/* implicit */_Bool) ((int) (-(((/* implicit */int) var_7)))));
                                arr_46 [i_0] [i_0] [i_2] [i_3] [i_13] = 5515927785878406673ULL;
                                var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((_Bool) ((35184372088828LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-31770)))))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned char i_14 = 2; i_14 < 11; i_14 += 4) /* same iter space */
                {
                    var_44 *= ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
                    var_45 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))), ((+(((/* implicit */int) (short)-31770))))))));
                    var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (signed char)5))) ? (((/* implicit */int) ((14327913579472175163ULL) <= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_5)) * (arr_43 [i_0] [i_1] [i_1] [i_1] [i_14]))))))) : (((/* implicit */int) (_Bool)1))));
                    var_47 *= ((/* implicit */unsigned char) 14237592779074201835ULL);
                }
                for (unsigned char i_15 = 2; i_15 < 11; i_15 += 4) /* same iter space */
                {
                    var_48 *= (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -2951347206327035208LL)), (6677568136026384582ULL)))) ? (((/* implicit */unsigned long long int) (+(6753061207891705314LL)))) : (arr_27 [i_15] [i_15] [(unsigned char)6] [i_15 - 1] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 2; i_16 < 11; i_16 += 4) 
                    {
                        for (int i_17 = 0; i_17 < 12; i_17 += 3) 
                        {
                            {
                                var_49 = ((/* implicit */unsigned long long int) ((int) (+(((unsigned long long int) var_4)))));
                                arr_55 [i_0] [i_1] [i_15] [i_16] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) * (((/* implicit */unsigned long long int) 409588032))))) ? (((/* implicit */unsigned long long int) arr_54 [i_17] [i_16 - 1] [i_16] [i_15 - 1] [i_0 - 2] [i_0])) : (var_10)))) ? (((long long int) (signed char)-5)) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-5)) / (((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_18 = 2; i_18 < 11; i_18 += 3) 
                    {
                        var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)112)) > (((/* implicit */int) (unsigned char)255)))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8)))))));
                        var_51 = ((/* implicit */unsigned char) 14237592779074201835ULL);
                        var_52 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) 3400677878U)))) ? (((((/* implicit */_Bool) 13349508735812981142ULL)) ? (4427650605740586984ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)151))))) : (((/* implicit */unsigned long long int) var_5)))) != (((/* implicit */unsigned long long int) min((1046904476), (((/* implicit */int) arr_39 [i_1] [i_18] [i_0] [i_18] [i_18 + 1])))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_19 = 3; i_19 < 11; i_19 += 3) 
                    {
                        arr_61 [i_0] [i_1] [(_Bool)1] [i_19] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_0] [i_15 - 1] [i_1] [i_0 + 2] [i_19 - 1])) ? (arr_45 [i_0 + 2] [i_15 - 1] [i_15] [i_15] [i_19 - 2] [i_19]) : (arr_45 [i_0 + 2] [i_15 - 1] [i_15] [i_15] [i_19 + 1] [i_19])));
                        arr_62 [8U] [i_0] [i_15] [i_0] [i_0] = ((/* implicit */unsigned char) -6164232753152956357LL);
                        /* LoopSeq 4 */
                        for (unsigned int i_20 = 4; i_20 < 10; i_20 += 4) 
                        {
                            var_53 = ((/* implicit */unsigned int) var_12);
                            var_54 = ((/* implicit */unsigned long long int) arr_15 [i_0]);
                            var_55 = ((/* implicit */unsigned int) ((-6753061207891705315LL) / (((/* implicit */long long int) 131071))));
                        }
                        for (unsigned int i_21 = 0; i_21 < 12; i_21 += 1) 
                        {
                            var_56 ^= ((((/* implicit */_Bool) (-(-312859174)))) ? ((+(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65520)))))));
                            var_57 -= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned char)3)) - (((/* implicit */int) var_0))))));
                            arr_69 [2LL] [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((+(4398046509056LL)))));
                        }
                        for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 3) 
                        {
                            var_58 = ((/* implicit */unsigned char) (_Bool)1);
                            var_59 = ((/* implicit */unsigned char) min((var_59), (((/* implicit */unsigned char) (-(arr_51 [i_15 - 2] [i_15 + 1] [i_0 + 2] [i_0 - 1]))))));
                        }
                        for (unsigned short i_23 = 0; i_23 < 12; i_23 += 1) 
                        {
                            arr_77 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18113452815137508383ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)0))));
                            arr_78 [9U] [i_1] [i_19] [(unsigned char)8] [i_0] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */unsigned long long int) 410880151)) : (var_8)))));
                        }
                        var_60 = ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)235)))) << (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_12)) : (333291258572043232ULL))) - (972680249ULL)))));
                        var_61 = ((/* implicit */unsigned char) (~(755716573)));
                    }
                }
                for (unsigned int i_24 = 0; i_24 < 12; i_24 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_25 = 0; i_25 < 12; i_25 += 4) 
                    {
                        var_62 = ((/* implicit */int) ((unsigned char) ((333291258572043232ULL) | (((/* implicit */unsigned long long int) -7026302878451242145LL)))));
                        var_63 = ((unsigned long long int) var_6);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_26 = 1; i_26 < 9; i_26 += 1) 
                        {
                            arr_86 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -972929318)) ? (805306368) : (((/* implicit */int) arr_49 [i_0] [i_0]))));
                            var_64 = ((/* implicit */short) (+(((/* implicit */int) var_7))));
                            arr_87 [i_0] [i_1] [i_24] [i_25] [i_26] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) (-(var_6)))) : (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84)))))));
                            arr_88 [i_0] [i_0] [i_0] [i_0] [(unsigned short)5] [5ULL] [1] = (~(var_8));
                        }
                        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) /* same iter space */
                        {
                            arr_91 [i_27] [i_25] [i_24] [i_1] [i_0] |= (-(((/* implicit */int) arr_13 [i_0] [i_1] [i_0 + 3] [i_27 - 1] [i_25])));
                            var_65 *= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 71916856549572608ULL)) || (((/* implicit */_Bool) arr_80 [(unsigned char)1]))))));
                            var_66 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3183827445U)) ? (8584181082790647062ULL) : (71916856549572597ULL))))));
                            var_67 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)5346)) >> (((arr_3 [i_0 + 2] [i_1] [i_24]) + (1740555739)))));
                        }
                        for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) /* same iter space */
                        {
                            arr_95 [i_0] [6ULL] [7ULL] [i_28] [i_1] [i_0] [i_28] = ((/* implicit */unsigned int) (~(((long long int) (short)12422))));
                            var_68 = ((/* implicit */short) var_1);
                            arr_96 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_82 [i_0] [i_1] [i_0 - 2] [i_28 - 1]);
                            var_69 = ((arr_40 [i_28] [i_28 - 1] [(_Bool)1] [i_0 + 1] [i_0] [i_0]) ? ((((_Bool)1) ? (((/* implicit */int) (short)-12423)) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) var_0)));
                            var_70 -= ((/* implicit */unsigned int) (~(arr_89 [i_0] [i_1] [i_24] [i_25] [i_25] [i_28 - 1] [i_28])));
                        }
                    }
                    var_71 = ((/* implicit */_Bool) var_4);
                    /* LoopSeq 1 */
                    for (unsigned int i_29 = 0; i_29 < 12; i_29 += 3) 
                    {
                        var_72 *= ((/* implicit */int) 0ULL);
                        var_73 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (4923143806152566282LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) < (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (var_6)));
                    }
                    var_74 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (signed char)127)), (3547621893U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1037508424U)) && (((/* implicit */_Bool) var_5)))))));
                }
                /* vectorizable */
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    var_75 |= ((/* implicit */unsigned short) ((short) (_Bool)1));
                    var_76 = (+(var_5));
                    var_77 = (!(((/* implicit */_Bool) (unsigned char)31)));
                }
            }
        } 
    } 
    var_78 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (max((((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12422))))))))));
}
